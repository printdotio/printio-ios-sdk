//
//  PhotoSourceItemImageDownloader.h
//  PrintIO
//
//  Created by Nikola Markovic on 1/14/15.
//  Copyright (c) 2015 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PIOPhotoSourceItem.h"
#import "PIOPhotoSource.h"

// Image downloader protocol

@protocol PIOImageDownloader <NSObject>

-(void)downloadImageForItem:(id<PIOPhotoSourceItem>)item inPhotoSource:(id<PIOPhotoSource>)photoSource isThumbnail:(BOOL)isThumbnail withCompletionHandler:(PIOImageDownloadCompletionHandler)imageCompletionHandler;

@end

typedef void(^PIOPhotoSourceItemImageDownloaderBlock)(id<PIOPhotoSourceItem>, id<PIOPhotoSource>, BOOL thumbnail, PIOImageDownloadCompletionHandler imageCompletionHandler);

// default implementation
@interface PIOPhotoSourceItemImageDownloader : NSObject<PIOImageDownloader>

+(instancetype)imageDownloaderWithBlock:(PIOPhotoSourceItemImageDownloaderBlock)imageDownloaderBlock;

-(void)downloadImageForItem:(id<PIOPhotoSourceItem>)item inPhotoSource:(id<PIOPhotoSource>)photoSource isThumbnail:(BOOL)isThumbnail withCompletionHandler:(PIOImageDownloadCompletionHandler)imageCompletionHandler;

@end
