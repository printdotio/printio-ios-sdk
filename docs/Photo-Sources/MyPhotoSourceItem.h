//
//  MyPhotoSource.h
//  Gooten Sample App
//
//  Created by Boro Perisic on 8/3/18.
//  Copyright (c) 2018 Gooten. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PrintIO/PIOPhotoSourceItem.h>

@interface MyPhotoSourceItem : NSObject <PIOPhotoSourceItem>

@property (strong) NSString *imageUrl;

@end

