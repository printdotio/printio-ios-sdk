###**How to integrate Analytics**

**1. In order to use Analytics, you need to import GTAnalytics protocol:**

```Objective-C
#import <PrintIO/PrintIO.h>

@interface ViewController () <GTAnalyticsDelegate>
```

**2. Next step is to set delegate:**

```Objective-C
[self.printIO setAnalyticsDelegate:self];
```

**3. Write delegate methods to receive GTAnalyticsEvent or GTAnalyticsScreen.**

```Objective-C
/**
 Fires an event
 */
-(void)gtAnalyticsOnEvent:(GTAnalyticsEvent *)event;

/**
 Track duration of event
 */
-(void)gtAnalyticsOnTimedEvent:(GTAnalyticsEvent *)event;

/**
 Timed event is finished
 */
-(void)gtAnalyticsOnEndTimedEvent:(GTAnalyticsEvent *)event;

/**
 Tracks on which screen user has landed
 */
-(void)gtAnalyticsOnEnterScreen:(GTAnalyticsScreen *)screen;
```

Use this with any other analytics SDK (Google, Flurry...)

Screens captured with analytics (GTAnalyticsScreen):

```Objective-C
kGTScreenAboutUs;
kGTScreenAddAddress;
kGTScreenAddressValidation;
kGTScreenChooseCountry;
kGTScreenChooseCurrency;
kGTScreenColorPicker;
kGTScreenCustomizeProduct;
kGTScreenCustomizeProductLandscape;
kGTScreenCustomizeProductList;
kGTScreenHome;
kGTScreenHowItWorks;
kGTScreenImageEditor;
kGTScreenImagePreview;
kGTScreenOrderCompleted;
kGTScreenOrderHistory;
kGTScreenOrderStatus;
kGTScreenPayment;
kGTScreenPhotoSources;
kGTScreenProductDetails;
kGTScreenQualityGuarantee;
kGTScreenSelectAddress;
kGTScreenSelectColor;
kGTScreenSideMenu;
kGTScreenShipmentReview;
kGTScreenShoppingCart;
```

Events captured (GTAnalyticsEvent):

```Objective-C
// tracks time spent on screens
kGTEventEnterCheckout; // captures time spent on Checkout screen
kGTEventEnterCreditCard; // captures time spent on Credit Card screen
kGTEventEnterCustomization; // captures time spent on Product Customization
kGTEventEnterHomeScreen; // captures time spent on home screen
kGTEventEnterImageEditor; // captures time spent on Image Editor screen
kGTEventEnterProductDetails; // captures time spent on product details screen
kGTEventEnterSideMenu; // captures time spent in side menu
kGTEventEnterShoppingCart; // captures time spent on Shopping Cart screen

// events
kGTEventApplyPromoCode; // tracks when user taps on Apply promo code in Shopping cart
kGTEventBackToHome; // tracks when backs from category to home screen
kGTEventCartQuantity; // tracks when user changes quantity of product
kGTEventChooseFromContacts; // tracks when user taps on 'Choose from contacts' button
kGTEventCustomizeProductImageEffects; // tracks when user taps on Image Effects
kGTEventCustomizeProductChangeTemplate; // tracks when user changes product template
kGTEventCustomizeProductShuffleImages; // tracks when user shuffles images
kGTEventCustomizeProductBackground; // tracks when user taps to change product's background color
kGTEventCustomizeProductAddMorePhotos; // tracks when user taps on 'Add more photos' (plus) button
kGTEventCustomizeProductAutoArrangePhotos; // tracks when user selects 'Auto Arrange' photos option
kGTEventCustomizeProductManualArrangePhotos; // tracks when user selects 'Manual Arrange' photos option
kGTEventDeleteProduct; // tracks when user deletes product (with value, productId)
kGTEventEnterPromoCode; // tracks when user taps on Promo code button in Shopping cart
kGTEventHomeChangeShippingCountry; // tracks if shipping country is changed under home screen
kGTEventHomeHeroSwipes; // tracks if user swipes through all products listed in hero
kGTEventHomeHeroProductSelected; // tracks selected product inside hero (value, productid)
kGTEventHomeCategorySelected; // tracks selected category inside Home screen (value, catId)
kGTEventLikeUs; // tracks when user taps on 'Like Us' on Facebook button
kGTEventKeepShopping; // tracks tap on Keep Shopping button in Shopping cart
kGTEventMakeIt; // tracks when user taps on 'Make It' button with product id
kGTEventOrderStatusView; // tracks when user tap on View Order Status inside Order Status screen
kGTEventPayWithPayPal; // tracks when user uses PayPal payment option
kGTEventPayWithCreditCard; // tracks when user uses Credit Card payment option
kGTEventPayWithApplePay; // tracks when user uses ApplePay payment option
kGTEventPlaceOrder; // track when user place an order
kGTEventRateApp; // tracks when user taps on 'Rate App' button
kGTEventRemoveItem; // tracks when user taps on Remove item button in Shopping cart
kGTEventSaveAddress; // tracks when user taps on Save Address button
kGTEventSearchProduct; // tracks search productId
kGTEventSideMenuSelectPhotoSource; // selected photo source under side menu (with value)
kGTEventSideMenuCurrencyChanged; // tracks when currency is changed (value, currency code)
kGTEventSideMenuCountryChanged; // tracks when county has beed changed inside side menu (value, country code)
kGTEventSideMenuTapOnContactUs; // tracks when user taps on 'Contact Us' under Information section
kGTEventSideMenuTapOnQualityGuarantee; // tracks when user taps on 'Quality Guarantee' under Information section
kGTEventSideMenuTapOnOrderStatus; // tracks when user taps on 'Order Status' under Information section
kGTEventSideMenuTapOnPastOrders; // tracks when user taps on 'Past Orders' under Information section
kGTEventSideMenuTapOnHowItWorks; // tracks when user taps on 'How It Works' under Information section
kGTEventSideMenuTapOnAboutUs; // tracks when user taps on 'About Us' under Information section
kGTEventSideMenuTapOnHelp; // tracks when user taps on 'Help' under Information section
kGTEventSideMenuTapOnExit; //  tracks when user taps on Exit button under Side Menu
kGTEventShareApp; // tracks when user taps on 'Share' App button
kGTEventSKUSelected; // tracks sku of selected product which will be customized
kGTEventTextFeature; //  tracks when user enters text on product
kGTEventUseShippingAddress;// tracks when user sets Shipping Address as Billing Address under Credit Card screen
```

Look at [sample code](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/analytics_example.md), how to use our analytics with Google Analytics or Flurry.
