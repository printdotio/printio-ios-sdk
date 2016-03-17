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
 Captures duration of event
 */
-(void)gtAnalyticsOnTimedEvent:(GTAnalyticsEvent *)event;

/**
 Timed event is finished
 */
-(void)gtAnalyticsOnEndTimedEvent:(GTAnalyticsEvent *)event;

/**
 Captures on which screen user has landed
 */
-(void)gtAnalyticsOnEnterScreen:(GTAnalyticsScreen *)screen;
```

Use this with any other analytics SDK (Google, Flurry...)

Screens captured with analytics:

```Objective-C
kGTScreenCustomizeProduct;
kGTScreenHome;
kGTScreenPayment;
kGTScreenPhotoSources;
kGTScreenProductDetails;
kGTScreenSideMenu;
kGTScreenShoppingCart;
```

Events captured:

```Objective-C
// captures duration of time spent on screens
kGTEventEnterHomeScreen; // captures time spent on home screen
kGTEventEnterSideMenu; // captures time spent in side menu
kGTEventEnterProductDeatils; // captures time spent on product details screen
kGTEventEnterShoppingCart; // captures time spent on Shopping Cart screen
kGTEventEnterSearchProduct; // captures time spent on search
kGTEventEnterCheckout; // captures time spent on Checkout screen
kGTEventEnterCreditCard; // captures time spent on Credit Card screen

kGTEventSideMenuSelectPhotoSource; // captures selected photo source inside side menu (value)
kGTEventSideMenuCurrencyChanged; // fired when currency is changed (value)
kGTEventSideMenuCountryChanged; // fired when county has beed changed inside side menu (value)
kGTEventSideMenuTapOnContactUs; // options under Information section
kGTEventSideMenuTapOnQualityGuarantee; // options under Information section
kGTEventSideMenuTapOnOrderStatus; // options under Information section
kGTEventSideMenuTapOnPastOrders; // options under Information section
kGTEventSideMenuTapOnHowItWorks; // options under Information section
kGTEventSideMenuTapOnAboutUs; // options under Information section
kGTEventSideMenuTapOnHelp; // options under Information section
kGTEventOrderStatusView; // captures when user tap on View Order Status inside Order Status screen
kGTEventSearchCanceled; // captures when Search has been canceled
kGTEventSearchProduct; // captures search product id
kGTEventHomeChangeShippingCountry; // captures if shipping country is changed inside home screen
kGTEventHomeHeroSwipes; // fired if user swipes through all products listed in hero
kGTEventHomeHeroProductSelected; // captures selected product inside hero (value)
kGTEventHomeCategorySelected; // captures selected category inside Home screen (value), and time spent in category
kGTEventBackToHome; // captures when backs from category to home screen
kGTEventMakeIt; // captures when user taps on Make It button with product id
kGTEventSKUSelected; // captures sku of selected product which will be customized
kGTEventCartQuantity; // captures when user changes quantity of product
kGTEventKeepShopping; // captures tap on Keep Shopping button in Shopping cart
kGTEventEnterPromoCode; // captures when user taps on Promo code button in Shopping cart
kGTEventApplyPromoCode; // captures when user taps on Apply promo code in Shopping cart
kGTEventRemoveItem; // captures when user taps on Remove item button in Shopping cart
kGTEventDeleteProduct; // captures when user deletes product (value)
kGTEventChooseFromContacts; // captures when user taps on choose from contacts
kGTEventSaveAddress; // captures when user taps on Save Address button
kGTEventPayWithPayPal; // captures when user uses PayPal payment option
kGTEventPayWithCreditCard; // captures when user uses Credit Card payment option
kGTEventPayWithApplePay; // captures when user uses ApplePay payment option
kGTEventUseShippingAddress;// captures when user uses Shipping Address as Billing Address in Credit Card screen
kGTEventPlaceOrder; // captures when user place an order
```
