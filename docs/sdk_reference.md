### Initialization and opening

```Objective-C
/**
 Init PrintIO widget. To get view controller, use '[self.printIO viewController]'
 
 @param recipeId Recipe Id provided by Gooten
 @param isInTestMode Default value is NO
 */
- (id)initWithRecipeId:(NSString *)recipeId isInTestMode:(BOOL)isInTestMode;
```

```Objective-C
/**
 Init PrintIO widget with parent view controller.
 
 @param viewController Parent view controller. From this view controller, widget will open.
 @param recipeId Production recipeId provided by Gooten
 @param isInTestMode Default value is
 */
- (id)initWithViewController:(id)viewController recipeId:(NSString *)recipeId isInTestMode:(BOOL)isInTestMode;
```

```Objective-C
/**
 Use to place live orders in production mode, without payment verification
 
 @param testMode Default value is NO
 */
- (void)setIsInTestMode:(BOOL)testMode;
```

```Objective-C
/**
 Run SDK in staging environment
 
 @param recipeID Staging recipeID provided by Gooten
 */
- (void)useStagingModeWithRecipeID:(NSString *)recipeID;
```

```Objective-C
/**
 Open widget by presenting view from bottom
 */
- (void)open;
```

```Objective-C
/**
 Open widget with option
 
 @param option Set the options
 GTPresentFromLeft,
 GTPresentFromRight,
 GTPresentFromBottom,
 GTPresentToCart
 */
- (void)openWithOption:(int)option;
```

```Objective-C
/**
 Present widget from view controller with option
 
 @param option Set the options
 GTPresentFromLeft,
 GTPresentFromRight,
 GTPresentFromBottom,
 GTPresentToCart
 */
- (void)presentFromViewController:(UIViewController *)viewController withOption:(int)option;
```

```Objective-C
/**
 Close widget
 */
- (void)close:(NSInteger)flag;
- (void)closeWithCompletionHandler:(void(^)(void))completionHandler;
```

```Objective-C
/**
 Returns PrintIO view controller. Set all options before calling this method
 */
- (UIViewController *)viewController;
```

```Objective-C
/**
 Root controller flag. Set to YES if the PrintIO widget is the root controller of your application.
 
 @param isRootController Root controller flag.
 */
- (void)setIsRootController:(BOOL)isRootController;

- (void)setQAEnvironment:(BOOL)set;
```

```Objective-C
/**
 Jumps directly to product.
 
 @param productId Product identifier can be found in ProductIds.h and starts with PRODUCT_
 */
- (void)goToProductId:(int)productId;
```

```Objective-C
/**
 Close widget when tap on Back button in Shopping Cart screen
 
 @param Default value is NO
 */
- (void)closeWidgetFromShoppingCart:(BOOL)set;
```

```Objective-C
/**
 Show all products and product variants
 
 @param set Default value is NO
 */
- (void)setUseDefaultProductSettings:(BOOL)set;
```

```Objective-C
#pragma mark - Navigation Bar

/**
 Set status bar style and visibility.
 
 @param dark Default value is NO
 @param hidden Default value is NO
 */
- (void)setStatusBarDark:(BOOL)dark hidden:(BOOL)hidden;
```

```Objective-C
/**
 Change navigation bar background color, including title text color
 
 @param bcgColor Default color is white
 @param titleColor Default color is black
 */
- (void)setNavigationBarBackgroundColor:(UIColor *)bcgColor titleColor:(UIColor *)titleColor;
```
### Photo Sources

```Objective-C
/**
 Set visible photo sources:
 
 GTPSFacebook,
 GTPSInstagram,
 GTPSGooglePhotos,
 GTPSFlickr,
 GTPSDropBox,
 GTPSPhone,
 GTPSPassedPhotos,
 GTPSCustom,
 
 @param sources
 
 Example how to set only Facebook and Instagram photo sources visible:
 [self.printIO setVisiblePhotoSources:@[@(GTPSFacebook), @(GTPSInstagram)]];
 */
- (void)setVisiblePhotoSources:(NSArray *)sources;
```

