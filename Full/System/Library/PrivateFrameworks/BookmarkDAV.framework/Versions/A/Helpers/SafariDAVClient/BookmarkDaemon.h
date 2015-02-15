/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/Versions/A/Helpers/SafariDAVClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariDAVClient/CoreDAVLogDelegate.h>
#import <SafariDAVClient/CoreDAVDiscoveryTaskGroupDelegate.h>

@protocol CoreDAVAccountInfoProvider;
@class BookmarkDAVSyncDriver, BookmarkDaemonTaskManager, BookmarkDaemonPushManager, NSMutableSet, NSFileHandle, NSError, NSString;

@interface BookmarkDaemon : NSObject <CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {

	id<CoreDAVAccountInfoProvider> _accountInfoProvider;
	BookmarkDAVSyncDriver* _syncDriver;
	BookmarkDaemonTaskManager* _taskManager;
	BookmarkDaemonPushManager* _pushManager;
	NSMutableSet* _outstandingTaskGroups;
	char _triedDebugLogHandle;
	NSFileHandle* _debugLogHandle;
	char _triedTrafficLogHandle;
	NSFileHandle* _trafficLogHandle;
	/*^block*/id _discoveryHandler;
	char _failed;
	void* _bookmarkDB;
	NSError* _lastError;

}

@property (nonatomic,readonly) id<CoreDAVAccountInfoProvider> accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (nonatomic,readonly) NSString * debugLogPath; 
@property (nonatomic,readonly) NSString * trafficLogPath; 
@property (nonatomic,readonly) unsigned long long outstandingActionCount; 
@property (nonatomic,retain) NSError * lastError;                                               //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,readonly) NSFileHandle * debugLogHandle; 
@property (nonatomic,readonly) NSFileHandle * trafficLogHandle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)outstandingActionCount;
-(id)initWithAccountInfoProvider:(id)arg1 pushManager:(id)arg2 forceSafariOrdering:(char)arg3 ;
-(void)_registerForPushNotifications;
-(NSString *)debugLogPath;
-(id)_newFileHandleAtPath:(id)arg1 ;
-(NSString *)trafficLogPath;
-(NSFileHandle *)debugLogHandle;
-(NSFileHandle *)trafficLogHandle;
-(id)initWithAccountInfoProvider:(id)arg1 forceSafariOrdering:(char)arg2 ;
-(void)discoverPrincipalURLWithSSL:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFailed;
-(void)getAccountProperties;
-(char)failed;
-(void)setLastError:(NSError *)arg1 ;
-(void)dealloc;
-(NSError *)lastError;
-(void)shutdown;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(long long)coreDAVLogLevel;
-(long long)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2 ;
-(char)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(void)sync;
@end
