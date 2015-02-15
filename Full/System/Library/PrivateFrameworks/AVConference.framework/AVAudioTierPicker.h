/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, AVAudioTier;

@interface AVAudioTierPicker : NSObject {

	NSMutableArray* audioTiers;
	char isUsingCellular;
	AVAudioTier* defaultTier;
	AVAudioTier* fallbackTier;
	int mode;

}

@property (readonly) AVAudioTier * defaultTier; 
@property (readonly) AVAudioTier * fallbackTier; 
+(char)shouldFilterTierForPayload:(id)arg1 bitRate:(unsigned)arg2 packetsPerBundle:(unsigned)arg3 cellular:(char)arg4 operatingMode:(int)arg5 ;
-(id)initWithOperatingMode:(int)arg1 payloads:(id)arg2 sampleRate:(unsigned)arg3 packetsPerBundle:(id)arg4 headerSize:(unsigned)arg5 usingCellular:(char)arg6 defaultMaxCap:(unsigned)arg7 ;
-(AVAudioTier *)defaultTier;
-(id)tierForNetworkBitrate:(unsigned)arg1 duplication:(unsigned)arg2 ;
-(id)createTierForPayload:(id)arg1 bitrate:(unsigned)arg2 sampleRate:(unsigned)arg3 packetsPerBundle:(unsigned)arg4 headerSize:(unsigned)arg5 ;
-(unsigned long long)LargestCapTier:(unsigned)arg1 ;
-(id)AudioTier:(unsigned)arg1 ;
-(AVAudioTier *)fallbackTier;
-(void)dealloc;
@end
