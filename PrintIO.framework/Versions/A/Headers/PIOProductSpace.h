//
//  PIOProductSpace.h
//  PrintIO
//
//  Created by Boro Perisic on 10/16/14.
//  Copyright (c) 2014 PrintIO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PIOProductLayer.h"

typedef NS_ENUM(NSInteger, PIOSpaceType){
    PIOSpaceTypeFrontCover = 1,
    PIOSpaceTypeBackCover = 2,
    PIOSpaceTypePage = 3
};

@interface PIOProductSpace : NSObject

@property (nonatomic, assign) int position;
@property (nonatomic, assign) int index;
@property (nonatomic, assign) int defaultRotation;
@property (nonatomic, assign) int finalX1;
@property (nonatomic, assign) int finalX2;
@property (nonatomic, assign) int finalY1;
@property (nonatomic, assign) int finalY2;

@property (nonatomic, strong) NSString *spaceDescription;
@property (nonatomic, strong) NSArray *layers;
@property (nonatomic, assign) PIOSpaceType type;
@property (nonatomic, assign) BOOL leftSided;

-(id)initWithJSON:(NSObject *)json sku:(NSString *)sku;
-(int)getNumberOfItemsForLayerType:(NSString *)layerType;
-(NSMutableArray *)getLayersForType:(NSString *)layerType;
-(NSMutableArray *)getDesignsBelowImageLayer:(BOOL)belowImageLayer;
-(PIOProductLayer *)getDesign;
-(BOOL)hasFinalCoordinates;
-(BOOL)hasImageLayers;
-(BOOL)isZOrdered;
-(BOOL)containOnlyTextLayers;
-(CGRect)writableFramePx;
-(CGRect)textFrameFromTextLayer:(PIOProductLayer *)textLayer baseViewSize:(CGSize)bViewSize;

@end
