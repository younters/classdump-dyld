/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAudioPayload;

@interface AVAudioTier : NSObject {

	unsigned networkBitrate;
	unsigned audioBitrate;
	unsigned packetsPerBundle;
	AVAudioPayload* payload;

}

@property (readonly) unsigned networkBitrate; 
@property (readonly) unsigned audioBitrate; 
@property (readonly) unsigned packetsPerBundle; 
@property (readonly) AVAudioPayload * payload; 
-(unsigned)networkBitrate;
-(unsigned)audioBitrate;
-(unsigned)packetsPerBundle;
-(id)initWithNetworkBitrate:(unsigned)arg1 audioBitrate:(unsigned)arg2 packetsPerBundle:(unsigned)arg3 payload:(id)arg4 ;
-(AVAudioPayload *)payload;
@end
