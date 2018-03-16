### How to integrate Analytics

**1. In order to use Analytics, you need to import GTAnalytics protocol:**

```Objective-C
#import <PrintIO/PrintIO.h>

@interface ViewController () <GTAnalyticsDelegate>
```

**2. Next step is to set delegate:**

```Objective-C
[self.printIO setAnalyticsDelegate:self];
```

**3. Write delegate methods to receive GTAnalyticsEvent or GTAnalyticsScreen.**

```Objective-C
/**
 Fires an event
 */
-(void)gtAnalyticsOnEvent:(GTAnalyticsEvent *)event;

/**
 Track duration of event
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
```

Look at [sample code](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/analytics_example.md), how to use our analytics with Google Analytics or Flurry.
