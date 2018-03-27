//
//  GTEvent.h
//  PrintIO
//
//  Created by Boro Perisic on 3/11/16.
//  Copyright © 2016 Gooten. All rights reserved.
//

#import <Foundation/Foundation.h>

// tracks time spent on screens
extern NSString *const kGTEventEnterCheckout; // captures time spent on Checkout screen
extern NSString *const kGTEventEnterCreditCard; // captures time spent on Credit Card screen
extern NSString *const kGTEventEnterCustomization; // captures time spent on Product Customization
extern NSString *const kGTEventEnterHomeScreen; // captures time spent on home screen
extern NSString *const kGTEventEnterImageEditor; // captures time spent on Image Editor screen
extern NSString *const kGTEventEnterProductDetails; // captures time spent on product details screen
extern NSString *const kGTEventEnterSideMenu; // captures time spent in side menu
extern NSString *const kGTEventEnterShoppingCart; // captures time spent on Shopping Cart screen

// events
extern NSString *const kGTEventApplyPromoCode; // tracks when user taps on Apply promo code in Shopping cart
extern NSString *const kGTEventBackToHome; // tracks when backs from category to home screen
extern NSString *const kGTEventCartQuantity; // tracks when user changes quantity of product
extern NSString *const kGTEventChooseFromContacts; // tracks when user taps on 'Choose from contacts' button
extern NSString *const kGTEventCouponCode; //  tracks applied coupon code
extern NSString *const kGTEventCustomizeProductAddMorePhotos; // tracks when user taps on 'Add more photos' (plus) button
extern NSString *const kGTEventCustomizeProductAutoArrangePhotos; // tracks when user selects 'Auto Arrange' photos option
extern NSString *const kGTEventDeleteProduct; // tracks when user deletes product (with value, productId)
extern NSString *const kGTEventDeviceModel; // tracks device model
extern NSString *const kGTEventDeviceVersion; // tracks device ios verion
extern NSString *const kGTEventEnterPromoCode; // tracks when user taps on Promo code button in Shopping cart
extern NSString *const kGTEventHomeChangeShippingCountry; // tracks if shipping country is changed under home screen
extern NSString *const kGTEventKeepShopping; // tracks tap on Keep Shopping button in Shopping cart
extern NSString *const kGTEventMakeIt; // tracks when user taps on 'Make It' button with product id
extern NSString *const kGTEventOrderPlaced; // tracks when user places an order, and returns dictionary with order info
extern NSString *const kGTEventPayWithPayPal; // tracks when user uses PayPal payment option
extern NSString *const kGTEventPayWithCreditCard; // tracks when user uses Credit Card payment option
extern NSString *const kGTEventPayWithApplePay; // tracks when user uses ApplePay payment option
extern NSString *const kGTEventPayeeName; // tracks payee name
extern NSString *const kGTEventPlaceOrder; // track when user place an order
extern NSString *const kGTEventRecipeId; // tracks partner's recipeId
extern NSString *const kGTEventRevenue; // tracks revenue
extern NSString *const kGTEventSaveAddress; // tracks when user taps on Save Address button
extern NSString *const kGTEventSearchProduct; // tracks search productId
extern NSString *const kGTEventSideMenuCurrencyChanged; // tracks when currency is changed (value, currency code)
extern NSString *const kGTEventSideMenuCountryChanged; // tracks when county has beed changed inside side menu (value, country code)
extern NSString *const kGTEventSideMenuTapOnContactUs; // tracks when user taps on 'Contact Us' under Information section
extern NSString *const kGTEventShareApp; // tracks when user taps on 'Share' App button
extern NSString *const kGTEventShippingInfoEntered; // tracks when user enters and save shipping info, event value is NSDictionary with keys: 'first_name', 'last_name' and 'email'
extern NSString *const kGTEventSKUSelected; // tracks sku of selected product which will be customized
extern NSString *const kGTEventUseShippingAddress;// tracks when user sets Shipping Address as Billing Address under Credit Card screen

////////////////////////////////////////////// 26/02/2018 new analytics
extern NSString *const kGTAnalyticsAction;
extern NSString *const kGTAnalyticsSource;

// events
extern NSString *const kGTEventOrderCompleted;
extern NSString *const kGTEventCheckout;
extern NSString *const kGTEventCategory;

@interface GTAnalyticsEvent : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) id value;

-(instancetype)initWithName:(NSString *)name value:(id)value;

@end
