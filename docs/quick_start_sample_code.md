# PrintIO iOS SDK Basic Usage

Below is sample code for launching a customized PrintIO widget.  For reference, almost all in-code customization options are included.  

Additionally, There are some items we also allow customization of via an [XML file][8].

Be sure to follow the Project Setup guide above before attempting to use the PrintIO sample code.

Example how to run PrintIO widget:

``` Objective-C
- (IBAction)runPrintIO:(id)sender
{
    // UI CUSTOMIZATION
    //----------------------------------------------------------------------
    // Options to customize the UI ranging from general/overall to specific views

    
    // OPEN WIDGET
    //----------------------------------------------------------------------
    [self.printIO open];
};
```



[8]: https://github.com/printdotio/printio-ios-sdk/blob/master/docs/customization.xml.md
