# Introduction

The following steps walk through all of the required options to get a working SDK implementation up and running and properly configured.

# Required Steps to put SDK into your app

Each of these steps are required in order to create an applicaton using the Print.IO SDK.

- Use the proper recipe ID for your account (Make sure the staging & live recipes you use match the correct URL)
- Change Logo on payment page and order completion page
    - If no logo desired, You can choose to hide the logo
- Change partner name to your partner name
- Change "How it Works" copy
- Change "About" copy
- Include custom text for Share this app on FB and Rate Our App (default is Hellopics text)
- Set up Social accounts with different providers
- Set up Parse account if push notifications are desired
- Submit staging orders for testing purposes

# Optional Steps

These options are not all required, however many are recommended to offer a great experience to your users.

## General UI

- Do you want to use custom colors and fonts for buttons and labels?
- Will you change any of following elements on the navigation bar:
    - Background color?
    - Title color?
    - Left button background color?
    - Right button background color?
    - Custom navigation bar icon?
- Will you use custom fonts throughout the application (our defaults are...)
- Would you prefer to use a custom "loading" GIF?
- Will you customize the shopping cart icon in the navigation bar:
     - Should a custom icon be used?
     - Should the icon indicate the number of items in the cart with a badge?
- Would you like to include a "Back", "Menu" and "Cart" button in the top nav along with the location text?
- Will you use a custom icon for the back button?
- When entering the SDK, would you like it to open from the bottom or the right side?
- Would you like to offer your users a special deal for sharing the app on Facebook?

## Localization Preferences

- Would you like to specify a single supported currency?
- Would you like to specify a single supported language?
- Would you like to specify a single supported country?

## Photo Sources

- Will you offer some or all of the following photo sources:
    - iOS Camera Roll
    - Instagram
    - Facebook
    - Picasa
    - Flickr
    - Dropbox
    - Photobucket
- Is there a specific order you would like these to be listed in?
- Will you pass photos in directly to the SDK?
    - If yes, should the user still be able to access alternate photo sources?
- Should a small icon be shown for the Upload Instructions text on the Photo Sources screen?

## Side Menu

- Do you want to use a side menu?
- Which side should it slide from?
- Do you want to use a custom icon or use the default?
- Which items would you like to include in your side menu:
    - Top-level buttons:
        - Search field
        - Exit Application
        - Products
        - Featured Products
        - View Cart
    - Localization options:
        - Currency
        - Language
        - Country
    - Info buttons:
        - Pricing Chart
        - Share Application
        - Like on Facebook
        - Rate Application
        - About this Application
        - How it Works
        - Show Past Orders
- What text and colors would you like for the section labels within your side menu:
    - Localization options label
        - Title text
        - Text color
        - Background color
    - Accounts label
        - Title text
        - Text color
        - Background color
    - Info label
        - Title text
        - Text color
        - Background color
- Would you like to use a custom background image for your side menu buttons?

## Featured Products

- Should users be able to select their country from a sub-navigation bar?
- Should a category selection and search bar be available to users?

## Customize Product

- Should photos be arranged automatically, manually, or the be the user's choice?
- Do you want to display a large image overlay explaining how to edit an image?
- Should a list of available images be shown while the user is customizing the product?
- Do you want the user to have access to editing tools?
- Do you want to include only certain editing tools, or change the order they are displayed in?
- If a user works with a single-photo template and you've passed a photo to the SDK, should they be unable to select a different photo source?
- Should a passed photo be used as the thumbnail for the single photo template?
- Would you like to use a custom image for the Add Photos button in the images list?
- Should a custom image be used for the help icon?
- Do you plan to customize the help balloon?
    - With a custom background image?
    - With custom text?
    - With a different font color?

## Cart & Payment

- Should a plus icon appear preceding the text on the Add More Products button?
- If you wish to accept Paypal, have you set up and configured your Paypal account?
    - Staging Client ID?
    - Production Client ID?
- If accepting credit card payments, have you set up your Braintree account?
    - Staging Encryption Key
    - Production Encryption Key
    - 



