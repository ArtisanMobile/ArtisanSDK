//
//  ARConfigManager.h
//  ARUXFLIP
//
//  Created by Daniel Koch on 11/6/12.
//
//

#import <Foundation/Foundation.h>

/**
* Manages all dynamic configuration settings used with Artisan. This includes:
*
* - Registering settings to be defined dynamically by Artisan Tools.
* - Referecing these settings in the code.
* - Providing test methods to verify the impact of different settings on your app code.
*
* Dynamic configuration settings are key-value pairs that are passed into your application code by Artisan when your app starts, allowing for settings, text, and logic to be modified on the fly for all user devices without revisioning or updating your application.  
*
* ARConfigManager is a singleton that is automatically initialized when your app starts.
*
* All dynamic configuration settings created using ARExperimentManager can be registered with Artisan Tools automatically.  The registration process will detect all registered configuration keys, and will create a list of settings for this app in Artisan Tools.  Values passed to this list will automatically be downloaded by all devices upon app startup, allowing for their usage throughout your system code.
*/


@interface ARConfigManager : NSOperation

/**
* Registers a dynamic configuration option for use with Artisan.
*
* Use this method to declare the existence of a configuration setting you would like to pass in from Artisan.  This declaration should occur in the `didFinishLaunchingWithOptions:` method of your main app delegate, *after* you start Artisan using the `[ARManager startWithAppId:version:]` method.
*
* @param configurationId The name of the configuration setting to register. Name must be unique for this app.
*
* @param defaultValue The default value for this setting.  This value will be used if no value is passed in from Artisan Tools for this app.
*/

+(void)registerConfigurationWithId:(NSString *)configurationId defaultValue:(NSString *)defaultValue;


/**
* Gets the value of a dynamic configuration setting.
*
* Use this method to get the value of a dynamic configuration setting from Artisan.  This will return the value specified in Artisan Tools, or the default value if none has been specified.
*
* @param configurationId The name of the configuration setting you wish to retrieve. Will return nil if the setting has not been registered.
*/

+(NSString *)getValueForConfigurationById:(NSString *)configurationId;


/** Set the value of a dynamic configuration setting manually.
*
* Use this method to manually apply a value to an Artisan configuration setting.  The app will behave as if this value has been passed from Artisan Tools, and all calls to getValueForConfigurationId: for this configurationId will return this value.
*
* This method should be called in the `didFinishLaunchingWithOptions:` method of your main app delegate, immediately after regstering the corresponding configurationId.
*
* @warning *Note:* This method is intended for local test and QA use only, and should *not* be used within production code.
*
* @param configurationId The name of the configuration setting whose value you want to set.
*
* @param value The value you want to specify for this configuration setting.  If the configuration setting has not been registered, this will be ignored.
*/

+(void)setValueForConfigurationById:(NSString *)configurationId value:(NSString *)value;


@end
