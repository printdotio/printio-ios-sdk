# Developer SDK Customization Reference

## XML Customization file

Path to XML customization file for setting background and font colors on buttons

| Method | Parameters - Options |
| :---- | :---- |
| `setCustomizationXML` | Specify path to XML file in application |

### Code example

```Objective-C
NSString *xmlPath = [[NSBundle mainBundle] pathForResource:@"customization" ofType:@"xml"];
NSData *xmlData = [NSData dataWithContentsOfFile:xmlPath];
[self.printIO setCustomizationXML:xmlData];
```

---

## Set Status Bar Style and Visibility

Set status bar theme and display options.  statusBarDark being set to YES will result in the status bar icons and text being rendered in black (and the opposite results in white).  Setting the status bar to hidden will hide it from the user for a full-screen experience.  

| Method | Parameters - Options |
| :---- | :---- |
| `setStatusBarDark` | YES, NO |
| `hidden` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setStatusBarDark:NO hidden:YES];
```

### Screenshots

| Hidden | Visible - Dark Text | Visible - Light Text |
| :---- | :---- | :---- |
| [![Status Bar - Hidden](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/statusBar_hide.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/statusBar_hide.png) | [![Status Bar - Visible - Dark text](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/statusBar_show-dark.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/statusBar_show-dark.png) | [![Status Bar - Visible - Light Text](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/statusBar_show-light.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/statusBar_show-light.png) |

_Note: The status bar background in the "light text" example was changed only to make the text clear.  The ability to change the background is available through the [`navigationBarColor` settings](#navigation-bar-settings)_

---

## Navigation Bar Settings

Customize top navigation bar colors and set an icon for the center to replace the page title.  If titleButtonIcon is nil, current page title will be shown.

| Method | Parameters - Options |
| :---- | :---- |
| `navigationBarColor` | Specify color |
| `titleColor` | Specify color |
| `leftButtonBackgroundColor` | Specify color |
| `rightButtonBackgroundColor` | Specify color |
| `titleButtonIcon` |  Specify image in application for center button |

### Code Sample

``` Objective-C
[self.printIO navigationBarColor:[UIColor whiteColor]
                      titleColor:[UIColor blackColor]
       leftButtonBackgroundColor:nil
      rightButtonBackgroundColor:nil
                 titleButtonIcon:[[NSBundle mainBundle] pathForResource:@"icon" ofType:@"png"] : nil];
```

### Screenshots

| Custom Color | Custom Menu Icon |
|  :---- | :---- |
| [![Custom navigation bar color](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/navigationBarColor_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/navigationBarColor_custom.png) |  [![Alternate title button icon ](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/titleButtonIcon.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/titleButtonIcon.png) |

---

## User Three-button Menu Bar

Include a "Back", "Menu" and "Cart" button in the top nav along with the location text for Featured Products screen.  The default is NO.

| Method | Parameters - Options |
| :---- | :---- |
| `setThreeButtonsNavigationBarSytle` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setThreeButtonsNavigationBarSytle:YES];
```

### Screenshots

