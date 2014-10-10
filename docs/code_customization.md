Developer SDK Customization Reference
=====================================

   - [**Initialization**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#initialization)
      - [*-initWithEnvironment*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--initwithenvironment)
      - [*-initWithViewController*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--initwithviewcontroller)
      - [*-setIsRootController*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setisrootcontroller)
   - [**Opening and closing**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#opening-and-closing)
      - [*-open*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--open)
      - [*-openWithOption*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--openwithoption)
      - [*-presentFromViewController*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--presentfromviewcontroller)
      - [*-viewController*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--viewcontroller)
      - [*-close*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--close)
      - [*-goToProductId*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--gotoproductid)
      - [*-goToProductId:withSKU*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--gotoproductidwithsku)
      - [*-setVariantsOptions*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setvariantsoptions)
   - [**Utils**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#utils)
      - [*-turnOffLogs*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--turnofflogs)
   - [**Country, Currency and Language**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#country-currency-and-language)
      - [*-setCountryCode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcountrycode)
      - [*-setCurrencyCode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcurrencycode)
      - [*-setLanguageCode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setlanguagecode)
   - [**General UI customization**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#general-ui-customization)
      - [*-setCustomizationXML*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcustomizationxml)
      - [*-setFonts*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfonts)
      - [*-changeSizeOfLightFontsBy*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--changesizeoflightfontsby)
      - [*-changeSizeOfMediumFontsBy*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--changesizeofmediumfontsby)
      - [*-changeSizeOfRegularFontsBy*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--changesizeofregularfontsby)
      - [*-changeSizeOfBoldFontsBy*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--changesizeofboldfontsby)
      - [*-setLoadingActivityIndicatorViewStyle*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setloadingactivityindicatorviewstyle)
      - [*-setLoadingGIF*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setloadinggif)
      - [*-setLoadingText*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setloadingtext)
      - [*-setIconForHelpButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforhelpbutton)
      - [*-setLogoFileName*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setlogofilename)
      - [*-setPositiveButtonsBackgroundColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpositivebuttonsbackgroundcolor)
      - [*-setNegativeButtonsBackgroundColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnegativebuttonsbackgroundcolor)
      - [*-setTitleForChooseOptionsScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforchooseoptionsscreen)
   - [**Navigation bar**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#navigation-bar)
      - [*-navigationBarColor:titleColor:leftButtonBackgroundColor:rightButtonBackgroundColor:titleButtonIcon*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--navigationbarcolortitlecolorleftbuttonbackgroundcolorrightbuttonbackgroundcolortitlebuttonicon)
      - [*-setNavigationBarBackground*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackground)
      - [*-setNavigationBarBackgroundForCustomizeProduct*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackgroundforcustomizeproduct)
      - [*-setIconForBackButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforbackbutton)
      - [*-setStatusBarDark:hidden*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setstatusbardarkhidden)
      - [*-setThreeButtonsNavigationBarSytle*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setthreebuttonsnavigationbarsytle)
      - [*-setNavigationBarSaveToCartBackgroundColor:titleColor:buttonBackgroundColor:buttonTitleColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarsavetocartbackgroundcolortitlecolorbuttonbackgroundcolorbuttontitlecolor)
   - [**Side menu**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#side-menu)
      - [*-useSideMenuWithMenuIcon:background*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--usesidemenuwithmenuiconbackground)
      - [*-sideMenuAddButtons*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuaddbuttons)
      - [*-sideMenuHideOptionsHeader*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideoptionsheader)
      - [*-sideMenuHideAccountsHeader*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideaccountsheader)
      - [*-sideMenuHideInfoHeader*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideinfoheader)
      - [*-sideMenuShowOptionsAsList*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenushowoptionsaslist)
      - [*-setHowItWorksText*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sethowitworkstext)
      - [*-setAboutText*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setabouttext)
      - [*-setLikeUsOnFacebookUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setlikeusonfacebookurl)
      - [*-setAppIDFromAppleStore*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setappidfromapplestore)
   - [**Screen 'Choose Country'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-choose-country)
      - [*-setTitleForChooseCountryScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforchoosecountryscreen)
      - [*-hideSearchIconInChooseCountryScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidesearchiconinchoosecountryscreen)
      - [*-setPlaceholderTextForSearchBarInChooseCountryScreen:hideMagnifyingGlass*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setplaceholdertextforsearchbarinchoosecountryscreenhidemagnifyingglass)
      - [*-setNavigationBarBackgroundColorForChooseCountryScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackgroundcolorforchoosecountryscreen)
   - [**Screen 'Products'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-products)
      - [*-hideCategoriesInFeaturedProducts*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidecategoriesinfeaturedproducts)
      - [*-hideComingSoonProducts*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidecomingsoonproducts)
      - [*-showCountrySelectionOnScreen:backgroundColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showcountryselectiononscreenbackgroundcolor)
      - [*-setTitleForFeaturedProductsScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforfeaturedproductsscreen)
      - [*-setFeaturedProductsLeftLabelTextColor:rightLabelTextColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfeaturedproductsleftlabeltextcolorrightlabeltextcolor)
      - [*-setFeaturedProductsBackgroungImage*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfeaturedproductsbackgroungimage)
   - [**Screen 'Product Details'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-product-details)
      - [*-productDetailsShowTitleBelowNavBar*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--productdetailsshowtitlebelownavbar)
      - [*-productDetailsShowMenuBtnInNavBar*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--productdetailsshowmenubtninnavbar)
      - [*-setQualityGuaranteeText*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setqualityguaranteetext)
   - [**Photo sources**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#photo-sources)
      - [*-setAvailablePhotoSources*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setavailablephotosources)
      - [*-setDefaultPhotoSource:albumId*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdefaultphotosourcealbumid)
      - [*-setImages*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setimages)
      - [*-disablePhotoSourcesWhenImagesArePassedIn*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablephotosourceswhenimagesarepassedin)
      - [*-disablePhotoSourcesForOnePhotoTemplate*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablephotosourcesforonephototemplate)
      - [*-setPassedImageFirstInPhotoSources*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpassedimagefirstinphotosources)
      - [*-setPassedImageAsThumbForOnePhotoTemplate*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpassedimageasthumbforonephototemplate)
      - [*-hideIconForUploadInstructions*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideiconforuploadinstructions)
      - [*-setInstagramClientID:redirectUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setinstagramclientidredirecturl)
      - [*-setInstagramAccessToken*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setinstagramaccesstoken)
      - [*-setFlickrKey:secretKey:redirectUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setflickrkeysecretkeyredirecturl)
      - [*-setDropboxKey:redirectUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdropboxkeyredirecturl)
      - [*-setFacebookAppId:redirectUrl*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfacebookappidredirecturl)
      - [*-setFacebookAccessToken*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfacebookaccesstoken)
      - [*-enableShareOnFacebookDeal*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--enableshareonfacebookdeal)
      - [*-setPhotobucketUsername:password*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setphotobucketusernamepassword)
      - [*-setPhotobucketAccessToken:userName:baseURL*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setphotobucketaccesstokenusernamebaseurl)
      - [*-setTitleForPhotoSourcesScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforphotosourcesscreen)
      - [*-autoSelectOnePhotoTemplateForProductID*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--autoselectonephototemplateforproductid)
      - [*-disableAutoRecognizePhoneModel*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disableautorecognizephonemodel)
   - [**Screen 'Customize/Edit Product'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-customizeedit-product)
      - [*-showToolbarInCustomizeProduct:backgroundImage*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showtoolbarincustomizeproductbackgroundimage)
      - [*-hideImagesListInCustomizeProduct*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideimageslistincustomizeproduct)
      - [*-setPhotoArrangement*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setphotoarrangement)
      - [*-setIconForAddPhotosButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforaddphotosbutton)
      - [*-setIconForHelpButtonInCustomizeProduct:visible*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforhelpbuttonincustomizeproductvisible)
      - [*-setIconForSaveButtonInCustomizeProduct*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforsavebuttonincustomizeproduct)
      - [*-setPopUpWithImage:text:textColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpopupwithimagetexttextcolor)
      - [*-setDoubleTapBalloonVisibilityTime*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdoubletapballoonvisibilitytime)
      - [*-showHelpDialogWithImage*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showhelpdialogwithimage)
      - [*-disablePreviewScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablepreviewscreen)
      - [*-setSamePhotoOnFrontAndBackSideOfProduct*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setsamephotoonfrontandbacksideofproduct)
      - [*-setCustomizationHelpText*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcustomizationhelptext)
   - [**Screen 'Image Editor'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-image-editor)
      - [*-imageEditorShowButtons*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--imageeditorshowbuttons)
      - [*-hideWatchVideoButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidewatchvideobutton)
   - [**Screen 'Shopping Cart'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-shopping-cart)
      - [*-setIconForShoppingCart:withNumberOfProducts:labelPosition:textColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartwithnumberofproductslabelpositiontextcolor)
      - [*-setIconForShoppingCart:withNumberOfProducts:labelPosition:circleColor:textColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartwithnumberofproductslabelpositioncirclecolortextcolor)
      - [*-removePlusFromAddMoreProductsButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--removeplusfromaddmoreproductsbutton)
      - [*-setTitleForShoppingCart*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforshoppingcart)
      - [*-setShowsAddMoreProductsInShoppingCart*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setshowsaddmoreproductsinshoppingcart)
      - [*-customizeAddMoreProductButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--customizeaddmoreproductbutton)
      - [*-setIconForShoppingCartBackButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartbackbutton)
      - [*-numberOfItemsInShoppingCart*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--numberofitemsinshoppingcart)
      - [*-hideEditButtonInShoppingCart*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideeditbuttoninshoppingcart)
      - [*-setPromoCode*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpromocode)
   - [**Screen 'Payment Options'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-payment-options)
      - [*-removeLogoFromPaymentScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--removelogofrompaymentscreen)
      - [*-setPayeeName*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpayeename)
      - [*-setTermsAndConditionsURL*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settermsandconditionsurl)
      - [*-setPaymentOptions*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpaymentoptions)
      - [*-setPayPalStagingClientId:productionClientId*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpaypalstagingclientidproductionclientid)
      - [*-setBraintreeStagingEncryptionKey:productionEncryptionKey*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setbraintreestagingencryptionkeyproductionencryptionkey)
   - [**Screen 'Shipping Addresses'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-shipping-addresses)
      - [*-showPlusSignOnAddButton*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showplussignonaddbutton)
      - [*-setColorForAddressSelection*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcolorforaddressselection)
   - [**Screen 'Order Completed'**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#screen-order-completed)
      - [*-setTitleForOrderCompletedScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforordercompletedscreen)
      - [*-setIconForOrderCompletedScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforordercompletedscreen)
      - [*-setMessageForOrderCompletedScreen*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setmessageforordercompletedscreen)
      - [*-orderCompletedScreenCloseButtonShouldPerformBack*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--ordercompletedscreenclosebuttonshouldperformback)
   - [**Google Analytics**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#google-analytics)
      - [*-setTrackingIDForGoogleAnalytics*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settrackingidforgoogleanalytics)
   - [**Push Notifications**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#push-notifications)
      - [*-setParseApplicationId:apiKey*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setparseapplicationidapikey)
      - [*-registerDeviceToken*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--registerdevicetoken)
      - [*-showNotification:backgroundColor:textColor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--shownotificationbackgroundcolortextcolor)

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
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithEnvironment:PRINTIO_STAGING
                                    productionRecipeId:nil
                                       stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
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
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                              environment:PRINTIO_STAGING
                                       productionRecipeId:nil
                                          stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
```
######- setIsRootController
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

######- open
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
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                              environment:PRINTIO_STAGING
                                       productionRecipeId:nil
                                          stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
//... other customization
[printIO openWithOption:PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM | PRINTIO_ENABLE_BACK_BUTTON];
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
**Sample code:**
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                              environment:PRINTIO_STAGING
                                       productionRecipeId:nil
                                          stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
//... other customization
[printIO presentFromViewController:self withOption:PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM];
```
######- viewController
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
######- close
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
######- goToProductId
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
######- goToProductId:withSKU
```Objective-C
/**
 Jumps directly to product with sku

 @param productId Product identifier can be found in ProductIds.h and starts with PRODUCT_
 @param sku SKU for selected product
 */
- (void)goToProductId:(int)productId withSKU:(NSString *)sku;
```
**Sample code:**
```Objective-C
[printIO goToProductId:PRODUCT_PHONE_CASES() withSKU:@"PhoneCase-iphone5S-Matte"];
//... other customization
[printIO open];
```
######- setVariantsOptions
```Objective-C
/**
 Set products variants options

 @param options Array of PIOVariantOption objects. Pass 'color' with Case Style option
 */
- (void)setVariantsOptions:(NSArray *)options;
```
**Sample code:**
```Objective-C
// Galaxy Note 10.0
PIOVariantOption *option1 = [[PIOVariantOption alloc]initWithProductId:PRODUCT_TABLET_CASES()
                                                              optionId:@"db7b1f755f10457cb2aef7ee9bf58177"
                                                               valueId:@"db0440e48e2c43d4851ed784af35263f"];
// Case Sytle Glossy
PIOVariantOption *option2 = [[PIOVariantOption alloc]initWithProductId:PRODUCT_TABLET_CASES()
                                                              optionId:@"2729db9407ba441d9bd257cc158d8ce9"
                                                               valueId:@"0058706aaaa7482585a09ac5437f4009"];
[printIO setVariantsOptions:@[option1, option2];
//... other customization
[printIO open];
```
###Utils
######- turnOffLogs
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
###Country, Currency and Language
######- setCountryCode
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
######- setCurrencyCode
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
######- setLanguageCode
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
###General UI customization
######- setCustomizationXML
```Objective-C
/**
 Import customization XML file

 @param xmlData Customization xml file.
 */
- (void)setCustomizationXML:(NSData *)xmlData;
```
**Sample code:**
```Objective-C
NSString *xmlPath = [[NSBundle mainBundle] pathForResource:@"customization" ofType:@"xml"];
NSData *xmlData = [NSData dataWithContentsOfFile:xmlPath];

[printIO setCustomizationXML:xmlData];
//... other customization
[printIO open];
```
######- setFonts
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
######- changeSizeOfLightFontsBy
```Objective-C
/**
 Change light fonts size

 @param Increase/decrease font size by 'value'
 */
- (void)changeSizeOfLightFontsBy:(float)value;
```
**Sample code:**
```Objective-C
[printIO changeSizeOfLightFontsBy:-1.0];
```
######- changeSizeOfMediumFontsBy
```Objective-C
/**
 Change medium fonts size

 @param Increase/decrease font size by 'value'
 */
- (void)changeSizeOfMediumFontsBy:(float)value;
```
**Sample code:**
```Objective-C
[printIO changeSizeOfMediumFontsBy:-1.0];
```
######- changeSizeOfRegularFontsBy
```Objective-C
/**
 Change regular fonts size

 @param Increase/decrease font size by 'value'
 */
- (void)changeSizeOfRegularFontsBy:(float)value;
```
**Sample code:**
```Objective-C
[printIO changeSizeOfRegularFontsBy:-1.0];
```
######- changeSizeOfBoldFontsBy
```Objective-C
/**
 Change bold fonts size

 @param Increase/decrease font size by 'value'
 */
- (void)changeSizeOfBoldFontsBy:(float)value;
```
**Sample code:**
```Objective-C
[printIO changeSizeOfBoldFontsBy:-1.0];
```
######- setLoadingActivityIndicatorViewStyle
```Objective-C
/**
 Toggles UIActivityIndicatorView on the loading view instead of the loading gif image. 
 Calling this method will override the gif image if it has previously been set.

 @param style UIActivityIndicatorView's style.
 */
- (void)setLoadingActivityIndicatorViewStyle:(UIActivityIndicatorViewStyle)style;
```
**Sample code:**
```Objective-C
[printIO setLoadingActivityIndicatorViewStyle:UIActivityIndicatorViewStyleGray];
//... other customization
[printIO open];
```
######- setLoadingGIF
```Objective-C
/**
 Changes "Loading" GIF animation image. Calling this method will override the UIActivityIndicatorViewStyle if has previously been set.

 @param fileName GIF image file name.
 */
- (void)setLoadingGIF:(NSString *)fileName;
```
**Sample code:**
```Objective-C
[printIO setLoadingGIF:@"mg_loader"];
//... other customization
[printIO open];
```
######- setLoadingText
```Objective-C
/**
 Change title of loading dialog

 @param lText New title for loading dialog.
 */
- (void)setLoadingText:(NSString *)lText;
```
**Sample code:**
```Objective-C
[printIO setLoadingText:@"Loading..."];
//... other customization
[printIO open];
```
######- setIconForHelpButton
```Objective-C
/**
 Change icon for Help Button

 @param imagePath Path for image file
 */
- (void)setIconForHelpButton:(NSString *)imagePath;
```
**Sample code:**
```Objective-C
[printIO setIconForHelpButton:[[NSBundle mainBundle]pathForResource:@"icon" ofType:@"png"]];
//... other customization
[printIO open];
```
######- setLogoFileName
```Objective-C
/**
 Change partner's logo in SDK

 @param fileName File name of logo image, without file type extension.
 Image file needs to be stored in main bundle.
 */
- (void)setLogoFileName:(NSString *)fileName;
```
**Sample code:**
```Objective-C
[printIO setLogoFileName:@"mg_s_logo"];
//... other customization
[printIO open];
```
######- setPositiveButtonsBackgroundColor
```Objective-C
/**
 Change background color on positive buttons (Yes, Next, Ok, Save, Buy It, Create It...)

 @param bColor Background color
 @param tColor Title color
 */
- (void)setPositiveButtonsBackgroundColor:(UIColor *)bColor titleColor:(UIColor *)tColor;
```
**Sample code:**
```Objective-C
[printIO setPositiveButtonsBackgroundColor:[UIColor greenColor] titleColor:[UIColor whiteColor]];
//... other customization
[printIO open];
```
######- setNegativeButtonsBackgroundColor
```Objective-C
/**
 Change background color on negative buttons (No, Back, Cancel, Close...)

 @param bColor Background color
 @param tColor Title color
 */
- (void)setNegativeButtonsBackgroundColor:(UIColor *)bColor titleColor:(UIColor *)tColor;
```
**Sample code:**
```Objective-C
[printIO setNegativeButtonsBackgroundColor:[UIColor redColor] titleColor:[UIColor whiteColor]];
//... other customization
[printIO open];
```
######- setTitleForChooseOptionsScreen
```Objective-C
/**
 Change title for 'Customization Options' screen
 */
- (void)setTitleForChooseOptionsScreen:(NSString *)title;
```
**Sample code:**
```Objective-C
[printIO setTitleForChooseOptionsScreen:@"Title"];
//... other customization
[printIO open];
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
######- setNavigationBarBackground
```Objective-C
/**
 Set background image on Navigation Bar
 
 @param imagePath Path to image file.
 */
- (void)setNavigationBarBackground:(NSString *)imagePath;
```
**Sample code:**
```Objective-C
[printIO setNavigationBarBackground:[[NSBundle mainBundle]pathForResource:@"header" ofType:@"png"]];
//... other customization
[printIO open];
```
######- setNavigationBarBackgroundForCustomizeProduct
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
######- setIconForBackButton
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
**Sample code:**
```Objective-C
[printIO setStatusBarDark:NO hidden:YES];
//... other customization
[printIO open];
```
######- setThreeButtonsNavigationBarSytle
```Objective-C
/**
 Set three buttons Back, Menu and Cart button in navigation bar for Featured Products screen

 @param set Default value is NO
 */
- (void)setThreeButtonsNavigationBarSytle:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO setThreeButtonsNavigationBarSytle:YES];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setNavigationBarSaveToCartBackgroundColor:[UIColor greyColor]
                                        titleColor:[UIColor whiteColor]
                             buttonBackgroundColor:[UIColor redColor]
                                  buttonTitleColor:[UIColor whiteColor]];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO useSideMenuWithMenuIcon:[[NSBundle mainBundle]pathForResource:@"mg_icon_menu" ofType:@"png"] 
                      background:[UIColor blackColor]];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
// Set main buttons for Side Menu
PIOSideMenuButton *btnExit = [[PIOSideMenuButton alloc]initWithTitle:@"EXIT"
                                                                type:PIO_SM_EXIT_BUTTON
                                                            iconPath:[[NSBundle mainBundle] pathForResource:@"exit" ofType:@"png"]];
btnExit.fontSize = 15.0;
btnExit.textColor = [UIColor whiteColor];
btnExit.useBoldFonts = YES;
    
PIOSideMenuButton *btnProducts = [[PIOSideMenuButton alloc]initWithTitle:@"ALL PRODUCTS"
                                                                    type:PIO_SM_PRODUCTS
                                                                iconPath:[[NSBundle mainBundle] pathForResource:@"btn_products" ofType:@"png"]];
btnProducts.fontSize = 15.0;
btnProducts.textColor = [UIColor blackColor];
btnProducts.useBoldFonts = YES;
    
PIOSideMenuButton *btnViewCart = [[PIOSideMenuButton alloc]initWithTitle:@"MY CART"
                                                                    type:PIO_SM_VIEW_CART
                                                                iconPath:[[NSBundle mainBundle] pathForResource:@"btn_cart" ofType:@"png"]];
btnViewCart.textColor = [UIColor blackColor];
btnViewCart.fontSize = 15.0;
btnViewCart.useBoldFonts = YES;
btnViewCart.circlePoint = CGPointMake(37, 10);
btnViewCart.circleColor = mgGreen;
    
PIOSideMenuButton *btnEmailSupport = [[PIOSideMenuButton alloc]initWithTitle:@"EMAIL ORDER SUPPORT"
                                                                        type:PIO_SM_EMAIL_SUPPORT
                                                                    iconPath:[[NSBundle mainBundle] pathForResource:@"btn_email_support" ofType:@"png"]];
btnEmailSupport.dataHolder = @"support@yourapp.com";
btnEmailSupport.textColor = [UIColor blackColor];
btnEmailSupport.fontSize = 15.0;
btnEmailSupport.useBoldFonts = YES;
    
NSArray *buttons = [NSArray arrayWithObjects:btnExit, btnProducts, btnViewCart, btnEmailSupport, nil];
    
// Options
PIOSideMenuButton *btnChangeCurrency = [[PIOSideMenuButton alloc]initWithTitle:@"CHANGE CURRENCY"
                                                                          type:PIO_SM_CHANGE_CURRENCY
                                                                      iconPath:nil];
btnChangeCurrency.fontSize = 12.0;
btnChangeCurrency.textColor = [UIColor blackColor];
btnChangeCurrency.textSecondColor = mgGrey;
btnChangeCurrency.useBoldFonts = YES;
    
PIOSideMenuButton *btnChangeCountry = [[PIOSideMenuButton alloc]initWithTitle:@"CHANGE COUNTRY"
                                                                         type:PIO_SM_CHANGE_COUNTRY
                                                                     iconPath:nil];
btnChangeCountry.fontSize = 12.0;
btnChangeCountry.textColor = [UIColor blackColor];
btnChangeCountry.useBoldFonts = YES;
    
PIOSideMenuButton *btnChangeLanguage = [[PIOSideMenuButton alloc]initWithTitle:@"CHANGE LANGUAGE"
                                                                          type:PIO_SM_CHANGE_LANGUAGE
                                                                      iconPath:[[NSBundle mainBundle] pathForResource:@"s_icon_language" ofType:@"png"]];
btnChangeLanguage.fontSize = 12.0;
btnChangeLanguage.textColor = [UIColor blackColor];
btnChangeLanguage.useBoldFonts = YES;
    
NSArray *options = [NSArray arrayWithObjects:btnChangeCurrency, btnChangeCountry, btnChangeLanguage, nil];
    
// Infos
PIOSideMenuButton *btnHowItWorks = [[PIOSideMenuButton alloc]initWithTitle:@"HOW IT WORKS"
                                                                      type:PIO_SM_HOW_IT_WORKS
                                                                  iconPath:[[NSBundle mainBundle] pathForResource:@"s_btn_info" ofType:@"png"]];
btnHowItWorks.textColor = [UIColor blackColor];
btnHowItWorks.fontSize = 15.0;
btnHowItWorks.useBoldFonts = YES;
    
NSArray *infos = [NSArray arrayWithObjects:btnHowItWorks, nil];
    
[printIO sideMenuAddButtons:buttons
                    options:options
               optionsTitle:@"OPTIONS"
          optionsTitleColor:[UIColor whiteColor]
               optionsColor:[UIColor greyColor]
              accountsTitle:@"SOCIAL ACCOUNTS"
         accountsTitleColor:[UIColor whiteColor]
              accountsColor:mgGrey
                       info:infos
                  infoTitle:@"INFO"
             infoTitleColor:[UIColor whiteColor]
                  infoColor:mgGrey
  backgroundImageForButtons:[[NSBundle mainBundle]pathForResource:@"bcg" ofType:@"png"]];
//... other customization
[printIO open];
```
######- sideMenuHideOptionsHeader
```Objective-C
/**
 Hide 'Options' header in Side Menu
 */
- (void)sideMenuHideOptionsHeader:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO sideMenuHideOptionsHeader:YES];
//... other customization
[printIO open];
```
######- sideMenuHideAccountsHeader
```Objective-C
/**
 Hide 'Accounts' header in Side Menu
 */
- (void)sideMenuHideAccountsHeader:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO sideMenuHideAccountsHeader:YES];
//... other customization
[printIO open];
```
######- sideMenuHideInfoHeader
```Objective-C
/**
 Hide 'Info' header in Side Menu
 */
- (void)sideMenuHideInfoHeader:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO sideMenuHideInfoHeader:YES];
//... other customization
[printIO open];
```
######- sideMenuShowOptionsAsList
```Objective-C
/**
 Show 'Options' section as a list

 @param set Default value is NO
 */
- (void)sideMenuShowOptionsAsList:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO sideMenuShowOptionsAsList:YES];
//... other customization
[printIO open];
```
######- slideSideMenuFromRight
```Objective-C
/**
 Slide side menu from right. Default value is NO.

 @param set Default value is NO.
 */
- (void)slideSideMenuFromRight:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO slideSideMenuFromRight:YES];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setShareText:@"I'm using YouApp! Here is a <a href=\"https://itunes.apple.com/US/app/id559500608?mt=8\">link</a> for you to download." 
       additionalText:@"Made in #YourApp @YourApp"];
//... other customization
[printIO open];
```
######- hidePhotoSourcesInSideMenu
```Objective-C
/**
 Hide photo sources section in Side Menu

 @param set Default value is NO
 */
- (void)hidePhotoSourcesInSideMenu:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO hidePhotoSourcesInSideMenu:YES];
//... other customization
[printIO open];
```
######- sideMenuBackgroungImage
```Objective-C
/**
 Set background image on Side Menu

 @param path Image path
 */
- (void)sideMenuBackgroungImage:(NSString *)path;
```
**Sample code:**
```Objective-C
[printIO sideMenuBackgroungImage:[[NSBundle mainBundle]pathForResource:@"sm_bcg" ofType:@"png"]];
//... other customization
[printIO open];
```
######- setHowItWorksText
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
######- setAboutText
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
######- setLikeUsOnFacebookUrl
```Objective-C
/**
 Set url link to facebook page e.g. 'fb://profile/642169949144369'
 
 @param urlS link to page
 */
- (void)setLikeUsOnFacebookUrl:(NSString *)urlS;
```
**Sample code:**
```Objective-C
[printIO setLikeUsOnFacebookUrl:@"fb://profile/642169949144369"];
//... other customization
[printIO open];
```
######- setAppIDFromAppleStore
```Objective-C
/**
 Set application id from apple store, used for 'Rate Our App'
 option in side menu. e.g '731593327'

 @param appID application id
 */
- (void)setAppIDFromAppleStore:(NSString *)appID;
```
**Sample code:**
```Objective-C
[printIO setAppIDFromAppleStore:@"731593327"];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setTitleForChooseCountryScreen:@"Title"];
//... other customization
[printIO open];
```
######- hideSearchIconInChooseCountryScreen
```Objective-C
/**
 Hide search icon from navigation bar on 'Choose Country' screen

 @param set Default value is NO
 */
