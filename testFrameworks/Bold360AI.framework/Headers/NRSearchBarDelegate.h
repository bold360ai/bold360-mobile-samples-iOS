
// NanorepUI version number: v3.8.10 

// ===================================================================================================
// Copyright © 2018 bold360ai(LogMeIn).
// Bold360AI SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@protocol NRSearchBarDelegate <NSObject>
- (void)fetchSuggestions:(NSString *)text;
- (void)search:(NSString *)text;
- (void)clear;
- (void)removeSuggestions;
@end