| Default | 3-Button Menu Bar |
| :---- | :---- |
| [![Disable Three-button Menu Bar](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/useThreeButtonsBarStyle_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/useThreeButtonsBarStyle_no.png) |  [![Enable Three-button Menu Bar](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/useThreeButtonsBarStyle_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/useThreeButtonsBarStyle_yes.png) |

---

## Slide Side Menu from right side

Override side menu behavior to slide from right side instead of left side

| Method | Parameters - Options |
| :---- | :---- |
| `slideSideMenuFromRight` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO slideSideMenuFromRight:YES];
```

### Screenshots

| Menu Closed | Menu Open |
| :---- | :---- |
| [![Slide Side Menu from Right - Closed](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/slideSideMenuFromRight_closed.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/slideSideMenuFromRight_closed.png) |  [![Slide Side Menu from Right - Open](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/slideSideMenuFromRight_open.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/slideSideMenuFromRight_open.png) |

---

## Set Back Button Icon

Specify an image file to use as the Back button in the top nav

| Method | Parameters - Options |
| :---- | :---- |
| `setIconForBackButton` | Specify image file in application |

### Code Sample

``` Objective-C
[self.printIO setIconForBackButton:[[NSBundle mainBundle]pathForResource:@"mg_back_new" ofType:@"png"]];
```

### Screenshots

| Default | Custom |
| :---- | :---- |
| [![Default Back button icon](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/iconForBackButton_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/iconForBackButton_default.png) | [![Custom Back button icon](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/iconForBackButton_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/iconForBackButton_custom.png) |

---

## Custom Fonts

Array of string values that contains font name and type with the exact order (light, medium, regular, bold). 
Example: [@"font_light.otf", @"font_medium.otf", @"font_regular.otf", @"font_bold.otf"]. Array must have four items, and fonts can be duplicated. Array also accepts system (normal, bold and italic) UIFont objects.

| Method | Parameters - Options |
| :---- | :---- |
| `setFonts` | Any 4 .ttf or .otf files included in application |
| `switchCustomFonts` | ON, OFF |

### Code Sample

``` Objective-C
NSArray *fonts = @[@"timess.ttf", @"timess.ttf",@"aubrey.ttf", @"CaviarDreams_Bold.ttf"];
[self.printIO setFonts:fonts];
```

### Screenshots

| Default | Custom Fonts |
| :---- | :---- |
| [![Default Fonts](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/customFonts_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/customFonts_default.png) | [![Custom Fonts](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/customFonts_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/customFonts_custom.png) |

---

## Loading GIF

Change the loading GIF from the default

| Method | Parameters - Options |
| :---- | :---- |
| `setLoadingGIF` | Specify GIF file name without file extension |

### Code Sample

``` Objective-C
[self.printIO setLoadingGIF:@"load"];
```

### Screenshots

| Default | Custom Loading GIF |
| :---- | :---- |
| [![Default Loading GIF](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setLoadingGIF_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setLoadingGIF_default.png) | [![Custom Loading GIF](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setLoadingGIF_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setLoadingGIF_custom.png) |

---

## Specify Localizations

Specify one or more of currency, language and country, which overrides the ability to select a different options from the side menu.  A specified country also overrides the ability to select a different option in the Featured Product view, if it's enabled)

| Method | Parameters - Options |
| :---- | :---- |
| `setCurrencyCode` | Three-letter currency code |
| `setLanguageCode` | Two-letter language code |
| `setCountryCode` | Two-letter country code |

### Code Sample

``` Objective-C
[self.printIO setCurrencyCode:@"USD"];
[self.printIO setLanguageCode:@"en"];
[self.printIO setCountryCode:@"US"];
```

### Screenshots

| Default | Currency Pre-set | Language Pre-set |
| :---- | :---- | :---- |
[![Default Localization](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setLocalizationCode_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setLocalizationCode_default.png) | [![Only Currency specified](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setLocalizationCode_currency.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setLocalizationCode_currency.png) | [![Only Language specified](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setLocalizationCode_language.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setLocalizationCode_language.png) |

| Country Pre-set | Multiple Pre-set |
| :---- | :---- |
| [![Only Country specified](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setLocalizationCode_country.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setLocalizationCode_country.png) | [![Multiple Localizations Specified](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setLocalizationCode_multi.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setLocalizationCode_multi.png) |

---

## Select Country Bar

Allow user to change country in featured products view and specify a color for the background of the control.

| Method | Parameters - Options |
| :---- | :---- |
| `setCountryInFeaturedProducts` | YES, NO |
| `backgroundColor` | Specify color for background of country selection bar |

### Code Sample

``` Objective-C
[self.printIO setCountryInFeaturedProducts:NO
    backgroundColor:[UIColor colorWithRed:26.0/255.0 green:188.0/255.0 blue:156.0/255.0 alpha:255.0/255.0]];
```

### Screenshots

| Default | Enabled |
| :---- | :---- |
| [![Country Selection in Featured Products Disabled](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/selectCountryInFeaturedProducts_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/selectCountryInFeaturedProducts_no.png) | [![Country Selection in Featured Products Enabled](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/selectCountryInFeaturedProducts_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/selectCountryInFeaturedProducts_yes.png) |

---

## Category Control Bar Visibile

Hide Category/Search view in Featured Products screen.  Default is NO

| Method | Parameters - Options |
| :---- | :---- |
| `hideCategoriesInFeaturedProducts` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO hideCategoriesInFeaturedProducts:NO];
```

### Screenshots

| Default | Hidden |
| :---- | :---- |
| [![Show Categories in Featured Products](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/hideCategoriesInFeaturedProducts_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/hideCategoriesInFeaturedProducts_no.png) | [![Hide Categories in Featured Products](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/hideCategoriesInFeaturedProducts_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/hideCategoriesInFeaturedProducts_yes.png) |

---

## Auto-arrange Photos

Set whether photos are arranged automatically, manually, or up to the user (default is CHOOSE)

| Method | Parameters - Options |
| :---- | :---- |
| `setPhotoArrangement` | `PIO_PHOTO_ARRANGEMENT_CHOOSE`, `PIO_PHOTO_ARRANGEMENT_AUTO`, `PIO_PHOTO_ARRANGEMENT_MANUAL` |

### Code Sample

``` Objective-C
[self.printIO setPhotoArrangement:PIO_PHOTO_ARRANGEMENT_AUTO];
```

### Screenshots

| Default | Auto-arrange | Manual Arrange |
| :---- | :---- | :---- |
| [![Photo Arrangement - User Choice](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setPhotoArrangement_choose.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setPhotoArrangement_choose.png) |  [![Photo Arrangement - Automatic](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setPhotoArrangement_auto.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setPhotoArrangement_auto.png) | [![Photo Arrangement - Manual](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setPhotoArrangement_manual.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setPhotoArrangement_manual.png) |

---

## Custom Editing Help Button icon

Show custom help overlay when user is about to start editing image in Customize Product view.  No default included, setting an available image enables this feature.

| Method | Parameters - Options |
| :---- | :---- |
| `showHelpDialogWithImage` | Specify image included in application |

### Code Sample

``` Objective-C
[self.printIO showHelpDialogWithImage:[[NSBundle mainBundle] pathForResource:@"touch" ofType:@"png"]];
```

---

## Set Add Photos Button Icon

Specify an image file to use as the Add Photos button in the Customize Product view

| Method | Parameters - Options |
| :---- | :---- |
| `setIconForAddPhotosButton` | Specify image file in application |

### Code Sample

``` Objective-C
[self.printIO setIconForAddPhotosButton:[[NSBundle mainBundle]pathForResource:@"mg_add_photos" ofType:@"png"]];
```

### Screenshots

| Default | Custom Button |
| :---- | :---- |
| [![Default Add Photo button](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/iconForAddPhotosButton_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/iconForAddPhotosButton_default.png) | [![Custom Add Photo button](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/iconForAddPhotosButton_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/iconForAddPhotosButton_custom.png) |

---

## Toolbar Visible

Set visibility of toolbar in customize product view.  Default is YES, and which editing tools are shown is also configurable using the PIO_BUTTON_IMAGE_EDITOR settings

| Method | Parameters - Options |
| :---- | :---- |
| `showToolbarInCustomizeProduct` | YES, NO |
| `backgroundImage` | Specify image included in application |

### Code Sample

``` Objective-C
[self.printIO showToolbarInCustomizeProduct:YES backgroundImage:nil];
```

### Screenshots

| Default | Hidden |
| :---- | :---- |
| [![Show Editing Toolbar in Customize Product View](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/showToolbarInCustomizeProduct_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/showToolbarInCustomizeProduct_yes.png) | [![Show Editing Toolbar in Customize Product View](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/showToolbarInCustomizeProduct_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/showToolbarInCustomizeProduct_no.png) |

---

## Images List Visible

Set visibility of images list in customize product view

| Method | Parameters - Options |
| :---- | :---- |
| `hideImageListInCustomizeProduct` | YES,NO |

### Code Sample

``` Objective-C
[self.printIO hideImagesListInCustomizeProduct:NO];
```

### Screenshots

| Default | Hidden |
| :---- | :---- |
| [![Show Images List in Customize Products](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/hideImageListInCustomizeProduct_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/hideImageListInCustomizeProduct_no.png) | [![Hide Images List in Customize Products](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/hideImageListInCustomizeProduct_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/hideImageListInCustomizeProduct_yes.png) |

---

## Cart Icon and Badging

Change shopping cart icon and indicate whether to badge with number of products

| Method | Parameters - Options |
| :---- | :---- |
| `setIconForShoppingCart` | Path to image file |
| `withNumberOfProducts` | Set to YES if image has red circle for number of items in cart |
| `labelPosition` | Position of label with number of products in cart |
| `circleColor` | Color of label background (circle background) |
| `textColor` | Text color of label with number of products in cart |

### Code Sample

``` Objective-C
[self.printIO setIconForShoppingCart:[[NSBundle mainBundle]pathForResource:@"mg_cart_new" ofType:@"png"]
                 withNumberOfProducts:YES
                        labelPosition:CGPointZero
                        circleColor: [UIColor redColor]
                        textColor:[UIColor whiteColor]];
```

### Screenshots

| Default | Custom Icon |
| :---- | :---- |
| [![Default Shopping Cart Icon](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/iconForShoppingCart_default-badged.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/iconForShoppingCart_default-badged.png) | [![Custom Shopping Cart Icon](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/iconForShoppingCart_custom-badged.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/iconForShoppingCart_custom-badged.png) |

---

## Set Logo Icon

Change prtner's logo icon which is used on cart and confirmation screens. File name of logo image, without file type extension. Image file needs to be stored in main bundle

| Method | Parameters - Options |
| :---- | :---- |
| `setLogoFileName` | Specify file name of image, without extension |

### Code Sample

``` Objective-C
[self.printIO setLogoFileName:@"icon1"];
```

### Screenshots

| Default | Custom |
| :---- | :---- |
| [![Default Logo](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/changeLogo_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/changeLogo_no.png) | [![Custom Logo](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/changeLogo_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/changeLogo_yes.png) |

---

## Remove Logo from Checkout

Hide logo when user is in checkout flow

| Method | Parameters - Options |
| :---- | :---- |
| `removeLogoFromPaymentScreen` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO removeLogoFromPaymentScreen:YES];
```

### Screenshots

| Default | Hidden |
| :---- | :---- |
| [![Show Logo in Checkout](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/removeLogoFromPaymentScreen_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/removeLogoFromPaymentScreen_no.png) | [![Remove Logo from Checkout](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/removeLogoFromPaymentScreen_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/removeLogoFromPaymentScreen_yes.png) |

--

## Set Partner/Payee Name

It is encouraged that you set a partner name to override the default.  This will appear at the top of the About and How it Works views, as well as on the checkout and Paypal screens.

| Parameter/Method | Options - Details |
| :---- | :---- |
| `setPayeeName` | Text string |

### Code Sample

``` Objective-C
[self.printIO setPayeeName:@"Partner Name"];
```
---

## Set "About" Text

Allows you to customize the text content of the About page to fit your application's brand and voice

| Parameter/Method | Options - Details |
| :---- | :---- |
| `setAboutText` | Text string, can use `\n` to include line breaks |

### Code Sample

``` Objective-C
[self.printIO setAboutText:@
        "Our Mission is to foster creative individuality and bring on-demand printed products to people all over the world. We hope to surround people with their favorite memories and brands, to remind them of the better things in life, improving the world one creation at a time.\n\n"
        "We have an unwavering commitment to quality and customer satisfaction. If you\'re not happy, we\'re not happy. That\'s why we go the extra mile to insure that we carry the highest quality products, printed by the best printers, at the best possible prices.\n\n"
        "We have print facilities all over the world, so whether you\'re in the USA, India, or Laos, we can ship to you! Since inception, we\'ve shipped to over 100 countries."
    ];
```

---

## Set "How it Works" Text

Allows you to customize the text content of the How it Works page to fit your application's brand and voice

| Parameter/Method | Options - Details |
| :---- | :---- |
| `setHowItWorksText` | Text string, can use `\n` to include line breaks |

### Code Sample

``` Objective-C
[self.printIO setHowItWorksText:@
        "1. Browse through our selection of products and choose the item or items you would like to purchase. We carry the highest quality products, printed by the best printers, at the best possible prices.\n\n"
        "2. Customize your item. Choose the size, shape, layout and product options you like best.\n\n"
        "3. Upload your images, or designs. Import from your phone, Instagram, Facebook, Flickr, Picasa, or Dropbox.\n\n"
        "4. Ship to any country in the world! Specify your location and choose shipping method. We\'ve shipped to over 100 countries and counting.\n\n"
        "5. Pay using PayPal or the credit card of your choice. Our custom credit card imaging system makes it easier than ever to pay! All of your credit card info is automatically entered with one simple photo.\n\n"
        "6. Enjoy! We place the utmost importance on quality and customer satisfaction. We know you\'ll love the products! Enjoy."
    ];
```

---

## Configure Add More Products button

Remove plus sign from 'Add More Products' button

| Method | Parameters - Options |
| :---- | :---- |
| `removePlusFromAddMoreProductsButton` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO removePlusFromAddMoreProductsButton:YES];
```

### Screenshots

| Default | Hidden |
| :---- | :---- |
| [![Include Plus on Add More Products Button](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/removePlusFromAddMoreProductsButton_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/removePlusFromAddMoreProductsButton_no.png) | [![Remove Plus from Add More Products Button](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/removePlusFromAddMoreProductsButton_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/removePlusFromAddMoreProductsButton_yes.png) |

---

## Configure Photo Sources

Required step to configure which photo sources you would like to offer within your application.  The order in which you include the photo sources will determine the order in which they are displayed for both the side menu and select photo sources step within the Customize Product view.  The iOS Camera Roll is not displayed in the side menu.

| Method | Parameters - Options |
| :---- | :---- |
| `setAvailablePhotoSources` | Include one or more PIO_SM_PHOTOSOURCES |
| `PIO_SM_PHONE` | include the iOS Camera Roll |
| `PIO_SM_INSTAGRAM` | include Instagram |
| `PIO_SM_FACEBOOK` | include Facebook |
| `PIO_SM_PICASA` | include Picasa |
| `PIO_SM_FLICKR` | include Flickr |
| `PIO_SM_DROPBOX` | include Dropbox |
| `PIO_SM_PHOTOBUCKET`| include Photobucket |

### Code Sample

``` Objective-C
NSMutableArray *photoSources = [[NSMutableArray alloc]init];  

[photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PHONE]];
[photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_INSTAGRAM]];
[photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_FACEBOOK]];
[photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PICASA]];
[photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_FLICKR]];
[photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_DROPBOX]];
[photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PHOTOBUCKET]];  

[self.printIO setAvailablePhotoSources:photoSources];
```

### Screenshots

#### Side Menu Photo Sources

| Include All | Change Order | Include Some |
| :---- | :---- | :---- |
| [![Side Menu - Include All Sources](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/availablePhotoSources_side-menu_include-all.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/availablePhotoSources_side-menu_include-all.png) | [![Side Menu - Change Source  Order](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/availablePhotoSources_side-menu_change-order.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/availablePhotoSources_side-menu_change-order.png) | [![Side Menu - Include Select Sources ](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/availablePhotoSources_side-menu_include-fewer.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/availablePhotoSources_side-menu_include-fewer.png) |

_Note: The iOS Camera Roll will not be displayed in this view_

#### Customize Product Photo Sources

| Include All | Change Order | Include Some |
| :---- | :---- | :---- |
| [![Customize Product - Include All Sources](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/availablePhotoSources_customize-product_include-all.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/availablePhotoSources_customize-product_include-all.png) | [![Customize Product - Change Source Order](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/availablePhotoSources_customize-product_change-order.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/availablePhotoSources_customize-product_change-order.png) | [![Customize Product - Include Select Sources](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/availablePhotoSources_customize-product_include-fewer.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/availablePhotoSources_customize-product_include-fewer.png) |

_Note: Only 6 photo sources can be displayed in this view, including the iOS Camera Roll_

---

## Pass photo to SDK

It is possible to pass one or more photos directly into the application.  This is helpful when you would like to sell a prints from specific asset or group of assets.

| Method | Parameters - Options |
| :---- | :---- |
| `setImages` | Specify image or photo url in application |

### Code Sample

``` Objective-C
UIImage *image1 = [UIImage imageNamed:@"dream.jpg"];
UIImage *image2 = [UIImage imageNamed:@"thunder.jpg"];
NSString *image3 = @"http://cdn.print.io/site-assets/HomepageHeroBg2.jpg";

NSArray *images = [NSArray arrayWithObjects:image1, image2, image3, @"http://cdn.print.io/site-assets/HomepageProductsBg.jpg", nil];
[self.printIO setImages:images];
```

---

## Photo Source Visibility - Passing any

When passing one or more photos to the SDK, you can disable photo sources so that the user may only select from the images you've provided.  The result of this setting is that photo sources will not be available in the side menu and the photo source step will be skipped in the customize product view.

| Method | Parameters - Options |
| :---- | :---- |
| `disablePhotoSourcesWhenImagesArePassedIn` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO disablePhotoSourcesWhenImagesArePassedIn:NO];
```

---

## Photo Source Visibility - Passing for Single Photo Template

When passing a photo to the SDK, you can disable the photo source step within the customize product view when a user selects the single photo template.

| Method | Parameters - Options |
| :---- | :---- |
| `disablePhotoSourcesForOnePhotoTemplate` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO disablePhotoSourcesForOnePhotoTemplate:YES];
```

---

## Set Passed Image as Thumbnail

Set the passed image as the thumbnail for the single photo template on the customize product view.  This is currently supported for Canvas Wraps and Framed Prints

| Method | Parameters - Options |
| :---- | :---- |
| `setPassedImageAsThumbForOnePhotoTemplate` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setPassedImageAsThumbForOnePhotoTemplate:YES];
```

### Screenshots

| Passed Photo | Photo as Thumb |
| :---- | :---- |
| ![Passed Photo](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/passed_photo.jpg) | [![Set Passed Image as Thumb for Single Photo Template](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setPassedImageAsThumbForOnePhotoTemplate.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setPassedImageAsThumbForOnePhotoTemplate.png) |

---

## Side Menu Controls

To enable the side menu, simply include the default method below and pass `nil` for the configuration options.  To customize the side menu icon, pass an image to the method.  To set the background color, just pass a color value to the method.  If `nil` for either, a default will be used instead.  This step is required to configure following side menu options.

| Method | Parameters - Options |
| :---- | :---- |
| `useSideMenuWithMenuIcon` | `nil`, specify image in application for menu icon |
| `background` | `nil`, specify color for side menu background |

### Code Sample

``` Objective-C
// Enable default side menu with no customization
[self.printIO useSideMenuWithMenuIcon:nil background:nil];

// Enable custom side menu with specific menu icon and background color
[self.printIO useSideMenuWithMenuIcon:[[NSBundle mainBundle]pathForResource:@"pb_menu" ofType:@"png"] background:[UIColor colorWithRed:26.0/255.0 green:188.0/255.0 blue:156.0/255.0 alpha:255.0/255.0]];
```

### Screenshots

| Default | Custom Icon/Color |
| :---- | :---- |
| [![Default Side Menu options](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/useSideMenuWithMenuIcon_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/useSideMenuWithMenuIcon_default.png) | [![Custom Side Menu options](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/useSideMenuWithMenuIcon_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/useSideMenuWithMenuIcon_custom.png) |

---

## Configure Side Menu Buttons

Create array of buttons, which will be displayed in the upper section of the side menu.  The button display order in the application will correspond to their place in the array.

| Method | Parameters - Options |
| :---- | :---- |
| `PIO_SM_SEARCH_BAR` | include Search field |
| `PIO_SM_EXIT_BUTTON` | include Exit Application button |
| `PIO_SM_PRODUCTS` | include Products button |
| `PIO_SM_FEATURED_PRODUCTS` | include Featured Products button |
| `PIO_SM_VIEW_CART` | include Shopping Cart button |
| `PIO_SM_SHARE_WITH_IMAGE` | include Share with Image button |
| `PIO_SM_EMAIL_SUPPORT` | include Email Support button |
| `PIO_SM_HELP` | include Help button |

### Code Sample

``` Objective-C
NSArray *buttons = [NSArray arrayWithObjects:  
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_SEARCH_BAR],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_EXIT_BUTTON],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_PRODUCTS],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_FEATURED_PRODUCTS],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_SHARE_WITH_IMAGE],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_EMAIL_SUPPORT],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_HELP],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_VIEW_CART], nil];
```

### Screenshots

| Include All | Change Order | Include Some |
| :---- | :---- | :---- |
| [![Side Menu buttons - Include All](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_buttons_include-all.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_buttons_include-all.png) | [![Side Menu buttons - Change Order](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_buttons_change-order.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_buttons_change-order.png) | [![Side Menu buttons - Include Select ](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_buttons_include-fewer.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_buttons_include-fewer.png) |

---

## Configure Side Menu Options

Create array of option buttons, which will be displayed in the middle section of the side menu.  The option button display order in the application will correspond to their place in the array.  Please note that these options will be overridden if you specify a currency, country or language elsewhere in your application.

| Method | Parameters - Options |
| :---- | :---- |
| `PIO_SM_CHANGE_CURRENCY` | include Change Currency button |
| `PIO_SM_CHANGE_COUNTRY` | include Change Country button |
| `PIO_SM_CHANGE_LANGUAGE` | include Change Language button |

### Code Sample

``` Objective-C
NSArray *options = [NSArray arrayWithObjects:  
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_CURRENCY],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_COUNTRY],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_LANGUAGE]
nil];
```

### Screenshots

| Include All | Change Order | Include Some |
| :---- | :---- | :---- |
| [![Side Menu option buttons - Include All](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_options_include-all.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_options_include-all.png) | [![Side Menu option buttons - Change Order](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_options_change-order.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_options_change-order.png) | [![Side Menu option buttons - Include Select](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_options_include-fewer.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_options_include-fewer.png) |

---

## Photo Source menu items

_Please note that photo source button configuration is automatically set [based on the photo sources you include](#configure-photo-sources)_

---

## Configure Side Menu Info options

Create array of secondary info buttons, which will be displayed in the lower section of the side menu.  The info button display order in the application will correspond to their place in the array.

| Method | Parameters - Options |
| :---- | :---- |
| `PIO_SM_PRICING_CHART` | include Pricing Chart button |
| `PIO_SM_SHARE_APP` | include Share App button |
| `PIO_SM_LIKE_US_FB` | include Like Us on Facebook button |
| `PIO_SM_RATE_APP` | include Rate App button |
| `PIO_SM_ABOUT` | include About button |
| `PIO_SM_HOW_IT_WORKS` | include How it Works button |
| `PIO_SM_PAST_ORDERS` | include Past Orders button |

### Code Sample

``` Objective-C
NSArray *options = [NSArray arrayWithObjects:  
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_PRICING_CHART],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_SHARE_APP],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_LIKE_US_FB],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_RATE_APP],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_ABOUT],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_HOW_IT_WORKS],
    [[PIOSideMenuButton alloc]initWithType:PIO_SM_PAST_ORDERS], nil];
```

### Screenshots

| Include All | Change Order | Include Some |
| :---- | :---- | :---- |
| [![Side Menu info buttons - Include All](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_info_include-all.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_info_include-all.png) | [![Side Menu info buttons - Change Order](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_info_change-order.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_info_change-order.png) | [![Side Menu info buttons - Include Select](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_info_include-fewer.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_info_include-fewer.png) |

---

## Custom Share Text

Set the text to be included when a user clicks the Share this app button.  Note: This option is set outside of the side menu object.

| Method | Parameters - Options |
| :---- | :---- |
| `setShareText` | Text string, can include URL |

### Code Sample

``` Objective-C
[self.printIO setShareText:@"Check out this awesome app to print your photos with: https://itunes.apple.com/us/app/hellopics/id731593327?mt=8"];
```

### Screenshots

| Custom Share Text |
| :---- |
| [![Custom Share Text](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setShareText.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setShareText.png) |

---

## Construct Side Menu

After specifying your configuration for the different portions of the side menu, you need to build it with all of the assicated buttons, options, info items and labels.  You can also set a background image for your buttons.

| Method | Parameters - Options |
| :---- | :---- |
| `sideMenuAddButtons` |  |
| `options` | sets options section |
| `optionsTitle` | Text string for options label |
| `optionsTitleColor` | Text color for options label |
| `optionsColor` | Background color for options label |
| `accountsTitle` | Text string for accounts label |
| `accountsTitleColor` | Text color for accounts label |
| `accountsColor` | Background color for accounts label |
| `info` | sets info section |
| `infoTitle` | Text string for info label |
| `infoTitleColor` | Text color for info label |
| `infoColor` | Background color for info label |
| `backgroundImageForButtons` | Specify image in your application for button background |


### Code Sample

``` Objective-C
[self.printIO sideMenuAddButtons:buttons
                         options:options
                    optionsTitle:@"Options"
               optionsTitleColor:[UIColor whiteColor]
                    optionsColor:[UIColor colorWithRed:34.0/255.0 green:160.0/255.0 blue:221.0/255.0 alpha:255.0/255.0]
                   accountsTitle:@"Accounts"
              accountsTitleColor:[UIColor whiteColor]
                   accountsColor:[UIColor colorWithRed:26.0/255.0 green:188.0/255.0 blue:156.0/255.0 alpha:255.0/255.0]
                            info:infos
                       infoTitle:@"Info"
                  infoTitleColor:[UIColor whiteColor]
                       infoColor:[UIColor colorWithRed:100.0/255.0 green:106.0/255.0 blue:166.0/255.0 alpha:255.0/255.0]
       backgroundImageForButtons:nil];
```

### Screenshots

| Default | Custom |
| :---- | :---- |
| [![Default build of Side Menu](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_built_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_built_default.png) | [![Custom build of Side Menu](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/side-menu_built_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/side-menu_built_custom.png) |

---

## Specify Font Size for Side Menu Button Text

You can specify the font size of the text on the side menu buttons.

| Method | Parameters - Options |
| :---- | :---- |
| `fontSizeOfTitle` | Font size, in points |

### Code Sample

``` Objective-C
PIOSSideMenuButton *btnFb = [[PIOSideMenuButton alloc]initWithType:PIO_SM_FACEBOOK];
btnFb.fontSizeOfTitle = 11.0;
```

---

## Specify Terms & Conditions location

Enable the terms and conditions link form control on the payment page and specify the URL to be loaded (in Safari).  By default, the terms and conditions are not shown.

| Method | Parameters - Options |
| :---- | :---- |
| `setTermsAndConditionsURL` | Text string containing URL |

### Code Sample

``` Objective-C
[self.printIO setTermsAndConditionsURL:[NSURL URLWithString:@"http://www.wikihow.com/images/sampledocs/9/Terms-and-Conditions.txt"]];
```

### Screenshots

| Default | T&C Visible |
| :---- | :---- |
| [![Custom Terms & Conditions control](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/termsAndConditionsURL_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/termsAndConditionsURL_no.png) | [![Custom Terms & Conditions control](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/termsAndConditionsURL_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/termsAndConditionsURL_yes.png) |

---

## Set Help Icon on Customization Screen

Specify an image file to use as the help icon in customize product view. Default value is YES

| Method | Parameters - Options |
| :---- | :---- |
| `setIconForHelpButtonInCustomizeProduct` | Specify image file in application |
| `visible` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setIconForHelpButtonInCustomizeProduct:[[NSBundle mainBundle]pathForResource:@"mg_icon_question_mark" ofType:@"png"]];
```

### Screenshots

| Default | Custom Icon |
| :---- | :---- |
| [![Default Help button](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/iconForHelpButtonInCustomizeProduct_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/iconForHelpButtonInCustomizeProduct_default.png) | [![Custom Help button](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/iconForHelpButtonInCustomizeProduct_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/iconForHelpButtonInCustomizeProduct_custom.png) |

---

## Change Icon for Help Button
Specify an image file to use as the help icon throughout the app

| Method | Parameters - Options |
| :---- | :---- |
| `setIconForHelpButton` | Specify image file in application |

### Code Sample

``` Objective-C
[self.printIO setIconForHelpButton:[[NSBundle mainBundle]pathForResource:@"mg_icon_question_mark" ofType:@"png"]];
```

### Screenshots

_Coming Soon_

---

## Upload Instructions icon visible

Hide icon for Upload Instructions text in Photo Sources screen. Default value is NO.

| Method | Parameters - Options |
| :---- | :---- |
| `hideIconForUploadInstructions` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO hideIconForUploadInstructions:YES];
```

### Screenshots

| Default | Visible |
| :---- | :---- |
| [![Show icon for upload instructions](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/hideIconForUplaodInstructions_no.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/hideIconForUplaodInstructions_no.png) | [![Hide icon for upload instructions](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/hideIconForUplaodInstructions_yes.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/hideIconForUplaodInstructions_yes.png) |

---

## Customize Help Balloon

Customize the help balloon on the Customize Product screen.

| Method | Parameters - Options |
| :---- | :---- |
| `setPopUpWithImage` | Specify image file in application |
| `text` | Text string for background |
| `textColor` | Specify color for text |

### Code Sample

``` Objective-C
[self.printIO setPopUpWithImage:[[NSBundle mainBundle]pathForResource:@"mg_double_tap_balloon" ofType:@"png"]
                           text:@"Double tap photo to edit"
                      textColor:[UIColor whiteColor]];
```

### Screenshots

| Default | Custom |
| :---- | :---- |
| [![Default Help Pop-up](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setPopUpWithImage_default.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setPopUpWithImage_default.png) | [![Custom Help Pop-up](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setPopUpWithImage_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setPopUpWithImage_custom.png) |

---

## Configure Editing buttons

Set which buttons will be visible in Image Editor toolbar, display order in app will correspond to place in array. By default, all buttons are visible.

| Method | Parameters - Options |
| :---- | :---- |
| `imageEditorShowButtons` | `PIO_BUTTON_IMAGE_EDITOR_INFO`, `PIO_BUTTON_IMAGE_EDITOR_ROTATE`, `PIO_BUTTON_IMAGE_EDITOR_EDIT_TEXT`, `PIO_BUTTON_IMAGE_EDITOR_EFFECTS` |

### Code Sample

``` Objective-C
NSArray *editButtons = [NSArray arrayWithObjects:  
    [[PIOButton alloc]initWithType:PIO_BUTTON_IMAGE_EDITOR_INFO],
    [[PIOButton alloc]initWithType:PIO_BUTTON_IMAGE_EDITOR_ROTATE],
    [[PIOButton alloc]initWithType:PIO_BUTTON_IMAGE_EDITOR_EDIT_TEXT],
    [[PIOButton alloc]initWithType:PIO_BUTTON_IMAGE_EDITOR_EFFECTS], nil];
[self.printIO imageEditorShowButtons:editButtons];
```

### Screenshots

| Include All | Change Order | Include Some |
| :---- | :---- | :---- |
| [![Editing buttons - Include All](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/imageEditorShowButtons_include-all.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/imageEditorShowButtons_include-all.png) | [![Editing buttons - Change Order](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/imageEditorShowButtons_change-order.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/imageEditorShowButtons_change-order.png) | [![Editing buttons - Show Select](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/imageEditorShowButtons_include-fewer.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/imageEditorShowButtons_include-fewer.png) |

---

## Set PayPal Credentials

Set PayPal's client ids, for both modes, staging and production. Default values are client ids from PrintIO.

| Method | Parameters - Options |
| :---- | :---- |
| `setPayPalStagingClientID` | (String value) staging clientID provided by PayPal |
| `productionClientID` | (String value) production clientID provided by PayPal |

### Code Sample

``` Objective-C
[self.printIO setPayPalStagingClientId:@"" productionClientId:@""];
```

---

## Set Braintree Credentials

Set Braintree encryption key for staging and production mode. By default, keys from Print.IO will be used.

| Method | Parameters - Options |
| :---- | :---- |
| `setBraintreeStagingEncryptionKey` | (String value) staging encryption key provided by Braintree |
| `productionEncryptionKey` | (String value) production encryption key provided by Braintree |

### Code Sample

``` Objective-C
[self.printIO setBraintreeStagingEncryptionKey:@"" productionEncryptionKey:@""];
```

---

## Starting SDK Widget

Set opening transition direction when entering the Print.IO SDK.  Your options are to have it slide up from the bottom, or in from the right side.

| Method | Parameters - Options |
| :---- | :---- |
| `openWithOption` | `PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT`, `PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT`, `PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM`, `PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART`, `PRINTIO_ENABLE_BACK_BUTTON` |

### Code Sample

``` Objective-C
[self.printIO openWithOption:PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT | PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART];
```

---

## Enable Facebook Share Deal

Offer your users a special deal if they share your application on Facebook!  Just include this method with a value of "YES" to enable it.

| Method | Parameters - Options |
| :---- | :---- |
| `enableShareOnFacebookDeal` | YES |

### Code Sample

``` Objective-C
[self.printIO enableShareOnFacebookDeal:YES];
```

---

## Open Print.IO

Open Print.IO with configured options (required). Open widget by presenting view from bottom

| Method | Parameters - Options |
| :---- | :---- |
| `open` | N/A |

### Code Sample

``` Objective-C
[self.printIO open];
```

---


## Like on Facebook URL

| Method | Parameters - Options |
| :---- | :---- |
| `setLikeUsOnFacebookUrl` | Text string for Facebook URL |

### Code Sample

``` Objective-C
[self.printIO setLikeUsOnFacebookUrl:@"fb://page/642169949144369"];
```

---

## Apple Store App ID

Set the ID for your application in the App Store so that your users can submit ratings

| Method | Parameters - Options |
| :---- | :---- |
| `setAppIDFromAppleStore` | Text string for numeric application ID |

### Code Sample

``` Objective-C
[self.printIO setAppIDFromAppleStore:@"731593327"];
```

---

## Hide Side Menu Headers

You can hide some or all of the headers for the side menu sections.  The default for all is NO.

| Method | Parameters - Options |
| :---- | :---- |
| `sideMenuHideOptionsHeader` | YES, NO |
| `sideMenuHideAccountsHeader` | YES, NO |
| `sideMenuHideInfoHeader` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO sideMenuHideOptionsHeader:YES];
[self.printIO sideMenuHideAccountsHeader:YES];
[self.printIO sideMenuHideInfoHeader:YES];
```

### Screenshots

| Default | Custom |
| :---- | :---- |
| ![Test Test]() | [![Custom Help Pop-up](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/sm/setPopUpWithImage_custom.png)](https://raw.githubusercontent.com/printdotio/printio-ios-sdk/gh-pages/images/setPopUpWithImage_custom.png) |

---

## Show Localization Options as a Vertical List

Instead of displaying localization options horizonally, you can instead choose to stack them in a vertical list.  The default is NO.

| Method | Parameters - Options |
| :---- | :---- |
| `sideMenuShowOptionsAsList` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO sideMenuShowOptionsAsList:YES];
```

### Screenshots

_Coming Soon_

---

## Save to Shopping Cart Button
Set colors scheme for navigation bar with "Save to" shopping cart button.

| Method | Parameters - Options |
| :---- | :---- |
| `setNavigationBarSaveToCartBackgroundColor` | Navigation bar background color |
| `titleColor` | Navigation bar title color |
| `buttonBackgroundColor ` | Button's background color |
| `buttonTitleColor` | Button's title color |

### Code Sample

``` Objective-C
[self.printIO setNavigationBarSaveToCartBackgroundColor:nil
                                              titleColor:[UIColor whiteColor]
                                   buttonBackgroundColor:nil
                                        buttonTitleColor:[UIColor whiteColor]];
```

### Screenshots

_Coming Soon_

---

## Featured Products Background Image

Allows you to specify a background image for the Featured Products view

| Method | Parameters - Options |
| :---- | :---- |
| `setFeaturedProductsBackgroungImage` | Specify image file in application |

### Code Sample

``` Objective-C
[self.printIO setFeaturedProductsBackgroungImage:[[NSBundle mainBundle]pathForResource:@"someBackgroundImage" ofType:@"png"]];
```

### Screenshots

_Coming Soon_

---

## Set Help Balloon Visibility Duration

Customize the how many seconds the editing help balloon is visible for in the customize product view.  The default time is 10 seconds and `-1` means it will always be visible.

| Method | Parameters - Options |
| :---- | :---- |
| `setDoubleTapBalloonVisibilityTime` | Number of seconds to show, `-1` shows permanently |

### Code Sample

``` Objective-C
[self.printIO setDoubleTapBalloonVisibilityTime:4];
```

---

## Show Plus Sign on Add Shipping Address Button

Allows you to set whether to prepend a plus sign before the "Add Shipping Address" button on the Shipping Address management screen

| Method | Parameters - Options |
| :---- | :---- |
| `showPlusSignOnAddButton` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO showPlusSignOnAddButton:YES];
```

### Screenshots

_Coming Soon_

---

## Shopping Cart Title

Customize the title for the Shopping Cart.  Default value is "Shopping Cart"

| Method | Parameters - Options |
| :---- | :---- |
| `setTitleForShoppingCart` | String |

### Code Sample

``` Objective-C
[self.printIO setTitleForShoppingCart:@"Cart"];
```

### Screenshots

_Coming Soon_

---
## Featured Products Title

Customize the title for the Featured Products screen.  Default value is "Featured Products"

| Method | Parameters - Options |
| :---- | :---- |
| `setTitleForFeaturedProductsScreen` | String |

### Code Sample

``` Objective-C
[self.printIO setTitleForFeaturedProductsScreen:@"Awesome Items"];
```

### Screenshots

_Coming Soon_

---

## Customize Add More Product Button

Change the text and icon for the "Add More Products" button.

| Method | Parameters - Options |
| :---- | :---- |
| `customizeAddMoreProductButton` | String for button text |
| `icon` | Specify image in application |

### Code Sample

``` Objective-C
[self.printIO customizeAddMoreProductButton:@"Keep Shopping"
    icon:[[NSBundle mainBundle]pathForResource:@"someIcon" ofType:@"png"]];
```

### Screenshots

_Coming Soon_

---

## Customize Back Button in Shopping Cart

Customize the icon for the back button in the Shopping Cart screen

| Method | Parameters - Options |
| :---- | :---- |
| `setIconForShoppingCartBackButton` | Specify image in application |

### Code Sample

``` Objective-C
[self.printIO setIconForShoppingCartBackButton:[[NSBundle mainBundle]pathForResource:@"someIcon" ofType:@"png"]];
```

### Screenshots

_Coming Soon_

---

## Customize Order Completed Screen

Customize the title, icon and message on the Order Completed screen.  You can also set whether the close button should exit the SDK or perform a back operation (default is exit).

| Method | Parameters - Options |
| :---- | :---- |
| `setTitleForOrderCompletedScreen` | String |
| `setIconForOrderCompletedScreen` | Specify image in application |
| `setMessageForOrderCompletedScreen` | String |
| `orderCompletedScreenCloseButtonShouldPerformBack` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setTitleForOrderCompletedScreen:@"Great Success!"];
[self.printIO setIconForOrderCompletedScreen:[[NSBundle mainBundle]pathForResource:@"someIcon" ofType:@"png"]];
[self.printIO setMessageForOrderCompletedScreen:@"Excellent, you have successfully ordered some great products! \n\n Hang on, they will be on their way soon!"];
[self.printIO orderCompletedScreenCloseButtonShouldPerformBack:YES];
```

### Screenshots

_Coming Soon_

---

## Product Detail Screen Navigation Bar Settings

Customize the title location and whether the menu button is displayed in the menu bar on the Product Detail screen.  The defaults for both are NO.

| Method | Parameters - Options |
| :---- | :---- |
| `productDetailsShowTitleBelowNavBar` | YES, NO |
| `productDetailsShowMenuBtnInNavBar` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO productDetailsShowTitleBelowNavBar:YES];
[self.printIO productDetailsShowMenuBtnInNavBar:YES];
```

### Screenshots

_Coming Soon_

---

## Set Title for Photo Sources Screen

Customize the title on the photo sources screen.

| Method | Parameters - Options |
| :---- | :---- |
| `setTitleForPhotoSourcesScreen` | String |

### Code Sample

``` Objective-C
[self.printIO setTitleForPhotoSourcesScreen:@"Select Photos"];
```

### Screenshots

_Coming Soon_

---

## Hide Photo Sources in Side Menu

Customize the title on the photo sources screen.  Default value is NO.

| Method | Parameters - Options |
| :---- | :---- |
| `hidePhotoSourcesInSideMenu` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO hidePhotoSourcesInSideMenu:YES];
```

### Screenshots

_Coming Soon_

---

## Customize Choose Country Screen

Set a title and/or the visibility of the search icon in the Choose Country Screen.

| Method | Parameters - Options |
| :---- | :---- |
| `setTitleForChooseCountryScreen` | String |
| `hideSearchIconInChooseCountryScreen` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setTitleForChooseCountryScreen:@"Where you at?"];
[self.printIO hideSearchIconInChooseCountryScreen:YES];
```

### Screenshots

_Coming Soon_

---

## Ivans new methods

## Positive Buttons
Change background color on positive buttons (Yes, Next, Ok, Save, Buy It, Create It...) 


| Method | Parameters - Options |
| :---- | :---- |
| `setPositiveButtonsBackgroundColor` | Specify color for Background |
| `titleColor` | Specify color for Title |

### Code Sample

``` Objective-C
[self.printIO setPositiveButtonsBackgroundColor:[UIColor blueColor] titleColor:[UIColor whiteColor]];
```

### Screenshots

_Coming Soon_

---
## Negative Buttons
Change background color on negative buttons (No, Back, Cancel, Close...)

| Method | Parameters - Options |
| :---- | :---- |
| `setNegativeButtonsBackgroundColor` | Specify color for Background |
| `titleColor` | Specify color for Title |

### Code Sample

``` Objective-C
[self.printIO setNegativeButtonsBackgroundColor:[UIColor redColor] titleColor:[UIColor whiteColor]];
```

### Screenshots

_Coming Soon_

---

## Customize Fonts Size throughout SDK
Change light, medium, regular and bold fonts sizes

| Method | Parameters - Options |
| :---- | :---- |
| `changeSizeOfLightFontsBy` | Increase/decrease Light font size by 'value' |
| `changeSizeOfMediumFontsBy` | Increase/decrease Medium font size by 'value' |
| `changeSizeOfRegularFontsBy` | Increase/decrease Regular font size by 'value' |
| `changeSizeOfBoldFontsBy` | Increase/decrease Bold font size by 'value' |

### Code Sample

``` Objective-C
[self.printIO changeSizeOfLightFontsBy:2.0]
[self.printIO changeSizeOfMediumFontsBy:2.0]
[self.printIO changeSizeOfRegularFontsBy:2.0]
[self.printIO changeSizeOfBoldFontsBy:2.0]
```

### Screenshots

_Coming Soon_

---
## Google Analytics
Set tracking id for Google Analytics. If tracking id is not provided, 
analytics are disabled.

| Method | Parameters - Options |
| :---- | :---- |
| `setTrackingIDForGoogleAnalytics` | Tracking ID provided by Google |

### Code Sample

``` Objective-C
[self.printIO setTrackingIDForGoogleAnalytics:@"track-id"];
```

### Screenshots

_Coming Soon_

---

## Set Logs
Turn off logs. Default value is NO

| Method | Parameters - Options |
| :---- | :---- |
| `turnOffLogs` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO turnOffLogs:YES];
```

### Screenshots

_Coming Soon_

---

## Push Notifications
Register device to receive push notifications

| Method | Parameters - Options |
| :---- | :---- |
| `registerDeviceToken` | Device token |

### Code Sample

``` Objective-C
[self.printIO registerDeviceToken:@"deviceToken"];
```

### Screenshots

_Coming Soon_

---
## ApplicationID and APIKey for Push Notifications
Set applicationId and apiKey provided from parse.com

| Method | Parameters - Options |
| :---- | :---- |
| `setParseApplicationId` | Application ID |
| `apiKey` | Rest API Key |

### Code Sample

``` Objective-C
[self.printIO setParseApplicationId:@"appId"];
[self.printIO apiKey:@"apiKey"];
```

### Screenshots

_Coming Soon_

---

## Notification Pop Up
Display notification pop up from bottom of screen. On tap it will dismiss notification.

| Method | Parameters - Options |
| :---- | :---- |
| `showNotification` | Dictionary provided from didReceiveRemoteNotification |
| `backgroundColor` | Background color for notification pop up |
| `textColor` | Text color |

### Code Sample

``` Objective-C
howNotification:(NSDictionary:@"userInfo"];
backgroundColor:[UIColor backgroundColor];
titleColor:[UIColor whiteColor];
```

### Screenshots

_Coming Soon_

---

## Hide/Show Edit button on Shopping Cart screen
User is able to Hide od Show 'Edit' button on 'Shopping Cart' screen. Default value is NO.

| Method | Parameters - Options |
| :---- | :---- |
| `hideEditButtonInShoppingCart` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO hideEditButtonInShoppingCart:YES];
```

### Screenshots

_Coming Soon_

---

## Visibility for Add More Products button on the Shopping Cart screen
Button visibility flag. Default is YES.

| Method | Parameters - Options |
| :---- | :---- |
| `showsAddButton` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setShowsAddMoreProductsInShoppingCart:YES];
```

### Screenshots

_Coming Soon_

---

## Set background image on Side Menu
Change side menu background image using method:

| Method | Parameters - Options |
| :---- | :---- |
| `sideMenuBackgroungImage` | Image path |

### Code Sample

``` Objective-C
[self.printIO sideMenuBackgroungImage:@"path"];
```

### Screenshots

_Coming Soon_

---

## Parent View Controller
Init PrintIO widget with parent view controller

| Method | Parameters - Options |
| :---- | :---- |
| `initWithViewController` | Parent view controller. From this view controller, widget will open |
| `environment` | Set environment to staging or live, use `PRINTIO_STAGING` or `PRINTIO_PRODUCTION` |
| `productionRecipeId` | Production recipeId provided by PrintIO |
| `stagingRecipeId` | Staging recipeId provided by PrintIO |

### Code Sample

``` Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                              environment:isProduction ? PRINTIO_PRODUCTION : PRINTIO_STAGING
                                       productionRecipeId:@"f255af6f-9614-4fe2-aa8b-1b77b936d9d6"
                                          stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
```

### Screenshots

_Coming Soon_

---

## Loading View instead of the Loading GIF Image
Calling this method will override the gif image if it has previously been set.

| Method | Parameters - Options |
| :---- | :---- |
| `setLoadingActivityIndicatorViewStyle` | UIActivityIndicatorView's style |


### Code Sample

``` Objective-C
[self.printIO setLoadingActivityIndicatorViewStyle:@"style"];
```

### Screenshots

_Coming Soon_

---

## Loading GIF Animation Image
Changes "Loading" GIF animation image. Calling this method will override the UIActivityIndicatorViewStyle if has previously been set.


| Method | Parameters - Options |
| :---- | :---- |
| `setLoadingGIF` | GIF image file name |

### Code Sample

``` Objective-C
[self.printIO setLoadingGIF:@"mg_loader"];
```

### Screenshots

_Coming Soon_

---

## Jumps to screen
Jump directly to Shopping Cart screen.

| Method | Parameters - Options |
| :---- | :---- |
| `setJumpToScreen` | `PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART` |

### Code Sample

``` Objective-C
[self.printIO setJumpToScreen:PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART];
```

### Screenshots

_Coming Soon_

---

## Change Label's Color on Items in list on Featured Products screen
Set text color for left label and right lable on Featured Products screen.

| Method | Parameters - Options |
| :---- | :---- |
| `setFeaturedProductsLeftLabelTextColor` | `Text color for left label` |
| `rightLabelTextColor` | `Text color for right label` |

### Code Sample

``` Objective-C
[self.printIO featuredProductsLeftLabelTextColor:nil rightLabelTextColor:mgOrange];
```

### Screenshots

_Coming Soon_

---

## Set 'Save to' Icon
Change icon for 'Save to' button on Customize Product screen

| Method | Parameters - Options |
| :---- | :---- |
| `setIconForSaveButtonInCustomizeProduct` | Path to image file |

### Code Sample

``` Objective-C
[self.printIO setIconForSaveButtonInCustomizeProduct:[[NSBundle mainBundle]pathForResource:@"icon_cart_white" ofType:@"png"]];
```

### Screenshots

_Coming Soon_

---

## Highlight Color for Address Selection
Change highlight color for address selection on 'Select Address' screen

| Method | Parameters - Options |
| :---- | :---- |
| `setColorForAddressSelection` | New color. Default is light green |

### Code Sample

``` Objective-C
[self.printIO setColorForAddressSelection:mgAddressSelectionColor];
```

### Screenshots

_Coming Soon_

---

## Set Extra Data
Additional data for partners. Requered parameter is ED_PARTNERS_ID

| Method | Parameters - Options |
| :---- | :---- |
| `setExtraData` | `ED_PARTNERS_ID` |

### Code Sample

``` Objective-C
[self.printIO setExtraData:extraData];
```

### Screenshots

_Coming Soon_

---

## Set Access Token for Photobucket

| Method | Parameters - Options |
| :---- | :---- |
| `setPhotobucketAccessToken` | Valid access token for session |
| `userName` | Username |
| `baseURL` | Base url for Photobucket |

### Code Sample

``` Objective-C
NEED TO CHECK SAMPLE CODE FOR THIS METHOD
[self.printIO setPhotobucketAccessToken:(NSString *)aToken
                         userName:(NSString *)username
                          baseURL:(NSString *)baseUrl];
```

### Screenshots

_Coming Soon_

---

## Set Products Variants Options
NEED EXPLENATION

| Method | Parameters - Options |
| :---- | :---- |
| `setVariantsOptions` | Array of PIOVariantOption objects. Pass 'color' with Case Style option |

### Code Sample

``` Objective-C
[self.printIO setVariantsOptions:options];
```

### Screenshots

_Coming Soon_

---

## Get Number of Items in Shopping Cart
Get the number of items in the shopping cart without opening the SDK and waiting for the data from on close.

| Method | Parameters - Options |
| :---- | :---- |
| `numberOfItemsInShoppingCart` | Specify string |

### Code Sample

``` Objective-C
[self.printIO numberOfItemsInShoppingCart:number];
```

### Screenshots

_Coming Soon_

---

## Set Placeholder Text and Magnifying Glass visibility in Search bar
Change placeholder text in search bar, and set magnifying glass vissible or hidden

| Method | Parameters - Options |
| :---- | :---- |
| `setPlaceholderTextForSearchBarInChooseCountryScreen` | Placeholder text |
| `hideMagnifyingGlass` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setPlaceholderTextForSearchBarInChooseCountryScreen:text
                                        hideMagnifyingGlass:YES];
```

### Screenshots

_Coming Soon_

---

## Set Access Token for Facebook

| Method | Parameters - Options |
| :---- | :---- |
| `setFacebookAccessToken` | Valid access token for session |

### Code Sample

``` Objective-C
[self.printIO setFacebookAccessToken:aToken];
```

### Screenshots

_Coming Soon_

---

## Disable Preview screen for Item
Disable Preview screen for products on Shopping Cart screen. Default value is NO.

| Method | Parameters - Options |
| :---- | :---- |
| `disablePreviewScreen` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO disablePreviewScreen:NO];
```

### Screenshots

_Coming Soon_

---

##  Auto Selects One Photo Template for Selected ProductID

| Method | Parameters - Options |
| :---- | :---- |
| `autoSelectOnePhotoTemplateForProductID` | productID of selected product |

### Code Sample

``` Objective-C
[self.printIO autoSelectOnePhotoTemplateForProductID:productID];
```

### Screenshots

_Coming Soon_

---

## Init PrintIO Widget
To get view controller, use '[self.printIO viewController]'

| Method | Parameters - Options |
| :---- | :---- |
| `initWithEnvironment` | Set environment to staging or live, use PRINTIO_STAGING or PRINTIO_PRODUCTION |
| `productionRecipeId` | Production recipeId provided by PrintIO |
| `stagingRecipeId` | Staging recipeId provided by PrintIO |

### Code Sample

CHECK THIS SAMPLE CODE

``` Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:(id)viewController
                 environment:(int)type
          productionRecipeId:(NSString *)pRecipeId
             stagingRecipeId:(NSString *)sRecipeId];
