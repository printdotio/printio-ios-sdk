//
//  MyPhotoSource.h
//  Gooten Sample App
//
//  Created by Boro Perisic on 8/3/18.
//  Copyright (c) 2018 Gooten. All rights reserved.
//

#import "MyPhotoSourceItem.h"

@implementation MyPhotoSourceItem

-(NSString *)uniqueIdentifier{
    return self.imageUrl;
}

-(BOOL)isImageItem{
    return YES;
}

-(void)fetchImageInPhotoSource:(id<PIOPhotoSource>)photoSource isThumbnail:(BOOL)thumbnail withCompletionHandler:(void(^)(UIImage*))imageFetchCompletionHandler{
    
    if (thumbnail){ // here provide thumbnail
        UIImage *image = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:self.imageUrl]] scale:1.0];
        imageFetchCompletionHandler(image);
        
    } else { // here provide full size image
        NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:self.imageUrl]];
        UIImage *image = [UIImage imageWithData:data scale:1.0];
        NSLog(@"image size: %.2fmb", (float)data.length/1024.0f/1024.0f);
        imageFetchCompletionHandler(image);
    }
}

-(NSString *)publicURLPath{
    return self.imageUrl;
}

@end

