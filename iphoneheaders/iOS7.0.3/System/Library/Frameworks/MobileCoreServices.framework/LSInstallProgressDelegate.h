/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <MobileCoreServices/LSInstallProgressProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, LSInstallProgressList, NSMutableOrderedSet, NSMutableSet, LSObserverTimer, NSObject;

@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol> {

	NSMutableDictionary* _observers;
	LSInstallProgressList* _progresses;
	NSMutableOrderedSet* _orderedInstalls;
	NSMutableDictionary* _installIndexes;
	NSMutableSet* _inactiveInstalls;
	LSObserverTimer* installsStartedTimer;
	LSObserverTimer* installsUpdatedTimer;
	LSObserverTimer* installsFinishedTimer;
	LSObserverTimer* appsUninstalledTimer;
	NSObject<OS_dispatch_queue>* _installControlsQueue;
	BOOL _usingNetwork;

}
-(void)addObserver:(id)arg1 withUUID:(id)arg2 ;
-(void)removeObserverWithUUID:(id)arg1 ;
-(void)installationEndedForApplication:(id)arg1 ;
-(void)sendUninstalledNotificationForApps:(id)arg1 ;
-(void)placeholderInstalledForApp:(id)arg1 ;
-(void)sendIconUpdatedNotificationForApp:(id)arg1 ;
-(void)sendInstalledNotificationForApps:(id)arg1 ;
-(void)sendChangeNotificationForApp:(id)arg1 ;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned)arg2 andPublishingString:(id)arg3 ;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)sendNetworkUsageChangedNotification;
-(void)restoreInactiveInstalls;
-(id)parentProgressForApplication:(id)arg1 andPhase:(unsigned)arg2 isActive:(BOOL)arg3 ;
-(void)rebuildInstallIndexes;
-(void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2 ;
-(unsigned char)handleCancelInstallationForApp:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
