//
//  PrintIO.h
//  PrintIO Framework
//
//  Created by PrintIO on 12/13/13.
//  Copyright (c) 2013 PrintIO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProductIds.h"
#import "PIOPublicConstants.h"

enum {
    PRINTIO_STAGING,
    PRINTIO_PRODUCTION,
};

enum {
    PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT = 1 << 0,
    PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT = 1 << 1,
    PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM = 1 << 2,
    
    PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART = 1 << 3
}Options;

@protocol PrintIODelegate <NSObject>

@optional

- (void)PrintIOWidgetOnOpen;
- (void)PrintIOWidgetOnCloseWithData:(NSDictionary *)data;

@end

@interface PrintIO : NSObject

/**
 Get PrintIO singleton
 */
+ (PrintIO *)sharedInstance;

/**
 PrintIO delegate
 */
@property (nonatomic, weak) id<PrintIODelegate> delegate;

/**
 Init PrintIO widget. To get view controller, use '[self.printIO viewController]'
 
 @param type Set environment to staging or live, use PRINTIO_STAGING or PRINTIO_PRODUCTION
 @param pRecipeId Production recipeId provided by PrintIO
 @param sRecipeId Staging recipeId provided by PrintIO
 */
- (id)initWithEnvironment:(int)type
       productionRecipeId:(NSString *)pRecipeId
          stagingRecipeId:(NSString *)sRecipeId;

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

/**
 Open widget by presenting view from bottom
 */
- (void)open;

/**
 Open widget with option
 
 @param option Set the options
    PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT,
    PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT,
    PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM,
    PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART
 */
- (void)openWithOption:(int)option;

/**
 Close widget.
 */
- (void)close:(NSInteger)flag;

/**
 Jumps to screen
 
 @param screen Screen:
    PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART
 */
- (void)goToScreen:(int)screen;

/**
 Returns PrintIO view controller. Set all options before calling this method
 */
- (id)viewController;

#pragma mark - Navigation Bar

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

/**
 Set icon for back button.
 
 @param path Path to image file.
 */
- (void)iconForBackButton:(NSString *)path;

/**
 Set status bar style and visibility. Default value is light and visible.
 */
- (void)statusBarDark:(BOOL)dark
               hidden:(BOOL)hidden;

/**
 Set three buttons Back, Menu and Cart button in navigation bar for Featured Products screen
 
 @param set Default value is NO
 */
- (void)useThreeButtonsBarStyle:(BOOL)set;

/**
 Set colors for navigation bar with "Save to" shopping cart button
 */
- (void)navigationBarSaveToCartBackgroundColor:(UIColor *)bcgColor
                                    titleColor:(UIColor *)titleColor
                         buttonBackgroundColor:(UIColor *)btnBcgColor
                              buttonTitleColor:(UIColor *)btnTitleColor;

#pragma mark - Side Menu

/**
 Use Side Menu with options:
 
 @param mIconPath Path to image for Menu icon. If nil, default icon will be used.
 @param bcgColor Background color for Side Menu. If nil, default will be used.
 */
- (void)useSideMenuWithMenuIcon:(NSString *)mIconPath
                     background:(UIColor *)bcgColor;

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
 
 @param options Array of PIOSideMenuButton objects of types:
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

/**
 Hide 'Options' header in Side Menu
 */
- (void)sideMenuHideOptionsHeader:(BOOL)set;

/**
 Hide 'Accounts' header in Side Menu
 */
- (void)sideMenuHideAccountsHeader:(BOOL)set;

/**
 Hide 'Info' header in Side Menu
 */
- (void)sideMenuHideInfoHeader:(BOOL)set;

/**
 Show 'Options' section as a list
 
 @param set Default value is NO
 */
- (void)sideMenuShowOptionsAsList:(BOOL)set;

/**
 Slide side menu from right. Default value is NO.
 
 @param set Default value is NO.
 */
- (void)slideSideMenuFromRight:(BOOL)set;

