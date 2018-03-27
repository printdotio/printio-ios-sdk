//
//  PrintIO.h
//  PrintIO Framework
//
//  Created by Boro Perisic on 3/8/2018.
//  Copyright (c) 2018 Gooten. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProductIds.h"
#import "GTPaymentOptions.h"
#import "PIOPublicConstants.h"
#import <UIKit/UIKit.h>
#import "PIOVersion.h"
#import "GTAnalyticsDelegate.h"
#import "PIOVariantOption.h"
#import "PIODefaultPhotoSource.h"
#import "PIODefaultPhotoSourceItem.h"
#import "PIOPhotoSource.h"
#import "PIOPhotoSourceItem.h"
#import "PIOSessionManager.h"
#import "PIOPhotoSourceError.h"
#import "PIOPhotoSourceItemImageDownloader.h"
#import "GTAnalyticsEvent.h"
#import "GTAnalyticsScreen.h"
#import "PIOProductTemplate.h"

@class PrintIO;

typedef NS_ENUM(NSInteger, GTPresentOptions){
    GTPresentFromLeft = 1 << 0,
    GTPresentFromRight = 1 << 1,
    GTPresentFromBottom = 1 << 2,
    GTPresentToCart = 1 << 3
};

@protocol PrintIOUIDelegate <NSObject>

@optional

- (UIButton*)printIO:(PrintIO *)printIO photoSourceButtonWithImage:(UIImage *)image title:(NSString *)title;
- (NSString*)pathForPhotoSourceBackButtonImage:(PrintIO *)printIO;

@end

@protocol PrintIODelegate <NSObject>

@optional

- (void)PrintIOWidgetOnOpen;
- (void)PrintIOWidgetOnCloseWithData:(NSDictionary *)data;

/**
 Called after successfully placing an order.
 
 @param printIO PrintIO widget(sender).
 @param data NSDictionary containing order data.
 */
- (void)printIO:(PrintIO *)printIO didCompleteOrderWithData:(NSDictionary *)data;

@end

typedef void(^GTImagesCompletionHandler)(NSArray *images);

@protocol GTPhotoSelectionDelegate <NSObject>

@optional

- (void)gtPhotoSelection:(UIViewController *)viewController
          numberOfImages:(NSInteger)numberOfImages
                template:(PIOProductTemplate *)pTemplate
              completion:(GTImagesCompletionHandler)completionHandler;

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
@property (nonatomic, weak) id<GTAnalyticsDelegate> analyticsDelegate;
@property (nonatomic, weak) id<PrintIOUIDelegate> UIDelegate;
@property (nonatomic, weak) id<GTPhotoSelectionDelegate> photoSelectionDelegate;

#pragma mark - Initialization and opening

/**
 Init PrintIO widget. To get view controller, use '[self.printIO viewController]'
 
 @param recipeId Recipe Id provided by Gooten
 @param isInTestMode Default value is NO
 */
- (id)initWithRecipeId:(NSString *)recipeId isInTestMode:(BOOL)isInTestMode;

/**
 Init PrintIO widget with parent view controller.
 
 @param viewController Parent view controller. From this view controller, widget will open.
 @param recipeId Production recipeId provided by Gooten
 @param isInTestMode Default value is
 */
- (id)initWithViewController:(id)viewController recipeId:(NSString *)recipeId isInTestMode:(BOOL)isInTestMode;

/**
 Use to place live orders in production mode, without payment verification
 
 @param testMode Default value is NO
 */
- (void)setIsInTestMode:(BOOL)testMode;

/**
 Run SDK in staging environment
 
 @param recipeID Staging recipeID provided by Gooten
 */
- (void)useStagingModeWithRecipeID:(NSString *)recipeID;

/**
 Open widget by presenting view from bottom
 */
- (void)open;

/**
 Open widget with option
 
 @param option Set the options
 GTPresentFromLeft,
 GTPresentFromRight,
 GTPresentFromBottom,
 GTPresentToCart
 */
- (void)openWithOption:(int)option;

