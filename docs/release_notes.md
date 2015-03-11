iOS Release Notes
==================================

**1.1.0 (18)**
---
**Features:**
* Add photo source public headers to framework target 
* Rename photo-source specific classes to have PIO prefix to avoid duplicate symbols
* Updated design of double tap balloon
* Add discount amount and coupon code used to order completed callback  - #382 github
* Ability to filter what products show via method on client side not server side
* Custom Photo Source API - option to add a custom photo source https://github.com/printdotio/printio-ios/blob/master/temp_photo_sources.md
* Deselect passed images - new method
* Added 7 new products: Canvas Posters, Rugs, Mementos, Tote Bags, Dog Beds, Canvas Minis and Everything Bags
* Added Resolution Warnings for photos which are smaller than 1/3 of requested size

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
* Coming soon products
* Tinybooks - Image running from Overlay
* Add gray border around number label in Select photos screen
* PB login crash from side menu
* Customization screen - Changing Layout doesn't work correctly from the shopping cart
* Allow user to Place Order with a complete zero dollar value
* Facebook album images blocks UI 
* iPhone 5: Select Photos screen - right side of photo sources is cutted
* When user is logged in to the Instagram on side menu is not logged in
* Photo Sources - Scroll bar indicator is overlapping images, should be moved to the edge of the screen
* Order Completed screen - "Coupon savings: is not same like on Payment screen
* Warning popup is clickable, every time when click on popup opens new one
***

