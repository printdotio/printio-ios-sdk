Developer SDK Customization Reference
=====================================

### Sections:

   - [Initialization](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#initialization)
   - Opening and closing
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

``` Objective-C
/**
 Init PrintIO widget with parent view controller.

 @param viewController Parent view controller. From this view controller, widget will open.
 @param type Set environment to staging or live, use PRINTIO_STAGING or PRINTIO_PRODUCTION
 @param pRecipeId Production recipeId provided by PrintIO
 @param sRecipeId Staging recipeId provided by PrintIO
 */
- (id)initWithViewController:(id)viewController
                 environment:(int)type
          productionRecipeId:(NSString *)pRecipeId
             stagingRecipeId:(NSString *)sRecipeId;
```
### Opening and closing

``` Objective-C
/**
 Open widget by presenting view from bottom
 */
- (void)open;
```
``` Objective-C
/**
 Open widget with option

 @param option Set the options
 PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT,
 PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT,
 PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM,
 PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART
 PRINTIO_ENABLE_BACK_BUTTON
 */
- (void)openWithOption:(int)option;
```
``` Objective-C
/**
 Present widget from view controller with option
 
 @param option Set the options
 PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT,
 PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT,
 PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM,
 PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART
 PRINTIO_ENABLE_BACK_BUTTON
 */
- (void)presentFromViewController:(UIViewController *)viewController
                       withOption:(int)option;
```
``` Objective-C
/**
 Close widget
 */
- (void)close:(NSInteger)flag;
```
