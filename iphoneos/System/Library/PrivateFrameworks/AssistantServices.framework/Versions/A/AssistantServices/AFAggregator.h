/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AFAggregator : NSObject {

	int _type;
	double _startTime;
	char _hasActiveRequest;
	char _sessionIsRetrying;
	char _retryPrefersWWAN;

}

@property (assign) int connectionType;                 //@synthesize type=_type - In the implementation block
@property (assign) char hasActiveRequest;              //@synthesize hasActiveRequest=_hasActiveRequest - In the implementation block
+(void)logRequestStarted;
+(void)logAssistantSpeechRequestStarted;
+(void)logAssistantOtherRequestStarted;
+(void)logRequestCancelled;
+(void)logAssistantRequestCancelled;
+(void)logRequestFailed;
+(void)logAssistantRequestFailedWithError:(id)arg1 ;
+(void)logRequestCompleted;
+(void)logAssistantRequestSucceeded;
+(void)logDictationStarted;
+(void)logDictationCancelled;
+(void)logDictationFailedWithError:(id)arg1 ;
+(void)logDictationSucceeded;
+(void)logRequestCompletedWithDuration:(double)arg1 ;
+(void)missedAppContextForRequest;
+(void)missedAlertContextForRequest;
+(void)logRequestCancelAfterSeconds:(double)arg1 ;
+(id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2 ;
-(void)setConnectionType:(int)arg1 ;
-(int)connectionType;
-(void)recordFailure:(int)arg1 forConnectionType:(int)arg2 ;
-(void)recordSuccessForConnectionType:(int)arg1 isWarm:(char)arg2 forTimeInterval:(double)arg3 ;
-(void)recordSessionRetrySuccess;
-(void)connectionDidFail;
-(void)connectionDidDrop;
-(void)beginSessionRetryPreferringWWAN:(char)arg1 ;
-(void)startWaitingForSpeechResponse;
-(void)speechResponseReceived;
-(void)speechResponseFailure;
-(char)hasActiveRequest;
-(void)setHasActiveRequest:(char)arg1 ;
@end
