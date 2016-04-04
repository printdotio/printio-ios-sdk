####Sample code, GTAnalytics integration with Flurry analytics.
#####Initialize printIO SDK and Flurry
```Obj-C
-(void)viewDidLoad{
        // init printIO SDK
        self.printIO = [[PrintIO alloc]initWithEnvironment:PRINTIO_STAGING 
                                        productionRecipeId:kProductionRecipeId 
                                           stagingRecipeId:kStagingRecipeId];
        [self.printIO setAnalyticsDelegate:self];
        
        // init Flurry Analytics
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
####Sample code, GTAnalytics integration with Google Analytics.
```Obj-C
-(void)viewDidLoad{
        // init printIO SDK
        self.printIO = [[PrintIO alloc]initWithEnvironment:PRINTIO_STAGING 
                                        productionRecipeId:kProductionRecipeId 
                                           stagingRecipeId:kStagingRecipeId];
        [self.printIO setAnalyticsDelegate:self];
        
        // init Google Analytics
        GAI *gai = [GAI sharedInstance];
        gai.trackUncaughtExceptions = YES;  // report uncaught exceptions
        gai.logger.logLevel = kGAILogLevelVerbose;  // remove before app release
```
#####Import GTAnalyticsDelegate methods
```Obj-C
#pragma mark - GTAnalytics delegate

-(void)gtAnalyticsOnEnterScreen:(GTAnalyticsScreen *)screen{
        id<GAITracker> tracker = [[GAI sharedInstance] defaultTracker];
        [tracker set:screen.name value:@""];
        [tracker send:[[GAIDictionaryBuilder createScreenView] build]];
}

-(void)gtAnalyticsOnEvent:(GTAnalyticsEvent *)event{
        id<GAITracker> tracker = [[GAI sharedInstance] defaultTracker];

        [tracker send:[[GAIDictionaryBuilder createEventWithCategory:kCategory
                                                              action:kAction
                                                               label:event.name
                                                               value:event.value] build]];
}

-(void)gtAnalyticsOnTimedEvent:(GTAnalyticsEvent *)event{
    [Flurry logEvent:event.name withParameters:@{@"value":event.value} timed:YES];
}

-(void)gtAnalyticsOnEndTimedEvent:(GTAnalyticsEvent *)event{
    [Flurry endTimedEvent:event.name withParameters:@{@"value":event.value}];
}
```
