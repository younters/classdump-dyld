/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUtilities/TUCall.h>

@class IMAVChat;

@interface TUFaceTimeAudioCall : TUCall {

	IMAVChat* _chat;

}
-(BOOL)isBlocked;
-(int)service;
-(id)isoCountryCode;
-(BOOL)setMuted:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)resume;
-(double)startTime;
-(void)disconnect;
-(int)status;
-(id)audioCategory;
-(id)chat;
-(BOOL)isOutgoing;
-(id)remoteParticipant;
-(BOOL)isMuted;
-(void)answer;
-(BOOL)isConferenced;
-(void)joinConference;
-(void)leaveConference;
-(id)destinationID;
-(BOOL)isTTY;
-(int)callIdentifier;
-(id)callerNameFromNetwork;
-(id)initWithChat:(id)arg1 ;
-(BOOL)hold;
-(BOOL)unhold;
-(id)bundleIDForHostingApplication;
-(BOOL)isAlerting;
-(id)audioMode;
-(BOOL)managesAudioInterruptions;
-(BOOL)needsManualInCallSounds;
-(double)callDuration;
@end
