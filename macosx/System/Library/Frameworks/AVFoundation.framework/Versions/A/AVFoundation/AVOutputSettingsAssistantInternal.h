/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;
#import <AVFoundation/AVFoundation-Structs.h>
@interface AVOutputSettingsAssistantInternal : NSObject {

	id<AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
	id<AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
	const opaqueCMFormatDescriptionRef sourceVideoFormat;
	const opaqueCMFormatDescriptionRef sourceAudioFormat;
	SCD_Struct_CM5 sourceVideoAverageFrameDuration;
	SCD_Struct_CM5 sourceVideoMinFrameDuration;

}
@end
