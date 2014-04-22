
**SDK Customization**
-----------------

Customization from code:
------------------------

 - Add image's urls to SDK, with/without photo sources, SDK will use these images also: 
 `- (void)images:(NSArray *)images;`

 - Set country, by setting country code, so user will not have option to change it:
 `- (void)countryCode:(NSString *)countryCode;`

 - Set currency, by setting currency code, so user will not have option to change it:
 `- (void)currencyCode:(NSString *)currencyCode;`

 - Set language, bt setting language code, so user will not have option to change it:
 `- (void)languageCode:(NSString *)languageCode;`

 - Enable or disable using photo sources in SDK:
`- (void)usePhotoSources:(BOOL)usePhotoSources;`

 - Set available photo sources by passing in array of photo sources you want to be visible to user:
`- (void)availablePhotoSources:(NSArray *)vPhotoSources;`

 - Set custom icon, by passing in icon file name. Icon must be stored in main bundle resources:
 `- (void)iconWithFileName:(NSString *)iconFileName;`

 - Jumps directly to product:
`- (void)goToProductId:(int)productId;`

 - Jumps directly to product with sku:
`- (void)goToProductId:(int)productId withSKU:(NSString *)sku;`

 - Set custom fonts:
 `- (void)customFonts:(NSArray *)fonts;`

 -  Set payee name:
`- (void)payeeName:(NSString *)payeeName;`

 - Set custom share text. This is option from Side Menu, so first side menu mush be enabled:
`- (void)setApplicationShareText:(NSString *)shareText;`

 -  On Edit Product Screen show custom image(something like help) on center of screen:
`- (void)showCustomDoubleTapImage:(NSString *)imagePath;`

 - Shows menu button in center of navigation bar. Menu can be customized by PrintIO for you:
`- (void)showMenuButtonInNavigationBar:(NSString *)buttonIconFilePath;`

 - Show/hide Side Menu:
`- (void)enableSideMenu:(BOOL)enabled;`

 - Change Title bar background color and title color:
`- (void)titleBarColor:(UIColor *)color fontColor:(UIColor *)fontColor;`

 - Loads customization.xml which is used for customizing some UI elements:
`- (void)customizationXML:(NSData *)xmlData;`

 - Shows/hides tab bar in Customize Product screen. Default value is YES
`- (void)showTabBarInCustomizeProduct:(BOOL *)show;`

 - Set which buttons will be visible in Image Editor tab bar. By default, all buttons are visible.
`- (void)imageEditorShowButtons:(NSArray *)buttons;`

 - Hide list with images in customization screen
`- (void)hideImagesListInCustomizationScreen:(BOOL)hide;`

 - If user pass photos using method 'images', this method can disable photo sources, forcing user to use only passed photos.
`- (void)disablePhotoSourcesWhenImagesArePassed:(BOOL)disable;`

 -  Set passed in image as thumbnail for templates with one photo.
`- (void)setPassedImageAsThumbForOnePhotoTemplate:(BOOL)set;`

 - Set passed in image to be first in row for all photo sources.
`- (void)setPassedImageFirstInPhotoSources:(BOOL)set;`

 - Disables photo sources only if image is passed in, and user selects template with one photo.
`- (void)disablePhotoSourcesWhenImageIsPassedForOnePhotoTemplate:(BOOL)disable;`

 - Set custom icon for Shopping Cart, displayed in navigation bar
`- (void)setShopingCartIcon:(NSString *)path;`

 - Set custom icon for Shopping Cart, displayed in navigation bar, with red circle for showing number of items in cart
`- (void)setShopingCartIconWithCircle:(NSString *)path;`

 - Set partners ID, for additional customization options
`- (void)setPartnerId:(NSInteger)partnerId;`

 - Set background image for items (buttons) in Side Menu
`- (void)setBackgoundImageForSideMenuItems:(NSString *)path;`

 -  Hide category+search view on Featured Products screen. Default value is NO;
`- (void)hideCategoryViewInFeaturedProducts:(BOOL)hide;`

 -  Hide status bar in SDK
`- (void)hideStatusBar:(BOOL)hide;`

 -  Change background image for Toolbar in Customize Product screen
`- (void)setBackgoundImageForToolbarInCustomizeProduct:(NSString *)imagePath;`

 -  Change image for "Add photos" button in Customize Product screen
`- (void)setImageForAddPhotosButton:(NSString *)imagePath;`

 -  Change icon for Help Button
`- (void)setIconForHelpButton:(NSString *)imagePath;`

 -  Change icon for Help Button on Customize Product screen
