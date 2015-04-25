

//
//  PicasaPhotoSource.m
//  PrintIO
//
//  Created by Nikola Markovic on 1/26/15.
//  Copyright (c) 2015 PrintIO. All rights reserved.
//

#import "PicasaPhotoSource.h"
#import "NSBundle+Utils.h"
#import "PIOPicasaAlbum.h"
#import "PIOPicasaPhoto.h"
#import "Utils.h"

// Constants
static NSString *const kPicasaRedirectUrl = @"http://piopicasa.com/oauth2callback";
static NSString *const kPicasaClientID = @"myClientID.apps.googleusercontent.com";
static NSString *const kPicasaSecret = @"picasaSecret";
static NSString *const kPicasaAuthUrl = @"https://accounts.google.com/o/oauth2/auth";
static NSString *const kPicasaTokenUrl = @"https://accounts.google.com/o/oauth2/token";
static NSString *const kPicasaScope = @"https://picasaweb.google.com/data/";
static NSString *const kPicasaAccessToken = @"kPIOPicasaAccessToken";
static NSString *const kPicasaAlbumsUrl = @"https://picasaweb.google.com/data/feed/api/user/default";

@interface PicasaPhotoSource : DefaultPhotoSource<HPAuthDelegate>

@end

@interface PicasaPhotoSource ()
@property(nonatomic, strong) PhotoSourceItemImageDownloader* imageDownloader;
@property(nonatomic, strong) PhotoSourceItemImageDownloader* albumDownloader;
@end

@implementation PicasaPhotoSource

#pragma mark - Look & Feel

-(NSString *)title{
    // Button title
    return @"Picasa";
}

-(NSString *)buttonIconPath{
    // Button icon path
    return [[NSBundle sdkBundle] pathForResource:@"icon_picasa_white" ofType:@"png"];
}

#pragma mark - Auth

-(BOOL)isAuthed{
    // Check if we have a token in the sessionManager
    NSString *accessToken = self.sessionManager[kPicasaAccessToken];
    return !(accessToken.length < 2);
}

-(UIViewController *)authViewController{
    NSURL *url = [NSURL URLWithString:[NSString stringWithFormat:@"%@?response_type=code&redirect_uri=%@&client_id=%@&scope=%@", kPicasaAuthUrl, kPicasaRedirectUrl, kPicasaClientID, kPicasaScope]];

    // We instantiate our custom auth controller

    // Since photo source doesn't have control over presenting the actual controler, by assigning the delegate property to self
    // photo source will be notified about login events from the auth controller
    HPAuthViewController* authVC = [[HPAuthViewController alloc] initWithURL:url redirectUrl:kPicasaRedirectUrl];
    authVC.authDelegate = self;
    return authVC;
}

-(void)invalidateSessionData{
    // Clear session data.
    // This method is called when SDK realizes you have an invalid token.
    // (usually when isAuthed returns YES and and a call to display an item returns an auth error. That'd mean
    // we have a token that's not valid)
    self.sessionManager[kPicasaAccessToken] = nil;
}

#pragma mark - AuthController callbacks

- (void)HPAuth_onGetAccessToken:(NSString *)aToken{
    // authViewController callback - We got a token.
    self.sessionManager[kPicasaAccessToken] = aToken;
}

#pragma mark - Fetching data(Picasa specific)

-(void)requestConcreteItems:(NSMutableArray*)items
                    forItem:(id<PhotoSourceItem>)item
                    inScope:(id<PhotoSourceItem>)currentScope
                       page:(NSUInteger)page
                      count:(NSUInteger)count
      withCompletionHandler:(ItemsCompletionHandler)completionHandler
               errorHandler:(PhotoSourceErrorHandler)errorHandler{

    if(item && [item uniqueIdentifier]){ // if item is valid (both item and uniqueID must not be nil
        // It means the user tapped on an album. We need to fetch all the images in that album. uniqueIdentifier represents the folderID.
        // We pass the items array which was passed to us by the DefaultPhotoSource. It contains the back button item.
        [self fetchPhotosFromAlbumWithAlbumID:[item uniqueIdentifier] withItems:items withCompletionHandler:completionHandler errorHandler:errorHandler];
    }else{
        // Item is nil. This means SDK is requesting root items(albums).
        [self fetchAlbumsWithWithItems:items completionHandler:completionHandler errorHandler:errorHandler];
    }
}

- (void)fetchAlbumsWithWithItems:(NSMutableArray*)items completionHandler:(ItemsCompletionHandler)completionHandler errorHandler:(PhotoSourceErrorHandler)errorHandler
{
    [self fetchDataFromUrl:kPicasaAlbumsUrl jsonData:^(NSObject *json) {
        NSObject *feedObj = [json valueForKey:@"feed"];
        if (feedObj){
            NSObject *entryObj = [feedObj valueForKey:@"entry"];
            if (entryObj && [entryObj isKindOfClass:[NSArray class]]){
                NSArray* entryArray = ((NSArray *)entryObj);
                for (id item in entryArray){
                    if (item){
                        // we instantiate the album here and parse the JSON data
                        PIOPicasaAlbum *album = [[PIOPicasaAlbum alloc]initWithJSON:item];

                        /*** IMPORTANT ***/
                        // We pass an implementation of the id<ImageDownloader> to the album. This is how album images will be downloaded.
                        // There's no need to create a separate downloader for each album since downloaders don't have state. We can share one instance among
                        // all items of each type.
                        [album setImageDownloader:self.albumDownloader];
                        [items addObject:album];
                    }
                }
                // Once we're finished, we call the completion handler and pass the items
                completionHandler(items);
            }
        }

    } failure:^(PhotoSourceError* error) {
        // delegate the error up
        errorHandler(error);
    }];
}


