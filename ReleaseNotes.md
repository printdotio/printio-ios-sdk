iOS Release Notes
==================================

**1.1.9 (18)**
---
**Features:**
* Update the photo sources docs with class prefixes as well as correct versions of SDK
* Select/Deselect All button - add methods for hide/visible and customization that button
* New method to turn notifications on -> should be off by default
* New products: Wall Calendars added
* Added message "No printable media" for folders with non-image formats, or empty folders

####

**Bug fixes:** 
* github issues fixes: [#384](https://github.com/printdotio/printio-ios-sdk/issues/384), [#390](https://github.com/printdotio/printio-ios-sdk/issues/390), [#391](https://github.com/printdotio/printio-ios-sdk/issues/391), [#392](https://github.com/printdotio/printio-ios-sdk/issues/392), [#393](https://github.com/printdotio/printio-ios-sdk/issues/393), [#394](https://github.com/printdotio/printio-ios-sdk/issues/394), [#395](https://github.com/printdotio/printio-ios-sdk/issues/395), [#396](https://github.com/printdotio/printio-ios-sdk/issues/396), [#398](https://github.com/printdotio/printio-ios-sdk/issues/398), [#399](https://github.com/printdotio/printio-ios-sdk/issues/399), [#400](https://github.com/printdotio/printio-ios-sdk/issues/400), [#401](https://github.com/printdotio/printio-ios-sdk/issues/401), [#402](https://github.com/printdotio/printio-ios-sdk/issues/402), [#403](https://github.com/printdotio/printio-ios-sdk/issues/403), [#404](https://github.com/printdotio/printio-ios-sdk/issues/404)
* Canvas Posters - Missing Overlay image
* Missing 1 image  Layout preview on customization screen
* Side Menu - Missing Info section
* Coupons doesn't work correctly
* Customization screen - Mousepads have silver background
* Select Photos screen - Need to add padding on the bottom of folders and inside the folders
* Canvas Wraps - Black Wraps have silver background
* Status bar visible - Bad UI on few places
* Side Menu: Picasa - switch icon for login and logout
* Phone source - "back" image is blinking on clicking on first few photo in folders
* Facebook - load only 100 images in folder with 300+ images in it
* Photo Sources - Preview Images don't fit to placeholders
* Select Photos screen - missing numbers of images on folders
* Photo sources - Change color on folder titles - should be silver/gray not black
* Book products - From Shopping cart "Processing images" dialog stay visible until cancel it
* Image Editor screen - Status bar overlapping navigation bar buttons
* App is crashing when close Image preview on Product Details screen when status bar is visible
* iPhone 6/6+ photo sources cell spacing
* Customization screen - Photos are duplicated when change Background Color
* Landscape mode issues
* Customization screen - crash on resolution warning
* Cancel button on Login screen closes widget, Photobucket photo source
* FB login screen - buttons are cutted on the bottom when status bar is visible
* Missing number of images on folders for Photobucket photo source
* Customization screen - Background Color doesn't work
* Customization screen - *book products have unnecessary blink between loading and processing dialogs
* Concurrent photo download in customization screen

####

**1.1.0 (18)**
---
**Features:**
* Custom photo sources API - option to add a custom photo source https://github.com/printdotio/printio-ios/blob/master/temp_photo_sources.md
* Added 7 new products: Canvas Posters, Rugs, Mementos, Tote Bags, Dog Beds, Canvas Minis and Everything Bags
* Resolution Warnings for photos which are smaller than 1/3 of requested size
* Updated design of double tap balloon
* Ability to filter what products show via method on client side https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setavailableproducts
* Added new public method to deselect passed images
* Renamed photo-source specific classes to have PIO prefix to avoid duplicate symbols

####

**Bug fixes:** 
* Side Menu - shows version number when missing one photo source
* Customization screen - After changing layout template, loading popup stay visible on the screen
* Throw Pillows - app is crashing on back side of pillow 
* Method setIconForShoppingCart fixed
* Unable to by-pass photo sources view
* iPhone 4s: Text Object - After close image editor screen layout moves down and text run from Layout
* Customization screen: Help Dialog is clickable
* Text Objects is removed when layout is changed
* Unsupported products remain visible in cart list and causing a crash
* Throw Pillows - When edit pillow from Shopping cart, on Back side of pillow missing images
* Coming soon products bug
* Customization screen - Changing Layout doesn't work correctly from the shopping cart
* Allow user to Place Order with a complete zero dollar value
* Order Completed screen - Coupon savings: is not same like on Payment screen

####







