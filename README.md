Project Setup
-------------

**Prerequisites**

In order to follow this guide, you must have minimum the iOS 6.1 SDK and Xcode 4.5 installed on your system. For the latest versions, please visit [Apple's iOS Dev Center][1].


**Build time requirements**

You must be using the latest version of Apple's LLVM compiler. You should not have a problem if you're using a fresh install of Xcode 4.x, which uses this compiler by default. However, if you are working on an older project, or you have upgraded from an older version of Xcode, make sure you're not using GCC.


**Run time requirements**

The minimum iOS version supported by the SDK is iOS 6.1. The main reasons for this choice are our use of ARC ([Automatic Reference Counting][2]) and our reliance on a number of Apple frameworks and libraries which require iOS 6.1.


Configuration
-------------

In order to use the SDK in an existing app, you must do the following: 

**1.  Add files**

Copy the PrintIO.framework and PrintIOBundle.bundle files into your project (select "Create groups for any added folders" if needed). PrintIO Frame- work is a universal binary for use on iOS device and simulator architectures (armv7/7s and i386).

Note: you can view the contents of the .bundle files we distribute, although we do not recommend or support modifying their contents.


**2. Link against libraries**

Check your target's "Link Binary With Libraries" build phase. Make sure your app is being linked against all the following libraries:

    Accounts.framework
    AudioToolbox.framework
    AVFoundation.framework
    CFNetwork.framework
    CoreGraphic.framework
    CoreMedia.framework
    CoreVideo.framework
    CoreTelephony.framework
    Foundation.framework
    PrintIO.framework
    MessageUI.framework
    MobileCoreServices.framework
    libsqlite3.dylib
    libxml2.dylib
    OpenGLES.framework
    QuartzCore.framework
    Social.framework
    SystemConfiguration.framework
    Security.framework
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

To launch the HelloPics widget, create and display an instance of HelloPics. You can present it modally, like so:


    PrintIO *printIO = [[PrintIO alloc] initWithViewController:self
                                                   environment:isProduction
                                                      recipeId:recipeId];
    [printIO open];


Optionaly, you can implement the following PrintIODelegate methods in your prese- nting view controller:


    - (void)PrintIOWidgetOnOpen
    {
        NSLog(@"PrintIOWidgetOnOpened");
    }
    
    - (void)PrintIOWidgetOnClose
    {
        NSLog(@"PrintIOWidgetOnCloseed");
    }


PrintIO Quick Start
---------------------

Below is sample code for launching a customized PrintIO widget, with all option included. Be sure to follow the Project Setup guide before attempting to use the below code.

    - (void)startPrintIO 
    {
    // recipeId is provided by PrintIO support.
    NSString *recipeId = @”12345-12345-12345-12345-12345”;
    
    // Init PrintIO widget with parent view controller. 
    //
    // Set environment to staging or live, use 
    // PRINTIO_STAGING or PRINTIO_PRODUCTION. 
    PrintIO *printIO = [[PrintIO alloc] initWithViewController:self
                                                   environment:PRINTIO_STAGING
                                                     recipeId:recipeId];
    
    // Set Delegate
    [printIO setDelegate:self];
    
    // Create array of images for customizing products. You can combine image’s 
    // urls and UIImage objects
    UIImage *image1 = [UIImage imageNamed:@"dream.jpg"];
    UIImage *image2 = [UIImage imageNamed:@"thunder.jpg"];
        
    NSArray *images = [NSArray arrayWithObjects:image2, image1,
        			@"http://res.cloudinary.com/demo/image/upload/sample.jpg", nil];
    
    // Set images, UIImage object and/or NSString image urls
    [printIO images:images];
    
    // Path to XML customization file
    NSString *xmlPath = [[NSBundle mainBundle] pathForResource:@"customization"
                                                        ofType:@"xml"];
    NSData *xmlData = [NSData dataWithContentsOfFile:xmlPath];
        
    // Set customization file
    [printIO customizationXML:xmlData];
    
    // Change title bar and font color
    [printIO titleBarColor:[UIColor magentaColor]
                 fontColor:[UIColor whiteColor]];

    // Use photo sources 
    // (Facebook, Instagram, Phone photos, Flickr, Picasa and Dropbox)
    [printIO usePhotoSources:YES];
    
    // Set visible/available photo sources. User will only see photo sources placed 
    // in array of visible photo sources. You can choose between:
    //
    // 	PRINTIO_PS_PHONE,
    // 	PRINTIO_PS_INSTAGRAM
    // 	PRINTIO_PS_FACEBOOK
    // 	PRINTIO_PS_FLICKR
    // 	PRINTIO_PS_PICASA
    // 	PRINTIO_PS_DROPBOX
    //
    [printIO availablePhotoSources:[NSArray arrayWithObjects:
                                     [NSNumber numberWithInt:PRINTIO_PS_FACEBOOK],
                                     [NSNumber numberWithInt:PRINTIO_PS_INSTAGRAM], nil]];
    
    // Jumps directly to first customization step of product.
    // Product Ids can be found in ProductIds.h
    [printIO goToProductId:PRODUCT_PHONE_CASES()];
    
    // Jumps directly to templates for SKU
    [printIO goToProductId:PRODUCT_PHONE_CASES()
                   withSKU:@"PhoneCase-BlackberryZ10-Gloss"];
    
    // Set country code, so user can’t change it
    [printIO countryCode:@"US"];
    
    // Set currency code
    [printIO currencyCode:@"USD"];
    
    // Set language code
    [printIO languageCode:@"en"];
    
    // Set custom icon with filename, stored in application's main bundle
    [printIO iconWithFileName:@"icon1"];
        
    // Set custom fonts from main app bundle.
    //
    // Array of string values contains font name and type with exact order 
    // (light, medium, regular, bold). 
    //
    // 	Example: [@"font_light.otf", @"font_medium.otf", @"font_regular.otf", 
    // 	          @"font_bold.otf"]. 
    // Array must have four items, and fonts can be duplicated.
    NSArray *fonts = @[@"timess.ttf", @"timess.ttf",
                              @"aubrey.ttf", @"CaviarDreams_Bold.ttf"];
            
    [printIO customFonts:fonts];
        
    // Set Payee name
    [printIO payeeName:@”Payee Name”];
    
    // Open widget
    [printIO open];
    }

See Also
--------


**Demo App**

For a more comprehensive demonstration of the PrintIO SDK, see the [PrintIOSDKSample app][5], which is distributed with the SDK.


**Customization**

Most of UI elements in SDK are customizable, through xml file. Example of customization’s xml file is distributed with the SDK. List of customizable UI elements, and basic usage can be found in CUSTOMIZATION.md file, which is also distributed with the SDK.


  [1]: http://developer.apple.com/devcenter/ios/
  [2]: http://developer.apple.com/library/ios/#releasenotes/ObjectiveC/RN-TransitioningToARC/Introduction/Introduction.html
  [3]: https://lh3.googleusercontent.com/-ulmge2-oWUo/Uu-fUJx7GOI/AAAAAAAABbk/vRlJvKsmWNE/w946-h570-no/Screen+Shot+2014-02-03+at+2.50.32+PM.png
  [4]: https://lh5.googleusercontent.com/-Ai5j-5M3AV4/Uu-fTtJE6KI/AAAAAAAABbg/YEASmrmgk_0/w947-h570-no/Screen+Shot+2014-02-03+at+2.51.20+PM.png
  [5]: https://github.com/printdotio/printio-ios-example