```Objective-C
/**
 Set custom photo sources
 
 @param customPhotoSources Array of id<PhotoSource> objects 
 
 */
- (void)setCustomPhotoSources:(NSArray*)customPhotoSources;
```

```Objective-C
/**
 Default Photo Source which will be opened when user lands to Photo Selection screen
 */
- (void)setDefaultPhotoSource:(GTPhotoSource)pSource;
```

```Objective-C
/*
 A flag that determines whether passed images are preselected on the 'Select Photos' screen.
 */
- (void)setPreselectPassedImages:(BOOL)shouldPreselectPassedImages;
```

```Objective-C
/**
 Pass in images URLs or UIImage objects.
 
 @param images Array of image urls (NSString), UIImage objects and PIOPassedImage objects
 
 Use in combination with [self.printIO setVisiblePhotoSources:@[@(GTPSPassedPhotos)]];
 */
- (void)setImages:(NSArray *)images;
```

```Objective-C
/**
 Set passed in image to be first in row for all photo sources.
 */
- (void)setPassedImageFirstInPhotoSources:(BOOL)set;
```

```Objective-C
/**
 Set Instagram credentials. By default, PrintIO credentials are used.
 */
- (void)setInstagramClientID:(NSString *)clientId redirectUrl:(NSString *)redirectUrl;
```

```Objective-C
/**
 Set access token for Instagram
 
 @param accessToken Valid access token for session
 */
- (void)setInstagramAccessToken:(NSString *)accessToken;
```

```Objective-C
/**
 Set Flickr credentials. By default, PrintIO credentials are used.
 */
- (void)setFlickrKey:(NSString *)key secretKey:(NSString *)secretKey redirectUrl:(NSString *)redirectUrl;
```
/**
 Set Dropbox credentials. By default, PrintIO credentials are used.
 */
- (void)setDropboxKey:(NSString *)key secret:(NSString *)secret redirectUrl:(NSString *)redirectUrl;
```

```Objective-C
/**
 Set Facebook credentials. By default, PrintIO credentials are used.
 */
- (void)setFacebookAppId:(NSString *)appId redirectUrl:(NSString *)redirectUrl;
```

```Objective-C
/**
 Set access token for Facebook
 
 @param aToken Valid access token for session
 */
- (void)setFacebookAccessToken:(NSString *)aToken;
```

```Objective-C
/**
 Set Google Photos client ID and secret key. 
 
 @param clientID Client ID. Default is PrintIO
 @param secret Secret key. Default is PrintIO
 */
- (void)setGooglePhotosClientID:(NSString *)clientID secret:(NSString *)secret redirectURI:(NSString *)redirectURI;
```
### Partner settings

```Objective-C
/**
 Set country code
 
 @param countryCode Country code
 */
- (void)setCountryCode:(NSString *)countryCode;
```

```Objective-C
/**
 Set currency code
 
 @param currencyCode Currency code
 */
- (void)setCurrencyCode:(NSString *)currencyCode;
```

```Objective-C
/**
 Set language code
 
 @param languageCode Language code
 */
- (void)setLanguageCode:(NSString *)languageCode;
```

```Objective-C
/**
 Set order's partner source id 
 
 @param sourceId Partner source id
 */
- (void)setPartnerSourceId:(NSString *)sourceId;
```

```Objective-C
/**
 Set order's meta data
 
 @param meta Meta data (key, value)
 */
- (void)setOrderMeta:(NSDictionary *)meta;
```

```Objective-C
/**
 Set payee name for order processing

 @param payeeName Payee name
 */
- (void)setPayeeName:(NSString *)payeeName;
```

```Objective-C
/**
 Provide text for "How It Works" screen
 
 @params text Text
 */