/**
 This is option from Side Menu, in order to use it, Side Menu needs to be enabled first.
 
 @param shareText Text that will be used for sharing. May contains link also.
 */
- (void)setShareText:(NSString *)shareText;

/**
 Hide photo sources section in Side Menu
 
 @param set Default value is NO
 */
- (void)hidePhotoSourcesInSideMenu:(BOOL)set;

/**
 Set background image on Side Menu
 
 @param path Image path
 */
- (void)sideMenuBackgroungImage:(NSString *)path;

#pragma mark - Choose Country Screen

/**
 Change title on 'Choose Country' screen
 
 @param title New title
 */
- (void)setTitleForChooseCountryScreen:(NSString *)title;

/**
 Hide search icon from navigation bar on 'Choose Country' screen
 
 @param set Default value is NO
 */
- (void)hideSearchIconInChooseCountryScreen:(BOOL)set;

/**
 Change placeholder text in search bar, and set magnifying glass vissible or hidden
 
 @param text Placeholder text
 @param set Default value is NO
 */
- (void)setPlaceholderTextForSearchBarInChooseCountryScreen:(NSString *)text
                                        hideMagnifyingGlass:(BOOL)set;

/**
 Change the color of navigation bar in 'Choose Country' screen
 
 @param color Color to set
 */
- (void)setNavigationBarBackgroundColorForChooseCountryScreen:(UIColor *)color;

#pragma mark - Featured Products

/**›
 Hide category+search view on Featured Products screen. Default value is NO;
 */
- (void)hideCategoriesInFeaturedProducts:(BOOL)hide;

/**
 Set country on Featured Products screen instead on First screen.
 
 @param set Default value is YES.
 @param color Background color.
 */
- (void)selectCountryInFeaturedProducts:(BOOL)set
                        backgroundColor:(UIColor *)color;

/**
 Change title on Featured Products screen
 
 @param title New title
 */
- (void)setTitleForFeaturedProductsScreen:(NSString *)title;

/**
 Change label text color on items in list
 
 @param lColor Text color for left label
 @param rColor Text color for right item
 */
- (void)featuredProductsLeftLabelTextColor:(UIColor *)lColor
                       rightLabelTextColor:(UIColor *)rColor;

/**
 Set background image on Featured Products screen
 
 @param imagePath Path to image file.
 */
- (void)featuredProductsSetBackgroundImage:(NSString *)imagePath;

#pragma mark - Product Details

/**
 Show title below navigation bar on Product Details screen
 
 @param set Default value is NO
 */
- (void)productDetailsShowTitleBelowNavBar:(BOOL)set;

/**
 Show menu button in navigation bar on Product Details screen
 
 @param set Default value is NO
 */
- (void)productDetailsShowMenuBtnInNavBar:(BOOL)set;


#pragma mark - Photo Sources

/**
 Set available photo sources
 
 @param Array of PIOSideMenuButton objects, represents which types of photo sources will be
 available to user. Types:
 
 PIO_SM_FACEBOOK
 PIO_SM_INSTAGRAM
 PIO_SM_PICASA
 PIO_SM_FLICKR
 PIO_SM_DROPBOX
 PIO_SM_PHOTOBUCKET
 PIO_SM_PHONE
 
 In order to show photo sources to user, 'usePhotoSources' has to be enabled.
 */
- (void)availablePhotoSources:(NSArray *)vPhotoSources;

/**
 When user enters 'Select Photos' screen, selected photo source will be opened by default.
 If an album id is passed in, if exist, that album will be opened.
 
 @param pSource Photo source:
 
 PIO_SM_FACEBOOK
 PIO_SM_INSTAGRAM
 PIO_SM_PICASA
 PIO_SM_FLICKR
 PIO_SM_DROPBOX
 PIO_SM_PHOTOBUCKET
 PIO_SM_PHONE
 
 @param albumId Album id (Currently works only for PIO_SM_PHOTOBUCKET photo source)
 
 */
- (void)setDefaultPhotoSource:(NSInteger)pSource
                      albumId:(NSString *)albumId;

