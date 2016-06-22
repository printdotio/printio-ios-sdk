#Gooten iOS SDK - Quick Start Guide

## Add Gooten SDK to your project

- Open a terminal window, and ```$ cd``` into your project directory.
- Create a Podfile. This can be done by running ```$ pod init```.
- Open your Podfile and add a CocoaPod by specifying ```pod 'PrintIO'``` on a single line inside your target block.
```Java
target 'MyProject' do
	pod 'PrintIO'
end
```
- Save your Podfile and run ```$ pod install```

## Quick Launch Code

Example code for launching Gooten SDK from view controller (below is sample recipeId, you can provide recipeId from Gooten):
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self 
                                                 recipeId:@"f255af6f-9614-4fe2-aa8b-1b77b936d9d6"
                                             isInTestMode:YES; // in testing mode orders are submitted without payment verification
[printIO open];
```

After launching SDK, you should get this screen:


![](https://dl.dropboxusercontent.com/u/19321066/printIO/wosettings.png)
