/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKEventChangeListenerDelegate.h>

@protocol EKDecisionDelegate, EKUndoDelegate, EKCommitDelegate;
@class NSSet, NSMutableDictionary, NSMutableSet, EKEventChangeListener, EKObjectSnapshotter, NSString;

@interface EKEditingContext : NSObject <EKEventChangeListenerDelegate> {

	char _deferredCommit;
	char _requestedSpan;
	char _isRequestingDecision;
	char _didPartialSave;
	char _isDeletingObjects;
	int _currentSpan;
	int _commitDecision;
	id<EKDecisionDelegate> _decisionDelegate;
	id<EKUndoDelegate> _undoDelegate;
	id<EKCommitDelegate> _commitDelegate;
	NSSet* _snapshotters;
	NSMutableDictionary* _conflictsToExcludeFromAll;
	NSMutableDictionary* _originalObjects;
	NSMutableSet* _objectsToCommit;
	NSMutableSet* _inactiveEditors;
	NSMutableSet* _activeEditors;
	EKEventChangeListener* _eventChangeListener;
	NSSet* _trackedEKObjectIDs;
	EKObjectSnapshotter* _revertSnapshotter;

}

@property (assign,nonatomic,__weak) id<EKDecisionDelegate> decisionDelegate;              //@synthesize decisionDelegate=_decisionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<EKUndoDelegate> undoDelegate;                      //@synthesize undoDelegate=_undoDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<EKCommitDelegate> commitDelegate;                  //@synthesize commitDelegate=_commitDelegate - In the implementation block
@property (assign) char deferredCommit;                                                   //@synthesize deferredCommit=_deferredCommit - In the implementation block
@property (retain) NSSet * snapshotters;                                                  //@synthesize snapshotters=_snapshotters - In the implementation block
@property (retain) NSMutableDictionary * conflictsToExcludeFromAll;                       //@synthesize conflictsToExcludeFromAll=_conflictsToExcludeFromAll - In the implementation block
@property (retain) NSMutableDictionary * originalObjects;                                 //@synthesize originalObjects=_originalObjects - In the implementation block
@property (retain) NSMutableSet * objectsToCommit;                                        //@synthesize objectsToCommit=_objectsToCommit - In the implementation block
@property (assign) int currentSpan;                                                       //@synthesize currentSpan=_currentSpan - In the implementation block
@property (assign) char requestedSpan;                                                    //@synthesize requestedSpan=_requestedSpan - In the implementation block
@property (assign) int commitDecision;                                                    //@synthesize commitDecision=_commitDecision - In the implementation block
@property (assign) char isRequestingDecision;                                             //@synthesize isRequestingDecision=_isRequestingDecision - In the implementation block
@property (assign) char didPartialSave;                                                   //@synthesize didPartialSave=_didPartialSave - In the implementation block
@property (assign) char isDeletingObjects;                                                //@synthesize isDeletingObjects=_isDeletingObjects - In the implementation block
@property (retain) NSMutableSet * inactiveEditors;                                        //@synthesize inactiveEditors=_inactiveEditors - In the implementation block
@property (retain) NSMutableSet * activeEditors;                                          //@synthesize activeEditors=_activeEditors - In the implementation block
@property (retain) EKEventChangeListener * eventChangeListener;                           //@synthesize eventChangeListener=_eventChangeListener - In the implementation block
@property (retain) NSSet * trackedEKObjectIDs;                                            //@synthesize trackedEKObjectIDs=_trackedEKObjectIDs - In the implementation block
@property (retain) EKObjectSnapshotter * revertSnapshotter;                               //@synthesize revertSnapshotter=_revertSnapshotter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithSnapshotters:(id)arg1 sender:(id)arg2 ;
+(id)uniqueIDForObject:(id)arg1 ;
+(id)_objectIDSetForEKObjects:(id)arg1 ;
+(id)editingContextsForUniqueID:(id)arg1 ;
+(id)openEditingContextsForObject:(id)arg1 ;
+(id)editingContextForEKObjectIDSet:(id)arg1 ;
+(void)closeEditingContext:(id)arg1 ;
+(void)openEditingContext:(id)arg1 withObjects:(id)arg2 ;
+(id)allOpenEditingContexts;
+(id)allCurrentlyEditedEvents;
+(char)editingContextsAreOpenForObject:(id)arg1 ;
+(id)contextWithObjects:(id)arg1 sender:(id)arg2 ;
+(void)initialize;
+(void)reset;
-(char)commit:(id)arg1 ;
-(void)setSpan:(int)arg1 ;
-(NSSet *)snapshotters;
-(void)performUndoableOperation:(id)arg1 ;
-(id)trackedEvents;
-(void)trackedEventsDidUpdate:(id)arg1 ;
-(void)setSnapshotters:(NSSet *)arg1 ;
-(id)objects;
-(void)setTrackedEKObjectIDs:(NSSet *)arg1 ;
-(void)setActiveEditors:(NSMutableSet *)arg1 ;
-(void)setInactiveEditors:(NSMutableSet *)arg1 ;
-(void)setObjectsToCommit:(NSMutableSet *)arg1 ;
-(void)setEventChangeListener:(EKEventChangeListener *)arg1 ;
-(NSMutableDictionary *)originalObjects;
-(void)openWithObjects:(id)arg1 sender:(id)arg2 ;
-(void)_addEditor:(id)arg1 active:(char)arg2 ;
-(id)_allEditors;
-(void)openWithSnapshotters:(id)arg1 sender:(id)arg2 ;
-(void)_resetOriginalObjectsWithSnapshotters:(id)arg1 ;
-(void)setCurrentSpan:(int)arg1 ;
-(void)setRequestedSpan:(char)arg1 ;
-(void)setDidPartialSave:(char)arg1 ;
-(void)setOriginalObjects:(NSMutableDictionary *)arg1 ;
-(char)allObjectsAreEvents;
-(char)isDeletingObjects;
-(void)_removeSnapshotter:(id)arg1 ;
-(NSSet *)trackedEKObjectIDs;
-(int)currentSpan;
-(char)_requestSaveAndSpanDecisionIfNeededForAction:(int)arg1 ;
-(char)_doEarlyRequestCommitDecisionAtSaveTimeForAction:(int)arg1 ;
-(int)commitDecision;
-(void)_setAllObjectsToDontNotify;
-(void)setIsDeletingObjects:(char)arg1 ;
-(int)_spanDecisionForSpan:(int)arg1 ;
-(void)_applySpanDecision:(int)arg1 ;
-(char)didPartialSave;
-(void)cancelCurrentSave;
-(id)diffSummarySinceLastSaveType:(long long)arg1 commit:(char)arg2 ;
-(char)requestedSpan;
-(char)isRequestingDecision;
-(void)setIsRequestingDecision:(char)arg1 ;
-(id)_originalObjectForSnapshottedObject:(id)arg1 ;
-(char)_doCheckForConflictsWhenAcceptingAllWithSpanDecision:(int)arg1 action:(int)arg2 diffSummary:(id)arg3 ;
-(NSMutableDictionary *)conflictsToExcludeFromAll;
-(void)setConflictsToExcludeFromAll:(NSMutableDictionary *)arg1 ;
-(int)_requestCommitDecisionIfNeededForAction:(int)arg1 ;
-(void)setCommitDecision:(int)arg1 ;
-(char)allObjectsAreCalendars;
-(char)saveChange:(long long)arg1 sender:(id)arg2 ;
-(void)_revert;
-(char)hasChangesForSaveType:(long long)arg1 ;
-(char)saveActionIsDecline;
-(char)_hasChangesRequiringSpanAllAndSpanIsThis;
-(void)_updateObjectsToCommitForSnapshotter:(id)arg1 ;
-(void)_updateRevertStateForSnapshotter:(id)arg1 ;
-(EKObjectSnapshotter *)revertSnapshotter;
-(NSMutableSet *)objectsToCommit;
-(void)_makeAllEditorsInactive;
-(void)setRevertSnapshotter:(EKObjectSnapshotter *)arg1 ;
-(void)_resetObjects;
-(NSMutableSet *)activeEditors;
-(char)_close:(id)arg1 andCommit:(char)arg2 ;
-(char)_commitAndShouldClose;
-(void)_removeEditor:(id)arg1 ;
-(void)setDeferredCommit:(char)arg1 ;
-(char)shouldResetUndoStack;
-(NSMutableSet *)inactiveEditors;
-(void)addAllObjects:(id)arg1 ;
-(char)closeAndForceDontCommit:(id)arg1 ;
-(EKEventChangeListener *)eventChangeListener;
-(id<EKDecisionDelegate>)decisionDelegate;
-(void)setDecisionDelegate:(id<EKDecisionDelegate>)arg1 ;
-(id<EKCommitDelegate>)commitDelegate;
-(void)setCommitDelegate:(id<EKCommitDelegate>)arg1 ;
-(id<EKUndoDelegate>)undoDelegate;
-(void)setUndoDelegate:(id<EKUndoDelegate>)arg1 ;
-(id)contextsVersionOfObject:(id)arg1 ;
-(char)deferredCommit;
-(void)makeSenderActive:(id)arg1 ;
-(char)savePartialChange:(id)arg1 ;
-(char)closeAndForceCommit:(id)arg1 ;
-(char)saveCompleteChangeWithImpliedCommitDecision:(id)arg1 ;
-(char)saveCompleteChange:(id)arg1 ;
-(void)deleteAllObjects:(id)arg1 ;
-(id)init;
-(char)close:(id)arg1 ;
-(void)revert:(id)arg1 ;
@end