/**
 Pass in images URLs or UIImage objects.
 
 @param images Array of image urls or/and UIImage objects
 */
- (void)images:(NSArray *)images;

/**
 If user pass in images usinig method 'images', this method can disable photo sources,
 forcing user to use only passed photos.
 
 This method overrides method 'availablePhotoSources'
 */
- (void)disablePhotoSourcesWhenImagesArePassedIn:(BOOL)disable;

/**
 Disable photo sources only if image is passed in, and user selects template with
 one photo.
 */
- (void)disablePhotoSourcesForOnePhotoTemplate:(BOOL)disable;

/**
 Set passed in image to be first in row for all photo sources.
 */
- (void)setPassedImageFirstInPhotoSources:(BOOL)set;

/**
 Set passed in image as thumbnail for templates with one photo.
 
 Right now, only supports Canvas Wraps and Framed Prints
 */
- (void)setPassedImageAsThumbForOnePhotoTemplate:(BOOL)set;

/**
 Hide icon for Upload Instructions text in Photo Sources screen. Default value is NO.
 */
- (void)hideIconForUploadInstructions:(BOOL)hide;

/**
 Set Instagram credentials. By default, PrintIO credentials are used.
 */
- (void)setInstagramClientID:(NSString *)clientId
                 redirectUrl:(NSString *)redirectUrl;

/**
 Set Flickr credentials. By default, PrintIO credentials are used.
 */
- (void)setFlickrKey:(NSString *)key
           secretKey:(NSString *)secretKey
         redirectUrl:(NSString *)redirectUrl;

/**
 Set Dropbox credentials. By default, PrintIO credentials are used.
 */
- (void)setDropboxKey:(NSString *)key
          redirectUrl:(NSString *)redirectUrl;

/**
 Set Facebook credentials. By default, PrintIO credentials are used.
 */
- (void)setFacebookAppId:(NSString *)appId
             redirectUrl:(NSString *)redirectUrl;

/**
 Set access token for Facebook
 
 @param aToken Valid access token for session
 */
- (void)setFacebookAccessToken:(NSString *)aToken;

/**
 Set username and password for Photobucket (autologin)
 
 @param userName Username or email for Photobucket account
 @param password Password
 */
- (void)setPhotobucketUsername:(NSString *)userName
                      password:(NSString *)password;

/**
 Set access token for Photobucket
 
 @param aToken Valid access token for session
 @param username Username
 @param baseUrl Base url for Photobucket
 */
- (void)setPhotobucketAccessToken:(NSString *)aToken
                         userName:(NSString *)username
                          baseURL:(NSString *)baseUrl;

/**
 Change title for Photo Sources screen
 
 @param title New title
 */
- (void)setTitleForPhotoSourcesScreen:(NSString *)title;

#pragma mark - Customize Product

/**
 Show/hide tab bar in Customize Product screen. Default value is YES
 
 @param show Set show/hide
 @param imagePath Path to image file.
 */
- (void)showToolbarInCustomizeProduct:(BOOL)show
                      backgroundImage:(NSString *)imagePath;

/**
 Hide list with images in customization screen
 */
- (void)hideImagesListInCustomizeProduct:(BOOL)hide;

/**
 Set photo(s) arrangement in Customize Product screen
 
 @param
 PIO_PHOTO_ARRANGEMENT_CHOOSE,
 PIO_PHOTO_ARRANGEMENT_AUTO,
 PIO_PHOTO_ARRANGEMENT_MANUAL
 
 */
- (void)setPhotoArrangement:(NSInteger)option;

/**
 Change image for "Add photos" button in Customize Product screen
 
 @param imagePath Path to image file.
 */
- (void)iconForAddPhotosButton:(NSString *)imagePath;

/**
 Change icon for Help Button on Customize Product screen
 
 @param imagePath Path to image file.
 @param visible Default value is YES
 */
- (void)iconForHelpButtonInCustomizeProduct:(NSString *)imagePath
                                    visible:(BOOL)visible;

