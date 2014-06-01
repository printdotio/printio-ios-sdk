Project Setup
-------------

**Prerequisites**

In order to follow this guide, you must have minimum the iOS 6.1 SDK and Xcode 5.x installed on your system. For the latest versions, please visit [Apple's iOS Dev Center][1].


**Build time requirements**

You must be using the latest version of Apple's LLVM compiler. You should not have a problem if you're using a fresh install of Xcode 5.x, which uses this compiler by default. However, if you are working on an older project, or you have upgraded from an older version of Xcode, make sure you're not using GCC.


**Run time requirements**

The minimum iOS version supported by the SDK is iOS 6.1. The main reasons for this choice are our use of ARC ([Automatic Reference Counting][2]) and our reliance on a number of Apple frameworks and libraries which require iOS 6.1.


Configuration
-------------

In order to use the SDK in an existing app, you must do the following: 

**1.  Add files**

Copy the PrintIO.framework and PrintIOBundle.bundle files into your project (select "Create groups for any added folders" if needed). PrintIO Framework is a universal binary for use on iOS device and simulator architectures (armv7, arm7s, arm64 and i386).

Note: you can view the contents of the .bundle files we distribute, although we do not recommend or support modifying their contents.


**2. Link against libraries**

Check your target's "Link Binary With Libraries" build phase. Make sure your app is being linked against all the following libraries:

    Accounts.framework
    Accelerate.framework
    AssetsLibrary.framework
    AdSupport.framework
    AudioToolbox.framework
    AVFoundation.framework
    CFNetwork.framework
    CoreGraphic.framework
    CoreMedia.framework
    CoreLocation.framework
    CoreVideo.framework
    CoreImage.framework
    CoreTelephony.framework
    Foundation.framework
    ImageIO.framework
    PrintIO.framework
    MessageUI.framework
    MobileCoreServices.framework
    libsqlite3.dylib
    libxml2.2.dylib
    libz.dylib
    OpenGLES.framework
    QuartzCore.framework
    Social.framework
    SystemConfiguration.framework
    Security.framework
    StoreKit.framework
    Twitter.framework
    UIKit.framework


----------


**3. Copy resources**

Make sure PrintIOBundle.bundle is included in your target's "Copy Bundle Resources" build phase.

![enter image description here][3]


----------


**4. Add linker flags**

Update your target's (or project's) build settings to include the following "Other Linker Flags:"

    “-ObjC”
    “-lstdc++”
    “-lc++”

![enter image description here][4]


----------
**5. Import headers**

Include the following line to make the SDK available to your code:

    #import <PrintIO/PrintIO.h>



Basic Usage
-----------

