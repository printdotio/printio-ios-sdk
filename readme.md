# Introduction

The Print.IO SDK for iOS enables you to integrate the capabilities of our platform into your iOS applications.

Our SDK allows you to select which features and functionality you need as well as to customize the look and feel of different UI elements. Customization can be performed via [code level options](https://github.com/printdotio/printio-ios-sdk/blob/gh-pages/ios_sdk_customization.md) and/or [XML configuration](https://github.com/printdotio/printio-ios-sdk/blob/master/customization.xml.md). Details for how to customize various parts of the installation can be found in the [CUSTOMIZATION.md][6] document, which is also distributed with the SDK.

The Print.IO SDK also offers the ability to send push notifications from your app. More information on configuration and usage can be found in the [Push Notifications][https://github.com/printdotio/printio-ios-sdk/blob/master/PUSH_NOTIFICATIONS.md] documentation.

# Project Setup

## Prerequisites

In order to follow this guide, you must have the following software installed on or downloaded to your system:

- iOS 6.1 SDK (or newer)
- Xcode 5.*
- Print.IO SDK

For the latest versions, please visit [Apple's iOS Dev Center](http://developer.apple.com/devcenter/ios/).

You must be using the latest version of Apple's LLVM compiler. You should not have a problem if you're using a fresh install of Xcode 5.x, which uses this compiler by default. However, if you are working on an older project, or have upgraded from an older version of Xcode, make sure you're not using GCC.

The minimum iOS version supported by the SDK is iOS 6.1. The main reasons for this requirement are our use of ARC ([Automatic Reference Counting][http://developer.apple.com/library/ios/#releasenotes/ObjectiveC/RN-TransitioningToARC/Introduction/Introduction.html]) and our reliance on a number of Apple frameworks and libraries which require iOS 6.1.


# Configuration

In order to use the SDK in an existing app, you must do the following:

## 1. Add files

Copy the `PrintIO.framework` and `PrintIOBundle.bundle` files into your project (select "Create groups for any added folders" if needed). The PrintIO Framework is a universal binary for use on iOS device and simulator architectures (armv7, arm7s, arm64 and i386).

## 2. Link with frameworks

The Print.io SDK depends on some frameworks, so you'll need to add them to any target's "Link Binary With Libraries" Build Phase.  Make sure your app is being linked against all the following libraries:

- Accounts.framework
- Accelerate.framework
- AssetsLibrary.framework
- AdSupport.framework
- AudioToolbox.framework
- AVFoundation.framework
- CFNetwork.framework
- CoreGraphic.framework
- CoreMedia.framework
- CoreLocation.framework
- CoreVideo.framework
- CoreImage.framework
- CoreTelephony.framework
- Foundation.framework
- ImageIO.framework
- PrintIO.framework
- MessageUI.framework
- MobileCoreServices.framework
- libsqlite3.dylib
- libxml2.2.dylib
- libz.dylib
- OpenGLES.framework
- QuartzCore.framework
- Social.framework
- SystemConfiguration.framework
- Security.framework
- StoreKit.framework
- Twitter.framework
- UIKit.framework


## 3. Copy bundle resources

Make sure `PrintIOBundle.bundle` is included in your target's "Copy Bundle Resources" build phase.

![Make sure our bundle is included in the build phase][images/screenshot_copy_bundle_resources.png?raw=true]


## 4. Add other linker flags

Update your target's (or project's) build settings to include the following "Other Linker Flags:"

- -ObjC
- -lstdc++
- -lc++

![Update your linker flags accordingly][images/screenshot_linker_flags.png?raw=true]


## 5. Import headers

Include the following line to make the SDK available to your code:

    #import <PrintIO/PrintIO.h>


# Basic Usage

To launch the PrintIO widget, create and display an instance of PrintIO.

### Option 1: Modal Presentation

``` Objective-C
- (void)startPrintIO
{
    // kRecipeId is developer defined and provided by PrintIO
    PrintIO *printIO = [[PrintIO alloc]initWithViewController:vc
                                                  environment:kEnvironment
                                           productionRecipeId:pRecipeId
                                              stagingRecipeId:sRecipeId];

    // Set Delegate
    [printIO setDelegate:self];

    // Start widget
    [printIO open];
}
```


### Option 2: Use PrintIODelegate methods

You can also use our ```PrintIODelegate``` methods in your presenting view controller:

``` Objective-C
- (void)PrintIOWidgetOnOpen
{
    NSLog(@"PrintIOWidgetOnOpened");
}
- (void)PrintIOWidgetOnCloseWithData:(NSDictionary *)data
{
    NSLog(@"Returned data: %@", data);
}
```

That's it - now you're ready to develop an amazing application using the Print.IO SDK!

# Next Steps

- If you'd like a little more guidance, you can refer to our [Quick Start code](https://github.com/printdotio/printio-ios-sdk/blob/gh-pages/quick_start.md).
- For a more comprehensive demonstration of the PrintIO SDK, please see the [PrintIOSDKSample app](https://github.com/printdotio/printio-ios-example)
- For in depth descriptions of the customization options available, see our [SDK customization document](https://github.com/printdotio/printio-ios-sdk/blob/gh-pages/ios_sdk_customization.md)
