
// NanorepUI version number: v3.8.3 

// ===================================================================================================
// Copyright © 2018 bold360ai(LogMeIn).
// Bold360AI SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

@interface UIImage (Base64)
@property (nonatomic, readonly, copy) NSString *base64;
+ (void)loadFromURL:(NSURL*)url
           callback:(void (^)(UIImage *image))callback;
@end