/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface EventMonitor : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableArray* _events;
	double _lastPollTime;
	NSObject<OS_dispatch_source>* _pollTimer;

}
+(id)sharedEventMonitor;
-(void)_cancelPollTimer;
-(void)_reloadPollTimer;
-(void)_willRemoveEvent:(id)arg1 ;
-(void)_fireEventsAfterPollTimer;
-(id)monitorEvent:(id)arg1 ;
-(void)removeEvent:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