/**
 Present widget from view controller with option
 
 @param option Set the options
 GTPresentFromLeft,
 GTPresentFromRight,
 GTPresentFromBottom,
 GTPresentToCart
 */
- (void)presentFromViewController:(UIViewController *)viewController withOption:(int)option;

/**
 Close widget
 */
- (void)close:(NSInteger)flag;
- (void)closeWithCompletionHandler:(void(^)(void))completionHandler;

/**
 Returns PrintIO view controller. Set all options before calling this method
 */
- (UIViewController *)viewController;

/**
 Root controller flag. Set to YES if the PrintIO widget is the root controller of your application.
 
 @param isRootController Root controller flag.
 */
- (void)setIsRootController:(BOOL)isRootController;

- (void)setQAEnvironment:(BOOL)set;

/**
 Jumps directly to product.
 
 @param productId Product identifier can be found in ProductIds.h and starts with PRODUCT_
 */
- (void)goToProductId:(int)productId;

/**
 Close widget when tap on Back button in Shopping Cart screen
 
 @param Default value is NO
 */
- (void)closeWidgetFromShoppingCart:(BOOL)set;

/**
 Show all products and product variants
 
 @param set Default value is NO
 */
- (void)setUseDefaultProductSettings:(BOOL)set;

#pragma mark - Navigation Bar

/**
 Set status bar style and visibility.
 
 @param dark Default value is NO
 @param hidden Default value is NO
 */
- (void)setStatusBarDark:(BOOL)dark hidden:(BOOL)hidden;

/**
 Change navigation bar background color, including title text color
 
 @param bcgColor Default color is white
 @param titleColor Default color is black
 */
- (void)setNavigationBarBackgroundColor:(UIColor *)bcgColor titleColor:(UIColor *)titleColor;

#pragma mark - Photo Sources

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

/**
 Set custom photo sources
 
 @param customPhotoSources Array of id<PhotoSource> objects 
 
 */
- (void)setCustomPhotoSources:(NSArray*)customPhotoSources;

/**
 Default Photo Source which will be opened when user lands to Photo Selection screen
 */
- (void)setDefaultPhotoSource:(GTPhotoSource)pSource;

/*
 A flag that determines whether passed images are preselected on the 'Select Photos' screen.
 */
- (void)setPreselectPassedImages:(BOOL)shouldPreselectPassedImages;

/**
 Pass in images URLs or UIImage objects.
 
 @param images Array of image urls (NSString), UIImage objects and PIOPassedImage objects
 
 Use in combination with [self.printIO setVisiblePhotoSources:@[@(GTPSPassedPhotos)]];
 */
- (void)setImages:(NSArray *)images;

/**
 Set passed in image to be first in row for all photo sources.
 */
- (void)setPassedImageFirstInPhotoSources:(BOOL)set;

/**
 Set Instagram credentials. By default, PrintIO credentials are used.
 */
- (void)setInstagramClientID:(NSString *)clientId redirectUrl:(NSString *)redirectUrl;

/**
 Set access token for Instagram
 
 @param accessToken Valid access token for session
 */
- (void)setInstagramAccessToken:(NSString *)accessToken;

/**
 Set Flickr credentials. By default, PrintIO credentials are used.
 */
- (void)setFlickrKey:(NSString *)key secretKey:(NSString *)secretKey redirectUrl:(NSString *)redirectUrl;

/**
 Set Dropbox credentials. By default, PrintIO credentials are used.
 */
- (void)setDropboxKey:(NSString *)key secret:(NSString *)secret redirectUrl:(NSString *)redirectUrl;

/**
 Set Facebook credentials. By default, PrintIO credentials are used.
 */
- (void)setFacebookAppId:(NSString *)appId redirectUrl:(NSString *)redirectUrl;

/**
 Set access token for Facebook
 
 @param aToken Valid access token for session
 */
- (void)setFacebookAccessToken:(NSString *)aToken;

/**
 Set Google Photos client ID and secret key. 
 
 @param clientID Client ID. Default is PrintIO
 @param secret Secret key. Default is PrintIO
 */