- (void)setHowItWorksText:(NSString *)text;
```

```Objective-C
/**
 Set email for "Contact Us" button
 
 @param email Customer support email
 */
- (void)setContactUsEmail:(NSString *)email;
```

### Analytics

```Objective-C
/**
 Set tracking id for Google Analytics. If tracking id is not provided,
 analytics are disabled.
 
 @param trackingID Tracking ID provided by Google
 */
- (void)setTrackingIDForGoogleAnalytics:(NSString *)trackingID;
```

```Objective-C
/**
 Turn off logs
 
 @param set Default value is NO
 */
- (void)turnOffLogs:(BOOL)set;
```
### Payment settings

```Objective-C
/**
 Set Payment option
 
 @param paymentOptions:
 GTPayPalPayment
 GTPaymentCreditCard
 GTPaymentApplePay
 GTPaymentAll
 */
- (void)setPaymentOptions:(GTPaymentOptions)paymentOptions;
```

```Objective-C
/**
 Set PayPal's keys for sandbox and live mode in format below:
 
 @{@"live_client_id" : LIVE_CLIENT_ID,
   @"live_secret_key" : LIVE_SECRET_KEY,
   @"live_return_url" : LIVE_RETURN_URL,
   @"sandbox_client_id" : SANDBOX_CLIENT_ID,
   @"sandbox_secret_key" : SANDBOX_SECRET_KEY,
   @"sandbox_return_url" : SANDBOX_RETURN_URL
  }
 */
- (void)setPayPalKeys:(NSDictionary *)keys;
```

```Objective-C
/**
 Set Braintree encryption keys. By default, keys from Gooten will be used
 https://www.braintreepayments.com/create-merchant
 
 For encryption key use CSE Key from API keys you get
 
 @param sEncKey Encryption(CSE) key for staging mode
 @param pEncKey Encryption(CSE) key for production mode
 */
- (void)setBraintreeStagingEncryptionKey:(NSString *)sEncKey productionEncryptionKey:(NSString *)pEncKey;
```

```Objective-C
/**
 Set ApplePay merchant identifier
 
 @param merchantIdentifier Merchant Identifier
 */
- (void)setApplePayMerchantIdentifier:(NSString *)merchantIdentifier;
```
### Utils

```Objective-C
/**
 Set custom fonts .
 
 @param fonts Array of strings, font file names, with exact order ("light", "regural", "medium", "bold").
 
 Example: [@"font_light.otf", @"font_regular.otf", @"font_medium.otf", @"font_bold.otf"].
 
 Array must have four items. Fonts can be duplicated.
 */
-(void)setFonts:(NSArray *)fonts;
```

```Objective-C
/**
 Set promo code to get discount
 
 @param promoCode Promo code
 */
- (void)setPromoCode:(NSString *)promoCode;
```

```Objective-C
/**
 Get number of items in shopping cart
 */
+ (NSInteger)numberOfItemsInShoppingCart;
```

```Objective-C
/**
 Delete all items(products) from Shopping cart
 */
+ (void)clearShoppingCart;
```

```Objective-C
/**
 Get shopping cart JSON content
 */
+ (NSString *)shoppingCartJSONContent;
```

```Objective-C
/**
 Remove all saved shipping addresses
 */
+ (void)clearShippingAddresses;
```

```Objective-C
/**
 Remove all saved billing addresses
 */
+ (void)clearBillingAddresses;
```

```Objective-C
/**
 Set the content of shopping cart
 
 @param jsonString JSON content string
 */
+ (void)setShoppingCartContent:(NSString *)jsonString;
```

```Objective-C
/**
 Default value is NO
 */
- (void)setAppMode:(BOOL)set;
```

```Objective-C
/**
 Get sdk version 
 */
- (void)getVersion:(void(^)(PIOVersion *version))success;
```

```Objective-C
/**
 Use this for app mode
 */
- (void)appDidFinishLaunching;
```

