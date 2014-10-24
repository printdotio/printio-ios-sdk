Specific Page Methods
=====================
- [**A. Products Screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#a-products-screen)
- [**B. Product Details screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#product-details-screen)
- [**C. Choose Options screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#c-choose-options)
- [**D. Select Photos screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#d-select-photos-screen)
- [**E. Customization screen**](https://github.com/printdotio/printio-ios-sdk/edit/master/docs/specific_page_methods.md)
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

 [1]: https://lh6.googleusercontent.com/-2Lz2VAdbNd0/VEooKvJnY5I/AAAAAAAAALI/N1Tll8ZLrX8/w501-h889-no/1a.png
 [2]: https://lh5.googleusercontent.com/-8EfndISLMHY/VEou9zVdK9I/AAAAAAAAAL0/ye5r_Y5WRtA/w501-h889-no/IMG_2603.PNG
 [3]: https://lh4.googleusercontent.com/-2GyJzBSpHaw/VEo2t0ggo5I/AAAAAAAAAMc/jaXhKHZmFCQ/w501-h889-no/2.png
