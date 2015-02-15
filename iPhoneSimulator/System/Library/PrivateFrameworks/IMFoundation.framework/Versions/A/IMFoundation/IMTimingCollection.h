/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMTimingCollection : NSObject {

	NSMutableDictionary* _timings;
	dispatch_queue_sRef _queue;

}
-(void)startTimingForKey:(id)arg1 ;
-(void)stopTimingForKey:(id)arg1 ;
-(double)totalTimeForKey:(id)arg1 ;
-(void)removeTimingForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)hasKey:(id)arg1 ;
@end
