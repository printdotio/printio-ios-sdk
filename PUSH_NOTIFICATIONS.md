

Push Notification Guide
-----------------------

If you haven't installed the PrintIO SDK yet, please look at [README][1] to get our SDK up and running.

Introduction
------------

Push Notifications are a great way to keep your users engaged and informed about your app. You can reach your entire user base quickly and effectively. This guide will help you through the setup process and the general usage of PrintIO SDK to receive push notifications.

Setting Up Certificates
-----------------------

In order to receive push notifications with PrintIO SDK, next steps need to be done.

**1. Creating the SSL certificate**

The first step is to create an App ID and the associated SSL certificate on the Apple Developer website. This certificate will allow the Parse server to send push notifications to the application identified by the App ID.

**1.1. Generating a Certificate Request**

To begin, we'll need a certificate signing request file. This will be used to authenticate the creation of the SSL certificate.

1. Launch the Keychain Access application on your Mac.

2. Select the menu item Keychain Access > Certificate Assistant > Request a Certificate From a Certificate Authority…

3. Enter your email address and name.

4. Select "Saved to disk" to download the .certSigningRequest file to your desktop.

![enter image description here][2]

**1.2. Creating an App ID**

Every iOS application installed on your developer device needs an App ID. As a convention, these are represented by reversed addresses (ex. com.example.printIO). For this push app, you can use an App ID you've already created, but make sure it does not contain a wildcard character ("*"). The following instructions cover the creation of a new App ID.

1. Navigate to the [Apple Developer Member Center][3] website, and select [Certificates, Identifiers & Profiles][4].

2. Select [Identifiers][5] from the iOS Apps section.

3. You will see a list of your iOS App IDs. Select the + button to register a new App Id.
 
![enter image description here][6]

Enter a name for your new App ID, then make sure to select the checkbox next to Push Notifications under App Services.

![enter image description here][7]
![enter image description here][8]

1. Choose an App ID Prefix. The default selection should be correct in most cases.

2. Under App ID Suffix, select Explicit App ID. Enter your iOS app's Bundle ID. This string should match the Bundle Identifier in your iOS app's Info.plist.

![enter image description here][9]

Select "Continue" and make sure that all the values were entered correctly. Push Notifications should be enabled, and the Identifier field should match your app's Bundle Identifier (plus App ID Prefix). Select "Submit" to finalize the registration of your new App ID.

**1.3. Configuring your App ID for Development Push Notifications**

Now that you've created an App ID (or chosen an existing Explicit App ID), it's time to configure the App ID for Push Notifications.

Select your newly created App ID from the list of iOS App IDs, then select "Settings" or "Edit".

![enter image description here][10]

Scroll down to the Push Notifications section. Here you will be able to create both a Development SSL Certificate, as well as a Production SSL Certificate. Start by selecting "Create Certificate" under "Development SSL Certificate".

![enter image description here][11]

1. The next screen will show instructions for creating a Certificate Signing Request (CSR). This is the same .certSigningRequest file you created earlier in Section 1.1. Select "Continue", then select "Choose File..." and locate the .certSigningRequest you created in Section 1.1.

2. Select "Generate". Once the certificate is ready, select "Done" and download the generated SSL certificate from the "iOS App ID Settings" screen.

3. Double click on the downloaded SSL certificate to install it in your Keychain.

4. In Keychain Access, under "My Certificates", find the certificate you just added. It should be called "Apple Development IOS Push Services: ".

![enter image description here][12]

Right-click on it, select "Export Apple Development IOS Push Services:...", and save it as a .p12 file. You will be prompted to enter a password which will be used to protect the exported certificate. **Do not enter an export password when prompted!** Note that you might have to enter your OS X password to allow Keychain Access to export the certificate from your keychain.

![enter image description here][13]

If the Personal Information Exchange (.p12) option is grayed out in the export sheet, make sure "My Certificates" is selected in Keychain Access. If that does not help, double check that your certificate appears under the login keychain. You can drag and drop it into login if needed.

Note that you've just enabled Push Notification for your app in development mode. Prior to releasing your application on the App Store, you will need to repeat steps 1 through 7 of this section, but select "Production Push SSL Certificate" in step 2 instead, as covered in Section 7.

Valid p12 certificate you'll send to PrintIO support, in order to continue with process of implementation push notifications.

Usage
-----

In your app delegate, add these lines:

    - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
    {
        ...
        
        // Set Parse application id and api key
        [PrintIO setParseApplicationId:kAppID
        						apiKey:kApiKey];
        
        // Register for push notifications
        [application registerForRemoteNotificationTypes:
         UIRemoteNotificationTypeBadge |
         UIRemoteNotificationTypeAlert |
         UIRemoteNotificationTypeSound];
        ...
        
        return YES;
    }
    
And implement these two methods:

    - (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
    {
        [PrintIO registerDeviceToken:deviceToken];
    }
    
    - (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo
    {
        [PrintIO showNotification:userInfo
                  backgroundColor:[UIColor blackColor]
                        textColor:[UIColor whiteColor]];
    }

  [1]: https://github.com/printdotio/printio-ios-sdk/blob/master/README.md
  [2]: https://lh6.googleusercontent.com/-xDd4rPCn2jE/U3oNPzK0ZeI/AAAAAAAAAA0/770rPVb8u7o/s800/1.png
  [3]: https://developer.apple.com/membercenter/index.action
  [4]: https://developer.apple.com/account/overview.action
  [5]: https://developer.apple.com/account/ios/identifiers/bundle/bundleList.action
  [6]: https://lh3.googleusercontent.com/-Tm89LaBdrdY/U3oNP0nJdkI/AAAAAAAAABQ/upqhlxXLdZ0/s800/2.png
  [7]: https://lh5.googleusercontent.com/-uVqR9UjZbM4/U3oNPfWhHXI/AAAAAAAAAAg/OZRhyNQBcdQ/s654/3.png
  [8]: https://lh6.googleusercontent.com/-AhjTLOIqWGA/U3oNQP3bSbI/AAAAAAAAAAw/VQ20iA9CKBE/s646/4.png
  [9]: https://lh3.googleusercontent.com/-ADNxqAPGfGY/U3oNRGhMHzI/AAAAAAAAABI/o3I3ZhphBEE/s643/5.png
  [10]: https://lh3.googleusercontent.com/-8elZXQ4wrog/U3oNROOYHsI/AAAAAAAAABE/ZxHSwUfePwE/s640/6.png
  [11]: https://lh5.googleusercontent.com/-fyctVcOBm2g/U3oNRVhNf6I/AAAAAAAAABM/pSszji5L58g/s576/7.png
  [12]: https://lh4.googleusercontent.com/-rgIQhEfRJh8/U3oNSluvK2I/AAAAAAAAABc/PJhk5P02eU4/s800/8.png
  [13]: https://lh3.googleusercontent.com/-5mBCcqLnJXY/U3oNS2L9x1I/AAAAAAAAABg/eYUxbQgQ2Nw/s572/9.png