
# XML Customization of UI elements

## Choose Country screen

### Code Sample

``` XML
<customization>
    <screen name="choose_country">
        <button name="button_no" bcg_color="#D1D1D1" font_color="#2277D4" />
        <button name="button_yes" bcg_color="#2277D4" font_color="#ffffff"/>
    </screen>
</customization>
```
### Screenshots

![enter image description here][3]

---

## Product Details screen

### Code Sample

``` XML
<customization>
    <screen name="product_details">
        <button name="button_create" bcg_color="#2277D4" font_color="#ffffff"/>
        <label name="label_1" font_color="#000000"/>
        <label name="label_2" font_color="#000000"/>
        <label name="label_3" font_color="#000000"/>
        <label name="label_4" font_color="#000000"/>
        <label name="label_5" font_color="#000000"/>
    </screen>
</customization>
```

### Screenshots

![enter image description here][4]

---

## Product Details screen icons

``` XML
<customization>
    <screen name="product_details">
        <image_view name="icon_1" image_name="icon_small_details" image_format="png"/>
        <image_view name="icon_2" image_name="icon_small_shipping" image_format="png"/>
        <image_view name="icon_3" image_name="icon_small_quality_g" image_format="png"/>
    </screen>
<customization>
```


---

## Two-button Dialog

### Code Sample

``` XML
<customization>
    <screen name="dialog_two_buttons">
        <button name="button_right" bcg_color="#2277D4" font_color="#ffffff"/>
        <button name="button_left" bcg_color="#D1D1D1" font_color="#2277D4"/>
    </screen>
</customization>
```

### Screenshots

![enter image description here][5]

---

## Arrange Photos Dialog

### Code Sample

``` XML
<customization>
    <screen name="dialog_arrange_photos">
        <button name="button_right" bcg_color="#2277D4" image_name="btn_drag_drop" image_format="png"/>
        <button name="button_left" bcg_color="#D1D1D1" image_name="btn_arrange" image_format="png"/>
        <label name="label_right" font_color="#ffffff"/>
        <label name="label_left" font_color="#2277D4"/>
    </screen>
</customization>
```

### Screenshots

![enter image description here][6]

---

## Address Type Dialog

### Code Sample

``` XML
<customization>
    <screen name="dialog_address_type">
        <button name="button_right" bcg_color="#2277D4" image_name="btn_home" image_format="png"/>
        <button name="button_left" bcg_color="#D1D1D1" image_name="btn_business" image_format="png"/>
        <label name="label_right" font_color="#ffffff"/>
        <label name="label_left" font_color="#2277D4"/>
    </screen>
</customization>
```

### Screenshots

![enter image description here][7]

---

## Product Image Preview Screen

### Code Sample

``` XML
<customization>
    <screen name="image_preview">
        <button name="button_close" bcg_color="#ff0000" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][8]

---

## Shopping Cart Screen

### Code Sample

``` XML
<customization>
    <screen name="shopping_cart">
        <button name="button_check_out" bcg_color="#990022" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][9]

----------

## Add Address Screen

### Code Sample

``` XML
<customization>
    <screen name="add_address">
        <button name="button_save" bcg_color="#446723" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][10]

----------

## Select Address Screen

### Code Sample

``` XML
<customization>
    <screen name="select_address">
        <button name="button_edit" bcg_color="#446723" font_color="#ffffff" />
        <button name="button_add" bcg_color="#990022" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][11]


----------

## Address Validation Screen

### Code Sample

``` XML
<customization>
    <screen name="address_validation">
        <button name="button_accept" bcg_color="#446723" font_color="#ffffff" />
        <button name="button_edit" bcg_color="#990022" font_color="#ffffff" />
        <button name="button_edit_down" bcg_color="#990022" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][12]

----------

## Shipment Review Screen

### Code Sample

``` XML
<customization>
    <screen name="shipment_review">
        <button name="button_enter" bcg_color="#446723" font_color="#ffffff" />
        <button name="button_remove" bcg_color="#553388" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][13]


----------

## Payment Methods Screen

### Code Sample

``` XML
<customization>
    <screen name="payment_methods">
        <button name="button_pay" bcg_color="#446723" font_color="#ffffff" />
        <button name="button_pay_down" bcg_color="#990022" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][14]


----------

## Photo Sources Screen

### Code Sample

``` XML
<customization>
    <screen name="photo_sources">
        <label name="label_title" bcg_color="#ffffff" font_color="#446723" />
        <label name="label_down" bcg_color="#990022" font_color="#ffffff" />
        <button name="button_next" bcg_color="#446723" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter link description here][15]

----------

## Customize Product Screen

### Code Sample

``` XML
<customization>
    <screen name="customize_product">
        <button name="button_buy" bcg_color="#446723" font_color="#ffffff" />
        <button name="button_back" bcg_color="#990022" font_color="#ffffff" />
        <button name="button_help" bcg_color="#990022" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][16]

----------

## Product Preview Screen

### Code Sample

``` XML
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
```

### Screenshots

![enter image description here][17]


----------


## Order Confirmation Screen

### Code Sample

``` XML
<customization>
    <screen name="order_confirmation">
        <button name="button_close" bcg_color="#446723" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][18]


