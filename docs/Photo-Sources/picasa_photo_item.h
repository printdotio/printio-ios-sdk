

@interface PIOPicasaPhoto : PIODefaultPhotoSourceItem

@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, strong) NSString *thumbnailUrl;

- (instancetype)initWithJSON:(NSObject *)json;

@end



@implementation PIOPicasaPhoto

- (instancetype)initWithJSON:(NSObject *)json
{
    self = [super init];
    if (self && json){

        // parse code

        int width = 1500;
        int height = 1500;

        NSObject *widthObj = [json valueForKey:@"gphoto$width"];
        if (widthObj){
            width = [[widthObj valueForKey:@"$t"]intValue];
        }

        NSObject *heightObj = [json valueForKey:@"gphoto$height"];
        if (heightObj){
            height = [[heightObj valueForKey:@"$t"]intValue];
        }

        if (!height || !width){
            height = 1500;
            width = 1500;
        }

        NSObject *mediaGroupObj = [json valueForKey:@"media$group"];
        if (mediaGroupObj){
            NSObject *mediaContentObj = [mediaGroupObj valueForKey:@"media$content"];

            if (mediaContentObj && [mediaContentObj isKindOfClass:[NSArray class]]){
                for (id item in ((NSArray *)mediaContentObj)){
                    if (item){
                        NSString *type = [item valueForKey:@"type"];
                        if ([type rangeOfString:@"image"].location != NSNotFound){
                            self.imageUrl = [item valueForKey:@"url"];
                            break;
                        }
                    }
                }
            }
        }

        // Set width and height on imageUrl
        NSString *fileName = [self.imageUrl stringByReplacingCharactersInRange:NSMakeRange(0, [self.imageUrl rangeOfString:@"/" options:NSBackwardsSearch].location) withString:@""];
        NSString *path = [self.imageUrl stringByReplacingCharactersInRange:NSMakeRange([self.imageUrl rangeOfString:@"/" options:NSBackwardsSearch].location, self.imageUrl.length - [self.imageUrl rangeOfString:@"/" options:NSBackwardsSearch].location) withString:@""];

        self.imageUrl = [NSString stringWithFormat:@"%@/w%i-h%i%@", path, width, height, fileName];
        self.thumbnailUrl = [NSString stringWithFormat:@"%@/s200%@", path, fileName];

        LogDev(@"picasa_photo imageUrl: %@", self.imageUrl);
        LogDev(@"picasa_thumb thumbUrl: %@", self.thumbnailUrl);
    }
    return self;
}


// We use the URL as a unique identifier
-(NSString *)uniqueIdentifier{
    return self.thumbnailUrl;
}

// publicURLPath is used when images can be accessed through a public link
// without authentication. This way, images are not uploaded to the server
// from the phone but only the link is passed.
-(NSString *)publicURLPath{
    if(self.imageUrl){
        return self.imageUrl;
    }else{
        return self.thumbnailUrl;
    }
}

// This method retusn YES by default, so we don't really have to override it
-(BOOL)isImageItem{
    return YES;
}

@end