/**
 Change icon for 'Save' button on Customize Product screen
 
 @param imagePath Path to image file.
*/
- (void)iconForSaveButtonInCustomizeProduct:(NSString *)imagePath;

/**
 Set Pop up balloon in Customize Product screen
 
 @param path Path to background image.
 @param text Balloon text.
 @param textColor Text color.
 */
- (void)setPopUpWithImage:(NSString *)path text:(NSString *)text textColor:(UIColor *)textColor;

/**
 Set time of visibility for Double Tap ballon in Customize Product screen
 
 @param timeInSeconds Time in seconds. Set -1 if ballon should be visible all the time.
                      Default time is 10 seconds.
 */
- (void)doubleTapBalloonVisibilityTime:(int)timeInSeconds;

/**
 Show custom dialog for helping user how to edit a photo
 
 @param Path to image.
 */
- (void)showHelpDialogWithImage:(NSString *)imagePath;

/**
 Disable Preview screen for product
 
 @param set Default value is NO
 */
- (void)disablePreviewScreen:(BOOL)set;

/**
 Set same photo on front and back side of product. 
 Currently it only supports PRODUCT_THROW_PILLOWS.
 
 @param productId Product id
 */
- (void)setSamePhotoOnFrontAndBackSideOfProduct:(NSInteger)productId;

#pragma mark - Image Editor

/**
 Set which buttons will be visible in Image Editor toolbar. By default, all buttons are visible.
 
 @param buttons Array of PIOButton objects of types:
 PIO_BUTTON_IMAGE_EDITOR_INFO,
 PIO_BUTTON_IMAGE_EDITOR_ROTATE,
 PIO_BUTTON_IMAGE_EDITOR_EDIT_TEXT,
 PIO_BUTTON_IMAGE_EDITOR_EFFECTS
 */
- (void)imageEditorShowButtons:(NSArray *)buttons;

#pragma mark - Shopping Cart

/**
 Set custom icon for Shopping Cart
 
 @param path Path to image file.
 @param set Set to YES if image has red circle for number of items in cart.
 @param lPosition Position of label with number of products in cart
 @param tColor Text color of label with number of products in cart
 */
- (void)iconForShoppingCart:(NSString *)path
       withNumberOfProducts:(BOOL)set
              labelPosition:(CGPoint)lPosition
                  textColor:(UIColor *)tColor;

/**
 Remove plus sign from "Add more products" button. By default, sign is visible.
 */
- (void)removePlusFromAddMoreProductsButton:(BOOL)remove;

/**
 Change title for "Shopping Cart" screen
 
 @param title New title
 */
- (void)setTitleForShoppingCart:(NSString *)title;

/**
 Toggle 'Add more products' button on the Shopping Cart screen.
 
 @param showsButton Button visibility flag. Default is YES.
 */
- (void)setShowsAddMoreProductsInShoppingCart:(BOOL)showsAddButton;

/**
 Customize 'Add More Products' button
 
 @param title New title for button
 @param iconPath Path to icon file. Default is nil.
 */
- (void)customizeAddMoreProductButton:(NSString *)title icon:(NSString *)iconPath;

/**
 Change icon for Back button on Shopping Cart screen
 
 @param iconPath Path to icon file. Default is nil.
 */
- (void)shoppingCartBackButtonIcon:(NSString *)iconPath;

/**
 Get number of items in shopping cart
 */
+ (NSInteger)numberOfItemsInShoppingCart;

/**
 Hides 'Edit' button on 'Shopping Cart' screen
 
 @param set Default value is NO
 */
- (void)hideEditButtonInShoppingCart:(BOOL)set;

/**
 Set promo code to get discount
 
 @param promoCode Promo code
 */
- (void)setPromoCode:(NSString *)promoCode;

#pragma mark - Payment screen

/**
 Remove logo from Payment and Order Confirmation screen
 */
- (void)removeLogoFromPaymentScreen:(BOOL)remove;

#pragma mark - Country, Currency and Language

/**
 Set country code
 */
- (void)countryCode:(NSString *)countryCode;

/**
 Set currency code
 */