To launch the PrintIO widget, create and display an instance of PrintIO. You can present it modally:


    - (void)startPrintIO 
    {
        // kRecipeId is developer defined and provided by PrintIO
        PrintIO *printIO = [[PrintIO alloc]initWithViewController:vc
                 									  environment:kEnvironment
          									   productionRecipeId:pRecipeId
             									  stagingRecipeId:sRecipeId;
                                                         
        // Set Delegate
        [printIO setDelegate:self];
        
        // Start widget
        [printIO open];
    }


Optionaly, you can implement the following PrintIODelegate methods in your presenting view controller:


    - (void)PrintIOWidgetOnOpen
    {
        NSLog(@"PrintIOWidgetOnOpened");
    }
    
    - (void)PrintIOWidgetOnCloseWithData:(NSDictionary *)data
    {
        NSLog(@"Returned data: %@", data);
    }


PrintIO Quick Start
---------------------

Below is sample code for launching a customized PrintIO widget, with all option included. Be sure to follow the Project Setup guide before attempting to use the below code.


    - (IBAction)runPrintIO:(id)sender
    {
        // Navigation bar example customization
        [self.printIO navigationBarColor:[UIColor whiteColor]
                              titleColor:[UIColor blackColor]
               leftButtonBackgroundColor:nil
              rightButtonBackgroundColor:nil
                         titleButtonIcon:[[NSBundle mainBundle] pathForResource:@"icon" ofType:@"png"] : nil];
        
        // Shopping cart icon                
        [self.printIO iconForShoppingCart:[[NSBundle mainBundle]pathForResource:@"pb_icon_cart_black" ofType:@"png"]
                     withNumberOfProducts:YES];
        
        // Photo Sources
        NSMutableArray *photoSources = [[NSMutableArray alloc]init];
       
        // Phone photo source 
        [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PHONE]];
        
        // Facebook photo source
        [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_FACEBOOK]];
        
        // Instagram photo source
        [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_INSTAGRAM]];
        
        // Picasa photo source
        [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PICASA]];
    
        // Flickr photo source
        [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_FLICKR]];
        
        // Dropbox photo source
        [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_DROPBOX]];
        
        // Photobucket photo source
        [photoSources addObject:[[PIOSideMenuButton alloc]initWithType:PIO_SM_PHOTOBUCKET]];

        [self.printIO availablePhotoSources:photoSources];
        
        // User can also pass in images or urls
        UIImage *image1 = [UIImage imageNamed:@"dream.jpg"];
        NSArray *images = [NSArray arrayWithObjects:image1, nil];
        
        // Pass photos in SDK
        [self.printIO images:images];
        
        // Path to XML customization file
        NSString *xmlPath = [[NSBundle mainBundle] pathForResource:@"customization"
                                                            ofType:@"xml"];
        NSData *xmlData = [NSData dataWithContentsOfFile:xmlPath];
        [self.printIO customizationXML:xmlData];
        
        // Change Logo icon
        [self.printIO changeLogo:@"icon1"];

        // Set country code
        [self.printIO countryCode:@"US"];
        
        // Set currency code
        [self.printIO currencyCode:@"USD"];
        
        // Set language code
        [self.printIO languageCode:@"en"];

        // Set custom fonts
        NSArray *fonts = @[@"timess.ttf", @"timess.ttf",
                         @"aubrey.ttf", @"CaviarDreams_Bold.ttf"];
        [self.printIO customFonts:fonts];
        
        // Set Payee name
        [self.printIO payeeName:self.txtPayeeName.text];

        // Jumps directly to product
        [self.printIO goToProductId:PRODUCT_PHONE_CASES()];
        
        // Jump To SKU
        [self.printIO goToProductId:PRODUCT_PHONE_CASES()
                            withSKU:@"PhoneCase-BlackberryZ10-Gloss"];

        // Enable or disable Side Menu
        [self.printIO useSideMenuWithMenuIcon:[[NSBundle mainBundle]pathForResource:@"pb_menu" ofType:@"png"] background:nil];
            
        // Set options for Side Menu
        NSArray *buttons = [NSArray arrayWithObjects:
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_SEARCH_BAR],
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_EXIT_BUTTON], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_PRODUCTS], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_FEATURED_PRODUCTS], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_VIEW_CART], nil];
            
        NSArray *options = [NSArray arrayWithObjects:
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_CURRENCY], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_COUNTRY], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_CHANGE_LANGUAGE], nil];
            
        NSArray *infos = [NSArray arrayWithObjects:
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_PRICING_CHART],
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_SHARE_APP], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_LIKE_US_FB], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_RATE_APP], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_ABOUT], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_HOW_IT_WORKS], 
            [[PIOSideMenuButton alloc]initWithType:PIO_SM_PAST_ORDERS], nil];
            
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
        
        // Custom share text. Will be used form side menu button.
        [self.printIO setShareText:@"Example share app text with link http://www.google.com"];
        
        // Show custom double tap screen when customizing product
        [self.printIO showHelpDialogWithImage:[[NSBundle mainBundle] 
                              pathForResource:@"touch" 
                                       ofType:@"png"]];

        // Show/hide tab bar in Customization Screen
        [self.printIO showToolbarInCustomizeProduct:YES 
                                    backgroundImage:nil];
        
        // Hide image list in Customize Product screen
        [self.printIO hideImagesListInCustomizeProduct:NO];
        
        // Disable photo sources when photos are passed
        [self.printIO disablePhotoSourcesWhenImagesArePassedIn:NO];
        
        // Disable photo sources when photo is passed in SDK for one photo template
        [self.printIO disablePhotoSourcesForOnePhotoTemplate:YES];
        
        // Use passed image as thumbnail for one phtoo template
        [self.printIO setPassedImageAsThumbForOnePhotoTemplate:YES];
        
        // Hide Category/Search view in Featured Products screen
        [self.printIO hideCategoriesInFeaturedProducts:NO];
        
        // Status bar
        [self.printIO statusBarDark:NO hidden:YES];

        // Set country in featured products
        [self.printIO selectCountryInFeaturedProducts:NO];

        // Change loading GIF animation
        [self.printIO setLoadingGIF:@"load"];
        
        // Photo Arrangement option
        [self.printIO setPhotoArrangement:PIO_PHOTO_ARRANGEMENT_AUTO];
        
        // Customize 'Add More Products' button
        [self.printIO removePlusFromAddMoreProductsButton:YES];
        
        // Set variants options
        [self.printIO setVariantsOptions:[NSArray arrayWithArray:[self.userData allValues]]];

        // Open widget
        [self.printIO open];

Push notifications
------------------

PrintIO SDK offers you ability to receive push notifications in you app. More can be found in [Push Notifications][5].

Customization
-------------

Most of UI elements in SDK are customizable, through xml file. Example of customization’s xml file is distributed with the SDK. List of customizable UI elements, and basic usage can be found in [CUSTOMIZATION.md][6] file, which is also distributed with the SDK.

UI customizations, e.g. button colors, titles can be done through XML file, and other customization e.g. navigation bar color, side menu items, photo sources are available at the code level.

See Also
--------


**Demo App**

For a more comprehensive demonstration of the PrintIO SDK, see the [PrintIOSDKSample app][7], which is distributed with the SDK.


  [1]: http://developer.apple.com/devcenter/ios/
  [2]: http://developer.apple.com/library/ios/#releasenotes/ObjectiveC/RN-TransitioningToARC/Introduction/Introduction.html
  [3]: https://lh3.googleusercontent.com/-ulmge2-oWUo/Uu-fUJx7GOI/AAAAAAAABbk/vRlJvKsmWNE/w946-h570-no/Screen+Shot+2014-02-03+at+2.50.32+PM.png
  [4]: https://lh5.googleusercontent.com/-Ai5j-5M3AV4/Uu-fTtJE6KI/AAAAAAAABbg/YEASmrmgk_0/w947-h570-no/Screen+Shot+2014-02-03+at+2.51.20+PM.png
  [5]: https://github.com/printdotio/printio-ios-sdk/blob/master/PUSH_NOTIFICATIONS.md
  [6]: https://github.com/printdotio/printio-ios-sdk/blob/master/CUSTOMIZATION.md
  [7]: https://github.com/printdotio/printio-ios-example