```

### Screenshots

_Coming Soon_

---

## Returns PrintIO view controller
Set all options before calling this method.

| Method | Parameters - Options |
| :---- | :---- |
| `viewController` |  |

### Code Sample

CHECK THIS SAMPLE CODE

``` Objective-C
[self.printIO viewController:SET];
```

### Screenshots

_Coming Soon_

---

## Set Default Photo Source
When user enters 'Select Photos' screen, selected photo source will be opened by default.
If an album id is passed in, if exist, that album will be opened.

| Method | Parameters - Options |
| :---- | :---- |
| `setDefaultPhotoSource` | Photo source |
| `albumId` | Album id (Currently works only for PIO_PS_PHOTOBUCKET photo source) |

### Code Sample

``` Objective-C
[self.printIO setDefaultPhotoSource:pSource
                      albumId:albumId];
```

### Screenshots

_Coming Soon_

---

## Set Promo Code to Get Discount
Add Promo code to get discount for products on Shopping cart screen.

| Method | Parameters - Options |
| :---- | :---- |
| `setPromoCode` | Promo code |

### Code Sample

``` Objective-C
[self.printIO setPromoCode:promoCode];
```

### Screenshots

_Coming Soon_

---

## Set Same Photo on Front and Back Side of Product
Currently it only supports PRODUCT_THROW_PILLOWS.

| Method | Parameters - Options |
| :---- | :---- |
| `setSamePhotoOnFrontAndBackSideOfProduct` | Product id |

### Code Sample

``` Objective-C
[self.printIO setSamePhotoOnFrontAndBackSideOfProduct:productId];
```

### Screenshots

_Coming Soon_

---

## Present Widget from View Controller with Option

| Method | Parameters - Options |
| :---- | :---- |
| `presentFromViewController` | Product id |
| `withOption` | Set the options `PRINTIO_OPTION_PRESENT_VIEW_FROM_LEFT`, `PRINTIO_OPTION_PRESENT_VIEW_FROM_RIGHT`, `PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM`, `PRINTIO_JUMP_TO_SCREEN_SHOPPING_CART`, `PRINTIO_ENABLE_BACK_BUTTON` |

### Code Sample

CHECK THIS SAMPLE CODE

``` Objective-C
[self.printIO presentFromViewController:(UIViewController *)viewController
                       withOption:(int)option];