- (void)currencyCode:(NSString *)currencyCode;

/**
 Set language code
 */
- (void)languageCode:(NSString *)languageCode;

#pragma mark - Shipping Addresses screen

/**
 Show plus sign on 'Add Shipping Address' button
 
 @param set Default value is NO
 */
- (void)showPlusSignOnAddButton:(BOOL)set;

/**
 Change highlight color for address selection on 'Select Address'
 screen
 
 @param color New color. Default is light green.
 */
- (void)colorForAddressSelection:(UIColor *)color;

#pragma mark - Order Completed screen

/**
 Change title for 'Order Completed' screen
 
 @param title New title
 */
- (void)setTitleForOrderCompletedScreen:(NSString *)title;

/**
 Change icon for company logo on 'Order Completed' screen
 
 @param iconPath File path to icon
 */
- (void)setIconForOrderCompletedScreen:(NSString *)iconPath;

/**
 Change company message below company logo on 'Order Completed' screen
 
 @param message New message
 */
- (void)setMessageForOrderCompletedScreen:(NSMutableAttributedString *)message;

/**
 Change function of 'Close' button on 'Order Completed' screen
 
 @param set Default value is NO
 */
- (void)orderCompletedScreenCloseButtonShouldPerformBack:(BOOL)set;

#pragma mark - Other Customization

/**
 Import customization XML file
 
 @param xmlData Customization xml file.
 
 Example: NSString *xmlPath = [[NSBundle mainBundle] pathForResource:@"customization" ofType:@"xml"];
 NSData *xmlData = [NSData dataWithContentsOfFile:xmlPath];
 */
- (void)customizationXML:(NSData *)xmlData;

/**
 Set custom fonts from main app bundle.
 
 @param fonts Array of string values that contains font name and type with the exact order (light, medium, regular, bold). Example: [@"font_light.otf", @"font_medium.otf", @"font_regular.otf", @"font_bold.otf"]. Array must have four items, and fonts can be duplicated. Array also accepts
    system (normal, bold and italic) UIFont objects.
 */
- (void)customFonts:(NSArray *)fonts;

/**
 Change "Loading" GIF animation
 
 @param fileName File name of GIF
 */
- (void)setLoadingGIF:(NSString *)fileName;

/**
 Change title of loading dialog
 
 @param lText New title for loading dialog.
 */
- (void)setLoadingText:(NSString *)lText;

/**
 Change icon for Help Button
 
 @param imagePath Path for image file
 */
- (void)iconForHelpButton:(NSString *)imagePath;

/**
 Change logo in SDK
 
 @param logo Logo file name
 */
- (void)changeLogo:(NSString *)logo;

/**
 Set payee name
 
 @param payeeName Payee name
 */
- (void)payeeName:(NSString *)payeeName;

/**
 Set url to Terms and Conditions
 
 @params url If not set, options will be hidden
 */
- (void)termsAndConditionsURL:(NSURL *)url;

/**
 Provide text for "How It Works" screen
 
 @params text Text
 */
- (void)setHowItWorksText:(NSString *)text;

/**
 Provide text for "About" screen
 
 @param text Text
 */
- (void)setAboutText:(NSString *)text;

/**
 Enable option to share on facebook and get extra deal
 
 @param set Default value is NO
 */
- (void)enableShareOnFacebookDeal:(BOOL)set;

/**
 Set url link to facebook page e.g. 'fb://profile/642169949144369'
 
 @param urlS link to page
 */
- (void)setLikeUsOnFacebookUrl:(NSString *)urlS;

/**
 Set application id from apple store, used for 'Rate Our App'
 option in side menu. e.g '731593327'
 
 @param appID application id
 */
- (void)setAppIDFromAppleStore:(NSString *)appID;

/**
 Turn off logs
 
 @param set Default value is NO
 */
- (void)turnOffLogs:(BOOL)set;

/**
 Change background color on positive buttons (Yes, Next, Ok, Save, Buy It, Create It...)
 
 @param bColor Background color
 @param tColor Title color
 */
