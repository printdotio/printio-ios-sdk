//
//  PaymentOptions.h
//  PrintIO
//
//  Created by Boro Perisic Bocas on 10/1/14.
//  Copyright (c) 2014 PrintIO. All rights reserved.
//

#import <CoreFoundation/CoreFoundation.h>

typedef NSUInteger GTPaymentOptions;

typedef enum : NSUInteger {
    GTPaymentPayPal = 1 << 0,
    GTPaymentCreditCard = 1 << 1,
    GTPaymentApplePay = 1 << 2,
    GTPaymentAll = 7
} GTPaymentOption;

BOOL paymentOptionSupported(GTPaymentOptions options, GTPaymentOption option);
