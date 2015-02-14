/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTask.h>
#import <CFNetwork/NSURLSessionTaskSubclass.h>

@protocol NDBackgroundSessionProtocol;
@class NSError, NSString;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {

	char _sentCancel;
	id<NDBackgroundSessionProtocol> _remoteSession;
	unsigned long long _ident;
	NSError* _immediateError;

}

@property (retain) id<NDBackgroundSessionProtocol> remoteSession;              //@synthesize remoteSession=_remoteSession - In the implementation block
@property (readonly) unsigned long long ident;                                 //@synthesize ident=_ident - In the implementation block
@property (retain) NSError * immediateError;                                   //@synthesize immediateError=_immediateError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_timingData;
-(void)setTaskDescription:(id)arg1 ;
-(void)dealloc;
-(void)_onqueue_suspend;
-(void)_onqueue_resume;
-(void)_onqueue_cancel;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_connectionWaitingWithReason:(long long)arg1 ;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_disavow;
-(void)_onqueue_adjustPriorityHint:(float)arg1 ;
-(id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4 ;
-(unsigned long long)ident;
-(void)setRemoteSession:(id<NDBackgroundSessionProtocol>)arg1 ;
-(id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned long long)arg4 ;
-(void)setImmediateError:(NSError *)arg1 ;
-(void)_onqueue_didResume;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
-(id)initWithBackgroundTask:(id)arg1 ;
-(id<NDBackgroundSessionProtocol>)remoteSession;
-(NSError *)immediateError;
@end
