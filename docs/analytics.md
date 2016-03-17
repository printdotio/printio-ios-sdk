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
