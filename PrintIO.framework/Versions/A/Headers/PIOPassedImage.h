//
//  PIOPassedImage.h
//  PrintIO
//
//  Created by Boro Perisic on 8/16/17.
//  Copyright © 2017 Gooten. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PIOPassedImage : NSObject

-(instancetype)initWithImageUrl:(NSString *)imageUrl thumbnailUrl:(NSString *)thumbUrl;

@property(nonatomic, strong, readonly) NSString *imageUrl;
@property(nonatomic, strong, readonly) NSString *thumbnailUrl;

@end
