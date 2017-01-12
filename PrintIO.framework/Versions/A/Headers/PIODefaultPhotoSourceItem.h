//
//  DefaultPhotoSourceItem.h
//  PrintIO
//
//  Created by Boro Perisic Bocas on 1/14/15.
//  Copyright (c) 2015 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PIOPhotoSourceItem.h"
#import "PIOPhotoSourceItemImageDownloader.h"

@interface PIODefaultPhotoSourceItem : NSObject<PIOPhotoSourceItem>

@property(nonatomic, strong) NSDictionary* userInfo;

-(void)setImageDownloader:(id<PIOImageDownloader>)imageDownloader;

-(BOOL)shouldUseCachedImage;

@end
