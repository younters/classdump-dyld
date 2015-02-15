/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgent.framework/CalendarAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface CalAgentOperationMap : NSObject {

	NSMapTable* _map;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}

@property (nonatomic,retain) NSMapTable * map;              //@synthesize map=_map - In the implementation block
-(id)copyLinkedOperationForOperationWithName:(id)arg1 inputPayload:(id)arg2 ;
-(NSMapTable *)map;
-(void)setMap:(NSMapTable *)arg1 ;
-(id)description;
-(void)load;
@end
