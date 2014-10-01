//
//  PaymentOptions.h
//  PrintIO
//
//  Created by Nikola Markovic on 10/1/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

typedef NSUInteger PaymentOptions;

typedef enum : NSUInteger {
    PaymentOptionPayPal = 0x1,
    PaymentOptionCreditCard = 0x10,
    PaymentOptionAll = 0x11
} PaymentOption;

BOOL paymentOptionSupported(PaymentOptions options, PaymentOption option);