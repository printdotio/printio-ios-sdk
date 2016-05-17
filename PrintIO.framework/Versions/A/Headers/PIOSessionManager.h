//
//  SessionManager.h
//  PrintIO
//
//  Created by Boro Perisic Bocas on 12/29/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PIOSessionManager : NSObject

-(void)setValue:(id)val forKey:(NSString *)key;
-(id)valueForKey:(NSString*)key;

-(id)objectForKeyedSubscript:(id <NSCopying>)key;
-(void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;

@end
