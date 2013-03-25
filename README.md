Installing the [ArtisanSDK](useartisan.com) via [CocoaPods](cocoapods.org)
=================

If your project is already using [CocoaPods](cocoapods.org) for managing your library dependencies you may wish to install the Artisan SDK in the same way. If you do not currently use CocoaPods, but would like to, this is an alternative method to install, manage, and update Artisan in your project.

Installing CocoaPods
=========
Installing CocoaPods is easy!

From the terminal:
```
$ [sudo] gem install cocoapods
$ pod setup
```

Creating/Editing a Podfile
============
In order to manage your library dependecies with CocoaPods you need to [create a podfile](http://docs.cocoapods.org/podfile.html).

Create a file called `podfile` in the root directory of your project with the following:

```
platform :ios, '5.0'  # minimum ios version for Artisan

pod 'artisan-sdk', :git => "https://github.com/appRenaissance/artisan-sdk.git"
```

If you are already using CocoaPods, you can just add the pod line to your existing pod file and update the minimum iOS platform version.

The above line will use the latest version of Artisan. Should you choose to lock yourself at a version you can modify that line:
`pod 'artisan-sdk', :git => "https://github.com/appRenaissance/artisan-sdk.git", '~>1.0.3'`

Install Dependencies
============
Installing your dependencies is as easy as executing `pod install` from the location of your podfile. Should you want to update Artisan to a newer version, you can update your podfile to reflect that version and re-run `pod install`.

Important
=============
When you install your dependencies, CocoaPods will create an _**.xcworkspace**_ for your project. You will need to open this instead of your .xcodeproj file whenever you want to work with your project from this point forward. 

The workspace keeps your code separate from the dependencies managed by CocoaPods while keeping track of the required build settings for each sub-project and implementing them on a per-project basis.


Enabling Artisan in Your Project
=============
To enable Artisan at this point requires the addition of two lines to your AppDelegate file.

At the top of the file with your other import statements, add:
``` objective-c
#import <ArtisanSDK/ArtisanSDK.h>
```

Inside your application:didFinishLaunchingWithOptions: method, add the following line before all `return YES;` lines.
``` objective-c
[ARManager startWithAppId:@"##########################" version:@"1.0" options:nil];
```
where ################### is the application ID of your app. This can be found by logging in to artisantools.com, selecting your app and looking at the URL. It should look like `https://artisantools.com/apps/##########################`. What takes the place of the #'s is your applications ID.
