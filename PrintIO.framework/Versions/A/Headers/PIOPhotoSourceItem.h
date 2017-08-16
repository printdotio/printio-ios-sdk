//
//  PhotoSourceItem.h
//  PrintIO
//
//  Created by Boro Perisic Bocas on 12/26/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol PIOPhotoSource;

@protocol PIOPhotoSourceItem <NSObject>

-(NSString*)uniqueIdentifier;
-(BOOL)isImageItem;
-(void)fetchImageInPhotoSource:(id<PIOPhotoSource>)photoSource isThumbnail:(BOOL)thumbnail  withCompletionHandler:(void(^)(UIImage*))imageFetchCompletionHandler;

@optional

// in case of an album, this is the album name
-(NSString*)displayName;

// Returns fullsize image public URL path.
//
// If implemented and returns a non-nil value, image link will be passed to the server
// instead of uploading the image.

-(NSString*)publicURLPath;

@end