- (void)setGooglePhotosClientID:(NSString *)clientID secret:(NSString *)secret redirectURI:(NSString *)redirectURI;

#pragma mark - Partner settings

/**
 Set country code
 
 @param countryCode Country code
 */
- (void)setCountryCode:(NSString *)countryCode;

/**
 Set currency code
 
 @param currencyCode Currency code
 */
- (void)setCurrencyCode:(NSString *)currencyCode;

/**
 Set language code
 
 @param languageCode Language code
 */
- (void)setLanguageCode:(NSString *)languageCode;

/**
 Set order's partner source id 
 
 @param sourceId Partner source id
 */
- (void)setPartnerSourceId:(NSString *)sourceId;

/**
 Set order's meta data
 
 @param meta Meta data (key, value)
 */
- (void)setOrderMeta:(NSDictionary *)meta;

/**
 Set payee name for order processing

 @param payeeName Payee name
 */
- (void)setPayeeName:(NSString *)payeeName;

/**
 Provide text for "How It Works" screen
 
 @params text Text
 */
- (void)setHowItWorksText:(NSString *)text;

/**
 Set email for "Contact Us" button
 
 @param email Customer support email
 */
- (void)setContactUsEmail:(NSString *)email;

#pragma mark - Analytics

/**
 Set tracking id for Google Analytics. If tracking id is not provided,
 analytics are disabled.
 
 @param trackingID Tracking ID provided by Google
 */
- (void)setTrackingIDForGoogleAnalytics:(NSString *)trackingID;

/**
 Turn off logs
 
 @param set Default value is NO
 */
- (void)turnOffLogs:(BOOL)set;

#pragma mark - Payment settings

/**
 Set Payment option
 
 @param paymentOptions:
 GTPayPalPayment
 GTPaymentCreditCard
 GTPaymentApplePay
 GTPaymentAll
 */
- (void)setPaymentOptions:(GTPaymentOptions)paymentOptions;

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

/**
 Set Braintree encryption keys. By default, keys from Gooten will be used
 https://www.braintreepayments.com/create-merchant
 
 For encryption key use CSE Key from API keys you get
 
 @param sEncKey Encryption(CSE) key for staging mode
 @param pEncKey Encryption(CSE) key for production mode
 */
- (void)setBraintreeStagingEncryptionKey:(NSString *)sEncKey productionEncryptionKey:(NSString *)pEncKey;

/**
 Set ApplePay merchant identifier
 
 @param merchantIdentifier Merchant Identifier
 */
- (void)setApplePayMerchantIdentifier:(NSString *)merchantIdentifier;

#pragma mark - Utils

/**
 Set custom fonts .
 
 @param fonts Array of strings, font file names, with exact order ("light", "regural", "medium", "bold").
 
 Example: [@"font_light.otf", @"font_regular.otf", @"font_medium.otf", @"font_bold.otf"].
 
 Array must have four items. Fonts can be duplicated.
 */
-(void)setFonts:(NSArray *)fonts;

/**
 Set promo code to get discount
 
 @param promoCode Promo code
 */
- (void)setPromoCode:(NSString *)promoCode;

/**
 Get number of items in shopping cart
 */
+ (NSInteger)numberOfItemsInShoppingCart;

/**
 Delete all items(products) from Shopping cart
 */
+ (void)clearShoppingCart;

/**
 Get shopping cart JSON content
 */
+ (NSString *)shoppingCartJSONContent;

/**
 Remove all saved shipping addresses
 */
+ (void)clearShippingAddresses;

/**
 Remove all saved billing addresses
 */
+ (void)clearBillingAddresses;

/**
 Set the content of shopping cart
 
 @param jsonString JSON content string
 */
+ (void)setShoppingCartContent:(NSString *)jsonString;

/**
 Default value is NO
 */
- (void)setAppMode:(BOOL)set;

/**
 Get sdk version 
 */
- (void)getVersion:(void(^)(PIOVersion *version))success;

/**
 Use this for app mode
 */
- (void)appDidFinishLaunching;

@end
