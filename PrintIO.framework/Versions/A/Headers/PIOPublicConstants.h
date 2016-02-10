//
//  PIOPublicConstants.h
//  PrintIO
//
//  Created by Tengai on 4/2/14.
//  Copyright (c) 2014 PrintIO. All rights reserved.
//

#ifndef PrintIO_PIOPublicConstants_h
#define PrintIO_PIOPublicConstants_h

typedef enum {
    PIO_SM_EXIT_BUTTON, // deprecated
    PIO_SM_SEARCH_BAR, // deprecated
    PIO_SM_PRODUCTS, // deprecated
    PIO_SM_VIEW_CART, // deprecated
    PIO_SM_SHARE_WITH_IMAGE, // deprecated
    PIO_SM_EMAIL_SUPPORT, // deprecated
    PIO_SM_HELP, // deprecated
    PIO_SM_CHANGE_CURRENCY, // deprecated
    PIO_SM_CHANGE_COUNTRY, // deprecated
    PIO_SM_CHANGE_LANGUAGE, // deprecated
    PIO_SM_PRICING_CHART, // deprecated
    PIO_SM_SHARE_APP, // deprecated
    PIO_SM_LIKE_US_FB, // deprecated
    PIO_SM_RATE_APP, // deprecated
    PIO_SM_ABOUT, // deprecated
    PIO_SM_HOW_IT_WORKS, // deprecated
    PIO_SM_PAST_ORDERS, // deprecated
    PIO_SM_ORDER_STATUS, //deprecated
    
    PIO_BUTTON_IMAGE_EDITOR_INFO,
    PIO_BUTTON_IMAGE_EDITOR_ROTATE,
    PIO_BUTTON_IMAGE_EDITOR_EDIT_TEXT,
    PIO_BUTTON_IMAGE_EDITOR_EFFECTS,
    
    PIO_SM_FACEBOOK = 5000,
    PIO_SM_INSTAGRAM = 5001,
    PIO_SM_GOOGLE_PHOTOS = 5002,
    PIO_SM_FLICKR = 5003,
    PIO_SM_DROPBOX = 5004,
    PIO_SM_PHOTOBUCKET = 5005,
    PIO_SM_PHONE = 5006,
    PIO_SM_PASSED_PHOTOS = 5007,
    PIO_SM_NONE
}PIOSideMenuButtons;

typedef NS_ENUM (NSInteger, PIOPhotoSources) {
    PIO_PS_FACEBOOK = 5000,
    PIO_PS_INSTAGRAM = 5001,
    PIO_PS_GOOGLE_PHOTOS = 5002,
    PIO_PS_FLICKR = 5003,
    PIO_PS_DROPBOX = 5004,
    PIO_PS_PHOTOBUCKET = 5005,
    PIO_PS_PHONE = 5006,
    PIO_PS_PASSED_PHOTOS = 5007
};

typedef NS_ENUM (NSInteger, PIOFeatureProductsView) {
    PIO_FP_ALL_PRODUCTS
};

typedef NS_OPTIONS (NSInteger, PIOScreens){
    PIO_SCREEN_FEATURED_PRODUCTS = 1 << 0,
    PIO_SCREEN_PRODUCT_DETAILS = 1 << 1,
    PIO_SCREEN_OPTIONS = 1 << 2
};

typedef NS_OPTIONS(NSInteger, PIOProductsScreenVersion) {
    PIOProductsScreenV1 = 1 << 0,
    PIOProductsScreenV2 = 1 << 1
};

typedef enum {
    PIO_PHOTO_ARRANGEMENT_CHOOSE,
    PIO_PHOTO_ARRANGEMENT_AUTO,
    PIO_PHOTO_ARRANGEMENT_MANUAL
}PhotoArrangement;

typedef enum {
    PIO_CASE_STYLE_MATTE,
    PIO_CASE_STYLE_GLOSSY
}CaseStyle;

#endif
