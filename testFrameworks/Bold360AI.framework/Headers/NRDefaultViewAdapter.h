
// NanorepUI version number: v3.8.4 

// ===================================================================================================
// Copyright © 2018 bold360ai(LogMeIn).
// Bold360AI SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "NRAbstractViews.h"

@interface NRDefaultViewAdapter : NSObject <NanorepViewAdapter>
@property (nonatomic, weak) id<NanorepViewAdapter> appAdapter;
@end
