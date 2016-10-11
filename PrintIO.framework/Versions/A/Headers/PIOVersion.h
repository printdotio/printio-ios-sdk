//
//  HPVersion.h
//  PrintIO Framework
//
//  Created by Boro Perisic on 10/28/13.
//  Copyright (c) 2013 PrintIO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PIOVersion : NSObject

@property (nonatomic, strong) NSString *version;
@property (nonatomic, assign) unsigned int number;
@property (nonatomic, assign) BOOL forceUpgrade;

- (id)initWithJSON:(NSObject *)jsonObj;

@end
