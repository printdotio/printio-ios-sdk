//
//  PIOProductLayer.h
//  PrintIO
//
//  Created by Boro Perisic on 2/21/13.
//  Copyright (c) 2013 PrintIO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

static NSString *const kProductLayerTypeDesign = @"Design";
static NSString *const kProductLayerTypeImage = @"Image";
static NSString *const kProductLayerTypeText = @"Text";

struct RectPx
{
    CGFloat x1;
    CGFloat y1;
    CGFloat x2;
    CGFloat y2;
};
typedef struct RectPx RectPx;

@interface PIOProductLayer : NSObject

@property (nonatomic, assign) int spaceIndex;

@property (nonatomic, assign) int zIndex;
@property (nonatomic, assign) int X1;
@property (nonatomic, assign) int X2;
@property (nonatomic, assign) int Y1;
@property (nonatomic, assign) int Y2;
@property (nonatomic, assign) int layerId;

@property (nonatomic, assign) BOOL includeInPrint;

@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *backgroundImageUrl;
@property (nonatomic, strong) NSString *overlayImageUrl;
@property (nonatomic, strong) NSString *imageFill;

// Used for kProductLayerTypeText
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, strong) NSString *fontName;
@property (nonatomic, strong) NSString *defaultText;
@property (nonatomic, assign) CGFloat fontSize;
@property (nonatomic, assign) NSTextAlignment textHAlignment;
@property (nonatomic, strong) NSString *textVAlignment;

// Additional
@property (nonatomic, assign, getter = width) int width;
@property (nonatomic, assign, getter = height) int height;
@property (nonatomic, strong) NSString *sku;

// For now used for multi spaces
@property (nonatomic, strong) NSString *imgManipJSON;
@property (nonatomic, strong) NSData *textManipJSON;
//

-(CGSize)size;
-(CGRect)framePx;
-(RectPx)rectPx;
-(id)initWithJSON:(NSObject *)json;
-(BOOL)hasImageUrl;
-(BOOL)isOldLayerType;

@end
