####Sample code, GTAnalytics integration with Flurry analytics.
#####Initialize printIO SDK and Flurry
```Obj-C
-(void)viewDidLoad{
        // init printIO SDK
        self.printIO = [[PrintIO alloc]initWithEnvironment:PRINTIO_STAGING 
                                        productionRecipeId:kProductionRecipeId 
                                           stagingRecipeId:kStagingRecipeId];
        [self.printIO setAnalyticsDelegate:self];
        
        // init Flurry
        [Flurry startSession:kAPIKey];
}
```
#####Import GTAnalyticsDelegate methods
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



