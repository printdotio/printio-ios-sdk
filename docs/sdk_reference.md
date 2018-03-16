Developer SDK Customization Reference
=====================================

   - [**Initialization**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#initialization)
      - [*-initWithRecipeId*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--initwithrecipeid)
      - [*-initWithViewController*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--initwithviewcontroller)
      - [*-setIsInTestMode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setisintestmode)
      - [*-useStagingModeWithRecipeID*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--usestagingmodewithrecipeid)
      - [*-setIsRootController*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setisrootcontroller)
   - [**Opening and closing**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#opening-and-closing)
      - [*-open*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--open)
      - [*-openWithOption*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--openwithoption)
      - [*-presentFromViewController*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--presentfromviewcontroller)
      - [*-viewController*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--viewcontroller)
      - [*-close*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--close)
      - [*-closeWithCompletionHandler*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--closewithcompletionhandler)
      - [*-goToProductId*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--gotoproductid)
   - [**Utils**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#utils)
      - [*-turnOffLogs*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--turnofflogs)
   - [**Country, Currency and Language**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#country-currency-and-language)
      - [*-setCountryCode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcountrycode)
      - [*-setCurrencyCode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcurrencycode)
      - [*-setLanguageCode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setlanguagecode)
   - [**General UI customization**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#general-ui-customization)
      - [*-setFonts*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfonts)
   - [**Navigation bar**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#navigation-bar)
      - [*-navigationBarColor:titleColor:leftButtonBackgroundColor:rightButtonBackgroundColor:titleButtonIcon*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--navigationbarcolortitlecolorleftbuttonbackgroundcolorrightbuttonbackgroundcolortitlebuttonicon)
      - [*-setNavigationBarBackground*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackground)
      - [*-setNavigationBarBackgroundForCustomizeProduct*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackgroundforcustomizeproduct)
      - [*-setIconForBackButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforbackbutton)
      - [*-setStatusBarDark:hidden*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setstatusbardarkhidden)
      - [*-setHowItWorksText*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sethowitworkstext)
      - [*-setAboutText*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setabouttext)
      - [*-setContactUsEmail*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcontactusemail)
   - [**Screen 'Product Details'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-product-details)
      - [*-productDetailsShowTitleBelowNavBar*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--productdetailsshowtitlebelownavbar)
      - [*-productDetailsShowMenuBtnInNavBar*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--productdetailsshowmenubtninnavbar)
      - [*-setQualityGuaranteeText*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setqualityguaranteetext)
      - [*-setPriceTitleHidden*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpricetitlehidden)
      - [*-setRetailDiscountPercent*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setretaildiscountpercent)
   - [**Photo sources**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#photo-sources)
      - [*-setAvailablePhotoSources*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setavailablephotosources)
      - [*-setCustomPhotoSources*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcustomphotosources)
      - [*-setDefaultPhotoSource:albumId*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdefaultphotosourcealbumid)
      - [*-setImages*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setimages)
      - [*-disablePhotoSourcesWhenImagesArePassedIn*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablephotosourceswhenimagesarepassedin)
      - [*-disablePhotoSourcesForOnePhotoTemplate*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablephotosourcesforonephototemplate)
      - [*-enablePhotoSourcesInCustomizeProduct*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--enablephotosourcesincustomizeproduct)
      - [*-setPassedImageFirstInPhotoSources*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpassedimagefirstinphotosources)
      - [*-setPreselectPassedImages:shouldPreselectPassedImages*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpreselectpassedimagesshouldpreselectpassedimages)
      - [*-hideIconForUploadInstructions*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideiconforuploadinstructions)
      - [*-setInstagramClientID:redirectUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setinstagramclientidredirecturl)
      - [*-setInstagramAccessToken*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setinstagramaccesstoken)
      - [*-setFlickrKey:secretKey:redirectUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setflickrkeysecretkeyredirecturl)
      - [*-setDropboxKey:redirectUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdropboxkeyredirecturl)
      - [*-setFacebookAppId:redirectUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfacebookappidredirecturl)
      - [*-setFacebookAccessToken*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfacebookaccesstoken)
      - [*-hideCartInPhotoSources*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidecartinphotosources)
      - [*-showSelectAllButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showselectallbutton)
   - [**Screen 'Image Editor'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-image-editor)
      - [*-imageEditorShowButtons*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--imageeditorshowbuttons)
   - [**Screen 'Shopping Cart'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-shopping-cart)
      - [*-setIconForShoppingCart:withNumberOfProducts:labelPosition:textColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartwithnumberofproductslabelpositiontextcolor)
      - [*-numberOfItemsInShoppingCart*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--numberofitemsinshoppingcart)
      - [*-setPromoCode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpromocode)
      - [*-hideCartButtonWhenCartIsEmpty*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidecartbuttonwhencartisempty)
      - [*-closeWidgetFromShoppingCart*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--closewidgetfromshoppingcart)
      - [*+clearShoppingCart*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#-clearshoppingcart)
      - [*+shoppingCartJSONContent*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#-shoppingcartjsoncontent)
      - [*+setShoppingCartContent*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#-setshoppingcartcontent)
   - [**Screen 'Payment Options'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-payment-options)
      - [*-setPayeeName*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpayeename)
      - [*-setTermsAndConditionsURL*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settermsandconditionsurl)
      - [*-setPaymentOptions*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpaymentoptions)
      - [*-setPayPalStagingClientId:productionClientId*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpaypalstagingclientidproductionclientid)
      - [*-setBraintreeStagingEncryptionKey:productionEncryptionKey*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setbraintreestagingencryptionkeyproductionencryptionkey)
      - [*-setApplePayMerchantIdentifier*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setapplepaymerchantidentifier) available from PrintIO SDK v1.4.0
   - [**Screen 'Shipping Addresses'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-shipping-addresses)
      - [*+clearShippingAddresses*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#-clearshippingaddresses)
      - [*+clearBillingAddresses*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#-clearbillingaddresses)
      - [*-setPartnerSourceId*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpartnersourceid)
      - [*setOrderMeta*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setordermeta)
   - [**Google Analytics**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#google-analytics)
      - [*-setTrackingIDForGoogleAnalytics*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settrackingidforgoogleanalytics)

### Initialization

###### - initWithRecipeId
``` Objective-C
/**
 Init PrintIO widget. To get view controller, use '[self.printIO viewController]'
 
 @param recipeId Recipe Id provided by Gooten
 @param isInTestMode Default value is NO
 */
-(id)initWithRecipeId:(NSString *)recipeId isInTestMode:(BOOL)isInTestMode;
```
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithRecipeId:kRecipeID isInTestMode:YES];
```
###### - initWithViewController
``` Objective-C
/**
 Init PrintIO widget with parent view controller.
 
 @param viewController Parent view controller. From this view controller, widget will open.
 @param recipeId Production recipeId provided by Gooten
 @param isInTestMode Default value is
 */
-(id)initWithViewController:(id)viewController recipeId:(NSString *)recipeId isInTestMode:(BOOL)isInTestMode;
```
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                                 recipeId:kRecipeID
                                             isInTestMode:YES];
```
###### - setIsInTestMode
```Objective-C
/**
 Use to place live orders in production mode, without payment verification
 
 @param testMode Default value is NO
 */
-(void)setIsInTestMode:(BOOL)testMode;
```
**Sample code:**
```Objective-C
[self.printIO setIsInTestMode:YES];
// other customization ...
[self.printIO open];
```
###### - useStagingModeWithRecipeID
```Objective-C
/**
 Run SDK in staging environment
 
 @param recipeID Staging recipeID provided by Gooten
 */
-(void)useStagingModeWithRecipeID:(NSString *)recipeID;
```
**Sample code:**
```Objective-C
[self.printIO useStagingModeWithRecipeID:kRecipeID];
// other customization ...
[self.printIO open];
```
###### - setIsRootController
```Objective-C
/**
 Root controller flag. Set to YES if the PrintIO widget is the root controller of your application.
 
 @param isRootController Root controller flag.
 */
-(void)setIsRootController:(BOOL)isRootController;
```
**Sample code:**
```Objective-C
[printIO setIsRootController:NO];
```
### Opening and closing

###### - open
``` Objective-C
/**
 Open widget by presenting view from bottom
 */
- (void)open;
```
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                              environment:PRINTIO_STAGING
                                       productionRecipeId:nil
                                          stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
//... other customization
[printIO open];
```
###### - openWithOption
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
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                              environment:PRINTIO_STAGING
                                       productionRecipeId:nil
                                          stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
//... other customization
[printIO openWithOption:PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM | PRINTIO_ENABLE_BACK_BUTTON];
```
###### - presentFromViewController
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
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                              environment:PRINTIO_STAGING
                                       productionRecipeId:nil
                                          stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
//... other customization
[printIO presentFromViewController:self withOption:PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM];
```
###### - viewController
``` Objective-C
/**
 Returns PrintIO view controller. Set all options before calling this method
 */
- (id)viewController;
```
**Sample code:**
```Objective-C
[printIO viewController];
```
###### - close
``` Objective-C
/**
 Close widget
 */
- (void)close:(NSInteger)flag;
```
**Sample code:**
```Objective-C
[printIO close];
```
###### - closeWithCompletionHandler
``` Objective-C
/**
 Close widget
 */
-(void)closeWithCompletionHandler:(void(^)(void))completionHandler;
```
**Sample code:**
```Objective-C
[printIO closeWithCompletionHandler:nil];
```
###### - goToProductId
```Objective-C
/**
 Jumps directly to product.

 @param productId Product identifier can be found in ProductIds.h and starts with PRODUCT_
 */
- (void)goToProductId:(int)productId;
```
**Sample code:**
```Objective-C
[printIO goToProductId:PRODUCT_PHONE_CASES()];
//... other customization
[printIO open];
```
### Utils
###### - turnOffLogs
```Objective-C
/**
 Turn off logs

 @param set Default value is NO
 */
- (void)turnOffLogs:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO turnOffLogs:YES];
```
### Country, Currency and Language
###### - setCountryCode
```Objective-C
/**
 Set country code

 @param countryCode Country code
 */
- (void)setCountryCode:(NSString *)countryCode;
```
**Sample code:**
```Objective-C
[printIO setCountryCode:@"US"];
//... other customization
[printIO open];
```
###### - setCurrencyCode
```Objective-C
/**
 Set currency code

 @param currencyCode Currency code
 */
- (void)setCurrencyCode:(NSString *)currencyCode;
```
**Sample code:**
```Objective-C
[printIO setCurrencyCode:@"usd"];
//... other customization
[printIO open];
```
###### - setLanguageCode
```Objective-C
/**
 Set language code

 @param languageCode Language code
 */
- (void)setLanguageCode:(NSString *)languageCode;
```
**Sample code:**
```Objective-C
[printIO setLanguageCode:@"en"];
//... other customization
[printIO open];
```

###### - setFonts
```Objective-C
/**
 Set custom fonts from main app bundle.

 @param fonts Array of string values that contains font name and type with the exact 
 order (light, medium, regular, bold). 
 
 Example: [@"font_light.otf", @"font_medium.otf", @"font_regular.otf", @"font_bold.otf"]. 
 
 Array must have four items, and fonts can be duplicated. Array also accepts system 
 (normal, bold and italic) UIFont objects.
 */
- (void)setFonts:(NSArray *)fonts;
```
**Sample code:**
```Objective-C
NSArray *fonts = @[@"timess.ttf", @"timess.ttf", @"aubrey.ttf", @"CaviarDreams_Bold.ttf"];
[printIO setFonts:fonts];
//... other customization
[printIO open];
```

**Sample code:**
```Objective-C
[printIO setSelectionColor:[UIColor redColor]];
//... other customization
[printIO open];
```
### Navigation bar
###### - navigationBarColor:titleColor:leftButtonBackgroundColor:rightButtonBackgroundColor:titleButtonIcon
```Objective-C
/**
 Change navigation bar color and title font color.

 @param color Color for title bar (navigation bar). If nil default color is used.
 @param tColor Color of fonts on title bar. If nil default color is used.
 @param lColor Background color for left navigation bar button. If nil, transparent will be used.
 @param rColor Background color for right navigation bar button. If nil, transparent will be used.
 @param iPath Path to icon for button in the center of navigation bar. If nil, title will be shown, otherwise
 button will be shown. Click on button opens sub menu, which can be customized by PrintIO.
 */
- (void)navigationBarColor:(UIColor *)color
                titleColor:(UIColor *)tColor
 leftButtonBackgroundColor:(UIColor *)lColor
rightButtonBackgroundColor:(UIColor *)rColor
           titleButtonIcon:(NSString *)iPath;
```
**Sample code:**
```Objective-C
[printIO navigationBarColor:[UIColor colorWithRed:240.0/255.0 green:94.0/255.0 blue:79.0/255.0 alpha:1.0]
                 titleColor:[UIColor whiteColor]
  leftButtonBackgroundColor:[UIColor clearColor]
 rightButtonBackgroundColor:[UIColor colorWithRed:34.0/255.0 green:119.0/255.0 blue:212.0/255.0 alpha:1.0]
            titleButtonIcon:nil];
//... other customization
[printIO open];
```

###### - setNavigationBarBackgroundForCustomizeProduct
```Objective-C
/**
 Set navigation bar background image on 'Customize Product' screen
 
 @param imagePath Path to image file.
 */
- (void)setNavigationBarBackgroundForCustomizeProduct:(NSString *)imagePath;
```
**Sample code:**
```Objective-C
[printIO setNavigationBarBackgroundForCustomizeProduct:[[NSBundle mainBundle]pathForResource:@"header" ofType:@"png"]];
//... other customization
[printIO open];
```
###### - setIconForBackButton
```Objective-C
/**
 Set icon for back button.

 @param path Path to image file.
 */
- (void)setIconForBackButton:(NSString *)iconPath;
```
**Sample code:**
```Objective-C
[printIO setIconForBackButton:[[NSBundle mainBundle]pathForResource:@"back" ofType:@"png"]];
//... other customization
[printIO open];
```
###### - setStatusBarDark:hidden
```Objective-C
/**
 Set status bar style and visibility.

 @param dark Default value is NO
 @param hidden Default value is NO
 */
- (void)setStatusBarDark:(BOOL)dark
                  hidden:(BOOL)hidden;
```
**Sample code:**
```Objective-C
[printIO setStatusBarDark:NO hidden:YES];
//... other customization
[printIO open];
```

###### - setBackButtonHidden
```Objective-C
/**
 Set back button hidden
 
 @param set Default value is NO
 */
- (void)setBackButtonHidden:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO setBackButtonHidden:YES];
//... other customization
[printIO open];
```


###### - setHowItWorksText
```Objective-C
/**
 Provide text for "How It Works" screen

 @params text Text
 */
- (void)setHowItWorksText:(NSString *)text;
```
**Sample code:**
```Objective-C
[printIO setHowItWorksText:@"A lot of text..."];
//... other customization
[printIO open];
```
###### - setAboutText
```Objective-C
/**
 Provide text for "About" screen

 @param text About text
 */
- (void)setAboutText:(NSString *)text;
```
**Sample code:**
```Objective-C
[printIO setAboutText:@"About text is..."];
//... other customization
[printIO open];
```
###### - setContactUsEmail
```Objective-C
/**
 Set email for "Contact Us" button
 
 @param email Customer support email
 */
-(void)setContactUsEmail:(NSString *)email;
```
**Sample code:**
```Objective-C
[printIO setContactUsEmail:@"email"];
//... other customization
[printIO open];
```


###### - setWhatsNewDailogText
```Objective-C
/**
 Set text for What's New Dialog. If there's no text, dialog
 will be hidden.
 
 Sample text: @"- bug fixes\n- new products added\n- new feature added"
 
 @param text Text
 */
-(void)setWhatsNewDailogText:(NSString *)text;
```
**Sample code:**
```Objective-C
[printIO setWhatsNewDailogText:@"sample text"];
//... other customization
[printIO open];
```
###### - showBottomBarWithLikeUsURL:rateUsAppId:shareText
```Objective-C
/**
 Show bottom bar with search, like, share and rate us options
 Available from SDK v1.5.19(24)
 
 @param likeUsUrl URL to web page (facebook page etc...)
 @param rateUsAppId Application id from app store
 @param shareText Text for sharing
 */
-(void)showBottomBarWithLikeUsURL:(NSURL *)likeUsURL rateUsAppId:(NSString *)rateUsAppId shareText:(NSString *)shareText;
```
**Sample code:**
```Objective-C
[printIO showBottomBarWithLikeUsURL:url rateUsAppId:@"appId" shareText:@"share text"];
//... other customization
[printIO open];
```
###### - setProductsInHero
```Objective-C
/**
 Set which products will be in hero, on Products page, by providing product ids.
 Max number of products is five.
 
 @param productsIds Array of product ids
 */
-(void)setProductsInHero:(NSArray *)productsIds;
```
**Sample code:**
```Objective-C
[self.printIO productsInHero:[[NSNumber numberWithInt:PRODUCT_PHONE_CASES()], [NSNumber numberWithInt:PRODUCT_TABLET_CASES()]];
//... other customization
[printIO open];
```
###### - setImageInHero:url
```Objective-C
/**
 Add image obj in hero, which will lead to url, when user taps on it
 
 @param image UIImage object
 @param url NSURL object
 */
-(void)setImageInHero:(UIImage *)image url:(NSURL *)url;
```
**Sample code:**
```Objective-C
[self.printIO setImageInHero:[UIImage imageNamed:@"sample_image.jpg"] url:[NSURL URLWithString:@"youtube://www.youtube.com/watch?v=pLrS1q242eE"]];
//... other customization
[printIO open];
```
###### - hideSingleProductOption
```Objective-C
/**
 Hides single product option and autoselects it
 
 @param set Default value is NO
 */
-(void)hideSingleProductOption:(BOOL)set;
```
**Sample code:**
```Objective-C
[self.printIO hideSingleProductOption:YES];
//... other customization
[printIO open];
```
###### - hideChangeBackgroundColorInCustomizeProductScreen
```Objective-C
/**
 Hides Change Background color button in Customize Product Screen
 
 @param set Default value is NO
 */
-(void)hideChangeBackgroundColorInCustomizeProductScreen:(BOOL)set;
```
**Sample code:**
```Objective-C
[self.printIO hideChangeBackgroundColorInCustomizeProductScreen:YES];
//... other customization
[printIO open];
```
###### - hideComingSoonFeatures
```Objective-C
/**
 Hides coming soon features in Customize Product and Image Editor
 
 @param set Default value is NO
 */
-(void)hideComingSoonFeatures:(BOOL)set;
```
**Sample code:**
```Objective-C
[self.printIO hideComingSoonFeatures:YES];
//... other customization
[printIO open];
```
### Screen 'Product Details'
###### - productDetailsShowTitleBelowNavBar
```Objective-C
/**
 Show title below navigation bar on Product Details screen

 @param set Default value is NO
 */
- (void)productDetailsShowTitleBelowNavBar:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO productDetailsShowTitleBelowNavBar:YES];
//... other customization
[printIO open];
```


### Photo sources
###### - setAvailablePhotoSources
```Objective-C
/**
 Set available photo sources

 @param photoSources Array of PIOSideMenuButton objects, represents which types of photo sources will be
 available to user. Types:
   PIO_SM_FACEBOOK
   PIO_SM_INSTAGRAM
   PIO_SM_PICASA
   PIO_SM_FLICKR
   PIO_SM_DROPBOX
   PIO_SM_PHOTOBUCKET
   PIO_SM_PHONE
   PIO_SM_PASSED_PHOTOS
 */
- (void)setAvailablePhotoSources:(NSArray *)photoSources;
```
**Sample code:**
```Objective-C
// Instagram
PIOSideMenuButton *btnSInstagram = [[PIOSideMenuButton alloc]initWithTitle:@"Instagram" type:PIO_SM_INSTAGRAM];
btnSInstagram.iconPath = [[NSBundle mainBundle]pathForResource:@"instagram" ofType:@"png"];
btnSInstagram.iconPathSelected = [[NSBundle mainBundle]pathForResource:@"instagram_selected" ofType:@"png"];
btnSInstagram.textColor = [UIColor blackColor];
btnSInstagram.useBoldFonts = YES;
    
// Phone
PIOSideMenuButton *btnSPhone = [[PIOSideMenuButton alloc]initWithTitle:@"Phone" type:PIO_SM_PHONE];
    
// Facebook
PIOSideMenuButton *btnSFacebook = [[PIOSideMenuButton alloc]initWithTitle:@"Facebook" type:PIO_SM_FACEBOOK];
btnSFacebook.iconPath = [[NSBundle mainBundle]pathForResource:@"facebook" ofType:@"png"];
btnSFacebook.iconPathSelected = [[NSBundle mainBundle]pathForResource:@"facebook_selected" ofType:@"png"];
btnSFacebook.textColor = [UIColor blackColor];
btnSFacebook.useBoldFonts = YES;
    
[printIO setAvailablePhotoSources:[NSArray arrayWithObjects:btnSPhone, btnSInstagram, btnSFacebook, nil]];
//... other customization
[printIO open];
```
###### - setCustomPhotoSources
```Objective-C
/**
 Set custom photo sources
 
 @param customPhotoSources Array of id<PhotoSource> objects 
 */
- (void)setCustomPhotoSources:(NSArray*)customPhotoSources;
```
**Sample code:**
```Objective-C
MyCustomPhotoSource* photoSource = [[MyCustomPhotoSource alloc] init];
[printIO setCustomPhotoSources:@[photoSource]];
//... other customization
[printIO open];
```
###### - setDefaultPhotoSource:albumId
```Objective-C
/**
 When user enters 'Select Photos' screen, selected photo source will be opened by default.
 If an album id is passed in, if exist, that album will be opened.
 
 @param pSource Photo source:
   PIO_PS_FACEBOOK
   PIO_PS_INSTAGRAM
   PIO_PS_PICASA
   PIO_PS_FLICKR
   PIO_PS_DROPBOX
   PIO_PS_PHOTOBUCKET
   PIO_PS_PHONE
   PIO_PS_PASSED_PHOTOS // added in v1.0.34. 'Passed photos' photo source needs to be added, and images
                                             should be passed in.
   
 @param albumId Album id (Currently works only for PIO_SM_PHOTOBUCKET photo source)
 
 */
- (void)setDefaultPhotoSource:(PIOPhotoSources)pSource
                      albumId:(NSString *)albumId;
```
**Sample code:**
```Objective-C
[printIO setDefaultPhotoSource:PIO_PS_FACEBOOK albumId:@""];
//... other customization
[printIO open];
```
###### - setImages
```Objective-C
/**
 Pass in images urls, UIImage objects and PIOPassedImage objects
 
 @param images Array of image urls (NSString), UIImage objects and PIOPassedImage objects
 */
- (void)setImages:(NSArray *)images;
```
**Sample code:**
```Objective-C
UIImage *image = ...
NSArray *images = @[@"http://www.google.com/landscape.jpeg", image]; 
[printIO setImages:images];
//... other customization
[printIO open];
```
###### - disablePhotoSourcesWhenImagesArePassedIn
```Objective-C
/**
 If user pass in images usinig method 'images', this method can disable photo sources,
 forcing user to use only passed photos.

 This method overrides method 'availablePhotoSources'
 */
- (void)disablePhotoSourcesWhenImagesArePassedIn:(BOOL)disable;
```
**Sample code:**
```Objective-C
[printIO disablePhotoSourcesWhenImagesArePassedIn:YES];
//... other customization
[printIO open];
```
###### - disablePhotoSourcesForOnePhotoTemplate
```Objective-C
/**
 Disable photo sources only if image is passed in, and user selects template with
 one photo.
 */
-(void)disablePhotoSourcesForOnePhotoTemplate:(BOOL)disable;
```
**Sample code:**
```Objective-C
[printIO disablePhotoSourcesForOnePhotoTemplate:YES];
//... other customization
[printIO open];
```
###### - setPreselectPassedImages:shouldPreselectPassedImages
```Objective-C
/**
 A flag that determines whether passed images are preselected on the 'Select Photos' screen.
 */
- (void)setPreselectPassedImages:(BOOL)shouldPreselectPassedImages;
```
**Sample code:**
```Objective-C
[printIO setPreselectPassedImages:YES];
//... other customization
[printIO open];
```

###### - setPassedImageFirstInPhotoSources
```Objective-C
/**
 Set passed in image to be first in row for all photo sources.
 */
- (void)setPassedImageFirstInPhotoSources:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO setPassedImageFirstInPhotoSources:YES];
//... other customization
[printIO open];
```

###### - setInstagramClientID:redirectUrl
```Objective-C
/**
 Set Instagram credentials. By default, PrintIO credentials are used.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-instagram-credentials
 */
- (void)setInstagramClientID:(NSString *)clientId
                 redirectUrl:(NSString *)redirectUrl;
```
**Sample code:**
```Objective-C
[printIO setInstagramClientID:@"client_id" redirectUrl:@"redirect_url"];
//... other customization
[printIO open];
```
###### - setInstagramAccessToken
```Objective-C
/**
 Set access token for Instagram
 
 @param accessToken Valid access token for session
 */
- (void)setInstagramAccessToken:(NSString *)accessToken;
```
**Sample code:**
```Objective-C
[printIO setInstagramAccessToken:@"access_token"];
//... other customization
[printIO open];
```
###### - setFlickrKey:secretKey:redirectUrl
```Objective-C
/**
 Set Flickr credentials. By default, PrintIO credentials are used.
 */
- (void)setFlickrKey:(NSString *)key
           secretKey:(NSString *)secretKey
         redirectUrl:(NSString *)redirectUrl;
```
**Sample code:**
```Objective-C
[printIO setFlickrKey:@"flick_key" secretKey:@"secret_key" redirectUrl:@"redirect_url"];
//... other customization
[printIO open];
```
###### - setDropboxKey:redirectUrl
```Objective-C
/**
 Set Dropbox credentials. By default, PrintIO credentials are used.
 */
- (void)setDropboxKey:(NSString *)key
          redirectUrl:(NSString *)redirectUrl;
```
**Sample code:**
```Objective-C
[printIO setDropboxKey:@"dropbox_key" redirectUrl:@"redirect_url"];
//... other customization
[printIO open];
```
###### - setFacebookAppId:redirectUrl
```Objective-C
/**
 Set Facebook credentials. By default, PrintIO credentials are used.
 */
- (void)setFacebookAppId:(NSString *)appId
             redirectUrl:(NSString *)redirectUrl;
```
**Sample code:**
```Objective-C
[printIO setFacebookAppId:@"fb_app_id" redirectUrl:@"redirect_url"];
//... other customization
[printIO open];
```
###### - setFacebookAccessToken
```Objective-C
/**
 Set access token for Facebook

 @param aToken Valid access token for session
 */
- (void)setFacebookAccessToken:(NSString *)aToken;
```
**Sample code:**
```Objective-C
[printIO setFacebookAccessToken:@"access_token"];
//... other customization
[printIO open];
```

###### - numberOfItemsInShoppingCart
```Objective-C
/**
 Get number of items in shopping cart
 */
+ (NSInteger)numberOfItemsInShoppingCart;
```
**Sample code:**
```Objective-C
int numberOfItems = [PrintIO numberOfItemsInShoppingCart];
```
###### - setPromoCode
```Objective-C
/**
 Set promo code to get discount

 @param promoCode Promo code
 */
- (void)setPromoCode:(NSString *)promoCode;
```
**Sample code:**
```Objective-C
[print setPromoCode:@"12345"];
//... other customization
[printIO open];
```

###### - closeWidgetFromShoppingCart
```Objective-C
/**
 Close widget when tap on Back button in Shopping Cart screen
 
 @param Default value is NO
 */
- (void)closeWidgetFromShoppingCart:(BOOL)set;
```
**Sample code:**
```Objective-C
[print closeWidgetFromShoppingCart:YES];
//... other customization
[printIO open];
```
###### + clearShoppingCart
```Objective-C
/**
 Remove all items(products) from Shopping cart
 */
+ (void)clearShoppingCart;
```
**Sample code:**
```Objective-C
[PrintIO clearShoppingCart];
```
###### + shoppingCartJSONContent
```Objective-C
/**
 Get shopping cart JSON content
 */
+(NSString *)shoppingCartJSONContent;
```
**Sample code:**
```Objective-C
NSString *jsonString = [PrintIO shoppingCartJSONContent];
```
###### + setShoppingCartContent
```Objective-C
/**
 Set the content of shopping cart. 
 Pass single space to clear cart (" ")
 
 @param jsonString JSON content string
 */
+(void)setShoppingCartContent:(NSString *)jsonString;
```
**Sample code:**
```Objective-C
[PrintIO setShoppingCartContent:jsonString];
```
### Screen 'Payment Options'
###### - setPayeeName
```Objective-C
/**
 Set payee name for order processing

 @param payeeName Payee name
 */
- (void)setPayeeName:(NSString *)payeeName;
```
**Sample code:**
```Objective-C
[printIO setPayeeName:@"Your app name"];
//... other customization
[printIO open];
```
###### - setTermsAndConditionsURL
```Objective-C
/**
 Set url for Terms and Conditions

 @params url If not set, this option will be hidden
 */
- (void)setTermsAndConditionsURL:(NSURL *)url;
```
**Sample code:**
```Objective-C
[printIO setTermsAndConditionsURL:[NSURL URLWithString:@"http://yourapp.com/terms.html"]];
//... other customization
[printIO open];
```
###### - setPaymentOptions
```Objective-C
/**
 Set Payment option
 
 @param paymentOptions:
 PaymentOptionPayPal
 PaymentOptionCreditCard
 PaymentOptionAll
 */
- (void)setPaymentOptions:(PaymentOptions)paymentOptions;
```
**Sample code:**
```Objective-C
[printIO setPaymentOptions:PaymentOptionAll];
//... other customization
[printIO open];
```
###### - setPayPalStagingClientId:productionClientId
```Objective-C
/**
 Set PayPal's client ids, for both modes, staging and production. Default values are
 client ids from PrintIO
 https://developer.paypal.com/developer/applications/create
 
 @param sClientId Client ID for staging mode
 @param pClientId Client ID for production mode
 */
- (void)setPayPalStagingClientId:(NSString *)sClientId
              productionClientId:(NSString *)pClientId;
```
**Sample code:**
```Objective-C
[printIO setPayPalStagingClientId:@"s_client_id" productionClientId:@"p_client_id"];
//... other customization
[printIO open];
```
###### - setBraintreeStagingEncryptionKey:productionEncryptionKey
```Objective-C
/**
 Set Braintree encryption key for staging and production mode. By default, keys from PrintIO will be used
 https://www.braintreepayments.com/create-merchant
 
 For encryption key use CSE Key from API keys you get
 
 @param sEncKey Encryption(CSE) key for staging mode
 @param pEncKey Encryption(CSE) key for production mode
 */
- (void)setBraintreeStagingEncryptionKey:(NSString *)sEncKey
                 productionEncryptionKey:(NSString *)pEncKey;
```
**Sample code:**
```Objective-C
[printIO setBraintreeStagingEncryptionKey:@"s_enc_key" productionEncryptionKey:@"p_enc_key"];
//... other customization
[printIO open];
```
###### - setApplePayMerchantIdentifier
```Objective-C
/**
 Set ApplePay merchant identifier
 
 @param merchantIdentifier Merchant Identifier
 */
-(void)setApplePayMerchantIdentifier:(NSString *)merchantIdentifier;
```
**Sample code:**
```Objective-C
[printIO setApplePayMerchantIdentifier:@"your.merchantid"];
//... other customization
[printIO open];
```

###### + clearShippingAddresses
```Objective-C
/**
 Remove all saved shipping addresses
 */
+ (void)clearShippingAddresses;
```
**Sample code:**
```Objective-C
[PrintIO clearShippingAddresses];
```
###### + clearBillingAddresses
```Objective-C
/**
 Remove all saved billing addresses
 */
+ (void)clearBillingAddresses;
```
**Sample code:**
```Objective-C
[PrintIO clearBillingAddresses];
```


###### - setPartnerSourceId
```Objective-C
/**
 Set order's partner source id 
 
 @param sourceId Partner source id
 */
-(void)setPartnerSourceId:(NSString *)sourceId;
```
**Sample code:**
```Objective-C
[printIO setPartnerSourceId:kPartnerSourceId];
//... other customization
[printIO open];
```
###### - setOrderMeta
```Objective-C
/**
 Set order's meta data
 
 @param meta Meta data (key, value)
 */
-(void)setOrderMeta:(NSDictionary *)meta;
```
**Sample code:**
```Objective-C
[printIO setOrderMeta:@{@"key":@"value"}];
//... other customization
[printIO open];
```
### Google Analytics 
###### - setTrackingIDForGoogleAnalytics
```Objective-C
/**
 Set tracking id for Google Analytics. If tracking id is not provided,
 analytics are disabled.

 @param trackingID Tracking ID provided by Google
 */
- (void)setTrackingIDForGoogleAnalytics:(NSString *)trackingID;
```
**Sample code:**
```Objective-C
[printIO setTrackingIDForGoogleAnalytics:@"tracking_id"];
//... other customization
[printIO open];
```

