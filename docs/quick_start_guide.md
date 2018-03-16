# Gooten iOS SDK - Quick Start Guide

### Add Gooten SDK to your project (CocoaPods)

1. Open a terminal window, and ```$ cd``` into your project directory.
2. Create a Podfile. This can be done by running ```$ pod init```.
3. Open your Podfile and add a CocoaPod by specifying ```pod 'PrintIO'``` on a single line inside your target block. 
```Java
target 'MyProject' do
	pod 'PrintIO'
end
```
- Save your Podfile and run ```$ pod install```

### Add Gooten SDK to your project (manually from Git)

1. From [releases](https://github.com/printdotio/printio-ios-sdk/releases) download latest release ```Source code (zip)```
2. Unzip it, and drag ```PrintIO.framework``` and ```PrintIOBundle.bundle``` to your project
3. Select target -> Build Settings -> Framework Search Paths and add path to folder where PrintIO framework is
4. Select target -> Build Phases -> Link Binary With Libraries and add libraries ```libc++```, ```libsqlite3``` and ```libxml2```
5. Select target -> Build Settings -> Other Linker Flags and add ```-all_load```
6. To run sdk on real devices: Select Target -> Build Settings -> Enable Bitcode set to No

### Quick Launch Code

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

After launching SDK, you should get this screen:


<p align="left">
  <img src="https://github.com/printdotio/printio-ios-sdk/raw/master/docs/images/ssx1.png" height="320"/>
</p>