- (void)hideSearchIconInChooseCountryScreen:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO hideSearchIconInChooseCountryScreen:YES];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setPlaceholderTextForSearchBarInChooseCountryScreen:@"Search..."
                                         hideMagnifyingGlass:NO];
//... other customization
[printIO open];
```
######- setNavigationBarBackgroundColorForChooseCountryScreen
```Objective-C
/**
 Change the color of navigation bar in 'Choose Country' screen

 @param color Color to set
 */
- (void)setNavigationBarBackgroundColorForChooseCountryScreen:(UIColor *)color;
```
**Sample code:**
```Objective-C
[printIO setNavigationBarBackgroundColorForChooseCountryScreen:[UIColor redColor]];
//... other customization
[printIO open];
```
###Screen 'Products'
######- hideCategoriesInFeaturedProducts
```Objective-C

/**
 Hide category+search view on Featured Products screen. Default value is NO;

 */
- (void)hideCategoriesInFeaturedProducts:(BOOL)hide;
```
**Sample code:**
```Objective-C
[printIO hideCategoriesInFeaturedProducts:YES];
//... other customization
[printIO open];
```
######- hideComingSoonProducts
```Objective-C
/**
 Hide coming soon products from product's list
 
 @param hide Default value is NO
 */
- (void)hideComingSoonProducts:(BOOL)hide;
```
**Sample code:**
```Objective-C
[printIO hideComingSoonProducts:YES];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO showCountrySelectionOnScreen:PIO_SCREEN_PRODUCT_DETAILS
                      backgroundColor:[UIColor redColor]];
