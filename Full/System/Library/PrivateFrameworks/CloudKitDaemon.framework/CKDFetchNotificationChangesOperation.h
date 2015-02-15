/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

@interface CKDFetchNotificationChangesOperation : CKDOperation {

	char _moreComing;
	/*^block*/id _notificationChangedBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,copy) id notificationChangedBlock;                                    //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) char moreComing;                                              //@synthesize moreComing=_moreComing - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(void)_handleFetchChangesRequestFinished:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)notificationChangedBlock;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setNotificationChangedBlock:(id)arg1 ;
-(void)setMoreComing:(char)arg1 ;
-(char)moreComing;
-(void)main;
@end