- (void)setPositiveButtonsBackgroundColor:(UIColor *)bColor titleColor:(UIColor *)tColor;

/**
 Change background color on negative buttons (No, Back, Cancel, Close...)
 
 @param bColor Background color
 @param tColor Title color
 */
- (void)setNegativeButtonsBackgroundColor:(UIColor *)bColor titleColor:(UIColor *)tColor;

#pragma mark - Fonts

/**
 Change light fonts size
 
 @param Increase/decrease font size by 'value'
 */
- (void)changeSizeOfLightFontsBy:(float)value;

/**
 Change medium fonts size
 
 @param Increase/decrease font size by 'value'
 */
- (void)changeSizeOfMediumFontsBy:(float)value;

/**
 Change regular fonts size
 
 @param Increase/decrease font size by 'value'
 */
- (void)changeSizeOfRegularFontsBy:(float)value;

/**
 Change bold fonts size
 
 @param Increase/decrease font size by 'value'
 */
- (void)changeSizeOfBoldFontsBy:(float)value;

#pragma mark - Steps

/**
 Jumps directly to product.
 
 @param productId Product identifier can be found in ProductIds.h and starts with PRODUCT_
 */
- (void)goToProductId:(int)productId;

/**
 Jumps directly to product with sku
 
 @param productId Product identifier can be found in ProductIds.h and starts with PRODUCT_
 @param sku SKU for selected product
 */
- (void)goToProductId:(int)productId withSKU:(NSString *)sku;

/**
 Set products variants options
 
 @param options Array of PIOVariantOption objects. Pass 'color' with Case Style option
 */
- (void)setVariantsOptions:(NSArray *)options;

/**
 Change title for 'Customization Options' screen
 */
- (void)setTitleForChooseOptionsScreen:(NSString *)title;

/**
 Auto selects one photo template for selected productID
 
 @param productID productID of selected product
 */
- (void)autoSelectOnePhotoTemplateForProductID:(NSInteger)productID;

#pragma mark - Google Analytics

/**
 Set tracking id for Google Analytics. If tracking id is not provided, 
 analytics are disabled.
 
 @param trackingID Tracking ID provided by Google
 */
- (void)setTrackingIDForGoogleAnalytics:(NSString *)trackingID;

#pragma mark - Push Notifications

/**
 Set applicationId and apiKey provided from parse.com
 
 @param appId application id
 @param apiKey rest api key
 */
+ (void)setParseApplicationId:(NSString *)appId
                       apiKey:(NSString *)apiKey;

/**
 Register device to receive push notifications
 
 @param deviceToken Device token
 */
+ (void)registerDeviceToken:(NSData *)deviceToken;

/**
 Display notification pop up from bottom of screen. On tap it will dismiss notification.
 
 @param userInfo Dictionary provided from didReceiveRemoteNotification
 @param backgroundColor Background color for notification pop up
 @param textColor Text color
 */
+ (void)showNotification:(NSDictionary *)userInfo
         backgroundColor:(UIColor *)bcgColor
               textColor:(UIColor *)textColor;

#pragma mark - PayPal settings

/**
 Set PayPal's client ids, for both modes, staging and production. Default values are
 client ids from PrintIO
 
 @param sClientId Client id for staging mode
 @param pClientId Client id for production mode
 */
- (void)setPayPalStagingClientId:(NSString *)sClientId
              productionClientId:(NSString *)pClientId;

#pragma mark - Braintree settings

/**
 Set Braintree encryption key for staging and production mode. By default, keys from PrintIO will be used
 
 @param sEncKey Encryption key for staging mode
 @param pEncKey Encryption key for production mode
 */
- (void)setBraintreeStagingEncryptionKey:(NSString *)sEncKey
                 productionEncryptionKey:(NSString *)pEncKey;

#pragma mark - For Partners

/**
 Set extra data
 
 @param extraData Additional data for partners. Requered parameter is ED_PARTNERS_ID
 */
- (void)extraData:(NSMutableDictionary *)extraData;

@end
