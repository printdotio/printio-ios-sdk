Specific Page Methods
===
- [**A. Products Screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#a-products-screen)
- [**B. Product Details screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#product-details-screen)
- [**C. Choose Options screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#c-choose-options)
- [**D. Select Photos screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#d-select-photos-screen)
- [**E. Customization screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#e-customization-screen)
- [**F. Image Editor screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#f-image-editor-screen)
- [**G. Shopping Cart screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#g-shopping-cart-screen)
- [**H. Select Address screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#h-select-address-screen)
- [**I. Payment screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#i-payment-screen)
- [**J. Order Completed screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#j-order-completed-screen)
- [**K. Choose Country screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#k-choose-country-screen)
- [**L. About screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#l-about-screen)
- [**M. How It Works screen**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#m-how-it-works-screen)
- [**N. Side Menu**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#n-side-menu-screen)

---

- [**Full app Methods**](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md#full-app-methods)

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

![enter image description here][5]
---
![enter image description here][6]
---
![enter image description here][7]
---
![enter image description here][8]

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

## G. Shopping Cart screen

![enter image description here][10] 
---
![enter image description here][11]

G1. Customize the title for the Shopping Cart. Default value is "Shopping Cart".

- setTitleForShoppingCart 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforshoppingcart

G2. Customize the icon for the back button in the Shopping Cart screen. 

- setIconForShoppingCartBackButton 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartbackbutton

G3. Method to Hide or Show “Edit” button on Shopping Cart screen. Default value is NO.

- hideEditButtonInShoppingCart 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hideeditbuttoninshoppingcart 

G4. Visibility for Add More Products button. Default value is YES.

- setShowsAddMoreProductsInShoppingCart 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setshowsaddmoreproductsinshoppingcart
 
G5. Disable Preview screen for products on Shopping Cart screen (click on item in cart list). Default value is YES. 

- disablePreviewScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--disablepreviewscreen

G6. Add Promo code to get discount for products on Shopping cart screen. 

- setPromoCode 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpromocode

G7. Remove plus sign from 'Add More Products' button. Default value is NO.

- removePlusFromAddMoreProductsButton 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--removeplusfromaddmoreproductsbutton

---

## H. Select Address screen

![enter image description here][12] 
---
![enter image description here][13]

H1. Show/Hide plus sign on Add Shipping Address button. Default value is NO. 

- showPlusSignOnAddButton 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--showplussignonaddbutton

H2. Change highlight color for address selection on Select Address screen (on click item from the address list). Default color is light green. 

- setColorForAddressSelection 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcolorforaddressselection

---

## I. Payment screen

![enter image description here][14]

I1. Hide logo when user is in checkout flow. Default value is YES.

- removeLogoFromPaymentScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--removelogofrompaymentscreen

I2. Enable the terms and conditions link form control on the payment page and specify the URL to be loaded (in Safari). By default, the terms and conditions are not shown. 

- setTermsAndConditionsURL 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settermsandconditionsurl 

---

## J. Order Completed screen

![enter image description here][15]

J1. Change title for Order Completed screen. Default value is "Order Completed".

- setTitleForOrderCompletedScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforordercompletedscreen

J2. Change icon for company logo.

- setIconForOrderCompletedScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforordercompletedscreen

J3. Change company message below company logo.

- setMessageForOrderCompletedScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setmessageforordercompletedscreen

J4. Change function of “Close” button on Order Completed screen.

- orderCompletedScreenCloseButtonShouldPerformBack 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--ordercompletedscreenclosebuttonshouldperformback

---

## K. Choose Country screen

![enter image description here][16]

K1. Change title on Choose Country screen. Default value is “Choose Country”.

- setTitleForChooseCountryScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--settitleforchoosecountryscreen

K2. Hide search icon from navigation bar. Default value is Hidden. 

- hideSearchIconInChooseCountryScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidesearchiconinchoosecountryscreen

K3. Change placeholder text in search bar.

- setPlaceholderTextForSearchBarInChooseCountryScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setplaceholdertextforsearchbarinchoosecountryscreenhidemagnifyingglass 

K4. Set magnifying glass visible or hidden.

- hideMagnifyingGlass 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setplaceholdertextforsearchbarinchoosecountryscreenhidemagnifyingglass 

K5. Change the color of navigation bar in 'Choose Country' screen. Default color is white.

- setNavigationBarBackgroundColorForChooseCountryScreen 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnavigationbarbackgroundcolorforchoosecountryscreen

---

## L. About screen

![enter image description here][17]

L1. Customize the text content of the About page to fit your application's brand and voice.

- setAboutText 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setabouttext

---

## M. How It Works screen

![enter image description here][18]

M1. Customize the text content of the How It Works page to fit your application's brand and voice. 

- setHowItWorksText 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sethowitworkstext

---

## N. Side Menu screen 

![enter image description here][19]
---
![enter image description here][20]

N1. Change background color for Side Menu. Default value is black.

- background 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--usesidemenuwithmenuiconbackground

N2. Set which options to use in side menu:

- sideMenuAddButtons
- options
- optionsTitle
- optionsTitleColor
- optionsColor
- accountsTitle
- accountsTitleColor
- accountsColor
- info
- infoTitle
- infoTitleColor
- infoColor
- backgroundImageForButtons 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuaddbuttons

N3. Hide “Options” header in Side Menu. default values is NO.

- sideMenuHideOptionsHeader 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideoptionsheader

N4. Hide “Accounts” header in Side Menu. default values is NO.

- sideMenuHideAccountsHeader 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideaccountsheader

N5. Hide “Info” header in Side Menu. Default values is NO.

- sideMenuHideInfoHeader 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenuhideinfoheader

N6. Show “Options” section as a list. Default value is NO. 

- sideMenuShowOptionsAsList 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenushowoptionsaslist

N7. Set the text to be included when a user clicks the Share this app button. Note: This is option from Side Menu, in order to use it, Side Menu needs to be enabled first. 

- setShareText 
- additionalText 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setsharetextadditionaltext

N8. Hide photo source section. Default value is NO.

- hidePhotoSourcesInSideMenu 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--hidephotosourcesinsidemenu

N9. Set background image on Side Menu. 

- sideMenuBackgroungImage 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--sidemenubackgroungimage

N10. Set url link to facebook page e.g. 'fb://profile/642169949144369'

- setLikeUsOnFacebookUrl 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setlikeusonfacebookurl

N11. Set Country Code. Default value is US.

- setCountryCode 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcountrycode

N12. Set Currency Code. Default value is USA. 

- setCurrencyCode 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcurrencycode 

N13. Set Language code. Default value is EN. 

- setLanguageCode 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setlanguagecode 

---

Full app Methods
===

![enter image description here][21] 
---
![enter image description here][22] 
---
![enter image description here][23]
---
![enter image description here][24]
---
![enter image description here][25]

---

A. Back (negative) - Forward (positive) button change methods (Applies to whole app).

- setNegativeButtonsBackgroundColor 
 
https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setnegativebuttonsbackgroundcolor

- setPositiveButtonsBackgroundColor

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setpositivebuttonsbackgroundcolor

---

B. Methods to change header bar color (Might apply to the whole app)

- navigationBarColor

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--navigationbarcolortitlecolorleftbuttonbackgroundcolorrightbuttonbackgroundcolortitlebuttonicon

---

C. Method to change title color in navigation bar (Might apply to the whole app).

- titleColor 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--navigationbarcolortitlecolorleftbuttonbackgroundcolorrightbuttonbackgroundcolortitlebuttonicon

---

D. Method to change background colors for left and right buttons in navigation bar.

- leftButtonBackgroundColor
- rightButtonBackgroundColor 
 
https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--navigationbarcolortitlecolorleftbuttonbackgroundcolorrightbuttonbackgroundcolortitlebuttonicon

---

E. Set an icon for the center to replace the page title. Default value is Nil.

- titleButtonIcon 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--navigationbarcolortitlecolorleftbuttonbackgroundcolorrightbuttonbackgroundcolortitlebuttonicon

---

F. Include a "Back", "Menu" and "Cart" button in the top navigation bar. The default value is NO.

- setThreeButtonsNavigationBarSytle 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setthreebuttonsnavigationbarsytle

---

G. Set Back button in the navigation bar.

- setIconForBackButton 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforbackbutton

---

M. Change shopping cart icon and indicate whether to badge with number of products.

- setIconForShoppingCart
- withNumberOfProducts
- labelPosition
- circleColor
- textColor 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforshoppingcartwithnumberofproductslabelpositiontextcolor

---

N. Set custom fonts from main app bundle. 

- setFonts 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setfonts

---

O. Change light fonts size. Default value is "-1.0".

- changeSizeOfLightFontsBy

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--changesizeoflightfontsby

---

P. Change medium fonts size. Default value is "-1.0".

- changeSizeOfMediumFontsBy

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--changesizeofmediumfontsby

---

Q. Change regular fonts size. Default value is "-1.0".

- changeSizeOfRegularFontsBy

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--changesizeofregularfontsby

---

R. Change bold fonts size. Default value is "-1.0".

- changeSizeOfBoldFontsBy

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--changesizeofboldfontsby

---

S. Loading View instead of the Loading GIF Image. Default value is "Gray" color.

- setLoadingActivityIndicatorViewStyle

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setloadingactivityindicatorviewstyle

---

T. Change the loading GIF from the default. Default value is "printio.gif".

- setLoadingGIF

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setloadinggif

---

U. Change title of loading dialog. Default value is "Loading...".

- setLoadingText

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setloadingtext

---

V. Change icon for Help Button. Specify an image file to use as the help icon throughout the app.

- setIconForHelpButton 

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--seticonforhelpbutton

---

W. Change prtner's logo icon which is used on cart and confirmation screens. File name of logo image, without file type extension.

- setLogoFileName

https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setlogofilename

---

 [1]: https://lh6.googleusercontent.com/-0WuWATsBvOc/VEprESzVF9I/AAAAAAAAATA/u-WMpFsB59A/w400-h710-no/products_screen_small.png
 [2]: https://lh3.googleusercontent.com/-_977PRHV-xs/VEptrXemYmI/AAAAAAAAATk/Qxi83xKMO8o/w400-h710-no/product_details_screen_small.png
 [3]: https://lh3.googleusercontent.com/-KAeQ_QBdzmo/VEpwbALD7SI/AAAAAAAAAUU/pr6ZHCEeSC0/w400-h710-no/choose_options_small.png
 [4]: https://lh4.googleusercontent.com/-s9jvJicgTeE/VEpyGlJaWSI/AAAAAAAAAU4/a64rL_PUhIQ/w400-h710-no/select_photos_screen_small.png
 [5]: https://lh5.googleusercontent.com/-mJ30WzblN2k/VEp4LTNo2TI/AAAAAAAAAV8/ZheRJT_lej8/w400-h710-no/image_arragament.png
 [6]: https://lh5.googleusercontent.com/-nRXU-cjMcKY/VEp4Kl-HzgI/AAAAAAAAAV4/EF8KF80yics/w400-h710-no/customization_screen_1.png
 [7]: https://lh3.googleusercontent.com/-ZNdiRfOLidA/VEp4K-_AqWI/AAAAAAAAAV0/stUQbOKIgwY/w400-h710-no/customization_screen_2.png
 [8]: https://lh6.googleusercontent.com/-tEY8-_DukWo/VEp4KpwUFZI/AAAAAAAAAWA/1i2Hac3HtdU/w400-h710-no/customization_screen_3.png
 [9]: https://lh4.googleusercontent.com/-Z7ZcraxxnBE/VEp--kcgiNI/AAAAAAAAAWs/6PdokZyNbX8/w400-h710-no/image_editor_screen.png
 [10]: https://lh6.googleusercontent.com/-N1XiAGlcaMI/VEqB89vTGqI/AAAAAAAAAXQ/iGooXUZIgLA/w400-h710-no/shopping_cart_1.png
 [11]: https://lh6.googleusercontent.com/-ZmCY9Znsjjs/VEqB9PoGyPI/AAAAAAAAAXU/hG1YhP-UKKQ/w400-h710-no/shopping_cart_2.png
 [12]: https://lh5.googleusercontent.com/-vqluXSp35sw/VEqDkqJVCjI/AAAAAAAAAYA/NpssAZk_i5k/w400-h710-no/address_1_small.png
 [13]: https://lh6.googleusercontent.com/-hXRULeLMXEI/VEqDk5cd4bI/AAAAAAAAAYE/AH-8G9dIsa8/w400-h710-no/address_2_small.png
 [14]: https://lh5.googleusercontent.com/-M6y6zFnKzUc/VEqFECsdrRI/AAAAAAAAAY0/NVFmEs6WKIM/w400-h710-no/payment_screen_small.png
 [15]: https://lh6.googleusercontent.com/-g7EOsxk6cpY/VEqHTpzX_HI/AAAAAAAAAZU/7GSJKpBszxY/w400-h710-no/order_complated_screen_small.png
 [16]: https://lh6.googleusercontent.com/-XDjgGjKJIE8/VEqJxp4S9VI/AAAAAAAAAaI/cLvyFSpA2Ks/w400-h710-no/choose_country_screen_small.png
 [17]: https://lh3.googleusercontent.com/--WiedLmbxQ0/VEqL6IF3UUI/AAAAAAAAAas/rYrChLrud0s/w400-h710-no/about_screen_small.png
 [18]: https://lh6.googleusercontent.com/-hMjyXZjOlC4/VEqM0gWGkKI/AAAAAAAAAbY/8wrhdcq7awQ/w400-h710-no/how_it_works_screen_small.png
 [19]: https://lh4.googleusercontent.com/-uk5_BqRVk5U/VEqSSHlCOrI/AAAAAAAAAcE/YV0eTj8NP6E/w400-h710-no/side_menu_1_small.png
 [20]: https://lh3.googleusercontent.com/-93-n89CRYUs/VEqSSUnQ1-I/AAAAAAAAAcQ/IRdONVLTPKM/w400-h710-no/side_menu_2_small.png
 [21]: https://lh6.googleusercontent.com/-kP7Z1nYl61E/VE4VMVzHCOI/AAAAAAAAAd8/VhZmk2EpavU/w400-h710-no/neg_pos_buttons_small.png
 [22]: https://lh3.googleusercontent.com/-MeY4CXiiIkY/VE4cPLovmpI/AAAAAAAAAew/_xqVbYWebH0/w400-h710-no/header_bar_small.png
 [23]: https://lh6.googleusercontent.com/-QjKo4ng-gW8/VE4j539Rt-I/AAAAAAAAAgU/ikNtzNCYQEM/w400-h710-no/M_small.png
 [24]: https://lh4.googleusercontent.com/-mWOM_pkRmis/VE4gyvf8CoI/AAAAAAAAAfk/CdNieQMItW8/w400-h710-no/fonts_small.png
 [25]: https://lh5.googleusercontent.com/-_1SsRSep5-k/VE4mkGe9AgI/AAAAAAAAAhI/bMYJ15lxzIc/w400-h710-no/loading_gif_small.png
 
