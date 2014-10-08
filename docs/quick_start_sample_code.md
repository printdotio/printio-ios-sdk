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



[8]: https://github.com/printdotio/printio-ios-sdk/blob/master/docs/customization.xml.md
