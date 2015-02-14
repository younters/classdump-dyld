/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialAppsCore.framework/Versions/A/SocialAppsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMapTable, NSMutableDictionary, NSHashTable, NSTimer;

@interface SOTimerCenter : NSObject {

	char _suspendAllListeners;
	char _oneTimeFire;
	char _changesOccuredDuringBatch;
	NSMutableOrderedSet* _allTimers;
	NSMapTable* _listenerToTimerMap;
	NSMutableDictionary* _groupToTimerDict;
	NSHashTable* _disabledTimers;
	NSHashTable* _disabledGroups;
	NSHashTable* _currentlyDisabledTimers;
	NSMutableDictionary* _lastFireIntervals;
	NSTimer* _theTimer;
	double _customInterval;
	unsigned long long _batchCount;

}

@property (retain) NSMutableOrderedSet * allTimers;                      //@synthesize allTimers=_allTimers - In the implementation block
@property (retain) NSMapTable * listenerToTimerMap;                      //@synthesize listenerToTimerMap=_listenerToTimerMap - In the implementation block
@property (retain) NSMutableDictionary * groupToTimerDict;               //@synthesize groupToTimerDict=_groupToTimerDict - In the implementation block
@property (retain) NSHashTable * disabledTimers;                         //@synthesize disabledTimers=_disabledTimers - In the implementation block
@property (retain) NSHashTable * disabledGroups;                         //@synthesize disabledGroups=_disabledGroups - In the implementation block
@property (retain) NSHashTable * currentlyDisabledTimers;                //@synthesize currentlyDisabledTimers=_currentlyDisabledTimers - In the implementation block
@property (retain) NSMutableDictionary * lastFireIntervals;              //@synthesize lastFireIntervals=_lastFireIntervals - In the implementation block
@property (retain) NSTimer * theTimer;                                   //@synthesize theTimer=_theTimer - In the implementation block
@property (assign) char suspendAllListeners;                             //@synthesize suspendAllListeners=_suspendAllListeners - In the implementation block
@property (assign) char oneTimeFire;                                     //@synthesize oneTimeFire=_oneTimeFire - In the implementation block
@property (assign) double customInterval;                                //@synthesize customInterval=_customInterval - In the implementation block
@property (assign) char changesOccuredDuringBatch;                       //@synthesize changesOccuredDuringBatch=_changesOccuredDuringBatch - In the implementation block
@property (assign) unsigned long long batchCount;                        //@synthesize batchCount=_batchCount - In the implementation block
+(id)weakSharedInstance;
-(void)_timerFired:(id)arg1 ;
-(void)beginChanges;
-(void)endChanges;
-(unsigned long long)_currentLowestInterval;
-(void)_createTimerWithInterval:(double)arg1 custom:(char)arg2 ;
-(void)_resetTimeIntervals;
-(void)_recalculateTimerInterval;
-(id)addTimerForListener:(id)arg1 selector:(SEL)arg2 milliSeconds:(unsigned long long)arg3 group:(id)arg4 ;
-(void)_recalculateDisabledTimers;
-(void)_resumeTimersForGroup:(id)arg1 fireTimerImmediately:(char)arg2 ;
-(void)_resumeActiveTimersAndFireTimerImmediately:(char)arg1 ;
-(void)removeTimersForListener:(id)arg1 ;
-(void)removeTimersForListener:(id)arg1 group:(id)arg2 ;
-(void)suspendTimer:(id)arg1 ;
-(void)resumeTimer:(id)arg1 ;
-(void)suspendTimersForListener:(id)arg1 ;
-(void)resumeTimersForListener:(id)arg1 ;
-(void)suspendTimersForGroup:(id)arg1 ;
-(void)resumeTimersForGroup:(id)arg1 ;
-(void)resumeTimersForGroupAndFireImmediately:(id)arg1 ;
-(void)suspendActiveTimers;
-(void)resumeActiveTimers;
-(void)resumeActiveTimersAndFireTimerImmediately;
-(NSMutableOrderedSet *)allTimers;
-(void)setAllTimers:(NSMutableOrderedSet *)arg1 ;
-(NSMapTable *)listenerToTimerMap;
-(void)setListenerToTimerMap:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)groupToTimerDict;
-(void)setGroupToTimerDict:(NSMutableDictionary *)arg1 ;
-(NSHashTable *)disabledTimers;
-(void)setDisabledTimers:(NSHashTable *)arg1 ;
-(NSHashTable *)disabledGroups;
-(void)setDisabledGroups:(NSHashTable *)arg1 ;
-(NSHashTable *)currentlyDisabledTimers;
-(void)setCurrentlyDisabledTimers:(NSHashTable *)arg1 ;
-(NSMutableDictionary *)lastFireIntervals;
-(void)setLastFireIntervals:(NSMutableDictionary *)arg1 ;
-(NSTimer *)theTimer;
-(void)setTheTimer:(NSTimer *)arg1 ;
-(char)suspendAllListeners;
-(void)setSuspendAllListeners:(char)arg1 ;
-(char)oneTimeFire;
-(void)setOneTimeFire:(char)arg1 ;
-(double)customInterval;
-(void)setCustomInterval:(double)arg1 ;
-(char)changesOccuredDuringBatch;
-(void)setChangesOccuredDuringBatch:(char)arg1 ;
-(unsigned long long)batchCount;
-(void)setBatchCount:(unsigned long long)arg1 ;
-(id)addTimerForListener:(id)arg1 selector:(SEL)arg2 milliSeconds:(unsigned long long)arg3 ;
-(void)removeTimer:(id)arg1 ;
-(void)_clearTimer;
-(id)init;
-(void)_createTimer;
@end
