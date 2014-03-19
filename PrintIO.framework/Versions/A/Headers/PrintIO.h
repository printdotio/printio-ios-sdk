//
//  PrintIO.h
//  PrintIO Framework
//
//  Created by Boro Perisic on 12/13/13.
//  Copyright (c) 2013 Boro Perisic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProductIds.h"

enum {
    PRINTIO_STAGING,
    PRINTIO_PRODUCTION
};

enum {
    PRINTIO_PS_PHONE,
    PRINTIO_PS_INSTAGRAM,
    PRINTIO_PS_FACEBOOK,
    PRINTIO_PS_FLICKR,
    PRINTIO_PS_PICASA,
    PRINTIO_PS_DROPBOX
};

@protocol PrintIODelegate <NSObject>

@optional

- (void)PrintIOWidgetOnOpen;
- (void)PrintIOWidgetOnClose;

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
 Init PrintIO widget with parent view controller.
 
 @param vc Parent view controller. From this view controller, widget will be presented like modal.
 
 @param type Set environment to staging or live, use PRINTIO_STAGING or PRINTIO_PRODUCTION
 
 @param recipeId RecipeId provided by PrintIO.
 */
- (id)initWithViewController:(UIViewController *)vc
                 environment:(int)type
                    recipeId:(NSString *)recipeId;

/**
 Add images URLs or UIImage objects. 
 
 @param images Array of image urls or/and UIImage objects
 */
- (void)images:(NSArray *)images;

/**
 Open widget.
 */
- (void)open;

/**
 Close widget.
 */
- (void)close;

#pragma mark - Optional

/**
 Change title bar and font color, for iOS 7 and later
 
 @param color Color for title bar (navigation bar)
 
 @param fontColor Color of fonts on title bar
 */
- (void)titleBarColor:(UIColor *)color
            fontColor:(UIColor *)fontColor;

/**
 Import customization XML file
 
 @param xmlData Loaded customization xml file. 
 
 Example: NSString *xmlPath = [[NSBundle mainBundle] pathForResource:@"customization" ofType:@"xml"];
 NSData *xmlData = [NSData dataWithContentsOfFile:xmlPath];
 */
- (void)customizationXML:(NSData *)xmlData;

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

/**
 Use photo sources
 */
- (void)usePhotoSources:(BOOL)usePhotoSources;

/**
 Set Icon with filename, stored in application's main bundle
 
 @param iconFileName Icon file name
 */
- (void)iconWithFileName:(NSString *)iconFileName;

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
 Set custom fonts from main app bundle.
 
 @param fonts Array of string values contain font name and type with exact order (light, medium, regular, bold). Example: [@"font_light.otf", @"font_medium.otf", @"font_regular.otf", @"font_bold.otf"]. Array must have four items, and fonts can be diplicated.
 */
- (void)customFonts:(NSArray *)fonts;

/**
 Set payee name
 
 @param Payee name
 */
- (void)payeeName:(NSString *)payeeName;

/**
 Set available photo sources
 
 @param Array of contstants, represents which types of photo sources will be
 available to user.
 
 PRINTIO_PS_PHONE,
 PRINTIO_PS_INSTAGRAM
 PRINTIO_PS_FACEBOOK
 PRINTIO_PS_FLICKR
 PRINTIO_PS_PICASA
 PRINTIO_PS_DROPBOX
 
 In order to show photo sources to user, 'usePhotoSources' has to be enabled.
*/
// - (void)availablePhotoSources:(NSArray *)vPhotoSources;

@end
