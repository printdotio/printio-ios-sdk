Analytics

In order to use Analytics, you need to import GTAnalytics protocol:

```Objective-C
#import <PrintIO/PrintIO.h>

@interface ViewController () <GTAnalyticsDelegate>
```

Next step is to set delegate:

```Objective-C
[self.printIO setAnalyticsDelegate:self];
```

"GTAnalytics" protocol

```Objective-C
/**
 Fires an event
 */
-(void)gtAnalyticsOnEvent:(GTAnalyticsEvent *)event;

/**
 Captures duration of event
 */
-(void)gtAnalyticsOnTimedEvent:(GTAnalyticsEvent *)event;

/**
 Timed event is finished
 */
-(void)gtAnalyticsOnEndTimedEvent:(GTAnalyticsEvent *)event;

/**
 Captures on which screen user has landed
 */
-(void)gtAnalyticsOnEnterScreen:(GTAnalyticsScreen *)screen;
```