`- (void)setIconForHelpButtonInCustomizeProduct:(NSString *)imagePath;`

 -  Set country on Featured Products screen instead on First screen. Default value is NO.
`- (void)setCountryInFeaturedProducts:(BOOL)set;`

 -  Set custom icon for back button
`- (void)setIconForBackButton:(NSString *)path;`

 -  Hide icon for Upload Instructions text. Default value is NO.
`- (void)hideIconForUplaodInstructions:(BOOL)hide;`

 - Set custom image for Double Tap balloon in Customize Product screen
`- (void)setDoubleTapBaloonImage:(NSString *)path text:(NSString *)text textColor:(UIColor *)textColor;`

 - Remove plus sign from "Add more products" button in Shopping Cart
`- (void)removePlusFromAddMoreProductsButton:(BOOL)remove;`

 -  Set background color for left and right navigation bar buttons. Default color is transparent.
`- (void)setBackgroundColorForNavBarButtonLeft:(UIColor *)lColor right:(UIColor *)rColor;`

 - Option only for testing MG
`- (void)setMGPathNumber:(NSInteger)path;`

 - Removes logo from payment screens
`- (void)removeLogoFromPaymentScreen:(BOOL)remove;`

 -  Set status bar style to dark. Default value is light.
`- (void)setStatusBarDark:(BOOL)set;`

![enter image description here][1]

 - Set navigation bar icon for Side Menu
`- (void)setIconForSideMenu:(NSString *)path;`

![enter image description here][2]

 - Set background color for Side Menu
`- (void)setBackgroundColorForSideMenu:(UIColor *)bcgColor;`

 - Change loading GIF animation by providing file name
`- (void)setLoadingGIF:(NSString *)fileName;`

![enter image description here][3]
 
Customization of UI elements in customization.xml:
--------------------------------------------------

**1. Screen “Select Country”**

    <customization>
    <screen name="choose_country">
           	<button name="button_no" bcg_color="#ff0000" font_color="#ffffff" />
            	<button name="button_yes" bcg_color="#4499aa" font_color="#ffffff"/>
        	</screen>
    </customization>
    
![enter image description here][4]


----------


**2. Screen “Product Details”**

    <customization>
    	<screen name="product_details">
            	<button name="button_create" bcg_color="#ff0000" font_color="#ffffff" />
        	</screen>
    </customization> 

![enter image description here][5]


----------


**3. Screen “Image Preview”**

    <customization>
    	<screen name="image_preview">
            	<button name="button_close" bcg_color="#ff0000" font_color="#ffffff" />
        	</screen>
    </customization> 
    
![enter image description here][6]


----------


**4. Screen “Shopping Cart”**

    <customization>
    	<screen name="shopping_cart">
            	<button name="button_edit" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_check_out" bcg_color="#990022" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][7]


----------


**5. Screen “Add Address”**

    <customization>
        	<screen name="add_address">
            	<button name="button_save" bcg_color="#446723" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][8]


----------


**6. Screen “Select Address”**

    <customization>
        	<screen name="select_address">
            	<button name="button_edit" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_add" bcg_color="#990022" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][9]


----------

**7. Screen “Address Validation”**

    <customization>
        	<screen name="address_validation">
            	<button name="button_accept" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_edit" bcg_color="#990022" font_color="#ffffff" />
            	<button name="button_edit_down" bcg_color="#990022" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][10]


----------

**8. Screen “Shipment Review”**

    <customization>
    	<screen name="shipment_review">
            	<button name="button_enter" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_remove" bcg_color="#553388" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][11]


----------

**9. Screen “Payment Methods”**

    <customization>
    	<screen name="payment_methods">
            	<button name="button_pay" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_pay_down" bcg_color="#990022" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][12]


----------
**10. Screen “Photo Sources”**

    <customization>
        	<screen name="photo_sources">
            	<label name="label_title" bcg_color="#ffffff" font_color="#446723" />
            	<label name="label_down" bcg_color="#990022" font_color="#ffffff" />
            	<button name="button_next" bcg_color="#446723" font_color="#ffffff" />
        	</screen>
    </customization>

![enter link description here][13]

----------

**11. Screen “Customize Product”**

    <customization>
    	<screen name="customize_product">
            	<button name="button_buy" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_back" bcg_color="#990022" font_color="#ffffff" />
    <button name="button_help" bcg_color="#990022" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][14]

----------

**12. Screen “Product Preview”**

    <customization>
    <screen name="product_preview">
           <label name="label_1" bcg_color="#446723" font_color="#446723" />
           <label name="label_2" bcg_color="#990022" font_color="#ffffff" />
            	<label name="label_3" bcg_color="#446723" font_color="#446723" />
            	<label name="label_4" bcg_color="#990022" font_color="#ffffff" />
            	<button name="button_back" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_edit" bcg_color="#990022" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][15]


