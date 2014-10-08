Developer SDK Customization Reference
=====================================

### Sections:

   - Initialization
   - Opening options
   - Navigation bar
   - Side menu
   - Screens
   - 
   
### Initialization

``` Objective-C
/**
 Init PrintIO widget. To get view controller, use '[self.printIO viewController]'
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#init-printio-widget
 
 @param type Set environment to staging or live, use PRINTIO_STAGING or PRINTIO_PRODUCTION
 @param pRecipeId Production recipeId provided by PrintIO
 @param sRecipeId Staging recipeId provided by PrintIO
 */
- (id)initWithEnvironment:(int)type
       productionRecipeId:(NSString *)pRecipeId
          stagingRecipeId:(NSString *)sRecipeId;
```

### Opening options

