//
//  PIODefaultPhotoSource.h
//  PrintIO
//
//  Created by Nikola Markovic on 1/14/15.
//  Copyright (c) 2015 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PIOPhotoSource.h"

@interface PIODefaultPhotoSource : NSObject<PIOPhotoSource>

/* SessionManager is a class that manages session objects. It's key-value based and each photo source will 
 * hold an instance of the shared sessionManager instance. This property value will be assigned right after the SelectPhotos screen appears.
 */
@property(nonatomic, strong) PIOSessionManager* sessionManager;

// fetch image
-(void)fetchConcreteImageForItem:(id<PIOPhotoSourceItem>)item thumbnail:(BOOL)thumbnail withCompletionHandler:(PIOImageDownloadCompletionHandler)imageFetchCompletionHandle;

// caching
-(BOOL)shouldUseCachedImageForItem:(id<PIOPhotoSourceItem>)item;
-(BOOL)shouldCacheImageForItem:(id<PIOPhotoSourceItem>)item;

// override

-(void)requestConcreteItems:(NSMutableArray*)items forItem:(id<PIOPhotoSourceItem>)item inScope:(id<PIOPhotoSourceItem>)currentScope page:(NSUInteger)page count:(NSUInteger)count withCompletionHandler:(PIOItemsCompletionHandler)completionHandler errorHandler:(PIOPhotoSourceErrorHandler)errorHandler;
@end
