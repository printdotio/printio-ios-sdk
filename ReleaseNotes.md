iOS Release Notes
==================================

**1.6.0 (25)**
---
**IMPORTANT NOTE TO PARTNERS**: We have made changes to Framed Canvas, Phone Cases and T-shirts products. These products will not behave as intended if enabled in the production version of your admin panel for iOS and Android clients. A work around is to disable these products in your admin panel. This will ensure a better user experience.

**Features:**
* New Home screen and UI redesign
* [New Share, Rate and Like bar](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showbottombarwithlikeusurlrateusappidsharetext)
* Circular Hero in Home screen
* If prices are updated on server side, user is informed about changes
* Cached images are deleted
* User Flow Adjustment
* Added Logout Prompt dialog for Photo Sources
* Framed Canvas - Added new option "Wrap Type"
* Phone Cases - Added new options "Case Color" and "Case Hardness" 
* Fleece Blankets - Added new option "Print Sides"

####

**Bug fixes:** 
* github issues fixes: 
[#484](https://github.com/printdotio/printio-ios-sdk/issues/484), [#487](https://github.com/printdotio/printio-ios-sdk/issues/487)
* Side Menu - Ability to open side menu on screens where side menu is disabled/ Opens Side Menu on back button
* Order ID is Cutted of
* Changing country - no progress dialog visible
* Single Page options - Add Separator line on some products
* Memory consumption issue: Layflat Photobooks - App has crashed
* Wall Calendar - Arrange dialog is opened every time when you entered the page
* Double Sided Card Image issues
* Photobooks - Resolution warning background disappear on few seconds after closing text object
* Photobooks - Processing page counter shows wrong numbers on Customization screen
* Phone Source - Folder names text is cutted on the bottom side
* Products screen - Loading dialog is shown in landscape mode
* If country is changed, also should change metric measurements
* SDK - App mode always use all photo sources
* Side menu - photo sources stays visible when hidden by public method
* Shopping Cart screen - "Custom fonts" does not applies on "delete" button
* Method Set Country Code to US does not work


**1.5.17 (24)**
---
**Features:**
* Shopping cart new UI
* Added Cancel button on Product options screen [showCancelOptionsButton](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showcanceloptionsbutton)
* Live product preview in products list [setProductsScreenVersion](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setproductsscreenversion) and [setProductsScreenImageUrl](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setproductsscreenimageurl)
* Set Apple Pay business name and app name (MANDATORY if use Apple Pay feature in SDK) [setApplePayBusinessName](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setapplepaybusinessname)
* New Flow Path for SDK - Single Page Customize [useSinglePageCustomization](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--usesinglepagecustomization)
* Added 'What's new dialog' options - [setWhatsNewDailogText](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setwhatsnewdailogtext)
* Method to set retail discount [setRetailDiscountPercent](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setretaildiscountpercent)
* Renamed all Printio/BreakoutCommerce labels to Makeable
* Product options flow with sofa

####

**Bug fixes:** 
* Shopping Cart screen - Empty "Promo Code" shows wrong dialog which never disappear
* Shopping Cart screen - Ability to click on item when delete button is active
* Shopping cart issue with changing currency
* Checkout screen - Reduce blank space between "Save Address" button and keyboard
* Shopping Cart screen - Old swipe animation is shown when user scrolls  up and down
* Framed Prints - Steps are not working properly
* Facebook source - App has crashed
* Folded Cards - are not showing Step 4
* Changing Currency from side menu  does not affects on Prices in  Product details screen
* Couch step - scroll to top, increase height

####

**1.5.10 (23)**
---
**Features:**
* Photo source PIO_SM_PICASA changed to PIO_SM_GOOGLE_PHOTOS
* Fixed Apple Pay issues
* New custom keyboard to support landscape mode
* Public method to change custom keyboard background color [- setKeyboardBackgroundColor](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setkeyboardbackgroundcolor)
* Marked editing text view
* Support iOS v9.0+
* Posters: Added new option - Paper Finish
* Fleece Blankets: Added new option - Print Sides
* Phone Cases: Added new options - Case Color, Case Style and Hardness
* Mementos - Removed "Type" option
* Updated PayPal SDK to 2.12
* Text editing features added

####

**Bug fixes:** 
* Mementos: Opens Print Customization screen if you edit Mementos from shopping cart screen
* Mementos - Can not place order
* Button name changed from "Create It" to "Make It"
* Text alignment - size bar, move on left side and make it vertical
* Shopping cart screen - Missing thumbnail after change Layout
* User is able to open Image Editor screen while text feature is opened
* Textview Red marker is moving across text
* SC and HC pbooks  - Disable "Options menu" when Text Object is active
* Text options bar doesn't works correcly if "Hide Status bar" is OFF
* Customization screen - Add warning dialog when change Layout all changes will be lost (apply to all products)
* All Photoobooks - Options Menu is visible when text object is active and causing crash
* Arrange Pages - Text stays on the same page
* Photobooks - Missing text objects on arrange pages screen
* Status Bar ON - On Facebook authorization screen buttons are cutted
* Text feature - Red text box is not shown automatically 
* Photobooks - "Next" button on last page is removed
* Photobooks - Missing text objects on arrange pages screen after editing product from Shopping Cart
* All Photobooks - Arrange Photos not save Replaced Image
* Picasa Photo Source name is changed to Google Photos
* All Photobooks: Arrange Pages - Pages are doubled
* Photobooks: Edit from shopping cart - Text is not on right page
* Layflat Photobooks - App has crashed
* Fleece Blankets - Steps are not working properly
* Resolution Warnings - Dialog "Photo is too small" remembers what the user has selected
* Photo Books - Custom text disappears after arranging pages
* Order Completed screen - Order Number is not valid
* PayPal - Ability to click on PayPal button before payment verified
* Phone Cases - Shows different prices on Options screen and in cart list
* Fleece Blankets - Add Dialog: Use same look for back side"
* Pay with Card - Duplicate Order
* Pay with Card - Place Order button stays disabled after entered incorrect card number

####

**1.5.0 (22)**
---
**Features:**
* New Product: Folded Cards
* New Product: Softcover Photobooks
* New Product: Selfcover Photobooks
* New Product: Hardcover Photobooks
* New payment option: ApplePay [configuration and integration](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/apple_pay_integration.md)

####

**Bug fixes:** 
* Missing page titles for Folded Cards
* Choose Options screen - Add placeholders on items
* Photobooks - Arranging pages causes missing transparent cover over the image for resolution warnings
* Size of layout decreases after changing template on customization screen
* Products screen - Grid view doesn't return back on a product that was previously selected
* Mugs - Remove Material option
* All Photobooks - Resolution Warnings not working properly after replace photo

####

**1.3.7 (21)**
---
**Features:**
* New Product: Layflat Photobooks
* New Product: Bandana
* If any default text isn't edited -> alert the user before checkout
* Layflat Photobooks: Added new page that allows user to arrange pages on a screen where all pages are zoomed out
* Layflat Photobooks: if there is default text on a page popup keyboard to edit
* Mugs - Added new options on Steps 
* Layflat Photobooks - Added cropping and resizing in landscape mode
* Layflat Photobooks - Turned off Status bar on Image Editor screen

####

**Bug fixes:** 
* Layflat Photobooks - App is crashing when try to edit it from shopping cart
* Speed up image processing: start copying images from Select Photos screen
* Everything bags - change color of background
* Bandana  - Shape option Square on Step 1 should be preselected
* Layflat Photobooks - Save (to cart) button doesn't work after closing Image Editor screen
* Layflat Photobooks: Page picker shows wrong number of pages
* Layflat Photobooks: Pages are duplicated on Arrange Pages screen
* Layflat Photobook Text - Needs to zoom on selected text when in landscape mode so its clear what the user is editing
* Removed "Define button" 
* Layflat Photobooks: Instructions on Cover Page are editable
* Customization screen - Layout is reduced after each opening image editor screen
* Layflat Photobooks - Remove Define & Copy buttons 
* Art Posters - Missing "Sizes" on Details screen
* Layflat Photobooks - Text on thumbnail photo is cut off
* Customization screen - Can't edit text if you tap on "abc" button while images are loading
* Products with 2 or more pages - Editor screen is opened 2 times
* Throw Pillows - App is crashing on iPhone 4s
* App is crashing when add 252 photos
* iPhone 4s: Photobooks - App is crashing when try to open keypad for text object
* Posters - Image doesn't fit properly on layout
* Mugs - fixed gap on layouts
* Shipment Review screen - Shipping Method returns to "standard" and price stay bigger when delete item from the list
* Mugs - Customization screen is broken
* Customization screen - Add dialog: "Use the same look for back side"
* Art Posters - missing live product id
* Layflat Photobooks: Iphone 5 - showing strange smaller keyboard when in landscape mode -> doesn't go all the way across the screen
* Removed hardcoded ZIP codes from database
* Select Images screen - Remove limit on photos
* Layflat Photobooks: keyboard can't go to landscape
* NSAppTransportSecurity for iOS 9 added temporary solution
* Layflat Photobooks: Arrange Pages screen - Add small padding on the left side of screen
* Select Images screen - Ability to add more photos than maximum limit
* Layflat Photobooks - Keyboard doesn't fit properly on the screen
* Layflat Photobooks - Changing Book Template missing transparent cover over the image for resolution warnings
* Images from phone source have low/bad resolution on Admin Panel

####

**1.2.38 (20)**
---
**Features:**
* New Product: Adjustable Strap Tote
* New Product: Posters
* New Product: Bandanas
* New Product: Fabric By The Yard
* New Product: Dopp Kit
* New Product: Accessories Pouch
* Prevent empty URLs or ImgManip string
* Changed "Processing images..." to show current process in numbers of images processed
* Improved speed of processing
* Improved accesing "Phone source" to faster load images
* Photobooks: Added double tap to edit photo on photobook screens
* Photobooks: Added outline the photo that is selected
* Photobooks: Improved processing images
* New method - filter templates to have only one photo template, and auto-select it

####

**Bug fixes:** 
* Payment screen - Placing Order stop when phone goes to sleep
* Mugs - Image running out from Layout when opening/closing text object
* Customization screen - Pop up is missing when you try to save to cart with less images than maximum allows
* Throw Pillows - App is crashing when edit it
* Landscape mode is allowed when side menu is disabled
* Customization screen - "Bag" products: Remove text bellow Layout
* Promo code doesn't work
* Photobooks are in Portrait mode when pass photos in SDK
* Photobooks: Change name of item in book menu to "Change Book Template"
* Canvas Minis - wrong orientation for 8x10 inch size
* Photobooks - Doubled templates
* Photobooks - Double text "Pages" on Step 2
* Photobooks - Disable background when Page Picker is open
* Products screen - GridView Images are shrunked
* Extend 'setDefaultTemplateText' to take productId
* Corrupted "maxImages" for some products
* Select Images screen: Everything bags - Image Counter shows incorrect number
* Photobooks - "buttons line" stay visible on image editor screen
* Products with two sides - Layout menu stays opened when you tap on Next button
* Thick Prints - Typo mistake
* Dog Beds - Add text "Type" on Step 1
* Photobucket login - Missing popup if user add wrong username or pass
* Photobooks text - Keypad is rotating in portrait mode
* Products screen - Wrong prices on products when change Shipping country
* Select Images screen - Photo Sources stay logged on same account
* Product Details screen - Loading dialog disappear before load all product variants
* Customization screen - User is able to save product befor complete design
* Products with two sides - Layout menu stays opened when you tap on Back button
* Text feature stops working
* Blocked UI when promo code is applied
* Payment screen - Missing uploading dialog for social photo sources

####

**1.2.28 (19)**
---
**Features:**
* New Product: Giclee Prints
* Photobooks - Allow user to save customization and cart for later usage
* Photobook - Change to a different template style 
* Photobooks - turn off permanently status bar on Customization screen
* Added meta info when posting orders
* New public method added (replace default text on templates): https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdefaulttemplatetexts

####

**Bug fixes:** 
* Customization screen is broken after try to edit text object
* Shipment Review screen - added dialog for keeping or upgrading shipping method
* Order Completed screen - "Overall" is showing amount in US dollars even if currency is not dollar
* Navigation bar - Back button from another screen is active when side menu is opened
* Payment screen - Uploading images to server stop when phone goes to sleep
* UI chnages - Added Custom Fonts on some fields
* Payment screen - Placing Order stop when phone goes to sleep


####

**1.2.24 (19)**
---
**Features:**
* More space on customization screen

####

**Bug fixes:** 
* Phone case - Changing to Glossy doesn't work correctly
* Photobooks - app is crashing with images from Dropbox source
* Photobooks - "Page Picker" disappear in navigation bar after add text object
* Shopping cart screen - "Coupon savings" box are moving around screen
* Adding custom photo source fixed

####

**1.2.22 (19) CRUCIAL UPDATE**
---
**Features:**
* /

####

**Bug fixes:** 
* Image Upload and order fixed **CRUCIAL UPDATE**
* Payment screen - Incorrect total cost when add shipping coupon and change shipping method
* Customization screen is broken after try to edit text object
* Shopping Cart screen: Tinybooks - Thumbnail image have line on the right side
* Photobooks - Color picker stay frozen on Customization screen
* Photobooks - Keypad is rotating in portrait mode
* Photobooks - After reopen text object user can not edit it until click on the text
* Phone Case - Shipping Options are wrong for some models

####

**1.2.18 (19)**
---
**Features:**
* Metal Prints - Added new options: "Backing" and "Surface"
* Photobooks add text support
* Photobooks - show text layers from build info
* Address Form screen - Added auto complete for non US countries
* Handled better SDK when Internet connection is bad/poor
* Photobooks Update: Added ability to add text anywhere on the book page vs. editing text areas that come from server

####

**Bug fixes:** 
* github issues fixes: 
[#437](https://github.com/printdotio/printio-ios-sdk/issues/437)
* Phone Cases: Missing Names for phone templates when Country is not US
* Metal Prints - Sizes are duplicated
* Photobooks: Remove Transparency from "Replace Photo" screen
* Flat Cards - Prices are missing
* Flat Cards - Text Objects are doubling when changing layout
* Changed text in dialog when missing some data from the server
* Customization screen - Disable functionality in background when Layout screen is visible
* Flat Cards - Keypad overlapping Text Objects
* Flat Cards - Items in Step 2 and 3 are not centered
* Separator shoud be removed from Options screen
* Resolution warning dialog - Add padding between buttons
* Photobooks Customization screen - Cancel button doesn't work correcly
* Photobooks - Text is not saved on thumbnail from Cover Page
* Photobooks - copy/paste functionality for text is not in landscape mode
* Photobooks - Buttons are active in background when text object is opened
* Photobooks - After reopen text object user can not edit it until click on the text
* Completed screen: Removed scroll on order number
* Photobooks - "Buttons line" stay visible when remove keypad from the screen
* Photobooks - Changing fonts not working properly on second page (Title, Date, Description page)
* Photobooks - Keypad is not on full screen on lower version of iOS then 8.3
* Photobooks - Missing thumbnail  when Cancel "Progress images" dialog
* Added Pading on "Deselect all" button
* Select Address screen - Shows copy of Billing Address from Payment screen as new address item
* Phone Case - Customization screen: Changing background color shows line on the right side of the Layout
* Order Completed screen - Center text "Thank you for your purchase!"
* Address Form screen - "Address suggestion" dialog should be closed when user selects "next" button
* Photobooks: Front Cover - Line crosses outside Layout
* Photobooks - Fixed missing layout after app update
* Phone Case - Shipping Options are wrong for some models
* Photobucket source - Token disappear and not logged out 
* Flat Cards - disable image editor screen when text objects is active
* Photobooks - App is crashing on swipe between pages
* Photobooks - Swipe between pages is slower
* Tinybooks - Overlay is cut off
* Customization screen - Placeholder on images are zoomed
* Order Completed screen: missing symbol ":" on text
* Shipment review screen - Text in buttons for Shipment methods should be centred
* Side Menu - Search list is cutted

####

**1.2.11 (19)**
---
**Features:**
* New Product: Mugs
* New Product: Wall Clings
* New Product: Duvet Covers
* [Disable image rotation animation when scrolling through products](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--enableanimationinproductslist)
* [Much more to come method turned off by default](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showmuchmoretocome)
* Photobooks v2 - added resolution warnings
* Prevent crashs when missing server side data

####

**Bug fixes:** 
* github issues fixes: 
[#431](https://github.com/printdotio/printio-ios-sdk/issues/431),
[#435](https://github.com/printdotio/printio-ios-sdk/issues/435)
* Canvas Wraps - Image Wrap doesn't have background color on Customization screen
* Add Max 252 Photos - app has crashed
* Product Details screen: Art Posters - "Paper" text is duplicated
* Picasa - when try to login, app has crashed
* Checkout screen - small UI changes
* Pillow Shams - "Luxe" material have the same price for different sizes
* SDK Update: remove specific text from SDK
* Picasa - remove video and gif files
* Product Details screen - not changing "Starting At" price after change currency
* Photobooks - Layout overlapping Save (to cart) button and it's cutted on the bottom side
* Canvas Posters - Should center Preview Images on Choose Options screen
* Facebook - not working
* New Product: Duvet Covers - Missing prices for different sizes
* Photobooks - "Fun 4 All" template have only Black Spine
* Customization screen - Loading dialog never disappear after "Add More Photos"
* Mugs: Choose Options screen - Missing price for sizes
* Remove double text "Size" from same screen
* Product Details screen - Side Menu is enabled when open Image Preview screen
* Phone Case: Nexus 5 - Duplicated templates
* Photobooks - "Picture in Picture" template bug (image disappearing)
* Phone Case - Missing Glossy templates on Customization screen
* Shopping cart screen - Tinybooks have bad thumbnail
* Throw Pillows - Auto Arrange doesn't work on Back Side of pillow
* Flickr - missing placeholder on folders

####

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
