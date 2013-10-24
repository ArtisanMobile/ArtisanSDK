UXFLIP-iOS
==========

## Important Targets in the Xcode Project:

 - ArtisanSDK: The core SDK
 - Framework: Builds all the necessary framework bundles/files
 - ArtisanSDK Bundle: Bundle of necessary assets for ArtisanSDK
 - ArtisanDemo app: Built in testing app
 - Artisan-UnitTest: Contains the unit tests for the SDK

## Adding ArtisanSDK to an app


### Step 1: Build Master Framework

After pulling down the project, Build the "Master Framework" or "Master Framework Production" (production version does not contain debug messages). This will create the following files in the *actual* Products directory:
 
 - ArtisanSDK.framework
 - ArtisanSDK.bundle
 - ArtisanAnalytics.bundle

### Step 2: Add SDK Files to Project

Now that those files are added, you can access them by opening up the Products folder in the navigator, right clicking the libArtisanSDK.a file, and clicking "Show in Finder". 
From Finder drag and drop the three files from above onto your Xcode Project.

### Step 3: Add Required Frameworks

From the navigator click on your Project, select your App's Target, and finally select "Summary". Scroll down to the Linked Frameworks and Libraries and add the following:

 - CoreData.framework
 - CFNetwork.framework
 - Security.framework
 - QuartzCore.framework
 - libz.dylib

### Step 4: Add ObjC Linker Flag

Still from your App's Target, select "Build Settings" at the top. Make sure that you are displaying All settings and search for "Linking". In Linking add "-ObjC" to your "Other Linker Flags" setting.

### Step 5: Run the SDK

Include `<ArtisanSDK/ArtisanSDK.h>` in your app delegate, and add the following line immediately before `return YES` in `application:didFinishLaunchingWithOptions:`:

    [ARManager startWithAppId:@"50ec8ef61d242f497600001b" version:@"1.0" options:nil];
    
You can change the AppId as needed. 

## Adding to the Cedar tests

The unit tests in the UXFLIP-iOs project are written using Cedar. Install [Cedar](https://github.com/pivotal/cedar) to make it easier to add new specs and test methods.


