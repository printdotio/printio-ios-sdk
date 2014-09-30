//
//  PIOVariantOption.h
//  PrintIO
//
//  Created by Tengai on 5/2/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PIOVariantOption : NSObject

@property (nonatomic, assign) int productId;
@property (nonatomic, strong) NSString *optionId;
@property (nonatomic, strong) NSString *valueId;
@property (nonatomic, strong) UIColor *color;

- (id)initWithProductId:(int)productId optionId:(NSString *)optionId valueId:(NSString *)valueId;

@end