----------

## Customize Books Screen

### Code Sample

``` XML
<customization>
    <screen name="customize_books">
        <button name="button_back" bcg_color="#446723" font_color="#ffffff" />
        <button name="button_buy" bcg_color="#990022" font_color="#ffffff" />
    </screen>
</customization>
```

### Screenshots

![enter image description here][19]


----------

##  Image Editor Scren

### Code Sample

``` XML
<customization>
    <screen name="image_editor">
        <button name="button_back" bcg_color="#446723" font_color="#ffffff" />
        <button name="button_save" bcg_color="#990022" font_color="#ffffff" />
    </screen>
</customization>
```
### Screenshots

![enter link description here][20]


  [1]: https://lh5.googleusercontent.com/-18qrMfgPFUA/U1agy25l1aI/AAAAAAAABhI/21Bg4E2MfOY/w284-h199-no/c_sta_bar.png
  [2]: https://lh3.googleusercontent.com/-iwfn8qWXwvQ/U1ag09L9vFI/AAAAAAAABhQ/3oth_zq3NAU/w624-h483-no/c_loading.png
  [3]: https://lh6.googleusercontent.com/-eO52j3ezoBc/U3NmWmeG2HI/AAAAAAAABiI/e7_cJJq8q0U/w724-h543-no/new_1.png
  [4]: https://lh6.googleusercontent.com/-UEeaODA4QFQ/U3NuaPlAq5I/AAAAAAAABic/vx6LaUKsgMY/w665-h499-no/new_2.png
  [5]: https://lh5.googleusercontent.com/-DHjF-7ICTjM/U3NxyBrN9EI/AAAAAAAABi0/j5wEVDoD_CE/w665-h499-no/new_3.png
  [6]: https://lh4.googleusercontent.com/-z9UhSkFoMG0/U3NxydcZ8FI/AAAAAAAABjA/lPHNBXgZzrc/w665-h499-no/new_4.png
  [7]: https://lh5.googleusercontent.com/-dOZOkssFcbY/U3NxyQSwICI/AAAAAAAABi8/EDQCoh2BqtE/w665-h499-no/new_5.png
  [8]: https://lh3.googleusercontent.com/-vjkD_NIiDEU/Uuv1keaWBQI/AAAAAAAABZE/DSIRrxtNXCU/w440-h380-no/3.png
  [9]: https://lh5.googleusercontent.com/-xautWbUI1h4/U3N1ATvkreI/AAAAAAAABjY/p7gx_NNWkTA/w665-h499-no/new_6.png
  [10]: https://lh6.googleusercontent.com/-rXMwPIDrPRE/Uuv1k-ukafI/AAAAAAAABZM/rgsdzKyapgg/w417-h404-no/5.png
  [11]: https://lh4.googleusercontent.com/-aW6_mt_-wRQ/Uuv1kzZfXOI/AAAAAAAABZk/LufYhml6OPQ/w392-h377-no/6.png
  [12]: https://lh4.googleusercontent.com/-yhK7G_IHDbw/Uuv1lGwzKzI/AAAAAAAABZc/UdR3wTe5r4g/w491-h411-no/7.png
  [13]: https://lh6.googleusercontent.com/-VaVfDEGTy7Q/Uuv1lcOJRxI/AAAAAAAABZg/nNt4sIQvfwE/w457-h414-no/8.png
  [14]: https://lh5.googleusercontent.com/-IEQkIohL1x8/Uuv4li8qufI/AAAAAAAABak/Fc_sz5GXXZM/w497-h413-no/9.png
  [15]: https://lh4.googleusercontent.com/-XI9hBSfPlP0/Uuv4jIfiFpI/AAAAAAAABZ0/Tgnh0vIbexk/w475-h430-no/10.png
  [16]: https://lh5.googleusercontent.com/-6MkW6xXXX1I/Uuv4jtQWByI/AAAAAAAABaE/35vGTxX2csA/w510-h439-no/11.png
  [17]: https://lh5.googleusercontent.com/-yqOByNTVP_4/Uuv4j1F7pgI/AAAAAAAABaI/LeV-67KBJ0g/w489-h427-no/12.png
  [18]: https://lh6.googleusercontent.com/-TjmbGv4RTsY/Uuv4kKY_-KI/AAAAAAAABaM/-pO0royMH5g/w487-h410-no/13.png
  [19]: https://lh6.googleusercontent.com/-Os6CO1SseJg/Uuv4knkwGqI/AAAAAAAABaU/7Ut_TX2UbBM/w497-h429-no/14.png
  [20]: https://lh4.googleusercontent.com/-_IK-PtpI2k4/U3N5n5qD0eI/AAAAAAAABj8/0QUNDtKl9_4/w665-h499-no/SDK+Customization+%25286%2529.png

## Ivans new methods


