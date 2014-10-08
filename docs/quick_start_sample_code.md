# PrintIO iOS SDK Basic Usage

Below is sample code for launching a customized PrintIO widget.  For reference, almost all in-code customization options are included.  

Additionally, There are some items we also allow customization of via an [XML file][8].

Be sure to follow the Project Setup guide above before attempting to use the PrintIO sample code.

Example how to run PrintIO widget:

``` Objective-C
- (IBAction)runPrintIO:(id)sender
{
    // RecipeId is developer defined and provided by PrintIO Account and Sales Team
    PrintIO *printIO = [[PrintIO alloc]initWithViewController:vc
                                                  environment:kEnvironment
                                           productionRecipeId:pRecipeId
                                              stagingRecipeId:sRecipeId];

    // Set Delegate
    [printIO setDelegate:self];

    // Customization goes here....
    // ...
    
    // Start widget
    [printIO open];
};
```

You can also use our ```PrintIODelegate``` methods in your presenting view controller:

``` Objective-C
- (void)PrintIOWidgetOnOpen
{
    NSLog(@"PrintIOWidgetOnOpened");
}
- (void)PrintIOWidgetOnCloseWithData:(NSDictionary *)data
{
    NSLog(@"Returned data: %@", data);
}
```

Delegate method ```PrintIOWidgetOnCloseWithData``` provides key/value pairs:

``` Objective-C
{
    flag = 0;
    "num_of_items_in_shopping_cart" = 3; // number of current items in shopping cart
    "order_data" = "";
}
```
after successful order:

``` Objective-C
    "order_data" = {
        items = (                       // items from cart, included in order
            {
             ship_options = (           // json string with shipping options
                "{
                 "price" : "$6.00",
                 "method_type" : "Standard",
                 "carrier_name" : "Standard",
                 "name" : "Standard",
                 "ship_option_id" : "1",
                 "days_till_delivery" : "12"
                }"
             );
             skus = (                   // array of skus included in order
                "ThickPrints_4x6_24set"
             );
            }
        );
        order_id = "Stive7-a3e";        // order id
        overall = "$17.99";             // total price including shipping
        "shipping_info" = {             // shipping info for order
            city = "SANTA MONICA";
            country = "United States";
            country_code = US;
            email = "test@test.com";
            first_name = John;
            last_name = Stivens;
            phone = 1234567890;
            state = CA;
            street = "320 WILSHIRE BLVD";
            street2 = "";
            zip_code = "90401-1315";
        };
    };
```


[8]: https://github.com/printdotio/printio-ios-sdk/blob/master/docs/customization.xml.md