```

### Screenshots

_Coming Soon_

---

## Disable Auto Recognition and Selection of iPhone model
Disable auto recognition and selection of iPhone model on Choose Options screen. Default value is NO.

| Method | Parameters - Options |
| :---- | :---- |
| `disableAutoRecognizePhoneModel` | YES, NO |

### Code Sample

CHECK THIS SAMPLE CODE

``` Objective-C
[self.printIO disableAutoRecognizePhoneModel:YES];
```

### Screenshots

![enter image description here][]

---

## Jumps Directly to Product

| Method | Parameters - Options |
| :---- | :---- |
| `goToProductId` | Product identifier can be found in ProductIds.h and starts with PRODUCT_ |

### Code Sample

``` Objective-C
[self.printIO goToProductId:productId];
```

### Screenshots

_Coming Soon_

---

## Jumps Directly to Product with SKU

| Method | Parameters - Options |
| :---- | :---- |
| `goToProductId` | Product identifier can be found in ProductIds.h and starts with PRODUCT_ |
| `withSKU` | SKU for selected product |

### Code Sample

``` Objective-C
[self.printIO goToProductId:productId withSKU:sku];
```

### Screenshots

_Coming Soon_

---

## Change Title for 'Customization Options' screen
Allows you to customize the text content of the Customization Option page to fit your application's brand

| Method | Parameters - Options |
| :---- | :---- |
| `setTitleForChooseOptionsScreen` | Text String |

### Code Sample

``` Objective-C
[self.printIO setTitleForChooseOptionsScreen:@"CHOOSE OPTIONS"];
```

### Screenshots

_Coming Soon_

---

## Set Navigation Bar on Choose Country screen 
Change the color of navigation bar in 'Choose Country' screen

| Method | Parameters - Options |
| :---- | :---- |
| `setNavigationBarBackgroundColorForChooseCountryScreen` | Color to set |

### Code Sample

``` Objective-C
[self.printIO setNavigationBarBackgroundColorForChooseCountryScreen:color];
```

### Screenshots

_Coming Soon_

---

## Close Widget

| Method | Parameters - Options |
| :---- | :---- |
| `close` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO close:YES];
```

