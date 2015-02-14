/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationCallbackManager : NSObject {

	NSMutableDictionary* _progressCallbacks;
	NSMutableDictionary* _completionCallbacks;

}

@property (retain) NSMutableDictionary * progressCallbacks;                //@synthesize progressCallbacks=_progressCallbacks - In the implementation block
@property (retain) NSMutableDictionary * completionCallbacks;              //@synthesize completionCallbacks=_completionCallbacks - In the implementation block
-(void)removeAllCallbacks;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)registerProgressCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerCompletionCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)unregisterAllCallbacksForOperation:(id)arg1 ;
-(NSMutableDictionary *)progressCallbacks;
-(NSMutableDictionary *)completionCallbacks;
-(void)setProgressCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCompletionCallbacks:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
