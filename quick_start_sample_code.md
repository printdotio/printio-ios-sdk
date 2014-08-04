# PrintIO Sample Code - Quick Start

Below is sample code for launching a customized PrintIO widget.  For reference, almost all in-code customization options are included.  

Additionally, There are some items we also allow customization of via an [XML file][8].

Be sure to follow the Project Setup guide above before attempting to use the Print.IO sample code.

``` Objective-C
- (IBAction)runPrintIO:(id)sender
{
    // UI CUSTOMIZATION
    //----------------------------------------------------------------------
    // Options to customize the UI ranging from general/overall to specific views

    // UI: General: Path to XML customization file for setting background and font colors on buttons
    NSString *xmlPath = [[NSBundle mainBundle] pathForResource:@"customization" ofType:@"xml"];
    NSData *xmlData = [NSData dataWithContentsOfFile:xmlPath];
    [self.printIO customizationXML:xmlData];

    // UI: General: Set status bar theme and display options
    [self.printIO statusBarDark:NO hidden:YES];

    // UI: General: Customize top navigation bar colors and title icon
    [self.printIO navigationBarColor:[UIColor whiteColor]
                          titleColor:[UIColor blackColor]
           leftButtonBackgroundColor:nil
          rightButtonBackgroundColor:nil
                     titleButtonIcon:[[NSBundle mainBundle] pathForResource:@"icon" ofType:@"png"] : nil];

    // UI: General: Set custom fonts (must include 4; can repeat; and order reflects Light, Medium, Regular, Bold)
    NSArray *fonts = @[@"timess.ttf", @"timess.ttf", @"aubrey.ttf", @"CaviarDreams_Bold.ttf"];
    [self.printIO customFonts:fonts];

    // UI: General: Change "loading" GIF animation
    [self.printIO setLoadingGIF:@"load"];

    // UI: General: Set currency code (overrides ability to select in app side menu)
    [self.printIO currencyCode:@"USD"];

    // UI: General: Set language code (overrides ability to select in app side menu)
    [self.printIO languageCode:@"en"];

    // UI: General: Set country code (overrides ability to select in app for both side menu and featured products view)
    [self.printIO countryCode:@"US"];

    // UI: Featured Products: Allow user to change country in featured products view
    [self.printIO selectCountryInFeaturedProducts:NO];

    // UI: Featured Products: Hide Category/Search view in Featured Products screen
    [self.printIO hideCategoriesInFeaturedProducts:NO];

    // UI: Customize Product: Photo Arrangement option
    [self.printIO setPhotoArrangement:PIO_PHOTO_ARRANGEMENT_AUTO];

    // UI: Customize Product: Show custom double tap screen when customizing product
    [self.printIO showHelpDialogWithImage:[[NSBundle mainBundle]
                          pathForResource:@"touch"
                                   ofType:@"png"]];

    // UI: Customize Product: Show/hide tab bar in Customization Screen
    [self.printIO showToolbarInCustomizeProduct:YES
                                backgroundImage:nil];

    // UI: Customize Product: Hide image list in Customize Product screen
    [self.printIO hideImagesListInCustomizeProduct:NO];

    // UI: Cart: Change Shopping cart icon and indicate whether to badge with number of products
    [self.printIO iconForShoppingCart:[[NSBundle mainBundle]pathForResource:@"pb_icon_cart_black" ofType:@"png"]
                 withNumberOfProducts:YES];

    // UI: Cart: Change Logo icon which is used on cart and confirmation screens
    [self.printIO changeLogo:@"icon1"];

    // UI: Cart: Remove plus sign from 'Add More Products' button
    [self.printIO removePlusFromAddMoreProductsButton:YES];

    // UI: Set variants options
    [self.printIO setVariantsOptions:[NSArray arrayWithArray:[self.userData allValues]]];


    // PHOTO SOURCE CUSTOMIZATION
    //----------------------------------------------------------------------
    // You can configure which Photo Sources available in your application

    // PHOTO SOURCES: Initialize photo source array (required)
    NSMutableArray *photoSources = [[NSMutableArray alloc]init];

    // PHOTO SOURCES: Include iOS Camera Roll as a photo source (recommended)
    [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PHONE]];

    // PHOTO SOURCES: Include Facebook as a photo source
    [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_FACEBOOK]];

    // PHOTO SOURCES: Include Instagram as a photo source
    [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_INSTAGRAM]];

    // PHOTO SOURCES: Include Picasa as a photo source
    [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PICASA]];

    // PHOTO SOURCES: Include Flickr as a photo source
    [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_FLICKR]];

    // PHOTO SOURCES: Include Dropbox as a photo source
    [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_DROPBOX]];

    // PHOTO SOURCES: Photobucket photo source
    [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PHOTOBUCKET]];

    // PHOTO SOURCES: Register selected photo sources with SDK (required)
    [self.printIO availablePhotoSources:photoSources];

    // PASSING PHOTOS
    //----------------------------------------------------------------------
    // You can pass a photo or photo URL directly to your application

    // PHOTO PASSING: User can pass in images or urls to the SDK
    UIImage *image1 = [UIImage imageNamed:@"dream.jpg"];
    NSArray *images = [NSArray arrayWithObjects:image1, nil];
    [self.printIO images:images];

    // PHOTO PASSING: Disable photo sources when photos are passed in directly
    [self.printIO disablePhotoSourcesWhenImagesArePassedIn:NO];

    // PHOTO PASSING: Disable photo sources when a photo is passed in for only the single photo template
    [self.printIO disablePhotoSourcesForOnePhotoTemplate:YES];

    // PHOTO PASSING: Use passed image as thumbnail for single photo template
    [self.printIO setPassedImageAsThumbForOnePhotoTemplate:YES];


    // SIDE MENU CUSTOMIZATION
    //----------------------------------------------------------------------
    // You can determine whether a side menu is present, which direction it
    // slides from, and the options present once open

    // SIDE MENU: Enable side menu and configure icon and background (required to configure following options)
    [self.printIO useSideMenuWithMenuIcon:[[NSBundle mainBundle]pathForResource:@"pb_menu" ofType:@"png"] background:nil];

    // SIDE MENU: Primary button configuration (order of inclusion determines order displayed)
    NSArray *buttons = [NSArray arrayWithObjects:
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_SEARCH_BAR],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_EXIT_BUTTON],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_PRODUCTS],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_FEATURED_PRODUCTS],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_VIEW_CART], nil];

    // SIDE MENU: Option button configuration (order of inclusion determines order displayed)
    NSArray *options = [NSArray arrayWithObjects:
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_CURRENCY],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_COUNTRY],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_LANGUAGE], nil];

    // SIDE MENU: Photo source button configuration is automatically set based on the photo sources you include

    // SIDE MENU: Secondary/Info button configuration (order of inclusion determines order displayed)
    NSArray *infos = [NSArray arrayWithObjects:
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_PRICING_CHART],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_SHARE_APP],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_LIKE_US_FB],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_RATE_APP],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_ABOUT],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_HOW_IT_WORKS],
        [[PIOSideMenuButton alloc]initWithType:PIO_SM_PAST_ORDERS], nil];

    // SIDE MENU: Custom share text for side menu button
    [self.printIO setShareText:@"Example share app text with link http://www.google.com"];

    // SIDE MENU: Initialize side menu buttons configured above and set section labels/colors
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


    // OPEN WIDGET
    //----------------------------------------------------------------------
    [self.printIO open];
};
```



[8]: https://github.com/printdotio/printio-ios-sdk/blob/master/customization.xml.md
