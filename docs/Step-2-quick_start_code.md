# PrintIO iOS SDK Basic Usage

##### Below is sample code for launching a PrintIO widget. Be sure to follow the Project Setup guide before attempting to use the PrintIO sample code.

##### PrintIO widget works in two modes: staging and production. For both modes, 'recipeId' is required. Before you get production 'recipeId' from PrintIO, for staging mode use 'recipeId' below:

```Objective-C
static NSString *const sRecipeId = @"00000000-0000-0000-0000-000000000000";
```
##### Please email Tricia@print.io to set up an account to get access to the Admin panel and to receive your stores recipeIds. RecipeId is your stores Unique account/API key. It holds all of your unique data for your store including products, prices, addresses, product images, and other details. 

```Objective-C
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

##### You can also use our ```PrintIODelegate``` methods in your presenting view controller:

```Objective-C
- (void)PrintIOWidgetOnOpen
{
    NSLog(@"PrintIOWidgetOnOpened");
}
- (void)PrintIOWidgetOnCloseWithData:(NSDictionary *)data
{
    NSLog(@"Returned data: %@", data);
}
```

##### Delegate method ```PrintIOWidgetOnCloseWithData``` provides key/value pairs:

```Objective-C
{
    flag = 0;
    num_of_items_in_shopping_cart = 3;  // number of current items in shopping cart
    order_data = "";
}
```
after successful order:

```Objective-C
    order_data = {
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
        shipping_info = {               // shipping info for order
            city = "SANTA MONICA";
            country = "United States";
            country_code = "US";
            email = "test@test.com";
            first_name = "John";
            last_name = "Stivens";
            phone = "1234567890";
            state = "CA";
            street = "320 WILSHIRE BLVD";
            street2 = "";
            zip_code = "90401-1315";
        };
    };
```

##### Delegate method called after successfully placing an order:

```Objective-C
/**
@param printIO PrintIO widget(sender).
@param data NSDictionary containing order data.
 */
- (void)printIO:(PrintIO*)printIO didCompleteOrderWithData:(NSDictionary*)data;
```

# Basic Testing

### Staging Environment Testing Values

- Braintree Credit Card Testing Values
https://developers.braintreepayments.com/ios+ruby/reference/general/testing

That's it - now you're ready to develop an amazing application using the PrintIO SDK!

[8]: https://github.com/printdotio/printio-ios-sdk/blob/master/docs/customization.xml.md
