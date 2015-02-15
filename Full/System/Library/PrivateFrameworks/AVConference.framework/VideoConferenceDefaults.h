/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VideoConferenceDefaults : NSObject {

	int _forceCaptureWidth;
	int _forceCaptureHeight;
	int _forceEncodeWidth;
	int _forceEncodeHeight;
	int _forceFramerate;
	int _forceBitrate;
	int _forceVideoPayload;
	int _forceRecvVideoPayload;

}

@property (readonly) char forceHWI; 
@property (readonly) int forceCaptureWidth; 
@property (readonly) int forceCaptureHeight; 
@property (readonly) int forceEncodeWidth; 
@property (readonly) int forceEncodeHeight; 
@property (readonly) int forceFramerate; 
@property (readonly) int forceBitrate; 
@property (readonly) int forceVideoPayload; 
@property (readonly) int forceRecvVideoPayload; 
@property (readonly) char enableBitstreamCapture; 
@property (readonly) char enable2vuyCapture; 
@property (readonly) char enableVPBLogging; 
@property (readonly) char enableTxSourceYuvDump; 
@property (readonly) char enableTxBitstreamDump; 
@property (readonly) char enableRecvBitstreamDump; 
@property (readonly) char disableVAD; 
@property (readonly) int bundleAudio; 
@property (readonly) int max2GRate; 
@property (readonly) char forceIPv6; 
+(id)VideoConferenceDefaultsSingleton;
-(char)forceIPv6;
-(char)forceHWI;
-(int)forceVideoPayload;
-(int)forceRecvVideoPayload;
-(int)forceBitrate;
-(int)forceCaptureWidth;
-(int)forceCaptureHeight;
-(int)forceFramerate;
-(int)forceEncodeWidth;
-(int)forceEncodeHeight;
-(int)max2GRate;
-(char)disableVAD;
-(char)enableBitstreamCapture;
-(char)enable2vuyCapture;
-(char)enableVPBLogging;
-(char)enableRecvBitstreamDump;
-(char)enableTxSourceYuvDump;
-(char)enableTxBitstreamDump;
-(int)bundleAudio;
-(id)init;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