//... other customization
[printIO open];
```
######- setTitleForFeaturedProductsScreen
```Objective-C
/**
 Change title on Featured Products screen

 @param title New title
 */
- (void)setTitleForFeaturedProductsScreen:(NSString *)title;
```
**Sample code:**
```Objective-C
[printIO setTitleForFeaturedProductsScreen:@"Title"];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setFeaturedProductsLeftLabelTextColor:[UIColor redColor]
                           rightLabelTextColor:[UIColor blueColor]];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setFeaturedProductsBackgroungImage:[[NSBundle mainBundle] pathForResource:@"bcg" ofType:@"png"]];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO productDetailsShowTitleBelowNavBar:YES];
//... other customization
[printIO open];
```
######- productDetailsShowMenuBtnInNavBar
```Objective-C
/**
 Show menu button in navigation bar on Product Details screen

 @param set Default value is NO
 */
- (void)productDetailsShowMenuBtnInNavBar:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO productDetailsShowMenuBtnInNavBar:YES];
//... other customization
[printIO open];
```
######- setQualityGuaranteeText
```Objective-C
/**
 Provide Quality Guarantee text for Product Details screen
 
 @param text Quality Guarantee text
 */
- (void)setQualityGuaranteeText:(NSString *)text;
```
**Sample code:**
```Objective-C
[printIO setQualityGuaranteeText:@"Quality Guarantee text goes here."];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
// Instagram
PIOSideMenuButton *btnSInstagram = [[PIOSideMenuButton alloc]initWithType:PIO_SM_INSTAGRAM];
btnSInstagram.iconPath = [[NSBundle mainBundle]pathForResource:@"instagram" ofType:@"png"];
btnSInstagram.iconPathSelected = [[NSBundle mainBundle]pathForResource:@"instagram_selected" ofType:@"png"];
btnSInstagram.textColor = [UIColor blackColor];
btnSInstagram.useBoldFonts = YES;
    