- (void)fetchPhotosFromAlbumWithAlbumID:(NSString*)albumID withItems:(NSMutableArray*)items withCompletionHandler:(ItemsCompletionHandler)completionHandler errorHandler:(PhotoSourceErrorHandler)errorHandler
{
    NSString *urlS = [NSString stringWithFormat:@"%@/albumid/%@", kPicasaAlbumsUrl, albumID];

    [self fetchDataFromUrl:urlS jsonData:^(NSObject *json) {

        NSObject *feedObj = [json valueForKey:@"feed"];
        if (feedObj){
            NSObject *entryObj = [feedObj valueForKey:@"entry"];
            if (entryObj && [entryObj isKindOfClass:[NSArray class]]){

                for (id item in ((NSArray *)entryObj)){
                    if (item){
                        PIOPicasaPhoto *photo = [[PIOPicasaPhoto alloc]initWithJSON:item];
                        /*** IMPORTANT ***/
                        // Same thing as above, only for photos.
                        [photo setImageDownloader:self.imageDownloader];
                        [items addObject:photo];
                    }
                }
                // Once we're finished, we call the completion handler and pass the items
                completionHandler(items);
            }
        }

    } failure:^(PhotoSourceError* error) {
        // delegate the error up
        errorHandler(error);
    }];
}


- (void)fetchDataFromUrl:(NSString *)urlS
                jsonData:(void (^)(NSObject *json))jsonData
                 failure:(PhotoSourceErrorHandler)failure
{
    NSString *accessToken = self.sessionManager[kPicasaAccessToken];
    NSURL *url = [NSURL URLWithString:[NSString stringWithFormat:@"%@?alt=json&access_token=%@", urlS, accessToken]];

    NSURLSession *session = [NSURLSession sharedSession];
    [[session dataTaskWithURL:url
            completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {

                    if (error && error.localizedDescription.length){
                        // Error occurred. We delegate it up to the caller.
                        failure([PhotoSourceError errorWithMessage:error.localizedDescription]);
                        return;
                    }

                NSError* er;
                NSObject *jsonObj = [NSJSONSerialization JSONObjectWithData:data
                                                                    options:kNilOptions
                                                                        error:&er];
                    if (!jsonObj){
                        // Error occurred. We delegate it up to the caller.
                        failure([PhotoSourceError errorWithErrorType:PhotoSourceErrorTypeNotLoggedIn]);
                        return;
                    }
                    jsonData(jsonObj);
            }]resume];
}

#pragma mark - Image downloader

-(PhotoSourceItemImageDownloader *)imageDownloader{
    if(!_imageDownloader){
        // PicasaPhoto image downloader
        // 1. isThumbnail - YES if SDK needs a thumbnail. SelectPhotos screen will display thumbnails, while full size photos are used in customization screens.
        // 2. PhotoSource is passed as a parameter just for convenvience, so you don't have to tightly couple your items to the photo source by retaining it
        // as a property.
        // 3. After you fetch an image (synchronously or asynchronously), call the completion handler. If you fail to fetch it, simply pass nil.

        _imageDownloader = [PhotoSourceItemImageDownloader imageDownloaderWithBlock:^(PIOPicasaPhoto* item, id<PhotoSource> photoSource, BOOL isThumbnail ,ImageDownloadCompletionHandler completionHandler){
            NSString* URLString;
            if(isThumbnail){
                URLString = item.thumbnailUrl;
            }else{
                URLString = item.imageUrl;
            }
            UIImage* image = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:URLString]]];
            completionHandler( image );
        }];
    }
    return _imageDownloader;
}

-(PhotoSourceItemImageDownloader *)albumDownloader{
    if(!_albumDownloader){
        // PicasaAlbum image downloader
        _albumDownloader = [PhotoSourceItemImageDownloader imageDownloaderWithBlock:^(PIOPicasaAlbum* item, id<PhotoSource> photoSource, BOOL isThumbnail ,ImageDownloadCompletionHandler completionHandler){
            completionHandler( [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:item.thumbnailUrl]]] );
        }];
    }
    return _albumDownloader;
}

#pragma mark - Cell customization

-(BOOL)usesCustomCellForItem:(id<PhotoSourceItem>)item{
    // Cell customization callback. We are using custom cells for albums, therefore we return YES only if item is of PIOPicasaAlbum class
    return [item isKindOfClass:[PIOPicasaAlbum class]];
}

-(void)setupCollectionViewCell:(CellAlbum *)cell forItem:(PIOPicasaAlbum*)item withImage:(UIImage *)image{
    // Item type in the method's header is id<PhotoSourceItem> but since we are using custom cells ONLY for PIOPicasaAlbum items
    // we are sure an object of this type will be passed to us.

    cell.albumName.text = [item displayName];
    cell.photo.image = image;
    cell.lblNumOfImages.text = [NSString stringWithFormat:@"%d",item.numOfPhotos];
}

@end