### Screenshots

_Coming Soon_

---

## Set Passed in Image To Be First in Row
Allows you to add image to be first in row for all photo sources.

| Method | Parameters - Options |
| :---- | :---- |
| `setPassedImageFirstInPhotoSources` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO setPassedImageFirstInPhotoSources:YES];
```

### Screenshots

_Coming Soon_

---

## Set Instagram Credentials
By default, PrintIO credentials are used.

| Method | Parameters - Options |
| :---- | :---- |
| `setInstagramClientID` |  | NEED PARAMETERS
| `redirectUrl` |  | NEED PARAMETERS

### Code Sample

``` Objective-C
[self.printIO setInstagramClientID:clientId
                 redirectUrl:redirectUrl];
```

### Screenshots

_Coming Soon_

---

## Set Access Token for Instagram

| Method | Parameters - Options |
| :---- | :---- |
| `setInstagramAccessToken` | Valid access token for session |

### Code Sample

``` Objective-C
[self.printIO setInstagramAccessToken:accessToken];
```

### Screenshots

_Coming Soon_

---

## Set Flickr Credentials
By default, PrintIO credentials are used.

| Method | Parameters - Options |
| :---- | :---- |
| `setFlickrKey` |  | NEED PARAMETERS
| `secretKey` |  | NEED PARAMETERS
| `redirectUrl` |  | NEED PARAMETERS

### Code Sample

``` Objective-C
[self.printIO setFlickrKey:key
           secretKey:secretKey
         redirectUrl:redirectUrl];
