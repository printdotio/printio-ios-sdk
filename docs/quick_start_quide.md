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
