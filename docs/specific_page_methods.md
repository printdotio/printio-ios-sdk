Specific Page Methods
=====================
- [**A. Products Screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#a-products-screen)
- [**B. Product Details screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#product-details-screen)
- [**C. Choose Options screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#c-choose-options)
- [**D. Select Photos screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#d-select-photos-screen)
- [**E. Customization screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#e-customization-screen)
- [**F. Image Editor screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
- [**G Shopping Cart screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
- [**H. Select Address screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
- [**I. Payment screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
- [**J. Order Completed screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
- [**K. Choose Country screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
- [**L. About screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
- [**M. How It Works screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
- [**N. Side Menu**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)

---

## A. Products screen

![enter image description here][1]

#### A1. Set the title for the Featured Products screen. Default value is "Products". 

- setTitleForFeaturedProductsScreen
 
https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforfeaturedproductsscreen

#### A2. Method to change background image for the Featured Products screen. Default appearance is white color.

- setFeaturedProductsBackgroundImage

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfeaturedproductsbackgroundimage

#### A3. Set text color for left label and right label on Items on Featured Products list.

- setFeaturedProductsLeftLabelTextColor
- rightLabelTextColor 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfeaturedproductsleftlabeltextcolorrightlabeltextcolor

#### A4. Hide Category/Search view in Featured Products screen. Default value is NO.

- hideCategoriesInFeaturedProducts

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidecategoriesinfeaturedproducts

#### A5. Allow user to show/hide country on Products screen. Default value is YES. 
	Missing in new docs

- setCountryInFeaturedProducts

https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#select-country-bar

#### A6. Method to change background color on Select Country bar on Featured Products screen.
	Missing in new docs

- backgroundColor

https://github.com/printdotio/printio-ios-sdk/blob/master/ios_sdk_customization.md#select-country-bar

---

## Product Details screen

![enter image description here][2]

#### B1. Provide Quality Guarantee text for Product Details screen.

- setQualityGuaranteeText

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setqualityguaranteetext

#### B2. Show title below navigation bar on Product Details screen

- productDetailsShowTitleBelowNavBar

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--productdetailsshowtitlebelownavbar
 

#### B3. Show menu button in navigation bar on Product Details screen

- productDetailsShowMenuBtnInNavBar

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--productdetailsshowmenubtninnavbar

---

## C. Choose Options

![enter image description here][3]

C1. Disable auto recognition and selection of iPhone model. Default value is NO.

- disableAutoRecognizePhoneModel 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disableautorecognizephonemodel

C2. Set the title for the Choose Options screen. Default value is "Choose Options".
	
- setTitleForChooseOptionsScreen
 
https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforchooseoptionsscreen

---

## D. Select Photos screen

![enter image description here][4]

D1. Customize the title on the photo sources screen. Default value is "Select Photos".

- setTitleForPhotoSourcesScreen

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforphotosourcesscreen

D2. Hide icon for Upload Instructions text in Photo Sources screen. Default value is NO.

- hideIconForUploadInstructions

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideiconforuploadinstructions


D3. Required step to configure which photo sources you would like to offer within your application.

- setAvailablePhotoSources
- PIO_SM_PHONE
- PIO_SM_INSTAGRAM
- PIO_SM_FACEBOOK
- PIO_SM_PICASA
- PIO_SM_FLICKR
- PIO_SM_DROPBOX
- PIO_SM_PHOTOBUCKET

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setavailablephotosources

---

## E. Customization screen

![enter image description here][5] ![enter image description here][6]
![enter image description here][7] ![enter image description here][8]

E1. Set whether photos are arranged automatically, manually, or up to the user (default is CHOOSE).

- setPhotoArrangement 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setphotoarrangement  

E2. Specify an image file to use as the help icon in customize product view. Default value is YES.

- setIconForHelpButtonInCustomizeProduct
- visible

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforhelpbuttonincustomizeproductvisible 

E3. Show custom help overlay when user is about to start editing image in Customize Product view.

- showHelpDialogWithImage 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showhelpdialogwithimage

E4. Specify an image file to use as the Add Photos button in the Customize Product view.

- setIconForAddPhotosButton 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforaddphotosbutton 

E5. Set visibility of toolbar in customize product view. Default is YES.

- showToolbarInCustomizeProduct
- backgroundImage 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showtoolbarincustomizeproductbackgroundimage

E6. Set visibility of images list in customize product view. 
	Missing in new docs

- hideImageListInCustomizeProduct

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/ios_sdk_customization.md#images-list-visible 

E7. Customize the Double tap balloon on the Customize Product screen.

- setPopUpWithImage
- text
- textColor 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpopupwithimagetexttextcolor 

E8. Customize the how many seconds the Double tap balloon is visible for in the customize product view. The default time is 10 seconds.

- setDoubleTapBalloonVisibilityTime

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setdoubletapballoonvisibilitytime

E9. Hide/Show 'Watch Video' button on Customize Product screen. Default value is NO. 

- hideWatchVideoButton 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidewatchvideobutton

---

## F. Image Editor screen

![enter image description here][9]

F1. Set which buttons will be visible in Image Editor toolbar. By default, all buttons are visible.

- imageEditorShowButtons

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--imageeditorshowbuttons

---



 [1]: https://lh6.googleusercontent.com/-2Lz2VAdbNd0/VEooKvJnY5I/AAAAAAAAALI/N1Tll8ZLrX8/w501-h889-no/1a.png
 [2]: https://lh5.googleusercontent.com/-8EfndISLMHY/VEou9zVdK9I/AAAAAAAAAL0/ye5r_Y5WRtA/w501-h889-no/IMG_2603.PNG
 [3]: https://lh4.googleusercontent.com/-2GyJzBSpHaw/VEo2t0ggo5I/AAAAAAAAAMc/jaXhKHZmFCQ/w501-h889-no/2.png
 [4]: https://lh4.googleusercontent.com/-Ew1RyKW276Q/VEo538oemaI/AAAAAAAAAP0/XZj6R4p4_pI/w501-h889-no/3.png
 [5]: https://lh5.googleusercontent.com/-nBgt-cpuyao/VEo549UpANI/AAAAAAAAAP8/xqoFbFy-0xI/w501-h889-no/4a.png
 [6]: https://lh4.googleusercontent.com/-zERcUguYZHU/VEo57dT2_RI/AAAAAAAAAQM/G7iJi8ppcdI/w501-h889-no/4b.png
 [7]: https://lh3.googleusercontent.com/-wgqo4uBzSus/VEo58lNwlmI/AAAAAAAAAQY/fZhUTdxMloQ/w501-h889-no/4c.png
 [8]: https://lh3.googleusercontent.com/-ee0LOXe7UK4/VEo561H_pAI/AAAAAAAAAQI/j0TIZi4aaAQ/w501-h889-no/4d.png
 [9]: https://lh6.googleusercontent.com/-WT0k3Pkx7u4/VEo5-qR_5BI/AAAAAAAAARQ/KAA--VFZA0Q/w501-h889-no/4e.png
