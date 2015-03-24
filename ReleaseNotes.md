iOS Release Notes
==================================

**1.1.9 (18)**
---
**Features:**
* Update the photo sources docs with class prefixes as well as correct versions of SDK
* Select/Deselect All button - add methods for hide/visible and customization that button
* New method to turn notifications on -> should be off by default
* New products: Wall Calendars added

####

**Bug fixes:** 
* github issues fixes: #384, #391, #392, #393, #394, #396, #398, #399, #400, #402
* Canvas Posters - Missing Overlay image
* New Products v18 - Missing 1 image  Layout preview on customization screen
* How It Works screen title is "Breakout Commerce" #384
* Side Menu - Missing Info section
* Album text font change on Select Photos screen #394
* Unnecessary screen for dog beds #391
* Button colors on Select Photos screen have changed #396
* GIF and video files appearing as printable media from phone source #392
* Coupons doesn't work correctly
* Select Photos screen not defaulting to preferred source #400
* Customization screen - Mousepads have silver background (should be black)
* Select Photos screen - Need to add padding on the bottom of folders and inside the folders
* Photo source customization not working anymore. #402
* Canvas Wraps - Black Wraps have silver background
* Status bar visible - Bad UI on few places
* Product preview layouts broken #398
* Side Menu: Picasa - switch icon for login and logout
* Phone source - "back" image is blinking on clicking on first few photo in folders
* Fix select photos paddings
* Facebook - load only 100 images in folder with 300+ images in it
* Photo Sources - Preview Images don't fit to placeholders
* Select Photos screen - missing numbers of images on folders
* Photo sources - Change color on folder titles - should be silver/gray not black
* Book products - From Shopping cart "Processing images" dialog stay visible until cancel it
* Image Editor screen - Status bar overlapping nav buttons
* Number positioning in cart icon #393
* Glossy and Lustre icons not appearing for Prints #404
* Status bar ON: App is crashing when close Image preview on Product Details screen
* iPhone 6/6+ collection view cell spacing
* Customization screen - Photos are duplicated when change Background Color
* Product preview shrinks after image edit on iPad #401
* Entering SDK when device is in landscape mode #395
* Landscape issues other than Photobucket's
* Image quality warning doesn't show #390
* Upload performance issues for high image-count products #403
* Customization screen - crash on resolution warning
* Photobucket source - Add toast message to say "No printable media" in GIF Maker folder
* Photobucket source - Cancel button from login screen killing whole app
* Status bar ON: FB login screen - buttons are cutted on the bottom
* Photobucket source - Missing number of images on folders
* Customization screen - Background Color doesn't work
* Customization screen - *book products have unnecessary blink between loading and processing dialogs
* Switch back to concurrent photo download in customization screen
* Handle photobucket 401 response code

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







