
@interface PIOPicasaAlbum : PIODefaultPhotoSourceItem

@property (nonatomic, strong) NSString *albumTitle;
@property (nonatomic, strong) NSString *albumId;
@property (nonatomic, strong) NSString *thumbnailUrl;
@property (nonatomic, assign) int numOfPhotos;

- (instancetype)initWithJSON:(NSObject *)json;

@end


@implementation PIOPicasaAlbum

- (instancetype)initWithJSON:(NSObject *)json
{
    self = [super init];
    if (self && json){
        
        // Parsing
        
        // Album title
        NSObject *titleObj = [json valueForKey:@"title"];
        if (titleObj){
            self.albumTitle = [StaticJSONNullChecker parseSTRING:[titleObj valueForKey:@"$t"]];
        }
        
        // Album ID
        NSObject *gphotoIdObj = [json valueForKey:@"gphoto$id"];
        if (gphotoIdObj){
            self.albumId = [StaticJSONNullChecker parseSTRING:[gphotoIdObj valueForKey:@"$t"]];
        }
        
        // Number of photos
        NSObject *gphotoNumOfPhotosObj = [json valueForKey:@"gphoto$numphotos"];
        if (gphotoNumOfPhotosObj){
            self.numOfPhotos = [StaticJSONNullChecker parseINT:[gphotoNumOfPhotosObj valueForKey:@"$t"]];
        }
        
        // If something is missing, try to get it from 'Media Group'
        NSObject *mediaGroupObj = [json valueForKey:@"media$group"];
        if (mediaGroupObj){
            
            // Album Thumbnail
            id mediaThumbObj = [mediaGroupObj valueForKey:@"media$thumbnail"];
            if (mediaThumbObj && [mediaThumbObj isKindOfClass:[NSArray class]] &&
                ((NSArray *)mediaThumbObj).count){
                
                id thumbObj = [(NSArray *)mediaThumbObj objectAtIndex:0];
                if (thumbObj){
                    self.thumbnailUrl = [StaticJSONNullChecker parseSTRING:[thumbObj valueForKey:@"url"]];
                }
            }
            
            // Album Title
            if (!self.albumTitle.length){
                id mediaTitleObj = [mediaGroupObj valueForKey:@"media$title"];
                
                if (mediaTitleObj){
                    self.albumTitle = [StaticJSONNullChecker parseSTRING:[mediaTitleObj valueForKey:@"$t"]];
                }
            }
        }
    }
    return self;
}

// We use this paramater as a key to what the user tapped on
// so we can fetch the items for the passed item
-(NSString *)uniqueIdentifier{
    return self.albumId;
}

// We differentiate between two types of items: image and non-image items
// The difference is that when user taps an image item, it gets selected
// while the non-image item tap gets delegated to the photo source (so the photo source can
// pull the images for the tapped folder/album)
-(BOOL)isImageItem{
    return NO;
}

// Display name is used when showing folders/albums
-(NSString *)displayName{
    return self.albumTitle;
}

@end
