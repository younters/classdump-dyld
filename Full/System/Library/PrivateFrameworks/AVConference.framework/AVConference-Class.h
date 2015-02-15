/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVConferenceDelegate;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject, NSDictionary, CALayer, NSTimer;

@interface AVConference : NSObject {

	id weakAVConference;
	AVConferenceXPCClient* connection;
	id opaqueConf;
	char useServer;
	char runningInServer;
	NSObject*<AVConferenceDelegate> delegate;
	NSDictionary* serverBag;
	CALayer* remoteLayerFront;
	CALayer* remoteLayerBack;
	CALayer* remoteSubLayerFront;
	CALayer* remoteSubLayerBack;
	char shouldDisplayVideoInfoLayer;
	char _isUsingFrontCamera;
	int _localCellTech;
	char shouldDisplayVideoInfoLayer_;
	char shouldDisplayNetworkQualityGraph_;
	NSTimer* networkQualityUpdateTimer_;
	CALayer* networkQualityGraphLayer_;

}

@property (assign) char shouldDisplayNetworkQualityGraph; 
@property (assign) char shouldDisplayVideoInfoLayer; 
@property (getter=isUsingViceroyBlobFormat) char useViceroyBlobFormat; 
@property (assign) NSObject*<AVConferenceDelegate> delegate; 
@property (assign,getter=isMicrophoneMuted,nonatomic) char microphoneMuted; 
@property (assign,getter=isInputFrequencyMeteringEnabled,nonatomic) char inputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputFrequencyMeteringEnabled,nonatomic) char outputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) char outputMeteringEnabled; 
@property (assign,getter=isInputMeteringEnabled,nonatomic) char inputMeteringEnabled; 
@property (readonly) float outputMeterLevel; 
@property (readonly) float inputMeterLevel; 
@property (assign,nonatomic) char requiresWifi; 
@property (readonly) int localFrameHeight; 
@property (readonly) int localFrameWidth; 
@property (getter=isSpeakerPhoneEnabled) char enableSpeakerPhone; 
@property (readonly) unsigned natType; 
@property (retain) CALayer * networkQualityGraphLayer; 
@property (retain) NSTimer * networkQualityUpdateTimer; 
+(void)refreshLoggingParameters;
+(unsigned)doBlockingConnectionCheck:(char)arg1 ;
+(unsigned)doBlockingConnectionCheck;
+(short)addressPointerFromBlob:(id)arg1 ;
+(id)externalAddressForSelfConnectionBlob:(id)arg1 ;
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)startAudioSession;
+(void)stopAudioSession;
-(void)handleGKSConnectivitySettingsUpdate:(id)arg1 ;
-(char)setServerInfo:(id)arg1 ;
-(void)updateGKSConnectivitySettings;
-(id)initWithClientUUID:(id)arg1 ;
-(void)setShouldDisplayNetworkQualityGraph:(char)arg1 ;
-(char)shouldDisplayNetworkQualityGraph;
-(void)setShouldDisplayVideoInfoLayer:(char)arg1 ;
-(char)shouldDisplayVideoInfoLayer;
-(void)serverDied;
-(void)registerBlocksForVCNotifications;
-(void)listenForNotifications;
-(void)stopListeningForNotifications;
-(void)setRemoteVideoLayer:(void*)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 ;
-(void)deregisterBlocksForVCNotifications;
-(void)setUseViceroyBlobFormat:(char)arg1 ;
-(id)newRandomParticipantID;
-(id)callMetadataForCallID:(long long)arg1 ;
-(void)setPeerCN:(id)arg1 callID:(long long)arg2 ;
-(void)setSessionID:(id)arg1 callID:(long long)arg2 ;
-(double)networkQualityForCallID:(long long)arg1 ;
-(char)requiresWifi;
-(void)setRequiresWifi:(char)arg1 ;
-(void)startNetworkQualityUpdateTimer;
-(char)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(char)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(char)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id*)arg9 ;
-(char)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(char)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(char)arg6 capabilities:(id)arg7 error:(id*)arg8 ;
-(void)remoteCancelledCallID:(long long)arg1 ;
-(void)setCallReport:(long long)arg1 withReport:(id)arg2 ;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)processRemoteIPChange:(id)arg1 callID:(long long)arg2 ;
-(char)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(char)arg1 ;
-(char)isInputMeteringEnabled;
-(void)setInputMeteringEnabled:(char)arg1 ;
-(char)isInputFrequencyMeteringEnabled;
-(char)isOutputFrequencyMeteringEnabled;
-(float)outputMeterLevel;
-(char)getIsVideoPaused:(char*)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(float)inputMeterLevel;
-(CALayer *)networkQualityGraphLayer;
-(float)networkQuality;
-(NSTimer *)networkQualityUpdateTimer;
-(char)updateNetworkQualityGraph;
-(void)setNetworkQualityUpdateTimer:(NSTimer *)arg1 ;
-(double)localFramerateForCallID:(long long)arg1 ;
-(double)localBitrateForCallID:(long long)arg1 ;
-(double)remoteFramerateForCallID:(long long)arg1 ;
-(double)remoteBitrateForCallID:(long long)arg1 ;
-(int)localFrameHeight;
-(int)localFrameWidth;
-(double)remotePacketLossRateForCallID:(long long)arg1 ;
-(double)localPacketLossRateForCallID:(long long)arg1 ;
-(double)roundTripTimeForCallID:(long long)arg1 ;
-(id)statsForCallID:(long long)arg1 ;
-(void)setEnableSpeakerPhone:(char)arg1 ;
-(char)isSpeakerPhoneEnabled;
-(unsigned)natType;
-(char)setPauseVideo:(char)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(void)updateCapabilities:(id)arg1 forCallID:(long long)arg2 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(unsigned)doBlockingConnectionCheck;
-(void)setActiveRemoteVideoLayerFront:(char)arg1 ;
-(void)processRelayRequestResponse:(long long)arg1 responseDict:(id)arg2 didOriginateRequest:(char)arg3 ;
-(void)processRelayUpdate:(long long)arg1 updateDict:(id)arg2 didOriginateRequest:(char)arg3 ;
-(long long)initializeNewCall;
-(void)warmupForCall;
-(char)isUsingViceroyBlobFormat;
-(void)setSetSessionID:(id)arg1 forCallID:(long long)arg2 ;
-(void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2 ;
-(void)sendARPLData:(id)arg1 toCallID:(long long)arg2 ;
-(void)sendData:(id)arg1 forCallID:(long long)arg2 encrypted:(char)arg3 ;
-(void)inviteDictionaryForCallID:(long long)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(/*^block*/id)arg4 queue:(id)arg5 ;
-(id)convertBlobtoOldBlob:(id)arg1 ;
-(id)convertBlobtoNewBlob:(id)arg1 ;
-(char)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(char)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(char)arg5 capabilities:(id)arg6 error:(id*)arg7 ;
-(void)sendProtobuf:(id)arg1 withType:(long long)arg2 forCallID:(long long)arg3 ;
-(long long)lastActiveCallID;
-(void)setLastActiveCallID:(long long)arg1 ;
-(id)currentAudioInputDevice;
-(char)setAudioInputDevice:(id)arg1 ;
-(void)stopNetworkQualityUpdateTimer;
-(void*)remoteVideoLayer;
-(void*)remoteVideoBackLayer;
-(int)remoteFrameHeightForCallID:(long long)arg1 ;
-(int)remoteFrameWidthForCallID:(long long)arg1 ;
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned)arg3 withUserInfo:(id)arg4 error:(id)arg5 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3 callMetadata:(id)arg4 ;
-(void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 remoteMediaStalled:(char)arg2 callID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 remoteAudioPaused:(char)arg2 callID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 remoteVideoPaused:(char)arg2 callID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 sendRelayUpdate:(unsigned)arg2 updateDict:(id)arg3 ;
-(void)videoConference:(id)arg1 cancelRelayRequest:(unsigned)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned)arg2 isDegraded:(char)arg3 isRemote:(char)arg4 ;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 networkHint:(char)arg3 ;
-(void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 remoteAudioEnabled:(char)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 localAudioEnabled:(char)arg2 forCallID:(unsigned)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 reinitializeCallForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 closeConnectionForCallID:(long long)arg2 ;
-(void)processCancelRelayRequest:(long long)arg1 cancelDict:(id)arg2 didOriginateRequest:(char)arg3 ;
-(void)shouldSendBlackFrames:(char)arg1 callID:(long long)arg2 ;
-(void)setNetworkQualityGraphLayer:(CALayer *)arg1 ;
-(id)connectionTypeToString:(int)arg1 ;
-(void)setRemoteVideoLayerContentsRect:(CGRect)arg1 camera:(int)arg2 ;
-(void)serverReconnected;
-(char)isMicrophoneMuted;
-(void)setMicrophoneMuted:(char)arg1 ;
-(char)getIsAudioPaused:(char*)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(char)setPauseAudio:(char)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(long long)initializeNewCallWithDeviceRole:(int)arg1 ;
-(void)setInputFrequencyMeteringEnabled:(char)arg1 ;
-(void)setOutputFrequencyMeteringEnabled:(char)arg1 ;
-(char)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(char)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(char)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 error:(id*)arg8 ;
-(void)stopCallID:(long long)arg1 ;
-(id)init;
-(void)setDelegate:(NSObject*<AVConferenceDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<AVConferenceDelegate>)delegate;
-(char)setActive:(char)arg1 ;
@end
