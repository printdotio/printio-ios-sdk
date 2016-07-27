#Gooten iOS SDK - Quick Start Guide

### Add Gooten SDK to your project (CocoaPods)

- Open a terminal window, and ```$ cd``` into your project directory.
- Create a Podfile. This can be done by running ```$ pod init```.
- Open your Podfile and add a CocoaPod by specifying ```pod 'PrintIO'``` on a single line inside your target block.
```Java
target 'MyProject' do
	pod 'PrintIO'
end
```
- Save your Podfile and run ```$ pod install```

### Add Gooten SDK to your project (manually from Git)

- From [releases](https://github.com/printdotio/printio-ios-sdk/releases) download latest release ```Source code (zip)```
- Unzip it, and drag ```PrintIO.framework```, ```PrintIOBundle.bundle``` and ```TextBundle.bundle``` to your project
- Select target -> Build Settings -> Framework Search Paths and add path to folder where PrintIO framework is
- Select target -> Build Phases -> Link Binary With Libraries and add libraries ```libc++```, ```libsqlite3``` and ```libxml2```
- Select target -> Build Settings -> Other Linker Flags and add ```-all_load```
- To run sdk on real devices: Select Target -> Build Settings -> Enable Bitcode set to No

## Quick Launch Code

Example code for launching Gooten SDK from view controller (below is sample recipeId, you can provide recipeId from Gooten):
```Objective-C
// Objective c
#import <PrintIO/PrintIO.h>

- (void)viewDidLoad {
    [super viewDidLoad];

    PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                                     recipeId:@"f255af6f-9614-4fe2-aa8b-1b77b936d9d6"
                                                 isInTestMode:YES]; // in testing mode orders are submitted without payment verification
    [printIO open];
}
```

In Swift, first put ```#import <PrintIO/PrintIO.h>``` into ```-Bridging-Header.h```.
```Swift
// Swift
override func viewDidLoad() {
    super.viewDidLoad()

    let printIO = PrintIO(viewController: self, recipeId: "f255af6f-9614-4fe2-aa8b-1b77b936d9d6", isInTestMode: true);
    printIO.open();
}
```

### iOS 9 and XCode 7 support:
If you have problem with loading images, please use temporary solution for this issue:
-  In ```Info.plist``` under ```Information Property List``` add ```NSAppTransportSecurity```, and under ```NSAppTransportSecurity``` add ```NSAllowsArbitraryLoads``` and set it to ```YES```.


After launching SDK, you should get this screen:


![](https://dl.dropboxusercontent.com/u/19321066/printIO/wosettings.png)