// Phone
PIOSideMenuButton *btnSPhone = [[PIOSideMenuButton alloc]initWithType:PIO_SM_PHONE];
    
// Facebook
PIOSideMenuButton *btnSFacebook = [[PIOSideMenuButton alloc]initWithType:PIO_SM_FACEBOOK];
btnSFacebook.iconPath = [[NSBundle mainBundle]pathForResource:@"facebook" ofType:@"png"];
btnSFacebook.iconPathSelected = [[NSBundle mainBundle]pathForResource:@"facebook_selected" ofType:@"png"];
btnSFacebook.textColor = [UIColor blackColor];
btnSFacebook.useBoldFonts = YES;
    
[printIO setAvailablePhotoSources:[NSArray arrayWithObjects:btnSPhone, btnSInstagram, btnSFacebook, nil]];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setDefaultPhotoSource:PIO_PS_FACEBOOK albumId:@""];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
UIImage *image = ...
NSArray *images = @[@"http://www.google.com/landscape.jpeg", image]; 
[printIO setImages:images];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO disablePhotoSourcesWhenImagesArePassedIn:YES];
//... other customization
[printIO open];
```
######- disablePhotoSourcesForOnePhotoTemplate
```Objective-C
/**
 Disable photo sources only if image is passed in, and user selects template with
 one photo.
 */
