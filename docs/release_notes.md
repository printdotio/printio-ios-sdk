##iOS Release Notes
***

**1.0.49 (17)**
---
**Features:**
* Custom Photo Source API - option to add a custom photo source
* Fixes to Cards: Text Too Small
* New Product: Canvas Minis
* New Product: Dog Beds
* Deselect passed images - new method
* Update the rules to be 1/3 of the size or less to show warning

####

**Bugs:** 
* Side Menu - shows version number when missing one photo source
* Customization screen - After changing layout template, loading popup stay visible on the screen
* Throw Pillows - app is crashing on back side of pillow 
* setIconForShoppingCart: does not work
* Unable to by-pass photo sources view
* iPhone 4s: Text Object - After close image editor screen layout moves down and text run from Layout
* Customization screen: Help Dialog is clickable
* Canvas Posters - Missing preview image for grid view and images have low resolution on Product Details screen - sever side issue
* Tote Bags - bad build info on Customization screen - server side issue
* Customization screen - Doesn't want to add automatically image on the 1 image layout
* Flat cards - Can not add image on this Layout, shows Error toast message - server side issue
* Text Objects is removed when change Layout
* Unsupported products remain visible in cart list and causing a crash
* Throw Pillows - When edit pillow from Shopping cart, on Back side of pillow missing images

***

**1.0.50 (17)**
---

**Features:**
* Merge photo sources into master
* Merge branches into master
* Add photo source public headers to framework target 
* Rename photo-source specific classes to have PIO prefix to avoid duplicate symbols
* Update design of double tap to edit popup
* Send image public link instead of uploading image in order
* Add discount amount and coupon code used to order completed callback  - #382 github
* Ability to filter what products show via method on client side not server side

####

**Bugs:** 
* Coming soon products
* Tinybooks - Image running from Overlay
* Add gray border around number label in Select photos screen
* PB login crash from side menu
* Customization screen - Changing Layout doesn't work correctly from the shopping cart
* Allow user to Place Order with a complete zero dollar value
* Facebook album images blocks UI 

***

**1.0.51 (18)**
---

**Features:**
* Ability to filter what products show via method on client side not server side
* Added 7 new products - (CANVAS_POSTERS, RUGS, MEMENTOS, TOTE_BAGS, DOG_BEDS, CANVAS_MINIS, EVERYTHING_BAGS)

####

**Bugs:** 
* iPhone 5: Select Photos screen - right side of photo sources is cutted

***

**1.0.52 (18)**
---

**Features:** 
* Customization screen: Resolution warning message - It should be an icon on the item and when you tap on it it gives you a message
* Resolution Warnings on "book" products

####

**Bugs:** 
* When user is logged in to the Instagram on side menu is not logged in
* Photo Sources - Scroll bar indicator is overlapping images, should be moved to the edge of the screen
* Order Completed screen - "Coupon savings: is not same like on Payment screen
* Warning popup is clickable, every time when click on popup opens new one

***
