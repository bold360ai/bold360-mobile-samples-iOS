
// NanorepUI version number: v3.8.10 

// ===================================================================================================
// Copyright © 2018 bold360ai(LogMeIn).
// Bold360AI SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "ChannelPickerDelegate.h"
#import "NanorepPersonalInfoHandler.h"
#import "NRChannelStrategy.h"


@interface NRChannelPickerDelegate : NSObject<ChannelPickerDelegate>
@property (nonatomic, weak) id<NanorepPersonalInfoHandler> infoHandler;
@property (nonatomic, weak) id<NRChannelPresentorDelegate> presentorDelegate;
@end
