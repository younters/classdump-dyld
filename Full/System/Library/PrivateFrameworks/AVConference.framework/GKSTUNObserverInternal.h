/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/GKSTUNObserver.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface GKSTUNObserverInternal : GKSTUNObserver {

	SCDynamicStoreRef _dynamicStore;
	NSObject*<OS_dispatch_queue> _stunDiscoveryQueue;
	char _fStunDiscoveryQueued;

}
-(void)trySTUNDiscovery;
-(void)deregisterForNetworkChanges;
-(void)registerForNetworkChanges;
-(id)init;
-(void)dealloc;
-(char)initialize;
-(void)cleanUp;
@end
