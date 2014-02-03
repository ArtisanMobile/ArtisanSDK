//
//  ARTrackingManager.h
//
//  Copyright (c) 2014 Artisan Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Manages all in-code analytics tracking designed for use with Artisan, to allow you
 * to track both views and events.
 */

@interface ARTrackingManager : NSObject

/** Tracks an event with Artisan
 *
 * Use this to track any custom events you'd like to view in your Artisan dashboard.
 *
 * @param eventName The name of the event you're tracking, e.g. "Purchased Product" or "Logged In".
 */

+ (void)trackEvent:(NSString *)eventName;

/** Track an event with Artisan with additional data.
 *
 * Use this to track an event with Artisan and also supply additional data.
 * For instance, if you have a product page that you want to check, but you
 * also want to be able to know which products are being viewed, you could
 * track an event named "Viewed Product" and pass the product id as additional data.
 *
 * @param eventName The name of the event you're tracking, e.g. "Purchased Product" or "Logged In".
 *
 * @param parameters An NSDictionary representing additional parameters associated with the event. All keys and values must be NSString objects, or they will be ignored.
 */

+ (void)trackEvent:(NSString *)eventName parameters:(NSDictionary *)parameters;

@end
