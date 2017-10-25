Gooten iOS SDK
===============

The Gooten iOS SDK enables you to integrate our platforms commerce tools and connect to the largest international print on demand network.

![](https://user-images.githubusercontent.com/6410345/28869589-8417c408-777d-11e7-9598-c3da670e3ef6.png)

## Introduction

Our SDK allows you to select which features and functionality you need as well as to customize the look and feel of different UI elements. Customization can be performed via code level options and/or XML configuration.

## Begin to Develop with the Gooten SDK

- [Quick Start Guide](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/quick_start_guide.md) get started with the Gooten SDK.
- [SDK Reference](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md) list of all methods available within sdk, with description and sample code.
- [SDK Customization per screen](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/specific_page_methods.md) list with screenshots of customizable UI elements and relevant methods.
- [XML Customization](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md) for  customization options available via XML configuration.
- [Custom photo sources](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Photo-Sources/custom_photo_sources.md) option to add a custom photo source
- [Apple Pay](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/apple_pay_integration.md) integration and configuration (supported from Gooten SDK version 1.4.0).
- [Analytics](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/analytics.md) to collect user data and track custom events and screens (available from SDK version 1.7.15)
- [Release notes](https://github.com/printdotio/printio-ios-sdk/blob/master/ReleaseNotes.md) new features and bug fixes by version

### Sample App SDK: For Reference
- [Gooten SDK Sample app](https://github.com/printdotio/printio-ios-example) for a more comprehensive demonstration of the Gooten SDK.

### Optional Services: Reference Docs
- [Push Notifications](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Reference/PUSH_NOTIFICATIONS.md) the Gooten SDK also offers the ability to send push notifications from your app.
- [Social Media Account Setup](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Reference/SocialMediaAccountSetup.md) the Gooten SDK allows you to change to your social media accounts. Use this guide if you have questions regarding what information and settings are needed.

### iOS 9 and Xcode 7 support:
- To avoid waring "The resource could not be loaded because the App Transport Security policy requires the use of a secure connection." please add next lines to info.plist (temporary solution):
```Objective-C
<key>NSAppTransportSecurity</key>
<dict>
  <key>NSAllowsArbitraryLoads</key>
      <true/>
</dict>
```

- Your application needs to whitelist the schemes your app will query. This is Apple policy. To query for the Facebook, please add this to Info.plist file:

![](https://user-images.githubusercontent.com/6410345/28869645-b0c18b2e-777d-11e7-8190-22e2b5e2ad04.png)



*supports only iPhone app configuration
