//
//  PIOSideMenuButton.h
//  PrintIO
//
//  Created by Tengai on 4/2/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PIOButton.h"

@interface PIOSideMenuButton : PIOButton

@property (nonatomic, strong) NSString *iconPath;
@property (nonatomic, strong) NSString *iconPathSelected;

@property (nonatomic, assign) float fontSize;
@property (nonatomic, assign) float fontSizeOfTitle;

@property (nonatomic, assign) BOOL useBoldFonts;

@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *textSecondColor;

@property (nonatomic, strong) NSObject *dataHolder;

- (id)initWithTitle:(NSString *)sTitle type:(NSInteger)sType iconPath:(NSString *)sIconPath;

@end
