##########################################
##           ARTISAN iOS SDK            ##
##########################################

Thanks for signing up and welcome to Artisan! Before you can start analyzing, personalizing, optimizing, and modifying your app you'll need to install the Artisan SDK. Installing the SDK requires technical knowledge of your app, so if you aren't familiar with the inner workings of your app you can forward this information to your development team.

1. Unzip this distribution package.  This should contain two files in addition to this README:

   * ArtisanSDK.bundle
   * ArtisanSDK.framework

2. Import these two files into your XCode project by dragging them into the Project Navigator on the left-hand side.

3. Confirm that the Artisan files have been imported properly by executing the following:

   * Navigate to your project build settings by selecting your project’s Project File in the Project Navigator
   * Select the main build target for your app
   * Select the ‘Build Phases’ task
   * Confirm that ‘ArtisanSDK.framework’ is in the ‘Link Binary With Libraries’ Section
   * Confirm that ‘ArtisanSDK.bundle’ are in the ‘Copy Bundle Resources’ section

4. Ensure these system frameworks are included in the ‘Link Binary With Libraries’ section of your app:

   * CoreLocation.framework
   * SystemConfiguration.framework
   * QuartzCore.framework
   * Security.framework
   * CFNetwork.framework
   * CoreData.framework
   * libz.dylib

For any that aren’t included, select the ’+’ icon in the lower-left corner of that section and select it from the popup window.

5. Ensure your project has the correct build settings by executing the following:

   * Navigate to the ‘Build Settings’ tab of your project build settings.
   * Navigate to ‘Other Linker Flags’
   * Ensure that ‘-ObjC’ is included as an entry in ‘Other Linker Flags’ for all environments

   Hint: Read more about the -ObjC linker flag in Apple's Technical Article Building Objective-C static libraries with categories.

6. Navigate to the main App Delegate class for your project.

7. Add the following import statement to the top of the .m file for the App Delegate:
   
   #import <ArtisanSDK/ArtisanSDK.h>

8. Add the following line to the bottom of the didFinishLaunchingWithOptions: method of the AppDelegate.

      [ARManager startWithAppId:@"<YOUR APPLICATION ID>"];


   Important: Make sure to fill in the parameter startWithAppId with your AppID, provided by us. You can always find your application ID in your app's Setting page.

9. Build your app as normal.

You should now be able to build your app and successfully connect it to Artisan.

=====CONNECTING YOUR APP=====

Once the SDK is installed, we need to connect your app to Artisan. Connecting your app verifies that the SDK has been installed correctly and that your app can communicate with the Artisan platform. Follow the instructions on-screen, and you will be able to get your app connected, which will allow you to get started managing your mobile experience with Artisan.

Thanks!

-- The Artisan Team
