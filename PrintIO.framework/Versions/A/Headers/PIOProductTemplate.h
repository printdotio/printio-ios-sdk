//
//  ProductTemplate.h
//  PictureApp_iOS
//
//  Created by Boro Perisic on 2/21/13.
//  Copyright (c) 2013 PrintIO. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "PIOProductLayer.h"

@interface PIOProductTemplate : NSObject

@property (nonatomic, assign) int templateId;
@property (nonatomic, assign) int productDBId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, assign) BOOL isDefault;
@property (nonatomic, assign) BOOL isPartnerSpecific;
@property (nonatomic, strong) NSMutableArray *spaces;
@property (nonatomic, strong) NSData *textObjJSONData;

// Additional
@property (nonatomic, strong) NSString *sku;
@property (nonatomic, assign) BOOL isSelected;

-(id)initWithJSON:(NSObject *)json sku:(NSString *)sku;
-(void)changeSKUWith:(NSString *)newSKU;

-(NSMutableArray *)getLayersForType:(NSString *)layerType;
-(NSMutableArray *)getLayersForType:(NSString *)layerType spaceIndex:(int)spaceIndex;
-(NSMutableArray *)getLayersForType:(NSString *)layerType spacePosition:(int)spacePosition;
-(NSMutableArray *)getDesignsBelowImageLayer:(BOOL)belowImageLayer spacePosition:(int)spacePosition;
-(NSMutableArray *)getAllSpacesExceptSpine;
-(PIOProductLayer *)getDesignForSpacePosition:(int)spacePosition;
-(PIOProductLayer *)getDesignForSpaceIndex:(int)spaceIndex;
-(int)getImagesCount;
-(int)getImagesCountForSpacePos:(NSInteger)spacePos;
-(BOOL)isDefaultTextChanged:(NSData *)textData spacePosition:(int)spacePos;
-(CGSize)minimumTemplateSize;

// used in photobooks
-(NSString *)nameWOSpineColor;
-(NSString *)spineColorName;

@end
