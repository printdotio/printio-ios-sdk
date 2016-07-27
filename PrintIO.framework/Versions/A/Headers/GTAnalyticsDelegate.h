//
//  GTAnalyticsDelegate.h
//  PrintIO
//
//  Created by Boro Perisic on 3/11/16.
//  Copyright © 2016 Gooten. All rights reserved.
//
#import "GTAnalyticsEvent.h"
#import "GTAnalyticsScreen.h"

@protocol GTAnalyticsDelegate <NSObject>

/**
 Fires an event
 */
-(void)gtAnalyticsOnEvent:(GTAnalyticsEvent *)event;

/**
 Tracks duration of event
 */
-(void)gtAnalyticsOnTimedEvent:(GTAnalyticsEvent *)event;

/**
 Timed event is finished
 */
-(void)gtAnalyticsOnEndTimedEvent:(GTAnalyticsEvent *)event;

/**
 Tracks on which screen user has landed
 */
-(void)gtAnalyticsOnEnterScreen:(GTAnalyticsScreen *)screen;

@end