```

### Screenshots

_Coming Soon_

---

## Set Dropbox Credenials
By default, PrintIO credentials are used.

| Method | Parameters - Options |
| :---- | :---- |
| `setDropboxKey` |  | NEED PARAMETERS
| `redirectUrl` |  | NEED PARAMETERS

### Code Sample

``` Objective-C
[self.printIO setDropboxKey:key
          redirectUrl:redirectUrl];
```

### Screenshots

_Coming Soon_

---

## Set Facebook Credentials
By default, PrintIO credentials are used.

| Method | Parameters - Options |
| :---- | :---- |
| `setFacebookAppId` |  | NEED PARAMETERS
| `redirectUrl` |  | NEED PARAMETERS

### Code Sample

``` Objective-C
[self.printIO setFacebookAppId:appId
             redirectUrl:redirectUrl];
```

### Screenshots

_Coming Soon_

---

## Set Username and Password for Photobucket (autologin)

| Method | Parameters - Options |
| :---- | :---- |
| `setPhotobucketUsername` | Username or email for Photobucket account |
| `password` | Password |

### Code Sample

``` Objective-C
[self.printIO setPhotobucketUsername:userName
                      password:password];
```

### Screenshots

_Coming Soon_

---

## Change Title of Loading Dialog
Allows you to change title of loading pop up.

| Method | Parameters - Options |
| :---- | :---- |
| `setLoadingText` | New title for loading dialog |

### Code Sample

``` Objective-C
[self.printIO setLoadingText:lText];
```

### Screenshots

_Coming Soon_

---

##  Open Widget
Presenting view from bottom.

| Method | Parameters - Options |
| :---- | :---- |
| `open` | Set the options |

### Code Sample

``` Objective-C
[self.printIO open:PRINTIO_OPTION_PRESENT_VIEW_FROM_BOTTOM];
```

### Screenshots

_Coming Soon_

---

## Close Widget
This method is used for closing application.

| Method | Parameters - Options |
| :---- | :---- |
| `close` | YES, NO |

### Code Sample

``` Objective-C
[self.printIO close:YES];
```

### Screenshots

_Coming Soon_

---

## Show Country Selection
By default, country selection is always shown on Featured/All products

| Method | Parameters - Options |
| :---- | :---- |
| `showCountrySelectionOnScreen` |  `PIO_SCREEN_FEATURED_PRODUCTS`, `PIO_SCREEN_PRODUCT_DETAILS`, `PIO_SCREEN_OPTIONS` |
| `backgroundColor` | Specify color |

### Code Sample

``` Objective-C
[self.printIO showCountrySelectionOnScreen:(PIOScreens)screen
                     backgroundColor:color];
