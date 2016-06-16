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

Example code for launching Gooten SDK from view controller:
```Objective-C
PrintIO *printIO = [[PrintIO alloc]initWithViewController:self
                                              environment:PRINTIO_PRODUCTION
                                       productionRecipeId:@"f255af6f-9614-4fe2-aa8b-1b77b936d9d6"
                                          stagingRecipeId:@"00000000-0000-0000-0000-000000000000"];
[printIO open];
```
