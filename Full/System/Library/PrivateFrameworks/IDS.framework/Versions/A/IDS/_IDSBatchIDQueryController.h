/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDS-Structs.h>
#import <IDS/IDSIDQueryControllerDelegate.h>

@class NSString, _IDSWeakReference, NSArray, NSMutableArray, NSTimer, NSDate;

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate> {

	NSString* _serviceName;
	_IDSWeakReference* _delegate;
	dispatch_queue_sRef _queue;
	NSString* _listenerID;
	NSArray* _destinations;
	NSMutableArray* _destinationsToQuery;
	NSTimer* _nextQueryTimer;
	NSDate* _timeOfDeath;
	int _numberOfQueriesDone;
	char _isDead;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithService:(id)arg1 delegate:(id)arg2 queue:(dispatch_queue_sRef)arg3 ;
-(void)_invalidateNextQueryTimer;
-(void)_nextQuery:(id)arg1 ;
-(void)_scheduleNextQuery:(double)arg1 ;
-(void)setDestinations:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end
