//
//  PaymentOptions.h
//  PrintIO
//
//  Created by Nikola Markovic on 10/1/14.
//  Copyright (c) 2014 PrintIO. All rights reserved.
//

#import <CoreFoundation/CoreFoundation.h>

typedef NSUInteger PaymentOptions;

typedef enum : NSUInteger {
    PaymentOptionPayPal = 1 << 0,
    PaymentOptionCreditCard = 1 << 1,
    PaymentOptionApplePay = 1 << 2,
    PaymentOptionAll = 7
} PaymentOption;

BOOL paymentOptionSupported(PaymentOptions options, PaymentOption option);