- (void)disablePhotoSourcesForOnePhotoTemplate:(BOOL)disable;
```
**Sample code:**
```Objective-C
[printIO disablePhotoSourcesForOnePhotoTemplate:YES];
//... other customization
[printIO open];
```
######- setPassedImageFirstInPhotoSources
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
######- setPassedImageAsThumbForOnePhotoTemplate
```Objective-C
/**
 Set passed in image as thumbnail for templates with one photo.
 Right now, only supports Canvas Wraps and Framed Prints
 */
- (void)setPassedImageAsThumbForOnePhotoTemplate:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO setPassedImageAsThumbForOnePhotoTemplate:YES];
//... other customization
[printIO open];
```
######- hideIconForUploadInstructions
```Objective-C
/**
 Hide icon for Upload Instructions text in Photo Sources screen. Default value is NO.
 */
- (void)hideIconForUploadInstructions:(BOOL)hide;
```
**Sample code:**
```Objective-C
[printIO hideIconForUploadInstructions:YES];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setInstagramClientID:@"client_id" redirectUrl:@"redirect_url"];
//... other customization
[printIO open];
```
######- setInstagramAccessToken
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
######- setFlickrKey:secretKey:redirectUrl
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
######- setDropboxKey:redirectUrl
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
######- setFacebookAppId:redirectUrl
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
######- setFacebookAccessToken
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
######- enableShareOnFacebookDeal
```Objective-C
/**
 Enable option to share on facebook and get extra deal

 @param set Default value is NO
 */
