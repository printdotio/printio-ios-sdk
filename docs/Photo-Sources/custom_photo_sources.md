Custom Photo Source API
===============

Since version 1.1.0 there is an option to add a custom photo source.

## Introduction

When selecting images, you have an option to include up to six photo sources from the following list:

- Phone
- Facebook
- Instagram
- Picasa
- Flickr
- Dropbox
- Preselected 

Since version 1.1 you have an ability to add your own custom photo source api to the list.

## Default implementation

There are two entities you should get familiar with: PIOPhotoSource and PIOPhotoSourceItem protocols. 

PIOPhotoSource protocol describes everything from authentication, paging, caching, lazy image downloading to how your images and albums will be displayed on the screen.

PIOPhotoSourceItem is a protocol that describes a single item that appears in the collection view. An image. An album. A folder. A back button.

We have created a default implementation of these protocols which you are advised to use:

    @interface PIODefaultPhotoSource : NSObject<PIOPhotoSource>

    @interface PIODefaultPhotoSourceItem : NSObject<PIOPhotoSourceItem>

What this basic implementation will do for you is:

- Add back button to each folder
- Provide session handling mechanism
- Implement all the basic methods with default values


## How to create a custom photo source

Let's see an example of a custom photo source implementation and walk through the flow. 

```Objective-C
    MyCustomPhotoSource* photoSource = [[MyCustomPhotoSource alloc] init];
    [printIO setCustomPhotoSources:@[photoSource]];
```

1.When SelectPhotos screen is displayed, a list of photo source buttons will be displayed on top of the screen.

![](https://www.dropbox.com/s/ops1sp8p9qe664x/IMG_1308.PNG?raw=1)

2.SDK will send a message to the PhotoSource in order to get the title:

```Objective-C
    -(NSString*)title;
```

as well as the icon path:

```Objective-C
    -(NSString*)buttonIconPath;
```

3.After the user taps on the button, SDK will send 

```Objective-C  
    -(BOOL)isAuthed;     
```

to the PhotoSource. In case the photo source does not require authentication, simply return YES. Otherwise, this is the place where you should check if the session token exists. In case you need to query the server asynchronously and check whether the token is valid, you can use the async call instead
 
 ```Objective-C
    -(void)isAuthedAsync:(void(^)(BOOL))authHandler;
```

4.If it returns NO, SDK will ask for an аuthViewController

```Objective-C
    -(UIViewController*)authViewController;
```

and display it modally from the existing navigation controller. **Do not attempt to display the controller yourself.**

5.When the controller is dismissed, SDK will check if the PhotoSource has been authed (3). If the authentication has been successful and your PhotoSource returns YES, SDK will now try to display the list of root items.

```Objective-C
    -(void)requestConcreteItems:(NSMutableArray*)items 
                        forItem:(id<PIOPhotoSourceItem>)item 
                        inScope:(id<PIOPhotoSourceItem>)currentScope 
                           page:(NSUInteger)page 
                          count:(NSUInteger)count 
          withCompletionHandler:(PIOItemsCompletionHandler)completionHandler 
                   errorHandler:(PIOPhotoSourceErrorHandler)errorHandler;
```

Lets go through the list of parameters:

- items : NSMutableArray - A list of items to which you add your images to. If the user queries for a non-root folder, this array will contain the back button before being passed to you.
- item : id< PIOPhotoSourceItem > - The item that the user selected. In case of the first call(root) this item is nil.
- currentScope : id< PIOPhotoSourceItem > - This is where the request has been sent from.
- page : NSUInteger - Page number. If your photo source doesn't support paging, ignore this.
- count : NSUInteger - Count per page. If your photo source doesn't support paging, ignore this.
- completionHandler : PIOItemsCompletionHandler - A completion handler which you should call if the request was successful. 
- errorHandler : PIOPhotoSourceErrorHandler - An error handler which you should call if an error occurred.

6.After you return the list of items to the SDK, it will attempt to display them. We recognize two types of items: images(selectable) and everything else(not selectable). 

The type of the item is determined by calling 

```Objective-C
-(BOOL)isImageItem;
```

for each PhotoSourceItem.

7.If you're using default implementations of PhotoSource and PhotoSourceItem, image download is pretty straightforward. DefaultPhotoSource will call DefaultPhotoSourceItem's 

```Objective-C
-(void)fetchImageInPhotoSource:(id<PIOPhotoSource>)photoSource isThumbnail:(BOOL)thumbnail withCompletionHandler:(void(^)(UIImage*))imageFetchCompletionHandler
```

method, which will delegate the call to the ImageDownloader. We have opted to decouple the downloading of the image from the photo source item, so it could be reused in other parts of the code without needing the actual item. What you need to do is create your own custom implementation which conforms to the ImageDownloader protocol and assign it to the DefaultPhotoSourceItems' property.

For example:

```Objective-C
_imageDownloader = [PIOPhotoSourceItemImageDownloader imageDownloaderWithBlock:^(PIOPicasaPhoto* item, id<PhotoSource> photoSource, BOOL isThumbnail ,PIOImageDownloadCompletionHandler completionHandler){
            NSString* URLString;
            if(isThumbnail){
                URLString = item.thumbnailUrl;
            }else{
                URLString = item.imageUrl;
            }
            UIImage* image = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:URLString]]];           
            completionHandler( image );
        }];
[picasaPhotoItem setImageDownloader:_imageDownloader];
```

**You should never cache the downloaded image, our SDK will take care of it.**

## Example

Check out the [photo source example](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Photo-Sources/Picasa.h), as well the [album item](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Photo-Sources/picasa_album_item.h) and the [photo item](https://github.com/printdotio/printio-ios-sdk/blob/master/docs/Photo-Sources/picasa_photo_item.h) examples.

