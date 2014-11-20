//
//  PIOPublicConstants.h
//  PrintIO
//
//  Created by Tengai on 4/2/14.
//  Copyright (c) 2014 HelloPics. All rights reserved.
//

#ifndef PrintIO_PIOPublicConstants_h
#define PrintIO_PIOPublicConstants_h

typedef enum {
    PIO_SM_EXIT_BUTTON,
    PIO_SM_SEARCH_BAR,
    PIO_SM_PRODUCTS,
    PIO_SM_FEATURED_PRODUCTS,
    PIO_SM_VIEW_CART,
    PIO_SM_SHARE_WITH_IMAGE,
    PIO_SM_EMAIL_SUPPORT,
    PIO_SM_HELP,
    
    PIO_SM_CHANGE_CURRENCY,
    PIO_SM_CHANGE_COUNTRY,
    PIO_SM_CHANGE_LANGUAGE,
    
    PIO_SM_PRICING_CHART,
    PIO_SM_SHARE_APP,
    PIO_SM_LIKE_US_FB,
    PIO_SM_RATE_APP,
    PIO_SM_ABOUT,
    PIO_SM_HOW_IT_WORKS,
    PIO_SM_PAST_ORDERS,
    
    PIO_BUTTON_IMAGE_EDITOR_INFO,
    PIO_BUTTON_IMAGE_EDITOR_ROTATE,
    PIO_BUTTON_IMAGE_EDITOR_EDIT_TEXT,
    PIO_BUTTON_IMAGE_EDITOR_EFFECTS,
    
    PIO_SM_FACEBOOK = 5000,
    PIO_SM_INSTAGRAM = 5001,
    PIO_SM_PICASA = 5002,
    PIO_SM_FLICKR = 5003,
    PIO_SM_DROPBOX = 5004,
    PIO_SM_PHOTOBUCKET = 5005,
    PIO_SM_PHONE = 5006,
    PIO_SM_NONE
}PIOSideMenuButtons;

typedef NS_ENUM (NSInteger, PIOPhotoSources) {
    PIO_PS_FACEBOOK = 5000,
    PIO_PS_INSTAGRAM = 5001,
    PIO_PS_PICASA = 5002,
    PIO_PS_FLICKR = 5003,
    PIO_PS_DROPBOX = 5004,
    PIO_PS_PHOTOBUCKET = 5005,
    PIO_PS_PHONE = 5006
};

typedef NS_ENUM (NSInteger, PIOFeatureProductsView) {
    PIO_FP_FEATURED_PRODUCTS,
    PIO_FP_ALL_PRODUCTS
};

typedef NS_OPTIONS (NSInteger, PIOScreens)
{
    PIO_SCREEN_FEATURED_PRODUCTS = 1 << 0,
    PIO_SCREEN_PRODUCT_DETAILS = 1 << 1,
    PIO_SCREEN_OPTIONS = 1 << 2
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

// Extra data from input parameters
static NSString *const ED_PARTNERS_ID = @"ed_partners_id";
static NSString *const ED_MG_PATH_NUMBER = @"ed_mg_path_number";

#endif