- (void)enableShareOnFacebookDeal:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO enableShareOnFacebookDeal:YES];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setPhotobucketUsername:@"user_name" password:@"password"];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setPhotobucketAccessToken:@"access_token" userName:@"user_name" baseURL:@"base_url"];
//... other customization
[printIO open];
```
######- setTitleForPhotoSourcesScreen
```Objective-C
/**
 Change title for Photo Sources screen

 @param title New title
 */
- (void)setTitleForPhotoSourcesScreen:(NSString *)title;
```
**Sample code:**
```Objective-C
[printIO setTitleForPhotoSourcesScreen:@"Title"];
//... other customization
[printIO open];
```
######- autoSelectOnePhotoTemplateForProductID
```Objective-C
/**
 Auto selects one photo template for selected productID

 @param productID productID of selected product
 */
- (void)autoSelectOnePhotoTemplateForProductID:(NSInteger)productID;
```
**Sample code:**
```Objective-C
[printIO autoSelectOnePhotoTemplateForProductID:PRODUCT_PHONE_CASES()];
//... other customization
[printIO open];
```
######- disableAutoRecognizePhoneModel
```Objective-C
/**
 Disable auto recognition and selection of iPhone model

 @param set Default value is NO
 */
- (void)disableAutoRecognizePhoneModel:(BOOL)set;
```
**Sample code:**
```Objective-C
[printIO disableAutoRecognizePhoneModel:YES];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO showToolbarInCustomizeProduct:NO
                       backgroundImage:[[NSBundle mainBundle]pathForResource:@"toolbar_bcg" ofType:@"png"]];
