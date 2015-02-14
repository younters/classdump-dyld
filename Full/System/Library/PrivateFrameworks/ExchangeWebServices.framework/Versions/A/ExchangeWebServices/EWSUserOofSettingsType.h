/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSDuration, EWSReplyBodyType;

@interface EWSUserOofSettingsType : NSObject {

	long long _OofState;
	long long _ExternalAudience;
	EWSDuration* _Duration;
	EWSReplyBodyType* _InternalReply;
	EWSReplyBodyType* _ExternalReply;

}

@property (assign,nonatomic) long long OofState;                            //@synthesize OofState=_OofState - In the implementation block
@property (assign,nonatomic) long long ExternalAudience;                    //@synthesize ExternalAudience=_ExternalAudience - In the implementation block
@property (nonatomic,retain) EWSDuration * Duration;                        //@synthesize Duration=_Duration - In the implementation block
@property (nonatomic,retain) EWSReplyBodyType * InternalReply;              //@synthesize InternalReply=_InternalReply - In the implementation block
@property (nonatomic,retain) EWSReplyBodyType * ExternalReply;              //@synthesize ExternalReply=_ExternalReply - In the implementation block
+(id)definition;
-(long long)ExternalAudience;
-(long long)OofState;
-(EWSDuration *)Duration;
-(EWSReplyBodyType *)InternalReply;
-(EWSReplyBodyType *)ExternalReply;
-(void)setOofState:(long long)arg1 ;
-(void)setExternalAudience:(long long)arg1 ;
-(void)setInternalReply:(EWSReplyBodyType *)arg1 ;
-(void)setExternalReply:(EWSReplyBodyType *)arg1 ;
-(void)dealloc;
-(void)setDuration:(EWSDuration *)arg1 ;
@end
