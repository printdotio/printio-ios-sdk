Developer SDK Customization reference (XML)
===========================================

Some UI elements can be customized via XML code. In order to use it, create XML file with customization, and load it using method [*-setCustomizationXML*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/code_customization.md#--setcustomizationxml).

  - [**Screens**]()
    - [*Choose Country*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#choose-country)
    - [*Product Details*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#product-details)
    - [*Image Preview*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#image-preview)
    - [*Photo Sources*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#photo-sources)
    - [*Customize Product*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#customize-product)
    - [*Image Editor*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#image-editor)
    - [*Shopping Cart*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#shopping-cart)
    - [*Add Address*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#add-address)
    - [*Address Validation*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#address-validation)
    - [*Select Address*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#select-address)
    - [*Shipment Review*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#shipment-review)
    - [*Payment Options*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#payment-options)
    - [*Credit Card*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#credit-card)
    - [*Payment Date Picker*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#payment-date-picker)
    - [*Order Confirmation*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#order-confirmation)
  - [**Dialogs**]()
    - [*Dialog Two Buttons*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#dialog-two-buttons)
    - [*Dialog Arrange Photos*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#dialog-arrange-photos)
    - [*Dialog Address Type*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#dialog-address-type)
    - [*Dialog Loading*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#dialog-loading)
    - [*Dialog Select ZIP Code*](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/xml_customization_new.md#dialog-select-zip-code)

###Choose Country
```XML
<customization>
  <screen name="choose_country">
    <button name="button_no"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_yes" title="title" bcg_color="#2277D4" font_color="#ffffff"/>
  </screen>
</customization>
```
![](https://dl.dropboxusercontent.com/u/19321066/printIO/iOS-Simulator-Screen-Shot-Oct-27%2C-2014%2C-5.07.36-PM.png)
###Product Details
```XML
<customization>
  <screen name="product_details">
    <button name="button_create"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" bcg_image_name="bcg_image_name" bcg_image_format="image_format" />
    <image_view name="icon_1" image_name="image_name" image_format="image_format" />
    <image_view name="icon_2" image_name="image_name" image_format="image_format" />
    <image_view name="icon_3" image_name="image_name" image_format="image_format" />
    <image_view name="icon_4" image_name="image_name" image_format="image_format" />
    <label name="label_1" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <label name="label_2" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <label name="label_3" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <label name="label_4" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
![](https://dl.dropboxusercontent.com/u/19321066/printIO/iOS-Simulator-Screen-Shot-Oct-27%2C-2014%2C-5.21.16-PM.png)   ![](https://dl.dropboxusercontent.com/u/19321066/printIO/iOS-Simulator-Screen-Shot-Oct-27%2C-2014%2C-5.21.19-PM.png)
###Image Preview
```XML
<customization>
  <screen name="image_preview">
    <button name="button_close"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
![](https://dl.dropboxusercontent.com/u/19321066/printIO/iOS-Simulator-Screen-Shot-Oct-27%2C-2014%2C-5.35.16-PM.png)
###Photo Sources
```XML
<customization>
  <screen name="photo_sources">
    <button name="button_next"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <label name="label_title"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <label name="label_down"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
![](https://dl.dropboxusercontent.com/u/19321066/printIO/iOS-Simulator-Screen-Shot-Oct-27%2C-2014%2C-5.35.32-PM.png)
###Customize Product
```XML
<customization>
  <screen name="customize_product">
    <button name="button_help" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <image_view name="pop_up_image_view" image_name="image_name" image_format="image_format" />
    <label name="pop_up_label" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
![](https://dl.dropboxusercontent.com/u/19321066/printIO/iOS-Simulator-Screen-Shot-Oct-27%2C-2014%2C-5.46.49-PM.png)
###Image Editor
```XML
<customization>
  <screen name="image_editor">
    <button name="button_back" title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format"/>
    <button name="button_save" title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format"/>
    <button name="button_1" title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format"/>
    <button name="button_2" title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format"/>
    <button name="button_3" title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format"/>
    <button name="button_4" title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format"/>
  </screen>
</customization>
```
###Shopping Cart
```XML
<customization>
  <screen name="shopping_cart">
    <button name="button_edit"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_check_out"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Add Address
```XML
<customization>
  <screen name="add_address">
    <button name="button_save"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_pick"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Address Validation
```XML
<customization>
  <screen name="address_validation">
    <button name="button_accept"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_edit"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_edit_down"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Select Address
```XML
<customization>
  <screen name="select_address">
    <button name="button_edit"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_add"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Shipment Review
```XML
<customization>
  <screen name="shipment_review">
    <button name="button_enter"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_remove"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Payment Options
```XML
<customization>
  <screen name="payment_methods">
    <button name="button_pay"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_pay_down"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Credit Card
```XML
<customization>
  <screen name="credit_card">
    <button name="button_1"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_2"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Payment Date Picker
```XML
<customization>
  <screen name="payment_date_picker">
    <button name="button_1"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Order Confirmation
```XML
<customization>
  <screen name="order_confirmation">
    <button name="button_close"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Dialog Two Buttons
```XML
<customization>
  <screen name="dialog_two_buttons">
    <button name="button_left"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <button name="button_right"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Dialog Arrange Photos
```XML
<customization>
  <screen name="dialog_two_buttons">
    <button name="button_left"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format" />
    <button name="button_right"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format"/>
    <label name="label_left" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <label name="label_right" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Dialog Address Type
```XML
<customization>
  <screen name="dialog_address_type">
    <button name="button_left"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format" />
    <button name="button_right"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" image_name="image_name" image_format="image_format"/>
    <label name="label_left" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
    <label name="label_right" title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Dialog Loading
```XML
<customization>
  <screen name="dialog_loading">
    <button name="button_1"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
###Dialog Select ZIP Code
```XML
<customization>
  <screen name="button_cancel">
    <button name="button_1"  title="title" bcg_color="#D1D1D1" font_color="#2277D4" />
  </screen>
</customization>
```