//... other customization
[printIO open];
```
######- hideImagesListInCustomizeProduct
```Objective-C
/**
 Hide list with images in customization screen
 */
- (void)hideImagesListInCustomizeProduct:(BOOL)hide;
```
**Sample code:**
```Objective-C
[printIO hideImagesListInCustomizeProduct:YES];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
[printIO setPhotoArrangement:PIO_PHOTO_ARRANGEMENT_AUTO];
//... other customization
[printIO open];
```
######- setIconForAddPhotosButton
```Objective-C
/**
 Change image for "Add photos" button in Customize Product screen

 @param imagePath Path to image file.
 */
- (void)setIconForAddPhotosButton:(NSString *)imagePath;
```
**Sample code:**
```Objective-C
[printIO setIconForAddPhotosButton:[[NSBundle mainBundle]pathForResource:@"add_photos" ofType:@"png"]];
//... other customization
[printIO open];
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
**Sample code:**
```Objective-C
```
######- setIconForSaveButtonInCustomizeProduct
```Objective-C
/**
 Change icon for 'Save' button on Customize Product screen

 @param imagePath Path to image file.
 */
- (void)setIconForSaveButtonInCustomizeProduct:(NSString *)imagePath;
```
**Sample code:**
```Objective-C
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
**Sample code:**
```Objective-C
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
**Sample code:**
```Objective-C
```
######- showHelpDialogWithImage
```Objective-C
/**
 Show custom dialog for helping user how to edit a photo

 @param Path to image.
 */
- (void)showHelpDialogWithImage:(NSString *)imagePath;
```
**Sample code:**
```Objective-C
```
######- disablePreviewScreen
```Objective-C
/**
 Disable Preview screen for product

 @param set Default value is NO
 */
- (void)disablePreviewScreen:(BOOL)set;
```
**Sample code:**
```Objective-C
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
**Sample code:**
```Objective-C
```
######- setCustomizationHelpText
```Objective-C
/**
 Provide help text for Customize Product screen
 
 @param text Help text
 */
- (void)setCustomizationHelpText:(NSString *)text;
```
**Sample code:**
```Objective-C
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
**Sample code:**
```Objective-C
```
######- hideWatchVideoButton
```Objective-C
/**
 Hide 'Watch Video' button on Customize Product screen
 
 @param hide Default value is NO
 */
- (void)hideWatchVideoButton:(BOOL)hide;
```
**Sample code:**
```Objective-C
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
**Sample code:**
```Objective-C
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
**Sample code:**
```Objective-C
```
######- removePlusFromAddMoreProductsButton
```Objective-C
/**
 Remove plus sign from "Add more products" button. By default, sign is visible.
 */
- (void)removePlusFromAddMoreProductsButton:(BOOL)remove;
```
**Sample code:**
```Objective-C
```
######- setTitleForShoppingCart
```Objective-C
/**
 Change title for "Shopping Cart" screen

 @param title New title
 */
- (void)setTitleForShoppingCart:(NSString *)title;
```
**Sample code:**
```Objective-C
```
######- setShowsAddMoreProductsInShoppingCart
```Objective-C
/**
 Toggle 'Add more products' button on the Shopping Cart screen.

 @param showsButton Button visibility flag. Default is YES.
 */
- (void)setShowsAddMoreProductsInShoppingCart:(BOOL)showsAddButton;
```
**Sample code:**
```Objective-C
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
**Sample code:**
```Objective-C
```
######- setIconForShoppingCartBackButton
```Objective-C
/**
 Change icon for Back button on Shopping Cart screen

 @param iconPath Path to icon file. Default is nil.
 */
