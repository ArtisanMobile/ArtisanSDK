//
//  ARManager.h
//
//  Copyright (c) 2014 Artisan Mobile. All rights reserved.
//
//  version: 2.0.17
//

#import <Foundation/Foundation.h>

/*
 * This string constant can be used to set an boolean value @YES or @NO in the options dictionary which is an optional argument to startWithAppId:version:options:. Setting this to @YES will allow no one to perform the gesture on a device. The gesture recognizer is not added. @NO is the default.
 */
extern NSString *const ARManagerNeverEnableArtisanGesture;

/**
* Initializes Artisan and manages its lifecycle.
*
* ARManager is a singleton that is automatically initialized when your app starts.  Use ARManager to connect to Artisan and automatically download all experiments, configuration, and published changes for your app.
*
*/

@interface ARManager : NSObject

/** Start your Artisan instance.
 *
 * Use this method to start Artisan.  This declaration should occur at the top of the `didFinishLaunchingWithOptions:` method of your main app delegate.
 *
 * @param appId The Artisan ID for your app (e.g. '506adf5ed6fbbc5222000018'). This ID is available in your Aritsan Tools dashboard.
 */
+(void)startWithAppId:(NSString *)appId;

/** Start your Artisan instance.
*
* Use this method to start Artisan.  This declaration should occur at the top of the `didFinishLaunchingWithOptions:` method of your main app delegate.
*
* @param appId The Artisan ID for your app (e.g. '506adf5ed6fbbc5222000018'). This ID is available in your Aritsan Tools dashboard.
*
* @param version The Artisan version number for your app (e.g '1.0'). This corresponds with the 'Current Version' value in your Artisan Tools dashboard for this app.
*/
+(void)startWithAppId:(NSString *)appId version:(NSString *)version __attribute__((deprecated));

/** Start your Artisan instance.
 *
 * Use this method to start Artisan.  This declaration should occur at the top of the `didFinishLaunchingWithOptions:` method of your main app delegate.
 *
 * @param appId The Artisan ID for your app (e.g. '506adf5ed6fbbc5222000018'). This ID is available in your Aritsan Tools dashboard.
 *
 * @param options Dictionary of configuration options. These options will override the Artisan defaults.
 */
+(void)startWithAppId:(NSString *)appId options:(NSDictionary *)options;

/** Start your Artisan instance.
*
* Use this method to start Artisan.  This declaration should occur at the top of the `didFinishLaunchingWithOptions:` method of your main app delegate.
*
* @param appId The Artisan ID for your app (e.g. '506adf5ed6fbbc5222000018'). This ID is available in your Aritsan Tools dashboard.
*
* @param version The Artisan version number for your app (e.g '1.0'). This corresponds with the 'Current Version' value in your Artisan Tools dashboard for this app.
*
* @param options Dictionary of configuration options. These options will override the Artisan defaults.
*/
+(void)startWithAppId:(NSString *)appId version:(NSString *)version options:(NSDictionary *)options __attribute__((deprecated));

/** Set userId for Artisan Logging.
 *
 * Use this method to setup the userId for sending a log message through the Artisan SDK.
 *
 * @param userId The string used to uniquely identify a user's device.
 *
 */
+(void)setLogMessageUserId:(NSString *)userId;

/** Log a message.
 *
 * Use this method to send a log message through the Artisan SDK.
 *
 * @param message The log message.
 *
 */
+(void)logMessage:(NSString *)message;

@end