```

### Screenshots

_Coming Soon_

---

## Set Visibility for Watch Video Button
Hide/Show 'Watch Video' button on Customize Product screen. Default value is NO

| Method | Parameters - Options |
| :---- | :---- |
| `hideWatchVideoButton` |  YES, NO |

### Code Sample

``` Objective-C
[self.printIO hideWatchVideoButton:NO];
```

### Screenshots

_Coming Soon_

---

## Set Background Image on Navigation Bar

| Method | Parameters - Options |
| :---- | :---- |
| `setNavigationBarBackground` |  Path to image file |

### Code Sample

``` Objective-C
[self.printIO setNavigationBarBackground[[NSBundle mainBundle]pathForResource:@"navbariphone" ofType:@"png"]];
```

### Screenshots

| Normal Navigation Bar | Custom Navigation Bar |
| :---- | :---- |
| ![enter image description here][5] | ![enter image description here][3] |

---

## Set Navigation Bar Background Image on 'Customize Product' screen

| Method | Parameters - Options |
| :---- | :---- |
| `setNavigationBarBackgroundForCustomizeProduct` |  Path to image file |

### Code Sample

``` Objective-C
[self.printIO setNavigationBarBackgroundForCustomizeProduct:[[NSBundle mainBundle]pathForResource:@"navbariphone1" ofType:@"png"]];
```

### Screenshots

| Normal Navigation Bar on Customization screen | Custom Navigation Bar on Customization screen |
| :---- | :---- |
| ![enter image description here][6] | ![enter image description here][4] |

---

## Help Text for Customize Product screen
Specify an text to use it on Customization screen

| Method | Parameters - Options |
| :---- | :---- |
| `setCustomizationHelpText` |  Text string |

### Code Sample

``` Objective-C
[self.printIO setCustomizationHelpText:text];
```

### Screenshots

_Coming Soon_

---

## Set Quality Guarantee Text
Change Quality Guarantee text on Product Details screen

| Method | Parameters - Options |
| :---- | :---- |
| `setQualityGuaranteeText` |  Text string |

### Code Sample

``` Objective-C
[self.printIO setQualityGuaranteeText:text];
```

### Screenshots

_Coming Soon_

---



  [1]: https://lh5.googleusercontent.com/-18qrMfgPFUA/U1agy25l1aI/AAAAAAAABhI/21Bg4E2MfOY/w284-h199-no/c_sta_bar.png
  [2]: https://lh3.googleusercontent.com/-dMzy5uf-6Cc/U-tz5ZxyaOI/AAAAAAAAAA0/LVXNnGjb3CU/w200-h355-no/img_options.jpg
  [3]: https://lh3.googleusercontent.com/-6rmAemSOBEY/VAh6rAlIZwI/AAAAAAAAAEE/0qWg-OxGqbw/w200-h355-no/iOS-Simulator-Screen-shot-Sep-3%2C-2014%2C-3.30.png
  [4]: https://lh5.googleusercontent.com/-8-Ton221C5c/VAh6rivMwsI/AAAAAAAAAEA/vQ__jXatViU/w200-h355-no/iOS-Simulator-Screen-shot-Sep-3%2C-2014%2C-4.23.png
  [5]: https://lh3.googleusercontent.com/-oJAAS7x9BEs/VAh6rKp2zWI/AAAAAAAAAD4/W19hHeHsRvk/w200-h355-no/IMG_211270.png
  [6]: https://lh4.googleusercontent.com/-cmZZPtiE190/VAh6q3DQYnI/AAAAAAAAAD8/K97LSv2hUwU/w200-h355-no/IMG_227111.png
 
