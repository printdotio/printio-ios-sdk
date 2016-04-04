####Sample code, GTAnalytics integration with Flurry analytics.

```Obj-C
#pragma mark - GTAnalytics delegate

-(void)gtAnalyticsOnEnterScreen:(GTAnalyticsScreen *)screen{
    [Flurry logEvent:screen.name];
}

-(void)gtAnalyticsOnEvent:(GTAnalyticsEvent *)event{
    [Flurry logEvent:event.name withParameters:@{@"value":event.value}];
}

-(void)gtAnalyticsOnTimedEvent:(GTAnalyticsEvent *)event{
    [Flurry logEvent:event.name withParameters:@{@"value":event.value} timed:YES];
}

-(void)gtAnalyticsOnEndTimedEvent:(GTAnalyticsEvent *)event{
    [Flurry endTimedEvent:event.name withParameters:@{@"value":event.value}];
}
```



