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
#import <UIKit/UIKit.h>
enum {
    PRINTIO_STAGING,
    PRINTIO_PRODUCTION,
};

enum {
    PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT = 1 << 0,
    PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT = 1 << 1,
    PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM = 1 << 2,
    
    PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART = 1 << 3,
    PRINTIO_ENABLE_BACK_BUTTON = 1 << 4
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#init-printio-widget
 
 @param type Set environment to staging or live, use PRINTIO_STAGING or PRINTIO_PRODUCTION
 @param pRecipeId Production recipeId provided by PrintIO
 @param sRecipeId Staging recipeId provided by PrintIO
 */
- (id)initWithEnvironment:(int)type
       productionRecipeId:(NSString *)pRecipeId
          stagingRecipeId:(NSString *)sRecipeId;

/**
 Init PrintIO widget with parent view controller.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#parent-view-controller
 
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#sdk-opening-direction
 
 @param option Set the options
 PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT,
 PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT,
 PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM,
 PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART
 PRINTIO_ENABLE_BACK_BUTTON
 */
- (void)openWithOption:(int)option;

/**
 Present widget from view controller with option
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#present-widget-from-view-controller-with-option
 
 @param option Set the options
 PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT,
 PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT,
 PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM,
 PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART
 PRINTIO_ENABLE_BACK_BUTTON
 */
- (void)presentFromViewController:(UIViewController *)viewController
                       withOption:(int)option;

/**
 Close widget.
 */
- (void)close:(NSInteger)flag;

/**
 DEPRECATED
 */
- (void)goToScreen:(int)screen
DEPRECATED_MSG_ATTRIBUTE(" Use 'openWithOption:(int)option' instead of this");

/**
 DEPRECATED
 */
- (void)setJumpToScreen:(NSInteger)screen
DEPRECATED_MSG_ATTRIBUTE(" Use 'openWithOption:(int)option' instead of this");

/**
 Returns PrintIO view controller. Set all options before calling this method
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#returns-printio-view-controller
 */
- (id)viewController;

#pragma mark - Navigation Bar

/**
 Change navigation bar color and title font color.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#navigation-bar-settings
 
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
 DEPRECATED
 */
- (void)iconForBackButton:(NSString *)path
DEPRECATED_MSG_ATTRIBUTE(" Use 'setIconForBackButton:(NSString *)iconPath' instead of this");

/**
 Set icon for back button.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-back-button-icon
 
 @param path Path to image file.
 */
- (void)setIconForBackButton:(NSString *)iconPath;

/**
 DEPRECATED
 */
- (void)statusBarDark:(BOOL)dark
               hidden:(BOOL)hidden
DEPRECATED_MSG_ATTRIBUTE(" Use 'setStatusBarDark:(BOOL)dark hidden:(BOOL)hidden' instead of this");

/**
 Set status bar style and visibility.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-status-bar-style-and-visibility
 
 @param dark Default value is NO
 @param hidden Default value is NO
 */
- (void)setStatusBarDark:(BOOL)dark
                  hidden:(BOOL)hidden;

/**
 DEPRECATED
 */
- (void)useThreeButtonsBarStyle:(BOOL)set
DEPRECATED_MSG_ATTRIBUTE(" Use 'setThreeButtonsNavigationBarSytle:(BOOL)set' instead of this");

/**
 Set three buttons Back, Menu and Cart button in navigation bar for Featured Products screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#user-three-button-menu-bar
 
 @param set Default value is NO
 */
- (void)setThreeButtonsNavigationBarSytle:(BOOL)set;

/**
 DEPRECATED
 */
- (void)navigationBarSaveToCartBackgroundColor:(UIColor *)bcgColor
                                    titleColor:(UIColor *)titleColor
                         buttonBackgroundColor:(UIColor *)btnBcgColor
                              buttonTitleColor:(UIColor *)btnTitleColor
DEPRECATED_MSG_ATTRIBUTE(" Use 'setNavigationBarSaveToCartBackgroundColor:(UIColor *)bcgColor titleColor:(UIColor *)titleColor buttonBackgroundColor:(UIColor *)btnBcgColor buttonTitleColor:(UIColor *)btnTitleColor' instead of this");

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

#pragma mark - Side Menu

/**
 Use Side Menu with options:
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#side-menu-controls
 
 @param mIconPath Path to image for Menu icon. If nil, default icon will be used.
 @param bcgColor Background color for Side Menu. If nil, default will be used.
 */
- (void)useSideMenuWithMenuIcon:(NSString *)mIconPath
                     background:(UIColor *)bcgColor;

/**
 Set which options to use in side menu
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#configure-side-menu-buttons
 
 @param buttons Array of PIOSideMenuButton objects of types:
 PIO_SM_EXIT_BUTTON,
 PIO_SM_SEARCH_BAR,
 PIO_SM_PRODUCTS,
 PIO_SM_FEATURED_PRODUCTS,
 PIO_SM_VIEW_CART,
 PIO_SM_SHARE_WITH_IMAGE,
 PIO_SM_EMAIL_SUPPORT
 PIO_SM_HELP
 
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#configure-side-menu-options
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
 
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#configure-side-menu-info-options
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
 
 
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#construct-side-menu
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#hide-side-menu-headers
 */
- (void)sideMenuHideOptionsHeader:(BOOL)set;

/**
 Hide 'Accounts' header in Side Menu
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#hide-side-menu-headers
 */
- (void)sideMenuHideAccountsHeader:(BOOL)set;

/**
 Hide 'Info' header in Side Menu
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#hide-side-menu-headers
 */
- (void)sideMenuHideInfoHeader:(BOOL)set;

/**
 Show 'Options' section as a list
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#show-localization-options-as-a-vertical-list
 
 @param set Default value is NO
 */
- (void)sideMenuShowOptionsAsList:(BOOL)set;

/**
 Slide side menu from right. Default value is NO.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#slide-side-menu-from-right-side
 
 @param set Default value is NO.
 */
- (void)slideSideMenuFromRight:(BOOL)set;

/**
 This is option from Side Menu, in order to use it, Side Menu needs to be enabled first.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#custom-share-text
 
 @param shareText Text that will be used for sharing. May contains link also.
 */
- (void)setShareText:(NSString *)shareText;

/**
 Hide photo sources section in Side Menu
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#hide-photo-sources-in-side-menu
 
 @param set Default value is NO
 */
- (void)hidePhotoSourcesInSideMenu:(BOOL)set;

/**
 Set background image on Side Menu
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-background-image-on-side-menu
 
 @param path Image path
 */
- (void)sideMenuBackgroungImage:(NSString *)path;

#pragma mark - Choose Country Screen

/**
 Change title on 'Choose Country' screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#customize-choose-country-screen
 
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-placeholder-text-and-magnifying-glass-visibility-in-search-bar
 
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#category-control-bar-visibile
 
 */
- (void)hideCategoriesInFeaturedProducts:(BOOL)hide;

/**
 DEPRECATED
 */
- (void)selectCountryInFeaturedProducts:(BOOL)set
                        backgroundColor:(UIColor *)color
DEPRECATED_MSG_ATTRIBUTE(" Use 'setCountryInFeaturedProducts:(BOOL)set backgroundColor:(UIColor *)color' instead of this");

/**
 Select country on Featured Products screen.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#select-country-bar
 
 @param set Default value is YES.
 @param color Background color.
 */
- (void)setCountryInFeaturedProducts:(BOOL)set
                     backgroundColor:(UIColor *)color;

/**
 Change title on Featured Products screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#featured-products-title
 
 @param title New title
 */
- (void)setTitleForFeaturedProductsScreen:(NSString *)title;

/**
 DEPRECATED
 */
- (void)featuredProductsLeftLabelTextColor:(UIColor *)lColor
                       rightLabelTextColor:(UIColor *)rColor
DEPRECATED_MSG_ATTRIBUTE(" Use 'setFeaturedProductsLeftLabelTextColor:(UIColor *)lColor rightLabelTextColor:(UIColor *)rColor' instead of this");

/**
 Change label's color on items in list on Featured Products screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#change-labels-color-on-items-in-list-on-featured-products-screen
 
 @param lColor Text color for left label
 @param rColor Text color for right label
 */
- (void)setFeaturedProductsLeftLabelTextColor:(UIColor *)lColor
                          rightLabelTextColor:(UIColor *)rColor;

/**
 DEPRECATED
 */
- (void)featuredProductsSetBackgroundImage:(NSString *)imagePath
DEPRECATED_MSG_ATTRIBUTE(" Use 'setFeaturedProductsBackgroungImage:(NSString *)imagePath' instead of this");

/**
 Set background image on Featured Products screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#featured-products-background-image
 
 @param imagePath Path to image file.
 */
- (void)setFeaturedProductsBackgroungImage:(NSString *)imagePath;

#pragma mark - Product Details

/**
 Show title below navigation bar on Product Details screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#product-detail-screen-navigation-bar-settings
 
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
 DEPRECATED
 */
- (void)availablePhotoSources:(NSArray *)vPhotoSources
DEPRECATED_MSG_ATTRIBUTE(" Use 'setAvailablePhotoSources:(NSArray *)vPhotoSources' instead of this");

/**
 Set available photo sources
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#configure-photo-sources
 
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

/**
 When user enters 'Select Photos' screen, selected photo source will be opened by default.
 If an album id is passed in, if exist, that album will be opened.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-default-photo-source
 
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

/**
 DEPRECATED
 */
- (void)images:(NSArray *)images
DEPRECATED_MSG_ATTRIBUTE(" Use 'setImages:(NSArray *)images' instead of this");

/**
 Pass in images URLs or UIImage objects.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#pass-photo-to-sdk
 
 @param images Array of image urls or/and UIImage objects
 */
- (void)setImages:(NSArray *)images;

/**
 If user pass in images usinig method 'images', this method can disable photo sources,
 forcing user to use only passed photos.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#photo-source-visibility---passing-any
 
 This method overrides method 'availablePhotoSources'
 */
- (void)disablePhotoSourcesWhenImagesArePassedIn:(BOOL)disable;

/**
 Disable photo sources only if image is passed in, and user selects template with
 one photo.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#photo-source-visibility---passing-for-single-photo-template
 */
- (void)disablePhotoSourcesForOnePhotoTemplate:(BOOL)disable;

/**
 Set passed in image to be first in row for all photo sources.
 */
- (void)setPassedImageFirstInPhotoSources:(BOOL)set;

/**
 Set passed in image as thumbnail for templates with one photo.
 Right now, only supports Canvas Wraps and Framed Prints
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-passed-image-as-thumbnail
 */
- (void)setPassedImageAsThumbForOnePhotoTemplate:(BOOL)set;

/**
 Hide icon for Upload Instructions text in Photo Sources screen. Default value is NO.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#upload-instructions-icon-visible
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-access-token-for-facebook
 
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-access-token-for-photobucket
 
 @param aToken Valid access token for session
 @param username Username
 @param baseUrl Base url for Photobucket
 */
- (void)setPhotobucketAccessToken:(NSString *)aToken
                         userName:(NSString *)username
                          baseURL:(NSString *)baseUrl;

/**
 Change title for Photo Sources screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-title-for-photo-sources-screens
 
 @param title New title
 */
- (void)setTitleForPhotoSourcesScreen:(NSString *)title;

#pragma mark - Customize Product

/**
 Show/hide tab bar in Customize Product screen. Default value is YES
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#toolbar-visible
 
 @param show Set show/hide
 @param imagePath Path to image file.
 */
- (void)showToolbarInCustomizeProduct:(BOOL)show
                      backgroundImage:(NSString *)imagePath;

/**
 Hide list with images in customization screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#images-list-visible
 */
- (void)hideImagesListInCustomizeProduct:(BOOL)hide;

/**
 Set photo(s) arrangement in Customize Product screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#auto-arrange-photos
 
 @param
 PIO_PHOTO_ARRANGEMENT_CHOOSE,
 PIO_PHOTO_ARRANGEMENT_AUTO,
 PIO_PHOTO_ARRANGEMENT_MANUAL
 
 */
- (void)setPhotoArrangement:(NSInteger)option;

/**
 DEPRECATED
 */
- (void)iconForAddPhotosButton:(NSString *)imagePath
DEPRECATED_MSG_ATTRIBUTE(" Use 'setIconForAddPhotosButton:(NSString *)imagePath' instead of this");

/**
 Change image for "Add photos" button in Customize Product screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-add-photos-button-icon
 
 @param imagePath Path to image file.
 */
- (void)setIconForAddPhotosButton:(NSString *)imagePath;

/**
 DEPRECATED
 */
- (void)iconForHelpButtonInCustomizeProduct:(NSString *)imagePath
                                    visible:(BOOL)visible
DEPRECATED_MSG_ATTRIBUTE(" Use 'setIconForHelpButtonInCustomizeProduct:(NSString *)imagePath visible:(BOOL)visible' instead of this");

/**
 Change icon for Help Button on Customize Product screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-help-icon-on-customization-screen
 
 @param imagePath Path to image file.
 @param visible Default value is YES
 */
- (void)setIconForHelpButtonInCustomizeProduct:(NSString *)imagePath
                                       visible:(BOOL)visible;

/**
 DEPRECATED
 */
- (void)iconForSaveButtonInCustomizeProduct:(NSString *)imagePath
DEPRECATED_MSG_ATTRIBUTE(" Use 'setIconForSaveButtonInCustomizeProduct:(NSString *)imagePath' instead of this");

/**
 Change icon for 'Save' button on Customize Product screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-save-to-icon
 
 @param imagePath Path to image file.
 */
- (void)setIconForSaveButtonInCustomizeProduct:(NSString *)imagePath;

/**
 Set Pop up balloon in Customize Product screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#customize-help-balloon
 
 @param path Path to background image.
 @param text Balloon text.
 @param textColor Text color.
 */
- (void)setPopUpWithImage:(NSString *)path text:(NSString *)text textColor:(UIColor *)textColor;

/**
 DEPRECATED
 */
- (void)doubleTapBalloonVisibilityTime:(int)timeInSeconds
DEPRECATED_MSG_ATTRIBUTE(" Use 'setDoubleTapBalloonVisibilityTime:(int)timeInSeconds' instead of this");

/**
 Set time of visibility for Double Tap ballon in Customize Product screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-help-balloon-visibility-duration
 
 @param timeInSeconds Time in seconds. Set -1 if ballon should be visible all the time.
 Default time is 10 seconds.
 */
- (void)setDoubleTapBalloonVisibilityTime:(int)timeInSeconds;

/**
 Show custom dialog for helping user how to edit a photo
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#custom-editing-help-button-icon
 
 @param Path to image.
 */
- (void)showHelpDialogWithImage:(NSString *)imagePath;

/**
 Disable Preview screen for product
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#disable-preview-screen-for-item
 
 @param set Default value is NO
 */
- (void)disablePreviewScreen:(BOOL)set;

/**
 Set same photo on front and back side of product.
 Currently it only supports PRODUCT_THROW_PILLOWS.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-same-photo-on-front-and-back-side-of-product
 
 @param productId Product id
 */
- (void)setSamePhotoOnFrontAndBackSideOfProduct:(NSInteger)productId;

#pragma mark - Image Editor

/**
 Set which buttons will be visible in Image Editor toolbar. By default, all buttons are visible.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#configure-editing-buttons
 
 @param buttons Array of PIOButton objects of types:
 PIO_BUTTON_IMAGE_EDITOR_INFO,
 PIO_BUTTON_IMAGE_EDITOR_ROTATE,
 PIO_BUTTON_IMAGE_EDITOR_EDIT_TEXT,
 PIO_BUTTON_IMAGE_EDITOR_EFFECTS
 */
- (void)imageEditorShowButtons:(NSArray *)buttons;

#pragma mark - Shopping Cart

/**
 DEPRECATED
 */
- (void)iconForShoppingCart:(NSString *)path
       withNumberOfProducts:(BOOL)set
              labelPosition:(CGPoint)lPosition
                  textColor:(UIColor *)tColor
DEPRECATED_MSG_ATTRIBUTE(" Use 'setIconForShoppingCart:(NSString *)path withNumberOfProducts:(BOOL)set labelPosition:(CGPoint)lPosition textColor:(UIColor *)tColor' instead of this");

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

/**
 Set custom icon for Shopping Cart
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#cart-icon-and-badging
 
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

/**
 Remove plus sign from "Add more products" button. By default, sign is visible.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#configure-add-more-products-button
 */
- (void)removePlusFromAddMoreProductsButton:(BOOL)remove;

/**
 Change title for "Shopping Cart" screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#shopping-cart-title
 
 @param title New title
 */
- (void)setTitleForShoppingCart:(NSString *)title;

/**
 Toggle 'Add more products' button on the Shopping Cart screen.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#visibility-for-add-more-products-button-on-the-shopping-cart-screen
 
 @param showsButton Button visibility flag. Default is YES.
 */
- (void)setShowsAddMoreProductsInShoppingCart:(BOOL)showsAddButton;

/**
 Customize 'Add More Products' button
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#customize-add-more-product-button
 
 @param title New title for button
 @param iconPath Path to icon file. Default is nil.
 */
- (void)customizeAddMoreProductButton:(NSString *)title icon:(NSString *)iconPath;

/**
 DEPRECATED
 */
- (void)shoppingCartBackButtonIcon:(NSString *)iconPath
DEPRECATED_MSG_ATTRIBUTE(" Use 'setIconForShoppingCartBackButton:(NSString *)iconPath' instead of this");

/**
 Change icon for Back button on Shopping Cart screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#customize-back-button-in-shopping-cart
 
 @param iconPath Path to icon file. Default is nil.
 */
- (void)setIconForShoppingCartBackButton:(NSString *)iconPath;

/**
 Get number of items in shopping cart
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#get-number-of-items-in-shopping-cart
 */
+ (NSInteger)numberOfItemsInShoppingCart;

/**
 Hides 'Edit' button on 'Shopping Cart' screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#hideshow-edit-button-on-shopping-cart-screen
 
 @param set Default value is NO
 */
- (void)hideEditButtonInShoppingCart:(BOOL)set;

/**
 Set promo code to get discount
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-promo-code-to-get-discount
 
 @param promoCode Promo code
 */
- (void)setPromoCode:(NSString *)promoCode;

#pragma mark - Payment screen

/**
 Remove logo from Payment and Order Confirmation screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#remove-logo-from-checkout
 */
- (void)removeLogoFromPaymentScreen:(BOOL)remove;

#pragma mark - Country, Currency and Language

/**
 DEPRECATED
 */
- (void)countryCode:(NSString *)countryCode
DEPRECATED_MSG_ATTRIBUTE(" Use 'setCountryCode:(NSString *)countryCode' instead of this");

/**
 Set country code
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#specify-localizations
 
 @param countryCode Country code
 */
- (void)setCountryCode:(NSString *)countryCode;

/**
 DEPRECATED
 */
- (void)currencyCode:(NSString *)currencyCode
DEPRECATED_MSG_ATTRIBUTE(" Use 'setCurrencyCode:(NSString *)currencyCode' instead of this");

/**
 Set currency code
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#specify-localizations
 
 @param currencyCode Currency code
 */
- (void)setCurrencyCode:(NSString *)currencyCode;

/**
 DEPRECATED
 */
- (void)languageCode:(NSString *)languageCode
DEPRECATED_MSG_ATTRIBUTE(" Use 'setLanguageCode:(NSString *)languageCode' instead of this");

/**
 Set language code
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#specify-localizations
 
 @param languageCode Language code
 */
- (void)setLanguageCode:(NSString *)languageCode;

#pragma mark - Shipping Addresses screen

/**
 Show plus sign on 'Add Shipping Address' button
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#show-plus-sign-on-add-shipping-address-button
 
 @param set Default value is NO
 */
- (void)showPlusSignOnAddButton:(BOOL)set;

/**
 DEPRECATED
 */
- (void)colorForAddressSelection:(UIColor *)color
DEPRECATED_MSG_ATTRIBUTE(" Use 'setColorForAddressSelection:(UIColor *)color' instead of this");

/**
 Change highlight color for address selection on 'Select Address'
 screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#highlight-color-for-address-selection
 
 @param color New color. Default is light green.
 */
- (void)setColorForAddressSelection:(UIColor *)color;

#pragma mark - Order Completed screen

/**
 Change title for 'Order Completed' screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#customize-order-completed-screen
 
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
 DEPRECATED
 */
- (void)customizationXML:(NSData *)xmlData
DEPRECATED_MSG_ATTRIBUTE(" Use 'setCustomizationXML:(NSData *)xmlData' instead of this");

/**
 Import customization XML file
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#xml-customization-file
 
 @param xmlData Customization xml file.
 
 Example: NSString *xmlPath = [[NSBundle mainBundle] pathForResource:@"customization" ofType:@"xml"];
 NSData *xmlData = [NSData dataWithContentsOfFile:xmlPath];
 */
- (void)setCustomizationXML:(NSData *)xmlData;

/**
 DEPRECATED
 */
- (void)customFonts:(NSArray *)fonts
DEPRECATED_MSG_ATTRIBUTE(" Use 'setFonts:(NSArray *)fonts' instead of this");

/**
 Set custom fonts from main app bundle.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#custom-fonts
 
 @param fonts Array of string values that contains font name and type with the exact order (light, medium, regular, bold). Example: [@"font_light.otf", @"font_medium.otf", @"font_regular.otf", @"font_bold.otf"]. Array must have four items, and fonts can be duplicated. Array also accepts
 system (normal, bold and italic) UIFont objects.
 */
- (void)setFonts:(NSArray *)fonts;

/**
 Toggles UIActivityIndicatorView on the loading view instead of the loading gif image. Calling this method will override the gif image if it has previously been set.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#loading-view-instead-of-the-loading-gif-image
 
 @param style UIActivityIndicatorView's style.
 */

- (void)setLoadingActivityIndicatorViewStyle:(UIActivityIndicatorViewStyle)style;

/**
 Changes "Loading" GIF animation image. Calling this method will override the UIActivityIndicatorViewStyle if has previously been set.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#loading-gif
 
 @param fileName GIF image file name.
 */
- (void)setLoadingGIF:(NSString *)fileName;

/**
 Change title of loading dialog
 
 @param lText New title for loading dialog.
 */
- (void)setLoadingText:(NSString *)lText;

/**
 DEPRECATED
 */
- (void)iconForHelpButton:(NSString *)imagePath
DEPRECATED_MSG_ATTRIBUTE(" Use 'setIconForHelpButton:(NSString *)imagePath' instead of this");

/**
 Change icon for Help Button
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#change-icon-for-help-button
 
 @param imagePath Path for image file
 */
- (void)setIconForHelpButton:(NSString *)imagePath;

/**
 DEPRECATED
 */
- (void)changeLogo:(NSString *)logo
DEPRECATED_MSG_ATTRIBUTE(" Use 'setLogoFileName:(NSString *)fileName' instead of this");

/**
 Change partner's logo in SDK
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-logo-icon
 
 @param fileName File name of logo image, without file type extension.
 Image file needs to be stored in main bundle.
 */
- (void)setLogoFileName:(NSString *)fileName;

/**
 DEPRECATED
 */
- (void)payeeName:(NSString *)payeeName
DEPRECATED_MSG_ATTRIBUTE(" Use 'setPayeeName:(NSString *)payeeName' instead of this");

/**
 Set payee name for order processing
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-partnerpayee-name
 
 @param payeeName Payee name
 */
- (void)setPayeeName:(NSString *)payeeName;

/**
 DEPRECATED
 */
- (void)termsAndConditionsURL:(NSURL *)url
DEPRECATED_MSG_ATTRIBUTE(" Use 'setTermsAndConditionsURL:(NSURL *)url' instead of this");

/**
 Set url for Terms and Conditions
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#specify-terms--conditions-location
 
 @params url If not set, this option will be hidden
 */
- (void)setTermsAndConditionsURL:(NSURL *)url;

/**
 Provide text for "How It Works" screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-how-it-works-text
 
 @params text Text
 */
- (void)setHowItWorksText:(NSString *)text;

/**
 Provide text for "About" screen
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-about-text
 
 @param text Text
 */
- (void)setAboutText:(NSString *)text;

/**
 Enable option to share on facebook and get extra deal
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#enable-facebook-share-deal
 
 @param set Default value is NO
 */
- (void)enableShareOnFacebookDeal:(BOOL)set;

/**
 Set url link to facebook page e.g. 'fb://profile/642169949144369'
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#like-on-facebook-url
 
 @param urlS link to page
 */
- (void)setLikeUsOnFacebookUrl:(NSString *)urlS;

/**
 Set application id from apple store, used for 'Rate Our App'
 option in side menu. e.g '731593327'
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#apple-store-app-id
 
 @param appID application id
 */
- (void)setAppIDFromAppleStore:(NSString *)appID;

/**
 Turn off logs
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-logs
 
 @param set Default value is NO
 */
- (void)turnOffLogs:(BOOL)set;

/**
 Change background color on positive buttons (Yes, Next, Ok, Save, Buy It, Create It...)
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#positive-buttons
 
 @param bColor Background color
 @param tColor Title color
 */
- (void)setPositiveButtonsBackgroundColor:(UIColor *)bColor titleColor:(UIColor *)tColor;

/**
 Change background color on negative buttons (No, Back, Cancel, Close...)
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#negative-buttons
 
 @param bColor Background color
 @param tColor Title color
 */
- (void)setNegativeButtonsBackgroundColor:(UIColor *)bColor titleColor:(UIColor *)tColor;

#pragma mark - Fonts

/**
 Change light fonts size
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#customize-fonts-size-throughout-sdk
 
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-products-variants-options
 
 @param options Array of PIOVariantOption objects. Pass 'color' with Case Style option
 */
- (void)setVariantsOptions:(NSArray *)options;

/**
 Change title for 'Customization Options' screen
 */
- (void)setTitleForChooseOptionsScreen:(NSString *)title;

/**
 Auto selects one photo template for selected productID
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#auto-selects-one-photo-template-for-selected-productid
 
 @param productID productID of selected product
 */
- (void)autoSelectOnePhotoTemplateForProductID:(NSInteger)productID;

/**
 Disable auto recognition and selection of iPhone model
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#disable-auto-recognition-and-selection-of-iphone-model
 
 @param set Default value is NO
 */
- (void)disableAutoRecognizePhoneModel:(BOOL)set;

#pragma mark - Google Analytics

/**
 Set tracking id for Google Analytics. If tracking id is not provided,
 analytics are disabled.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#google-analytics
 
 @param trackingID Tracking ID provided by Google
 */
- (void)setTrackingIDForGoogleAnalytics:(NSString *)trackingID;

#pragma mark - Push Notifications

/**
 Set applicationId and apiKey provided from parse.com
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#applicationid-and-apikey-for-push-notifications
 
 @param appId application id
 @param apiKey rest api key
 */
+ (void)setParseApplicationId:(NSString *)appId
                       apiKey:(NSString *)apiKey;

/**
 Register device to receive push notifications
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#push-notifications
 
 @param deviceToken Device token
 */
+ (void)registerDeviceToken:(NSData *)deviceToken;

/**
 Display notification pop up from bottom of screen. On tap it will dismiss notification.
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#notification-pop-up
 
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
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-paypal-credentials
 
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
 DEPRECATED
 */
- (void)extraData:(NSMutableDictionary *)extraData
DEPRECATED_MSG_ATTRIBUTE(" Use 'setExtraData:(NSMutableDictionary *)extraData' instead of this");

/**
 Set extra data
 https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#set-extra-data
 
 @param extraData Additional data for partners. Requered parameter is ED_PARTNERS_ID
 */
- (void)setExtraData:(NSMutableDictionary *)extraData;

@end
