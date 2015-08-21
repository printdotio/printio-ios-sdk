//
//  PhotoSourceError.h
//  PrintIO
//
//  Created by Nikola Markovic on 12/29/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    PhotoSourceErrorTypeNone,
    PhotoSourceErrorTypeNotLoggedIn,
    PhotoSourceErrorTypeInvalidData,
    PhotoSourceErrorTypeInvalidCredentials,
    PhotoSourceErrorTypeAuthenticationError,
    PhotoSourceErrorTypeConnectionError,
    PhotoSourceErrorTypeUnknown
} PhotoSourceErrorType;

@interface PIOPhotoSourceError : NSObject

+(PIOPhotoSourceError*)errorWithMessage:(NSString*)message;
+(PIOPhotoSourceError*)errorWithErrorType:(PhotoSourceErrorType)type;
+(PIOPhotoSourceError*)errorWithErrorType:(PhotoSourceErrorType)type message:(NSString*)message;

@property(nonatomic, strong) NSString* message;
@property(nonatomic, assign) PhotoSourceErrorType type;

@end
