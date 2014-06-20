//
//  ARExperimentDetails.h
//
//  Copyright (c) 2014 Artisan Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * An object containing useful information about an in-code experiment
 **/

@interface ARExperimentDetails : NSObject

/**
 * The name of the experiment.
 */
@property (nonatomic, readonly) NSString *name;

/**
 * The description of the experiment.
 */
@property (nonatomic, readonly) NSString *descriptionOfExperiment;

/**
 * An `NSArray` containing the defined variants for the experiment (as `NSString` objects).
 */
@property (nonatomic, readonly) NSArray *variants;

/**
 * The name of the default variant for the experiment. If no variant has been
 * explicitly defined as the default, it's assumed to be the first variant
 * that was added.
 */
@property (nonatomic, readonly) NSString *defaultVariant;

/**
 * The current variant for the test. If the test is not running, the
 * default variant is returned. When setting, any values that are not
 * already defined as variants will be ignored.
 */
@property (nonatomic, retain) NSString *currentVariant;

/**
 * Whether the experiment is currently running.
 */
@property (nonatomic, readonly) BOOL isRunning;


/**
 * This is the init to build the ARExperimentDetails object.
 * You won't need to use this;
 */
- (id)initWithName:(NSString *)name
descriptionOfExperiment:(NSString *)descriptionOfExperiment
    defaultVariant:(NSString *)defaultVariant
          variants:(NSArray *)variants
    currentVariant:(NSString *)currentVariant
         isRunning:(BOOL)isRunning;

@end
