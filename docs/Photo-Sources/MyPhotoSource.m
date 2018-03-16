//
//  MyPhotoSource.h
//  Gooten Sample App
//
//  Created by Boro Perisic on 8/3/18.
//  Copyright (c) 2018 Gooten. All rights reserved.
//

#import "MyPhotoSource.h"
#import "MyPhotoSourceItem.h"

@implementation MyPhotoSource

-(NSString *)title{
    return @"MyPhotoSource";
}

- (NSString *)buttonIconPath{
    return [[NSBundle mainBundle] pathForResource:@"icon1" ofType:@"png"];
}

- (BOOL)isAuthed{
    return YES;
}

-(void)requestPhotoSourceItemsForItem:(id<PIOPhotoSourceItem>)item currentScope:(id<PIOPhotoSourceItem>)currentScope count:(NSUInteger)count page:(NSUInteger)page withCompletionHandler:(PIOItemsCompletionHandler)completionHandler errorHandler:(PIOPhotoSourceErrorHandler)errorHandler{
    
    NSMutableArray *array = [NSMutableArray new];
    for (int i=0; i<20; i++){
        
        MyPhotoSourceItem *item = [[MyPhotoSourceItem alloc]init];
        item.imageUrl = [NSString stringWithFormat:@"http://www.autoguide.com/blog/wp-content/gallery/2018-bmw-x3-review/2018-BMW-X3-Review-LAI-32.jpg"];
        [array addObject:item];
    }
    
    completionHandler(array);
}

#define kCustomPhotoSourceID 123

-(NSNumber *)customID{
    return [NSNumber numberWithInt:kCustomPhotoSourceID];
}

@end

