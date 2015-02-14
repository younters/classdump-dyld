/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Automator/Automator-Structs.h>
@class NSMutableArray, NSArray, NSMutableDictionary, AMAction, NSError, NSString, NSOperationQueue;

@interface AMWorkflowRunner : NSObject {

	NSMutableArray* _runningActions;
	NSArray* _loopData;
	NSArray* _loopActions;
	NSMutableDictionary* _loopOutput;
	id _workflow;
	id _delegate;
	id _owner;
	unsigned long long _state;
	unsigned long long _runNumber;
	unsigned long long _loopIndex;
	unsigned long long _numberOfTimesToLoop;
	AMAction* _lastRunAction;
	NSError* _currentError;
	id _currentData;
	NSString* _currentRunUUID;
	NSString* _workflowID;
	double _startTime;
	double _endTime;
	NSOperationQueue* _operationQueue;
	char _isLooping;
	char _shouldPauseBeforeNextAction;
	AMWorkflowRunnerDelegateRespondTo _delegateRespondTo;
	AMWorkflowRunnerOwnerRespondTo _ownerRespondTo;
	NSMutableArray* _progressValueObservedList;

}

@property (retain) NSString * currentRunUUID;              //@synthesize currentRunUUID=_currentRunUUID - In the implementation block
@property (retain) NSString * workflowID;                  //@synthesize workflowID=_workflowID - In the implementation block
-(void)stopWithError:(id)arg1 ;
-(oneway void)actionDidRun:(id)arg1 errorDictionary:(id)arg2 ;
-(id)workflow;
-(void)logMessage:(id)arg1 withLevel:(unsigned long long)arg2 fromAction:(id)arg3 ;
-(void)setWorkflow:(id)arg1 ;
-(id)runningActions;
-(NSString *)workflowID;
-(NSString *)currentRunUUID;
-(char)isStopping;
-(void)setCurrentRunUUID:(NSString *)arg1 ;
-(void)setWorkflowID:(NSString *)arg1 ;
-(void)_workflowRunner_didResumeWithActionOnMainThread:(id)arg1 ;
-(void)runChildrenOfAction:(id)arg1 ;
-(id)preflightWorkflow;
-(void)setCurrentError:(id)arg1 ;
-(void)reportErrors;
-(void)setRunningActions:(id)arg1 ;
-(void)setCurrentData:(id)arg1 ;
-(void)setLoopActions:(id)arg1 ;
-(void)setLoopData:(id)arg1 ;
-(void)setLoopOutput:(id)arg1 ;
-(void)setLoopIndex:(unsigned long long)arg1 ;
-(void)setNumberOfTimesToLoop:(unsigned long long)arg1 ;
-(id)temporaryItemsPath;
-(void)workflowStopped;
-(void)enqueueAction:(id)arg1 ;
-(id)currentData;
-(void)runAction:(id)arg1 withInput:(id)arg2 loopParent:(id)arg3 ;
-(id)loopActions;
-(void)saveLoopOutputAndReset;
-(void)workflowCompleted;
-(void)runNextActionAndConvertDataFromAction:(id)arg1 ;
-(void)_workflowRunner_willRunConversionOnMainThread:(id)arg1 ;
-(void)_workflowRunner_didRunConversionOnMainThread:(id)arg1 ;
-(id)loopActionsStartingWithAction:(id)arg1 ;
-(void)actionWillRun:(id)arg1 ;
-(id)errorFromErrorDictionary:(id)arg1 action:(id)arg2 ;
-(oneway void)actionDidRun:(id)arg1 error:(id)arg2 ;
-(id)currentError;
-(void)_observeValueOnMainThreadWithDictionary:(id)arg1 ;
-(void)_workflowRunner_didRunActionOnMainThread:(id)arg1 ;
-(void)_workflowRunner_reportErrorOnMainThread:(id)arg1 ;
-(double)totalRunTime;
-(void)_workflowRunner_willRunActionOnMainThread:(id)arg1 ;
-(void)_workflowRunner_logMessageOnMainThread:(id)arg1 ;
-(id)loopData;
-(id)loopOutput;
-(unsigned long long)loopIndex;
-(unsigned long long)numberOfTimesToLoop;
-(void)runAction:(id)arg1 ;
-(void)loopWorkflowFromAction:(id)arg1 withInput:(id)arg2 ;
-(void)finish;
-(char)isIdle;
-(double)startTime;
-(void)step;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)delegate;
-(char)isRunning;
-(void)run;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(void)pause;
-(char)isPaused;
-(void)cleanUp;
@end
