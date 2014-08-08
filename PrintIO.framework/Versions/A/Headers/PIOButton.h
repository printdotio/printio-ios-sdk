//
//  PIOButton.h
//  PrintIO
//
//  Created by Tengai on 4/2/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PIOPublicConstants.h"

@interface PIOButton : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) NSInteger type;

- (id)initWithType:(PIOSideMenuButtons)sType;

@end
