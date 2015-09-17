Overview
--------

[Apple Pay](https://developer.apple.com/apple-pay/) is a mobile purchasing solution for iOS, available only for US and UK customers with supported iOS devices and versions. This guide explains how to integrate and configure Apple Pay with PrintIO SDK.

Prerequisites
-------------

- PrintIO SDK v1.5.0
- iOS 8.0 or higher
- valid credit card added in apple wallet

Creating Apple Pay certificate and merchant ID
----------------------------------------------

In order to use Apple Pay on a real device, you must configure an Apple Pay Merchant ID and an Apple Pay certificate in Apple's iOS Developer Center:

1. Sign in to your iOS Developer Center and create two Apple Pay Merchant IDs, one for staging and another for production.

2. Please tobias@makeable.com to obtain the CSR (certificate signing request) files for staging and production. 

3. Generate a new Apple Pay Certificate in Apple's developer portal by uploading the CSR files we have provided.

4. Download the new Apple Pay Certificate, which you just generated, and send it back to us, tobias@makeable.com.

5. He will inform you when your merchant ID is active for using Apple Pay.

Configuration in XCode
----------------------

In Xcode, enable Apple Pay under Capabilities in your Project Settings.

![](https://dl.dropboxusercontent.com/u/19321066/printIO/Screen%20Shot%202015-08-26%20at%201.45.09%20PM.png)

Then enable both Apple Pay Merchant IDs.

![](https://dl.dropboxusercontent.com/u/19321066/printIO/Screen%20Shot%202015-08-26%20at%201.46.07%20PM.png)

It is important that you compile your app with a provisioning profile for the Apple development team with an Apple Pay Merchant ID. 

Configure PrintIO SDK to use Apple Pay
--------------------------------------

Public method for setting Apple Pay merchant id(s):

```Objective-C
/**
 Set ApplePay merchant identifier
 
 @param merchantIdentifier Merchant Identifier
 */
-(void)setApplePayMerchantIdentifier:(NSString *)merchantIdentifier;
```
Sample code:
```Objective-C
[printIO setApplePayMerchantIdentifier:@"your.merchantid"]; // use right merchant id for staging and production
//... other customization
[printIO open];
```
