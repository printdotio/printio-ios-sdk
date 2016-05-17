//
//  PhotoSource.h
//  PrintIO
//
//  Created by Boro Perisic Bocas on 12/26/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PIOPhotoSourceItem.h"
#import "PIOPhotoSourceError.h"
#import "PIOSessionManager.h"

typedef void(^PIOPhotoSourceErrorHandler)(PIOPhotoSourceError*);
typedef void(^PIOItemsCompletionHandler)(NSArray*);
typedef void(^PIOImageDownloadCompletionHandler)(UIImage*);

@protocol PIOPhotoSource <NSObject>

-(void)requestPhotoSourceItemsForItem:(id<PIOPhotoSourceItem>)item
                         currentScope:(id<PIOPhotoSourceItem>)currentScope
                                count:(NSUInteger)count
                                 page:(NSUInteger)page
                withCompletionHandler:(PIOItemsCompletionHandler)completionHandler
                         errorHandler:(PIOPhotoSourceErrorHandler)errorHandler;


/**
   Image icon path to be displayed for the photo source button.
 */
-(NSString*)buttonIconPath;

/**
   Title to be displayed for the photo source button.
 */
-(NSString*)title;


-(void)fetchImageForItem:(id<PIOPhotoSourceItem>)item
               thumbnail:(BOOL)isThumbnail
   withCompletionHandler:(void(^)(UIImage*))imageFetchCompletionHandler;

@optional

/* ******************* PAGING ******************* */
/** Whether the photo source supports paging
    NO is default
*/

-(BOOL)supportsPagingInScope:(id<PIOPhotoSourceItem>)item;

-(NSUInteger)maximumPageSize;

/* ******************* CACHING ******************* */

// Default: YES
-(BOOL)shouldCacheImageForItem:(id<PIOPhotoSourceItem>)item;

// Default: YES
-(BOOL)shouldUseCachedImageForItem:(id<PIOPhotoSourceItem>)item;

/* ******************* SESSION ******************* */

-(void)setSessionManager:(PIOSessionManager*)sessionManager;

/* *******************   UI    ******************* */

// Collection view
-(BOOL)usesCustomCellForItem:(id<PIOPhotoSourceItem>)item;
-(BOOL)shouldSetupCellForItem:(id<PIOPhotoSourceItem>)item;
-(void)setupCollectionView:(UICollectionView*)collectionView;

-(UICollectionViewCell*)collectionView:(UICollectionView*)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath forItem:(id<PIOPhotoSourceItem>)item;

-(void)setupCollectionViewCell:(UICollectionViewCell*)cell forItem:(id<PIOPhotoSourceItem>)item withImage:(UIImage*)image;

-(void)cell:(UICollectionViewCell*)cell toggleSelection:(BOOL)selected withIndex:(NSUInteger)index;

// Size warnings

/** 
 Returns the full size of a non-thumbnail image. Will be called only for image items.
 Image size will be compared to product template size and
 show image warnings if the image is too small.
 If implementation of this method is omitted, size warnings
 wont be displayed for this photo source.
*/
-(CGSize)imageFullSizeForItem:(id<PIOPhotoSourceItem>)item;

/* *******************  AUTH  ******************* */

/* Implement this method if you support authentication
 * Clear all session data(logout).
 */

-(void)invalidateSessionData;

/**
 If your photo source doesn't require authentication, you don't have to implement this method.
 
 Returns YES if photo source is authenticated, NO otherwise. In this method, you should check whether the session is valid.
 
 If the photo source isn't authed, -authViewController message will be sent to the photo source.
 If the photo IS authed, -requestPhotoSourceItemsForItem:currentScope:withCompletionHandler:errorHandler: will be called with nil item
*/
-(BOOL)isAuthed;

/**
 Asynchronous authentication method in case you have to check whether the session is valid asynchronously
*/

-(void)isAuthedAsync:(void(^)(BOOL))authHandler;

/**
 If your photo source doesn't require authentication, you don't have to implement this method.
 
 Returns ViewController that will be displayed modally after the photo source button is tapped in case the photo source
 isn't authenticated.
 
 If the photo source requires authentication and the method isn't implemented or returns nil, the error message will be displayed saying
 photo source can't be displayed at that particular moment.
*/
-(UIViewController*)authViewController;
-(void)authViewControllerAsync:(void(^)(UIViewController*))authViewControllerHandler;

/**
 Side menu button icon.
 Button displayed will give user an ability to logout from a certain photo source.
*/
-(UIImage*)sideMenuButtonIcon;

/**
 Set custom identifier to photo source. Usually used for custom photo sources,
 in combination with method 'setDefaultPhotoSource'
 */
-(NSNumber *)customID;
 
@end
