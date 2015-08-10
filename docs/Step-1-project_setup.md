# Project Setup

## Prerequisites

In order to follow this guide, you must have the following software installed on or downloaded to your system:

- iOS 8.* SDK (or newer)
- Xcode 6.*

For the latest versions, please visit [Apple's iOS Dev Center](http://developer.apple.com/devcenter/ios/).

You must be using the latest version of Apple's LLVM compiler. You should not have a problem if you're using a fresh install of Xcode 5.x, which uses this compiler by default. However, if you are working on an older project, or have upgraded from an older version of Xcode, make sure you're not using GCC.

The minimum iOS version supported by the SDK is iOS 8.0. The main reasons for this requirement are our use of ARC ([Automatic Reference Counting](http://developer.apple.com/library/ios/#releasenotes/ObjectiveC/RN-TransitioningToARC/Introduction/Introduction.html)) and our reliance on a number of Apple frameworks and libraries which require iOS 6.1.


# Configuration

There are two ways to setup your app to use PrintIO SDK: [manually](#a_manual) or [using CocoaPods](#a_cocoapods).

## Manual configuration <a name="a_manual"></a>

## 1. Add files

Copy the `PrintIO.framework`, `PrintIOBundle.bundle` and `TextBundle.bundle` files into your project (select "Create groups for any added folders" if needed). The PrintIO Framework is a universal binary for use on iOS device and simulator architectures (armv7, arm7s, arm64 and i386).

## 2. Link with frameworks

The Print.io SDK depends on some frameworks, so you'll need to add them to any target's "Link Binary With Libraries" Build Phase.  Make sure your app is being linked against all the following libraries:

- AVFoundation.framework
- AudioToolbox.framework
- CoreMedia.framework
- CoreLocation.framework
- Foundation.framework
- libxml2.dylib
- libsqlite3.dylib
- PrintIO.framework
- UIKit.framework


## 3. Copy bundle resources

Make sure `PrintIOBundle.bundle` and `TextBundle.bundle` are included in your target's "Copy Bundle Resources" build phase.

![Make sure our bundles are included in the Copy Bundle Resources](https://dl.dropboxusercontent.com/s/k3kenaxduuvi8x6/bundles_ss.png?dl=0)


## 4. Add other linker flags

Update your target's (or project's) build settings to include the following "Other Linker Flags:"

- -ObjC
- -lstdc++
- -lc++

![Update your linker flags accordingly](https://github.com/printdotio/printio-ios-sdk/blob/gh-pages/images/screenshot_linker_flags.png?raw=true)

## Configuration using CocoaPods <a name="a_cocoapods"></a>

Our podspec currently has two subspecs: **Core** and **Text**. By default both will be included. 

You can choose to omit text as it's an optional feature. This will result in `TextBundle.bundle` not being downloaded which would reduce the size of your app binaries.

To include all features:
`pod PrintIO`

To omit the text:
`pod PrintIO/Core`

If you're not familiar with CocoaPods, please visit http://guides.cocoapods.org.

## Start using PrintIO framework

Include the following line to make the SDK available to your code:

    #import <PrintIO/PrintIO.h>

To launch the PrintIO widget, create and display an instance of PrintIO, look at [Basic Usage](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/quick_start_sample_code.md).
