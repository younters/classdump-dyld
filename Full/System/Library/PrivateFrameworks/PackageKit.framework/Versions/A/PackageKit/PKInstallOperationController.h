/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class PKInstallRequest, PKInstallAnalyzer, NSMutableArray, PKInstallOperation, NSError, NSMutableDictionary;

@interface PKInstallOperationController : NSObject {

	PKInstallRequest* _request;
	PKInstallAnalyzer* _analyzer;
	NSMutableArray* _operations;
	PKInstallOperation* _lastCancellableOp;
	double _queuedTime;
	double _dequeuedTime;
	dispatch_queue_sRef _updateQueue;
	char _isRunning;
	char _isCancelled;
	NSError* _error;
	NSMutableDictionary* _trackingHistory;

}

@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(char)_verboseMode;
-(int)installState;
-(id)initWithRequest:(id)arg1 analyzer:(id)arg2 ;
-(void)addStageOperationsIntoSandbox:(id)arg1 inBackground:(char)arg2 ;
-(void)addCommitOperationsFromSandbox:(id)arg1 usingManager:(id)arg2 ;
-(double)totalEstimatedTime;
-(id)currentPackageSpecifier;
-(void)addPrepareOperationsIntoSandbox:(id)arg1 ;
-(void)_enqueueOperation:(id)arg1 ;
-(void)_markEndOfCancellableOperations;
-(id)_currentOperation;
-(id)currentPackage;
-(double)estimatedTimeRemaining;
-(double)progressPercentage;
-(char)_isCancelled;
-(char)canCancel;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)cancel;
-(char)run;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
