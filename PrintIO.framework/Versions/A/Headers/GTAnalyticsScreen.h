//
//  GTAnalyticsScreen.h
//  PrintIO
//
//  Created by Boro Perisic on 3/11/16.
//  Copyright © 2016 Gooten. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kGTScreenAboutUs;
extern NSString *const kGTScreenAddAddress;
extern NSString *const kGTScreenAddressValidation;
extern NSString *const kGTScreenChooseCountry;
extern NSString *const kGTScreenChooseCurrency;
extern NSString *const kGTScreenColorPicker;
extern NSString *const kGTScreenCustomizeProduct;
extern NSString *const kGTScreenCustomizeProductLandscape;
extern NSString *const kGTScreenCustomizeProductList;
extern NSString *const kGTScreenHome;
extern NSString *const kGTScreenHowItWorks;
extern NSString *const kGTScreenImageEditor;
extern NSString *const kGTScreenImagePreview;
extern NSString *const kGTScreenOrderCompleted;
extern NSString *const kGTScreenOrderHistory;
extern NSString *const kGTScreenOrderStatus;
extern NSString *const kGTScreenPayment;
extern NSString *const kGTScreenPhotoSources;
extern NSString *const kGTScreenProductDetails;
extern NSString *const kGTScreenQualityGuarantee;
extern NSString *const kGTScreenSelectAddress;
extern NSString *const kGTScreenSelectColor;
extern NSString *const kGTScreenSideMenu;
extern NSString *const kGTScreenShipmentReview;
extern NSString *const kGTScreenShoppingCart;

@interface GTAnalyticsScreen : NSObject

@property (nonatomic, strong) NSString *name;

-(instancetype)initWithName:(NSString *)name;

@end
