Gooten iOS SDK
===============

The Gooten iOS SDK enables you to integrate our platforms commerce tools and connect to the largest international print on demand network.

![](https://dl.dropboxusercontent.com/u/19321066/printIO/printio_sdk_screens.png)

## Introduction

Our SDK allows you to select which features and functionality you need as well as to customize the look and feel of different UI elements. Customization can be performed via code level options and/or XML configuration.

## Begin to Develop with the Gooten SDK

- [Project Setup & Prerequisites guide](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Step-1-project_setup.md) get started with the Gooten SDK.
- [Basic usage code](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Step-2-quick_start_code.md) if you'd like a little more guidance.
- [SDK Reference](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md) list of all methods available within sdk, with description and sample code.
- [SDK Customization per screen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md) list with screenshots of customizable UI elements and relevant methods.
- [XML Customization](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md) for  customization options available via XML configuration.
- [API Customization](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/adminpanel_customization.md) for store and product specific options that are controlled via the Print.io Admin Panel.
- [Assets dimensions](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Reference/dimensions_of_assets.md) list with all assets that can be changed, and required sizes.
- [Custom photo sources](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Photo-Sources/custom_photo_sources.md) option to add a custom photo source
- [Apple Pay](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/apple_pay_integration.md) integration and configuration (supported from Gooten SDK version 1.4.0).
- [Release notes](https://github.com/printdotio/printio-ios-sdk/blob/master/ReleaseNotes.md) new features and bug fixes by version

### Sample App SDK: For Reference
- [Gooten SDK Sample app](https://github.com/printdotio/printio-ios-example) for a more comprehensive demonstration of the Gooten SDK.

### Optional Services: Reference Docs
- [Push Notifications](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Reference/PUSH_NOTIFICATIONS.md) the Gooten SDK also offers the ability to send push notifications from your app.
- [Social Media Account Setup] (https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Reference/SocialMediaAccountSetup.md) the Gooten SDK allows you to change to your social media accounts. Use this guide if you have questions regarding what information and settings are needed.

### iOS 9 and XCode 7 support:
- To avoid waring "The resource could not be loaded because the App Transport Security policy requires the use of a secure connection." please add next lines to info.plist (temporary solution):
```Objective-C
<key>NSAppTransportSecurity</key>
<dict>
  <key>NSAllowsArbitraryLoads</key>
      <true/>
</dict>
```

- Your application needs to whitelist the schemes your app will query. This is Apple policy. To query for the Facebook, please add this to Info.plist file:

![](https://dl.dropboxusercontent.com/u/19321066/printIO/Screen%20Shot%202015-11-05%20at%2011.30.11%20AM.png)



*supports only iPhone app configuration
