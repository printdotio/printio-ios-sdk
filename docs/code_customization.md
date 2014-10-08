Developer SDK Customization Reference
=====================================

### Sections:

   - [Initialization](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#initialization);
   - Opening options
   - Navigation bar
   - Side menu
   - Screens
   - 
   
### Initialization

``` Objective-C
/**
 Init PrintIO widget. To get view controller, use '[self.printIO viewController]'

 @param type Set environment to staging or live, use PRINTIO_STAGING or PRINTIO_PRODUCTION
 @param pRecipeId Production recipeId provided by PrintIO
 @param sRecipeId Staging recipeId provided by PrintIO
 */
- (id)initWithEnvironment:(int)type
       productionRecipeId:(NSString *)pRecipeId
          stagingRecipeId:(NSString *)sRecipeId;
```

### Opening options

