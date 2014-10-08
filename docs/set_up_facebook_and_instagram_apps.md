# How to Set Up Facebook and Instagram apps

## Facebook app

- Go to https://developers.facebook.com/. Choose an existing app or type the name of your new one, select iOS platform to get started. Set up all necessary things.

### Screenshots

| Facebook Test app |
| :---- | :---- |
| ![enter image description here][1] |

### NOTE: This is the sample video how to set up your Facebook app: 
https://dl.dropboxusercontent.com/u/19321066/fb_auth.m4v

### Facebook Settings - Advanced:

- **Redirect URI:** http://spark.mode/ (this is an example URI), everything else stays default
- **Bundle is:** bundle.identifier
- **Native or desktop app?** - NO
- **Deauthorize Callback URL** - Empty
- **Server IP Whitelist, Update Settings IP Whitelist** - Empty
- **Client OAuth Login** - YES
- **App Secret Proof for Server API calls** - NO
- **Embedded browser OAuth Login** - NO
- **Require 2-factor reauthorization** - NO
- **Valid OAuth redirect URIs** - http://spark.mode (this is an example)

### User Photos Permission to Facebook app
Here is the link how to do it: https://dl.dropboxusercontent.com/u/19321066/user_photos.m4v

**To add user_photos, you were being asked to provide the following:**
- App Notes
- iOS Simulator Build

### Screenshots

| App Notes |
| :---- | :---- |
| ![enter image description here][2] |


| iOS Simulator Build |
| :---- | :---- |
| ![enter image description here][3] |

### Notes for user_photos

**Please explain how you are using user_photos to enhance a person's in-app experience.**

Our app allows users to create custom-printed products with their own photos and images. By using user_photos in our app, users are able to pull their favorite photos from Facebook to print on the products of their choosing. 

**How it works:**

1. In the app, user selects the product they would like to customize with their photos 
2. Selects Facebook from the image sources options 
3. Sees the Facebook login interface
3. Logs in
4. Selects the photos they want from their albums
5. Applies photos to the customized design of selected products


**Please provide step-by-step instructions so our review team can reproduce how you are using user_photos in your app.** 


1. Open the app
2. Tap "Enter SparkMode" 
3. Tap the "S" icon at the top of the screen
4. Select "Go to Make Mode" in the modal
5. Select "Canvas Wraps"
6. Tap "Create It"
7. Select Square
8. Select 6x6 inch
9. Select "Black Wrap"
10. Select "3 images" 
11. Select "Facebook" in the top right 
12. Log into Facebook
13. Select images from Facebook albums. 
14. Tap "Next" in the bottom right and proceed to the canvas layout 

This process can be replicated for any other product.

---

## Instagram app

- Go to http://instagram.com/developer/. Register your application, and set up "Developer Signup".

### Screenshots

| Manage Clients |
| :---- | :---- |
| ![enter image description here][4] |

### Check these settings and set:

- **Disable implicit OAuth:** needs to be unchecked
- **Enforce signed header:** needs to be unchecked
- **Redirect URI:** - sparkmode://auth (this is an example) everything else stays default

---

[1]: https://lh6.googleusercontent.com/-k0q4YoDHHRw/VBwaKzePCLI/AAAAAAAAAFI/D6VUhe0dLB0/w825-h553-no/testfb.jpg
[2]: https://lh4.googleusercontent.com/-QPlzqejfPlQ/VBwjPfQjLRI/AAAAAAAAAF8/vqG8-auuz_s/w639-h510-no/notes%2Bfor%2Buser%2Bphotos.png
[3]: https://lh3.googleusercontent.com/-mdnBh3-W4kg/VBwjMi3DQbI/AAAAAAAAAF0/xhQQ_8OAMW0/w633-h510-no/provide%2Byour%2BiOS%2Bapp.png
[4]: https://lh3.googleusercontent.com/-p84uH4exjS8/VBxFqgq0ECI/AAAAAAAAAGk/3SJqWaCZXpM/w765-h447-no/instagramapp.png 
