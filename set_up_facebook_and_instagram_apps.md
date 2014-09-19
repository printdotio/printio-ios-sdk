# How to Set Up Facebook and Instagram apps

## Facebook app

- Go to https://developers.facebook.com/. Choose an existing app or type the name of your new one, select iOS platform to get started. Set up all necessary things.

### Screenshots

| Facebook Test app |
| :---- | :---- |
| ![enter image description here][1] |

### NOTE: This is the sample video how to set up your Facebook app: 
https://dl.dropboxusercontent.com/u/19321066/fb_auth.m4v

### Check these settings and set:

- **Disable implicit OAuth:** needs to be unchecked
- **Enforce signed header:** needs to be unchecked
- **Redirect URI:** http://spark.mode/ (this is an example URI), everything else stays default
- **Bundle is:** bundle.identifier

### Facebook Settings -> Advanced:

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

---


[1]: https://lh6.googleusercontent.com/-k0q4YoDHHRw/VBwaKzePCLI/AAAAAAAAAFI/D6VUhe0dLB0/w825-h553-no/testfb.jpg
