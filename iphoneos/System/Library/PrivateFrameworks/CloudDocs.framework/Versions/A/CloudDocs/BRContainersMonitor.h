/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocs/CloudDocs-Structs.h>
@class NSMutableDictionary;

@interface BRContainersMonitor : NSObject {

	NSMutableDictionary* _observersByContainerID;
	NSMutableDictionary* _notifyTokenByContainerID;
	dispatch_queue_sRef _queue;

}
+(id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
+(char)isContainerID:(id)arg1 ;
+(id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
-(void)addObserver:(id)arg1 forContainerID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forContainerID:(id)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end
