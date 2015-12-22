//
//  PIOSideMenuButton.h
//  PrintIO
//
//  Created by Tengai on 4/2/14.
//  Copyright (c) 2014 PrintIO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PIOButton.h"

typedef NS_ENUM (NSInteger, SideMenuButtonType){
    PIOSMButtonTypeQualityGuarantee = 10,
    PIOSMButtonTypeAbout,
    PIOSMButtonTypeHowItWorks,
    PIOSMButtonTypePastOrders,
    PIOSMButtonTypeOrderStatus
};

@interface PIOSideMenuButton : PIOButton

@property (nonatomic, strong) UIColor *textColor;

@property (nonatomic, strong) NSString *iconName;
@property (nonatomic, strong) NSString *iconNameSelected;

@property (nonatomic, strong) NSObject *dataHolder;

-(id)initWithTitle:(NSString *)sTitle type:(NSInteger)sType;

@end
