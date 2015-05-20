iOS Release Notes
==================================

**1.2.0 (19)**
---
**Features:**
* New Product: Layflat Photobooks
* New Product: Art Poster
* New Product: Stone Coaster
* New Product: Pillow Shams
* New Product: Beach Towel
* New Product: Glass Cutting Board
* New Product: Cloth Napkins
* New Product: Placemats
* New Product: Hand Towels
* New Product: Framed Canvases
* New Product: Acrylic Prints
* New Product: Ottomans
* New Product: Tabletop Canvases
* New Product: Puzzles
* Autopopulate images for empty spaces
* Fill in images based on image size
* Text feature - text below overlay image

####

**Bug fixes:** 
* github issues fixes: 
[#228](https://github.com/printdotio/printio-ios-sdk/issues/228),
[#309](https://github.com/printdotio/printio-ios-sdk/issues/309),
[#380](https://github.com/printdotio/printio-ios-sdk/issues/380),
[#392](https://github.com/printdotio/printio-ios-sdk/issues/392),
[#416](https://github.com/printdotio/printio-ios-sdk/issues/416),
[#420](https://github.com/printdotio/printio-ios-sdk/issues/420),
[#422](https://github.com/printdotio/printio-ios-sdk/issues/422),
[#423](https://github.com/printdotio/printio-ios-sdk/issues/423),
[#426](https://github.com/printdotio/printio-ios-sdk/issues/426),
[#429](https://github.com/printdotio/printio-ios-sdk/issues/429)
* Customization screen - Save (to cart) button is not active until "double tap photo to edit" popup disappear
* Everything Bags: Customization screen - Images are not visible on Layout
* Flickr - Add pagination: load only 499 images in folder
* Checkout: Choose from Contacts - allow user to add Zip Code bigger than 5 digits
* Shower Curtains - Incorrect total cost
* Fix bottom of toolbar in iphone 6+
* Canvas Wraps - BackgroundImageUrl is silver for black/white wraps
* Professional Prints - On Admin Panel shows only one image
* "Pull to refresh" text should be centered on iPhone 6 and 6 plus
* Shower Curtains - Changing background color doesn’t work
* Shower Curtains - Missing image preview for sizes
* Fix toolbar in Image Editor for iPhone 6/6+
* iPhone 6 - Products screen: On some products preview images are cutted
* Fix toolbar items on 6/6+ Customization screen
* Throw Pillows: Customization screen - "Next" button is cutted on the right side on iPhone 6/6+
* Canvas Posters and Art Posters - On Step 1 selectors stay visible when goes back
* Choose Options screen - Missing Units (inch and cm) on some products
* Remove gifs from photo source
* Stone Coasters - 4 Different Coasters doesn't have overlays
* Choose Options screen - Prices are shown on all Steps on some products
* Size warnings not appearing on customization screen.
* Tote Bags - Corrupted build infos
* Select Address screen - App is crashing when have contact with not valid Country
* Video files are visible in phone source
* Preselected images not loading on product customize screen
* Products screen - Blue Selector not fit on item in list view on iPhone 6 plus 

####

**1.1.16 (18)**
---
**Features:**
* Added smaller bundle version w/o text as an option to pod [#379](https://github.com/printdotio/printio-ios-sdk/issues/379)
* Added project prefix to Photo Source implementations to avoid name collisions
* [Update docs on cocoapods and separated text bundle](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/project_setup.md)
* Added resolution warnings to photo sources for smallest Z layer in product

####

**Bug fixes:** 
* github issues fixes: [#414](https://github.com/printdotio/printio-ios-sdk/issues/414)
* Products screen - in list view images are cutted
* Wall Calendars - "Double tap photo to edit" overlapping month picker
* iPhone 6 Plus - small UI changes
* Duplicated Symbols Compile Error
* Cocoapods & tags problem
* Checkout screen - All address fields are limited to five characters
* Five digits ZIP for US
* Shopping cart screen - keypad overlapping promo code fileds
* Photobucket source - shows error popup "Code:200" when try to open folder

####

**1.1.12 (18)**
---
**Features:**
* [Updated photo sources docs](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/custom_photo_sources.md) 
* [New public method to hide 'Much More To Come'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidemuchmoretocome)
* [New public method to hide 'Coming soon products'](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidecomingsoonproducts)
* Added TextBundle.bundle. Include it in project, if you want to use text feature in PrintIO SDK.

####

**Bug fixes:** 
* github issues fixes: 
[#388](https://github.com/printdotio/printio-ios-sdk/issues/388),
[#406](https://github.com/printdotio/printio-ios-sdk/issues/406),
[#407](https://github.com/printdotio/printio-ios-sdk/issues/407),
[#412](https://github.com/printdotio/printio-ios-sdk/issues/412)
* Instagram - Token disappear after a while
* Shower Curtains - Missing overlays
* Throw Pillows - Step 1: double text "With Zipper"
* Product's price fixes

####

**1.1.9 (18)**
---
**Features:**
* [Photo sources screen: 'Select/Deselect All' button customization added](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showselectallbutton)
* [New method to turn push notifications on](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--enablepushnotifications)
* New products: Wall Calendars added
* Added info popup "No printable media" for folders with non-image formats, or empty folders

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
* Added 6 new products: Canvas Posters, Rugs, Tote Bags, Dog Beds, Canvas Minis and Everything Bags
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