----------


**13. Screen “Order Confirmation”**

    <customization>
    <screen name="order_confirmation">
            	<button name="button_close" bcg_color="#446723" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][16]


----------

**14. Screen “Customize Books”**

    <customization>
    	<screen name="customize_books">
            	<button name="button_back" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_buy" bcg_color="#990022" font_color="#ffffff" />
        	</screen>
    </customization>

![enter image description here][17]


----------

**15. Screen “Image Editor”**

    <customization>
    <screen name="image_editor">
            	<button name="button_back" bcg_color="#446723" font_color="#ffffff" />
            	<button name="button_save" bcg_color="#990022" font_color="#ffffff" />
        	</screen>
    </customization>

![enter link description here][18]


  [1]: https://lh5.googleusercontent.com/-18qrMfgPFUA/U1agy25l1aI/AAAAAAAABhI/21Bg4E2MfOY/w284-h199-no/c_sta_bar.png
  [2]: https://lh5.googleusercontent.com/-SxWzz69iiqs/U1ag3bwnpWI/AAAAAAAABhY/xeHV7VqvGg8/w623-h493-no/c_menu_bar.png
  [3]: https://lh3.googleusercontent.com/-iwfn8qWXwvQ/U1ag09L9vFI/AAAAAAAABhQ/3oth_zq3NAU/w624-h483-no/c_loading.png
  [4]: https://lh4.googleusercontent.com/-2ADaecem7Jw/Uuv1i9io2TI/AAAAAAAABYs/amhq_zDb72M/w413-h367-no/1.png
  [5]: https://lh4.googleusercontent.com/-knOfqdYFS8o/Uuv1j3WecRI/AAAAAAAABY0/cs2J9rLVB-k/w470-h410-no/2.png
  [6]: https://lh3.googleusercontent.com/-vjkD_NIiDEU/Uuv1keaWBQI/AAAAAAAABZE/DSIRrxtNXCU/w440-h380-no/3.png
  [7]: https://lh3.googleusercontent.com/-P73Ra-OXaFo/Uuv1kmpDZvI/AAAAAAAABZI/zb79Pr3JFVw/w459-h384-no/4.png
  [8]: https://lh6.googleusercontent.com/-rXMwPIDrPRE/Uuv1k-ukafI/AAAAAAAABZM/rgsdzKyapgg/w417-h404-no/5.png
  [9]: https://lh4.googleusercontent.com/-aW6_mt_-wRQ/Uuv1kzZfXOI/AAAAAAAABZk/LufYhml6OPQ/w392-h377-no/6.png
  [10]: https://lh4.googleusercontent.com/-yhK7G_IHDbw/Uuv1lGwzKzI/AAAAAAAABZc/UdR3wTe5r4g/w491-h411-no/7.png
  [11]: https://lh6.googleusercontent.com/-VaVfDEGTy7Q/Uuv1lcOJRxI/AAAAAAAABZg/nNt4sIQvfwE/w457-h414-no/8.png
  [12]: https://lh5.googleusercontent.com/-IEQkIohL1x8/Uuv4li8qufI/AAAAAAAABak/Fc_sz5GXXZM/w497-h413-no/9.png
  [13]: https://lh4.googleusercontent.com/-XI9hBSfPlP0/Uuv4jIfiFpI/AAAAAAAABZ0/Tgnh0vIbexk/w475-h430-no/10.png
  [14]: https://lh5.googleusercontent.com/-6MkW6xXXX1I/Uuv4jtQWByI/AAAAAAAABaE/35vGTxX2csA/w510-h439-no/11.png
  [15]: https://lh5.googleusercontent.com/-yqOByNTVP_4/Uuv4j1F7pgI/AAAAAAAABaI/LeV-67KBJ0g/w489-h427-no/12.png
  [16]: https://lh6.googleusercontent.com/-TjmbGv4RTsY/Uuv4kKY_-KI/AAAAAAAABaM/-pO0royMH5g/w487-h410-no/13.png
  [17]: https://lh6.googleusercontent.com/-Os6CO1SseJg/Uuv4knkwGqI/AAAAAAAABaU/7Ut_TX2UbBM/w497-h429-no/14.png
  [18]: https://lh4.googleusercontent.com/-dkgEz6Z8eE0/Uuv4lq0wNLI/AAAAAAAABag/3L3RADcVvLU/w508-h422-no/15.png