- (void)setIconForShoppingCartBackButton:(NSString *)iconPath;
```
**Sample code:**
```Objective-C
```
######- numberOfItemsInShoppingCart
```Objective-C
/**
 Get number of items in shopping cart
 */
+ (NSInteger)numberOfItemsInShoppingCart;
```
**Sample code:**
```Objective-C
```
######- hideEditButtonInShoppingCart
```Objective-C
/**
 Hides 'Edit' button on 'Shopping Cart' screen

 @param set Default value is NO
 */
- (void)hideEditButtonInShoppingCart:(BOOL)set;
```
**Sample code:**
```Objective-C
```
######- setPromoCode
```Objective-C
/**
 Set promo code to get discount

 @param promoCode Promo code
 */
- (void)setPromoCode:(NSString *)promoCode;
```
**Sample code:**
```Objective-C
```
###Screen 'Payment Options'
######- removeLogoFromPaymentScreen
```Objective-C
/**
 Remove logo from Payment and Order Confirmation screen
 */
- (void)removeLogoFromPaymentScreen:(BOOL)remove;

```
**Sample code:**
```Objective-C
```
######- setPayeeName
```Objective-C
/**
 Set payee name for order processing

 @param payeeName Payee name
 */
- (void)setPayeeName:(NSString *)payeeName;
```
**Sample code:**
```Objective-C
```
######- setTermsAndConditionsURL
```Objective-C
/**
 Set url for Terms and Conditions

 @params url If not set, this option will be hidden
 */
- (void)setTermsAndConditionsURL:(NSURL *)url;
```
**Sample code:**
```Objective-C
```
######- setPaymentOptions
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
```
######- setPayPalStagingClientId:productionClientId
```Objective-C
/**
 Set PayPal's client ids, for both modes, staging and production. Default values are
 client ids from PrintIO

 @param sClientId Client id for staging mode
 @param pClientId Client id for production mode
 */
- (void)setPayPalStagingClientId:(NSString *)sClientId
              productionClientId:(NSString *)pClientId;
```
**Sample code:**
```Objective-C
```
######- setBraintreeStagingEncryptionKey:productionEncryptionKey
```Objective-C
/**
 Set Braintree encryption key for staging and production mode. By default, keys from PrintIO will be used

 @param sEncKey Encryption key for staging mode
 @param pEncKey Encryption key for production mode
 */
- (void)setBraintreeStagingEncryptionKey:(NSString *)sEncKey
                 productionEncryptionKey:(NSString *)pEncKey;
```
**Sample code:**
```Objective-C
```
###Screen 'Shipping Addresses'
######- showPlusSignOnAddButton
```Objective-C
#pragma mark - Shipping Addresses screen

/**
 Show plus sign on 'Add Shipping Address' button

 @param set Default value is NO
 */
- (void)showPlusSignOnAddButton:(BOOL)set;
```
**Sample code:**
```Objective-C
```
######- setColorForAddressSelection
```Objective-C
/**
 Change highlight color for address selection on 'Select Address'
 screen

 @param color New color. Default is light green.
 */
- (void)setColorForAddressSelection:(UIColor *)color;
```
**Sample code:**
```Objective-C
```
###Screen 'Order Completed'
######- setTitleForOrderCompletedScreen
```Objective-C
/**
 Change title for 'Order Completed' screen

 @param title New title
 */
- (void)setTitleForOrderCompletedScreen:(NSString *)title;
```
**Sample code:**
```Objective-C
```
######- setIconForOrderCompletedScreen
```Objective-C
/**
 Change icon for company logo on 'Order Completed' screen

 @param iconPath File path to icon
 */
- (void)setIconForOrderCompletedScreen:(NSString *)iconPath;
```
**Sample code:**
```Objective-C
```
######- setMessageForOrderCompletedScreen
```Objective-C
/**
 Change company message below company logo on 'Order Completed' screen

 @param message New message
 */
- (void)setMessageForOrderCompletedScreen:(NSMutableAttributedString *)message;
```
**Sample code:**
```Objective-C
```
######- orderCompletedScreenCloseButtonShouldPerformBack
```Objective-C
/**
 Change function of 'Close' button on 'Order Completed' screen

 @param set Default value is NO
 */
- (void)orderCompletedScreenCloseButtonShouldPerformBack:(BOOL)set;
```
**Sample code:**
```Objective-C
```
###Google Analytics 
######- setTrackingIDForGoogleAnalytics
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
```
###Push Notifications
######- setParseApplicationId:apiKey
```Objective-C
/**
 Set applicationId and apiKey provided from parse.com

 @param appId application id
 @param apiKey rest api key
 */
+ (void)setParseApplicationId:(NSString *)appId
                       apiKey:(NSString *)apiKey;
```
**Sample code:**
```Objective-C
```
######- registerDeviceToken
```Objective-C
/**
 Register device to receive push notifications

 @param deviceToken Device token
 */
+ (void)registerDeviceToken:(NSData *)deviceToken;
```
**Sample code:**
```Objective-C
```
######- showNotification:backgroundColor:textColor
```Objective-C
/**
 Display notification pop up from bottom of screen. On tap it will dismiss notification.

 @param userInfo Dictionary provided from didReceiveRemoteNotification
 @param backgroundColor Background color for notification pop up
 @param textColor Text color
 */
+ (void)showNotification:(NSDictionary *)userInfo
         backgroundColor:(UIColor *)bcgColor
               textColor:(UIColor *)textColor;
```
**Sample code:**
```Objective-C
```
