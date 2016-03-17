Analytics

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
