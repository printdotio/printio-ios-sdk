Developer SDK Customization Reference
=====================================

### Sections:

   - [Initialization](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#initialization)
      - [-initWithEnvironment](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--initwithenvironment)
      - [-initWithViewController](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--initwithviewcontroller)
   - [Opening and closing](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#opening-and-closing)
      - [-open](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--open)
      - [-openWithOption](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--openwithoption)
      - [-presentFromViewController](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--presentfromviewcontroller)
      - [-viewController](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--viewcontroller)
      - [-close](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--close)
   - [Country, Currency and Language]()
   - [Navigation bar](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#navigation-bar)
      - [-navigationBarColor:titleColor:leftButtonBackgroundColor:rightButtonBackgroundColor:titleButtonIcon](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--navigationbarcolortitlecolorleftbuttonbackgroundcolorrightbuttonbackgroundcolortitlebuttonicon)
      - [-setNavigationBarBackground](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackground)
      - [-setNavigationBarBackgroundForCustomizeProduct](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackgroundforcustomizeproduct)
      - [-setIconForBackButton](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforbackbutton)
      - [-setStatusBarDark:hidden](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setstatusbardarkhidden)
      - [-setThreeButtonsNavigationBarSytle](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setthreebuttonsnavigationbarsytle)
      - [-setNavigationBarSaveToCartBackgroundColor:titleColor:buttonBackgroundColor:buttonTitleColor](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarsavetocartbackgroundcolortitlecolorbuttonbackgroundcolorbuttontitlecolor)
   - [Side menu](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#side-menu)
      - [-useSideMenuWithMenuIcon:background](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--usesidemenuwithmenuiconbackground)
      - [-sideMenuAddButtons](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuaddbuttons)
      - [-sideMenuHideOptionsHeader](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideoptionsheader)
      - [-sideMenuHideAccountsHeader](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideaccountsheader)
      - [-sideMenuHideInfoHeader](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideinfoheader)
      - [-sideMenuShowOptionsAsList](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenushowoptionsaslist)
   - [Screen 'Choose Country'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-choose-country)
      - [-setTitleForChooseCountryScreen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforchoosecountryscreen)
      - [-hideSearchIconInChooseCountryScreen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidesearchiconinchoosecountryscreen)
      - [-setPlaceholderTextForSearchBarInChooseCountryScreen:hideMagnifyingGlass](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setplaceholdertextforsearchbarinchoosecountryscreenhidemagnifyingglass)
      - [-setNavigationBarBackgroundColorForChooseCountryScreen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackgroundcolorforchoosecountryscreen)
   - [Screen 'Products'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-products)
      - [-hideCategoriesInFeaturedProducts](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidecategoriesinfeaturedproducts)
      - [-hideComingSoonProducts](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidecomingsoonproducts)
      - [-showCountrySelectionOnScreen:backgroundColor](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showcountryselectiononscreenbackgroundcolor)
      - [-setTitleForFeaturedProductsScreen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforfeaturedproductsscreen)
      - [-setFeaturedProductsLeftLabelTextColor:rightLabelTextColor](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfeaturedproductsleftlabeltextcolorrightlabeltextcolor)
      - [-setFeaturedProductsBackgroungImage](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfeaturedproductsbackgroungimage)
   - [Screen 'Product Details'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-product-details)
      - [-productDetailsShowTitleBelowNavBar](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--productdetailsshowtitlebelownavbar)
      - [-productDetailsShowMenuBtnInNavBar](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--productdetailsshowmenubtninnavbar)
   - [Photo sources](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#photo-sources)
      - [-setAvailablePhotoSources](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setavailablephotosources)
      - [-setDefaultPhotoSource:albumId](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdefaultphotosourcealbumid)
      - [-setImages](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setimages)
      - [-disablePhotoSourcesWhenImagesArePassedIn](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablephotosourceswhenimagesarepassedin)
      - [-disablePhotoSourcesForOnePhotoTemplate](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablephotosourcesforonephototemplate)
      - [-setPassedImageFirstInPhotoSources](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpassedimagefirstinphotosources)
      - [-setPassedImageAsThumbForOnePhotoTemplate](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpassedimageasthumbforonephototemplate)
      - [-hideIconForUploadInstructions](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideiconforuploadinstructions)
      - [-setInstagramClientID:redirectUrl](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setinstagramclientidredirecturl)
      - [-setInstagramAccessToken](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setinstagramaccesstoken)
      - [-setFlickrKey:secretKey:redirectUrl](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setflickrkeysecretkeyredirecturl)
      - [-setDropboxKey:redirectUrl](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdropboxkeyredirecturl)
      - [-setFacebookAppId:redirectUrl](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfacebookappidredirecturl)
      - [-setFacebookAccessToken](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfacebookaccesstoken)
      - [-setPhotobucketUsername:password](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setphotobucketusernamepassword)
      - [-setPhotobucketAccessToken:userName:baseURL](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setphotobucketaccesstokenusernamebaseurl)
      - [-setTitleForPhotoSourcesScreen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforphotosourcesscreen)
   - [Screen 'Customize/Edit Product'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-customizeedit-product)
      - [-showToolbarInCustomizeProduct:backgroundImage](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showtoolbarincustomizeproductbackgroundimage)
      - [-hideImagesListInCustomizeProduct](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideimageslistincustomizeproduct)
      - [-setPhotoArrangement](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setphotoarrangement)
      - [-setIconForAddPhotosButton](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforaddphotosbutton)
      - [-setIconForHelpButtonInCustomizeProduct:visible](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforhelpbuttonincustomizeproductvisible)
      - [-setIconForSaveButtonInCustomizeProduct](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforsavebuttonincustomizeproduct)
      - [-setPopUpWithImage:text:textColor](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpopupwithimagetexttextcolor)
      - [-setDoubleTapBalloonVisibilityTime](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdoubletapballoonvisibilitytime)
      - [-showHelpDialogWithImage](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showhelpdialogwithimage)
      - [-disablePreviewScreen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablepreviewscreen)
      - [-setSamePhotoOnFrontAndBackSideOfProduct](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setsamephotoonfrontandbacksideofproduct)
   - [Screen 'Image Editor'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-image-editor)
      - [-imageEditorShowButtons](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--imageeditorshowbuttons)
      - [-hideWatchVideoButton](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidewatchvideobutton)
   - [Screen 'Shopping Cart'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-shopping-cart)
      - [-setIconForShoppingCart:withNumberOfProducts:labelPosition:textColor](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartwithnumberofproductslabelpositiontextcolor)
      - [-setIconForShoppingCart:withNumberOfProducts:labelPosition:circleColor:textColor](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartwithnumberofproductslabelpositioncirclecolortextcolor)
      - [-removePlusFromAddMoreProductsButton](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--removeplusfromaddmoreproductsbutton)
      - [-setTitleForShoppingCart](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforshoppingcart)
      - [-setShowsAddMoreProductsInShoppingCart](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setshowsaddmoreproductsinshoppingcart)
      - [-customizeAddMoreProductButton](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--customizeaddmoreproductbutton)
      - [-setIconForShoppingCartBackButton](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartbackbutton)
      - [-numberOfItemsInShoppingCart](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--numberofitemsinshoppingcart)
      - [-hideEditButtonInShoppingCart](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideeditbuttoninshoppingcart)
      - [-setPromoCode](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpromocode)
   - [Screen 'Payment Options'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-payment-options)
      - [-removeLogoFromPaymentScreen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--removelogofrompaymentscreen)
      


### Initialization

######- initWithEnvironment
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
######- initWithViewController
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

######- open
``` Objective-C
/**
 Open widget by presenting view from bottom
 */
- (void)open;
```
######- openWithOption
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
######- presentFromViewController
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
######- viewController
``` Objective-C
/**
 Returns PrintIO view controller. Set all options before calling this method
 */
- (id)viewController;
```
######- close
``` Objective-C
/**
 Close widget
 */
- (void)close:(NSInteger)flag;
```
###Country, Currency and Language
######- setCountryCode
```Objective-C
/**
 Set country code

 @param countryCode Country code
 */
- (void)setCountryCode:(NSString *)countryCode;
```
######- setCurrencyCode
```Objective-C
 Set currency code

 @param currencyCode Currency code
 */
- (void)setCurrencyCode:(NSString *)currencyCode;
```
######- setLanguageCode
```Objective-C
/**
 Set language code

 @param languageCode Language code
 */
- (void)setLanguageCode:(NSString *)languageCode;
```
### Navigation bar
######- navigationBarColor:titleColor:leftButtonBackgroundColor:rightButtonBackgroundColor:titleButtonIcon
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
######- setNavigationBarBackground
```Objective-C
/**
 Set background image on Navigation Bar
 
 @param imagePath Path to image file.
 */
- (void)setNavigationBarBackground:(NSString *)imagePath;
```
######- setNavigationBarBackgroundForCustomizeProduct
```Objective-C
/**
 Set navigation bar background image on 'Customize Product' screen
 
 @param imagePath Path to image file.
 */
- (void)setNavigationBarBackgroundForCustomizeProduct:(NSString *)imagePath;
```
######- setIconForBackButton
```Objective-C
/**
 Set icon for back button.

 @param path Path to image file.
 */
- (void)setIconForBackButton:(NSString *)iconPath;
```
######- setStatusBarDark:hidden
```Objective-C
/**
 Set status bar style and visibility.

 @param dark Default value is NO
 @param hidden Default value is NO
 */
- (void)setStatusBarDark:(BOOL)dark
                  hidden:(BOOL)hidden;
```
######- setThreeButtonsNavigationBarSytle
```Objective-C
/**
 Set three buttons Back, Menu and Cart button in navigation bar for Featured Products screen

 @param set Default value is NO
 */
- (void)setThreeButtonsNavigationBarSytle:(BOOL)set;
```
######- setNavigationBarSaveToCartBackgroundColor:titleColor:buttonBackgroundColor:buttonTitleColor
```Objective-C
/**
 Set colors scheme for navigation bar with "Save to" shopping cart button
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#save-to-shopping-cart-button
 
 @param bcgColor Navigation bar background color
 @param titleColor Navigation bar title color
 @param btnBcgColor Button's background color
 @param btnTitleColor Button's title color
 */
- (void)setNavigationBarSaveToCartBackgroundColor:(UIColor *)bcgColor
                                       titleColor:(UIColor *)titleColor
                            buttonBackgroundColor:(UIColor *)btnBcgColor
                                 buttonTitleColor:(UIColor *)btnTitleColor;
```
###Side menu
######- useSideMenuWithMenuIcon:background
```Objective-C
/**
 Use Side Menu with options:

 @param mIconPath Path to image for Menu icon. If nil, default icon will be used.
 @param bcgColor Background color for Side Menu. If nil, default will be used.
 */
- (void)useSideMenuWithMenuIcon:(NSString *)mIconPath
                     background:(UIColor *)bcgColor;
```
######- sideMenuAddButtons
```Objective-C
/**
 Set which options to use in side menu

 @param buttons Array of PIOSideMenuButton objects of types:
 PIO_SM_EXIT_BUTTON,
 PIO_SM_SEARCH_BAR,
 PIO_SM_PRODUCTS,
 PIO_SM_FEATURED_PRODUCTS,
 PIO_SM_VIEW_CART,
 PIO_SM_SHARE_WITH_IMAGE,
 PIO_SM_EMAIL_SUPPORT
 PIO_SM_HELP
 PIO_SM_CHANGE_CURRENCY,
 PIO_SM_CHANGE_COUNTRY,
 PIO_SM_CHANGE_LANGUAGE
 
 @param optionsTitle Title for this section
 @param oTitleColor Title color
 @param optionsColor Background color for this section
 @param accountsTitle Title for this section
 @param aTitleColor Title color
 @param accountsColor Background color for this section
 
 @param info Array of PIOSideMenuButton objects of types:
 PIO_SM_PRICING_CHART,
 PIO_SM_SHARE_APP,
 PIO_SM_LIKE_US_FB,
 PIO_SM_RATE_APP,
 PIO_SM_ABOUT,
 PIO_SM_HOW_IT_WORKS,
 PIO_SM_PAST_ORDERS
 
 @param infoTitle Title for this section
 @param infoTitleColor Title color
 @param infoColor Background color for this section
 @param backgroundImageForButtons Path to file
 
 */
- (void)sideMenuAddButtons:(NSArray *)buttons
                   options:(NSArray *)options
              optionsTitle:(NSString *)optionsTitle
         optionsTitleColor:(UIColor *)oTitleColor
              optionsColor:(UIColor *)optionsColor
             accountsTitle:(NSString *)accountsTitle
        accountsTitleColor:(UIColor *)aTitleColor
             accountsColor:(UIColor *)accountsColor
                      info:(NSArray *)info
                 infoTitle:(NSString *)infoTitle
            infoTitleColor:(UIColor *)iTitleColor
                 infoColor:(UIColor *)infoColor
 backgroundImageForButtons:(NSString *)path;
```
######- sideMenuHideOptionsHeader
```Objective-C
/**
 Hide 'Options' header in Side Menu
 */
- (void)sideMenuHideOptionsHeader:(BOOL)set;
```
######- sideMenuHideAccountsHeader
```Objective-C
/**
 Hide 'Accounts' header in Side Menu
 */
- (void)sideMenuHideAccountsHeader:(BOOL)set;
```
######- sideMenuHideInfoHeader
```Objective-C
/**
 Hide 'Info' header in Side Menu
 */
- (void)sideMenuHideInfoHeader:(BOOL)set;
```
######- sideMenuShowOptionsAsList
```Objective-C
/**
 Show 'Options' section as a list

 @param set Default value is NO
 */
- (void)sideMenuShowOptionsAsList:(BOOL)set;
```
######- slideSideMenuFromRight
```Objective-C
/**
 Slide side menu from right. Default value is NO.

 @param set Default value is NO.
 */
- (void)slideSideMenuFromRight:(BOOL)set;
```
######- setShareText:additionalText
```Objective-C
/**
 This is option from Side Menu, in order to use it, Side Menu needs to be enabled first.

 @param shareText Text that will be used for sharing. May contains link also.
 @param additionalText Text used when sharing with image.
 */
- (void)setShareText:(NSString *)shareText additionalText:(NSString *)additionalText;
```
######- hidePhotoSourcesInSideMenu
```Objective-C
/**
 Hide photo sources section in Side Menu

 @param set Default value is NO
 */
- (void)hidePhotoSourcesInSideMenu:(BOOL)set;
```
######- sideMenuBackgroungImage
```Objective-C
/**
 Set background image on Side Menu

 @param path Image path
 */
- (void)sideMenuBackgroungImage:(NSString *)path;
```
###Screen 'Choose Country'
######- setTitleForChooseCountryScreen
```Objective-C
/**
 Change title on 'Choose Country' screen

 @param title New title
 */
- (void)setTitleForChooseCountryScreen:(NSString *)title;
```
######- hideSearchIconInChooseCountryScreen
```Objective-C
/**
 Hide search icon from navigation bar on 'Choose Country' screen

 @param set Default value is NO
 */
- (void)hideSearchIconInChooseCountryScreen:(BOOL)set;
```
######- setPlaceholderTextForSearchBarInChooseCountryScreen:hideMagnifyingGlass
```Objective-C
/**
 Change placeholder text in search bar, and set magnifying glass vissible or hidden

 @param text Placeholder text
 @param set Default value is NO
 */
- (void)setPlaceholderTextForSearchBarInChooseCountryScreen:(NSString *)text
                                        hideMagnifyingGlass:(BOOL)set;
```
######- setNavigationBarBackgroundColorForChooseCountryScreen
```Objective-C
/**
 Change the color of navigation bar in 'Choose Country' screen

 @param color Color to set
 */
- (void)setNavigationBarBackgroundColorForChooseCountryScreen:(UIColor *)color;
```
###Screen 'Products'
######- hideCategoriesInFeaturedProducts
```Objective-C

/**
 Hide category+search view on Featured Products screen. Default value is NO;

 */
- (void)hideCategoriesInFeaturedProducts:(BOOL)hide;
```
######- hideComingSoonProducts
```Objective-C
/**
 Hide coming soon products from product's list
 
 @param hide Default value is NO
 */
- (void)hideComingSoonProducts:(BOOL)hide;
```
######- showCountrySelectionOnScreen:backgroundColor
```Objective-C
/**
 Show country selection. By default, country selection is always shown on Featured/All products

 @param screen Screen:
 
 PIO_SCREEN_FEATURED_PRODUCTS
 PIO_SCREEN_PRODUCT_DETAILS
 PIO_SCREEN_OPTIONS
 */
- (void)showCountrySelectionOnScreen:(PIOScreens)screen
                     backgroundColor:(UIColor *)backgroundColor;
```
######- setTitleForFeaturedProductsScreen
```Objective-C
/**
 Change title on Featured Products screen

 @param title New title
 */
- (void)setTitleForFeaturedProductsScreen:(NSString *)title;
```
######- setFeaturedProductsLeftLabelTextColor:rightLabelTextColor
```Objective-C
/**
 Change label's color on items in list on Featured Products screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#change-labels-color-on-items-in-list-on-featured-products-screen
 
 @param lColor Text color for left label
 @param rColor Text color for right label
 */
- (void)setFeaturedProductsLeftLabelTextColor:(UIColor *)lColor
                          rightLabelTextColor:(UIColor *)rColor;
```
######- setFeaturedProductsBackgroungImage
```Objective-C
/**
 Set background image on Featured Products screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#featured-products-background-image
 
 @param imagePath Path to image file.
 */
- (void)setFeaturedProductsBackgroungImage:(NSString *)imagePath;
```
###Screen 'Product Details'
######- productDetailsShowTitleBelowNavBar
```Objective-C
/**
 Show title below navigation bar on Product Details screen

 @param set Default value is NO
 */
- (void)productDetailsShowTitleBelowNavBar:(BOOL)set;
```
######- productDetailsShowMenuBtnInNavBar
```Objective-C
/**
 Show menu button in navigation bar on Product Details screen

 @param set Default value is NO
 */
- (void)productDetailsShowMenuBtnInNavBar:(BOOL)set;
```
###Photo sources
######- setAvailablePhotoSources
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
 */
- (void)setAvailablePhotoSources:(NSArray *)photoSources;
```
######- setDefaultPhotoSource:albumId
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
 
 @param albumId Album id (Currently works only for PIO_SM_PHOTOBUCKET photo source)
 
 */
- (void)setDefaultPhotoSource:(PIOPhotoSources)pSource
                      albumId:(NSString *)albumId;
```
######- setImages
```Objective-C
/**
 Pass in images URLs or UIImage objects.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#pass-photo-to-sdk
 
 @param images Array of image urls or/and UIImage objects
 */
- (void)setImages:(NSArray *)images;
```
######- disablePhotoSourcesWhenImagesArePassedIn
```Objective-C
/**
 If user pass in images usinig method 'images', this method can disable photo sources,
 forcing user to use only passed photos.

 This method overrides method 'availablePhotoSources'
 */
- (void)disablePhotoSourcesWhenImagesArePassedIn:(BOOL)disable;
```
######- disablePhotoSourcesForOnePhotoTemplate
```Objective-C
/**
 Disable photo sources only if image is passed in, and user selects template with
 one photo.
 */
- (void)disablePhotoSourcesForOnePhotoTemplate:(BOOL)disable;
```
######- setPassedImageFirstInPhotoSources
```Objective-C
/**
 Set passed in image to be first in row for all photo sources.
 */
- (void)setPassedImageFirstInPhotoSources:(BOOL)set;
```
######- setPassedImageAsThumbForOnePhotoTemplate
```Objective-C
/**
 Set passed in image as thumbnail for templates with one photo.
 Right now, only supports Canvas Wraps and Framed Prints
 */
- (void)setPassedImageAsThumbForOnePhotoTemplate:(BOOL)set;
```
######- hideIconForUploadInstructions
```Objective-C
/**
 Hide icon for Upload Instructions text in Photo Sources screen. Default value is NO.
 */
- (void)hideIconForUploadInstructions:(BOOL)hide;
```
######- setInstagramClientID:redirectUrl
```Objective-C
/**
 Set Instagram credentials. By default, PrintIO credentials are used.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-instagram-credentials
 */
- (void)setInstagramClientID:(NSString *)clientId
                 redirectUrl:(NSString *)redirectUrl;
```
######- setInstagramAccessToken
```Objective-C
/**
 Set access token for Instagram
 
 @param accessToken Valid access token for session
 */
- (void)setInstagramAccessToken:(NSString *)accessToken;
```
######- setFlickrKey:secretKey:redirectUrl
```Objective-C
/**
 Set Flickr credentials. By default, PrintIO credentials are used.
 */
- (void)setFlickrKey:(NSString *)key
           secretKey:(NSString *)secretKey
         redirectUrl:(NSString *)redirectUrl;
```
######- setDropboxKey:redirectUrl
```Objective-C
/**
 Set Dropbox credentials. By default, PrintIO credentials are used.
 */
- (void)setDropboxKey:(NSString *)key
          redirectUrl:(NSString *)redirectUrl;
```
######- setFacebookAppId:redirectUrl
```Objective-C
/**
 Set Facebook credentials. By default, PrintIO credentials are used.
 */
- (void)setFacebookAppId:(NSString *)appId
             redirectUrl:(NSString *)redirectUrl;
```
######- setFacebookAccessToken
```Objective-C
/**
 Set access token for Facebook

 @param aToken Valid access token for session
 */
- (void)setFacebookAccessToken:(NSString *)aToken;
```
######- setPhotobucketUsername:password
```Objective-C
/**
 Set username and password for Photobucket (autologin)

 @param userName Username or email for Photobucket account
 @param password Password
 */
- (void)setPhotobucketUsername:(NSString *)userName
                      password:(NSString *)password;
```
######- setPhotobucketAccessToken:userName:baseURL
```Objective-C
/**
 Set access token for Photobucket

 @param aToken Valid access token for session
 @param username Username
 @param baseUrl Base url for Photobucket
 */
- (void)setPhotobucketAccessToken:(NSString *)aToken
                         userName:(NSString *)username
                          baseURL:(NSString *)baseUrl;
```
######- setTitleForPhotoSourcesScreen
```Objective-C
/**
 Change title for Photo Sources screen

 @param title New title
 */
- (void)setTitleForPhotoSourcesScreen:(NSString *)title;

```
###Screen 'Customize/Edit Product'
######- showToolbarInCustomizeProduct:backgroundImage
```Objective-C
/**
 Show/hide tab bar in Customize Product screen. Default value is YES

 @param show Set show/hide
 @param imagePath Path to image file.
 */
- (void)showToolbarInCustomizeProduct:(BOOL)show
                      backgroundImage:(NSString *)imagePath;
```
######- hideImagesListInCustomizeProduct
```Objective-C
/**
 Hide list with images in customization screen
 */
- (void)hideImagesListInCustomizeProduct:(BOOL)hide;
```
######- setPhotoArrangement
```Objective-C
/**
 Set photo(s) arrangement in Customize Product screen

 @param
 PIO_PHOTO_ARRANGEMENT_CHOOSE,
 PIO_PHOTO_ARRANGEMENT_AUTO,
 PIO_PHOTO_ARRANGEMENT_MANUAL
 
 */
- (void)setPhotoArrangement:(NSInteger)option;
```
######- setIconForAddPhotosButton
```Objective-C
/**
 Change image for "Add photos" button in Customize Product screen

 @param imagePath Path to image file.
 */
- (void)setIconForAddPhotosButton:(NSString *)imagePath;
```
######- setIconForHelpButtonInCustomizeProduct:visible
```Objective-C
/**
 Change icon for Help Button on Customize Product screen

 @param imagePath Path to image file.
 @param visible Default value is YES
 */
- (void)setIconForHelpButtonInCustomizeProduct:(NSString *)imagePath
                                       visible:(BOOL)visible;
```
######- setIconForSaveButtonInCustomizeProduct
```Objective-C
/**
 Change icon for 'Save' button on Customize Product screen

 @param imagePath Path to image file.
 */
- (void)setIconForSaveButtonInCustomizeProduct:(NSString *)imagePath;
```
######- setPopUpWithImage:text:textColor
```Objective-C
/**
 Set Pop up balloon in Customize Product screen

 @param path Path to background image.
 @param text Balloon text.
 @param textColor Text color.
 */
- (void)setPopUpWithImage:(NSString *)path text:(NSString *)text textColor:(UIColor *)textColor;
```
######- setDoubleTapBalloonVisibilityTime
```Objective-C
/**
 Set time of visibility for Double Tap ballon in Customize Product screen

 @param timeInSeconds Time in seconds. Set -1 if ballon should be visible all the time.
 Default time is 10 seconds.
 */
- (void)setDoubleTapBalloonVisibilityTime:(int)timeInSeconds;
```
######- showHelpDialogWithImage
```Objective-C
/**
 Show custom dialog for helping user how to edit a photo

 @param Path to image.
 */
- (void)showHelpDialogWithImage:(NSString *)imagePath;
```
######- disablePreviewScreen
```Objective-C
/**
 Disable Preview screen for product

 @param set Default value is NO
 */
- (void)disablePreviewScreen:(BOOL)set;
```
######- setSamePhotoOnFrontAndBackSideOfProduct
```Objective-C
/**
 Set same photo on front and back side of product.
 Currently it only supports PRODUCT_THROW_PILLOWS.

 @param productId Product id
 */
- (void)setSamePhotoOnFrontAndBackSideOfProduct:(NSInteger)productId;
```
###Screen 'Image Editor'
######- imageEditorShowButtons
```Objective-C
/**
 Set which buttons will be visible in Image Editor toolbar. By default, all buttons are visible.

 @param buttons Array of PIOButton objects of types:
 PIO_BUTTON_IMAGE_EDITOR_INFO,
 PIO_BUTTON_IMAGE_EDITOR_ROTATE,
 PIO_BUTTON_IMAGE_EDITOR_EDIT_TEXT,
 PIO_BUTTON_IMAGE_EDITOR_EFFECTS
 */
- (void)imageEditorShowButtons:(NSArray *)buttons;
```
######- hideWatchVideoButton
```Objective-C
/**
 Hide 'Watch Video' button on Customize Product screen
 
 @param hide Default value is NO
 */
- (void)hideWatchVideoButton:(BOOL)hide;

```
###Screen 'Shopping Cart'
######- setIconForShoppingCart:withNumberOfProducts:labelPosition:textColor
```Objective-C
/**
 Set custom icon for Shopping Cart
 
 @param path Path to image file.
 @param set Set to YES if image has red circle for number of items in cart.
 @param lPosition Position of label with number of products in cart
 @param tColor Text color of label with number of products in cart
 */
- (void)setIconForShoppingCart:(NSString *)path
          withNumberOfProducts:(BOOL)set
                 labelPosition:(CGPoint)lPosition
                     textColor:(UIColor *)tColor;
```
######- setIconForShoppingCart:withNumberOfProducts:labelPosition:circleColor:textColor
```Objective-C
/**
 Set custom icon for Shopping Cart

 @param path Path to image file.
 @param set Set to YES to show number of items in cart.
 @param labelPosition Position of label with number of products in cart
 @param circleColor Color of label background (circle background)
 @param textColor Text color of label with number of products in cart
 */
- (void)setIconForShoppingCart:(NSString *)path
          withNumberOfProducts:(BOOL)set
                 labelPosition:(CGPoint)labelPosition
                   circleColor:(UIColor *)circleColor
                     textColor:(UIColor *)textColor;
```
######- removePlusFromAddMoreProductsButton
```Objective-C
/**
 Remove plus sign from "Add more products" button. By default, sign is visible.
 */
- (void)removePlusFromAddMoreProductsButton:(BOOL)remove;
```
######- setTitleForShoppingCart
```Objective-C
/**
 Change title for "Shopping Cart" screen

 @param title New title
 */
- (void)setTitleForShoppingCart:(NSString *)title;
```
######- setShowsAddMoreProductsInShoppingCart
```Objective-C
/**
 Toggle 'Add more products' button on the Shopping Cart screen.

 @param showsButton Button visibility flag. Default is YES.
 */
- (void)setShowsAddMoreProductsInShoppingCart:(BOOL)showsAddButton;
```
######- customizeAddMoreProductButton
```Objective-C
/**
 Customize 'Add More Products' button

 @param title New title for button
 @param iconPath Path to icon file. Default is nil.
 */
- (void)customizeAddMoreProductButton:(NSString *)title icon:(NSString *)iconPath;
```
######- setIconForShoppingCartBackButton
```Objective-C
/**
 Change icon for Back button on Shopping Cart screen

 @param iconPath Path to icon file. Default is nil.
 */
- (void)setIconForShoppingCartBackButton:(NSString *)iconPath;
```
######- numberOfItemsInShoppingCart
```Objective-C
/**
 Get number of items in shopping cart
 */
+ (NSInteger)numberOfItemsInShoppingCart;
```
######- hideEditButtonInShoppingCart
```Objective-C
/**
 Hides 'Edit' button on 'Shopping Cart' screen

 @param set Default value is NO
 */
- (void)hideEditButtonInShoppingCart:(BOOL)set;
```
######- setPromoCode
```Objective-C
/**
 Set promo code to get discount

 @param promoCode Promo code
 */
- (void)setPromoCode:(NSString *)promoCode;
```
###Screen 'Payment Options'
######- removeLogoFromPaymentScreen
```Objective-C
/**
 Remove logo from Payment and Order Confirmation screen
 */
- (void)removeLogoFromPaymentScreen:(BOOL)remove;

```
