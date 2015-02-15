/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <SoftwareUpdate/SUUpdateService.h>
#import <SoftwareUpdate/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, SUProduct, SUPowerAssertionManager, NSMutableDictionary, NSDictionary, NSString;

@interface SUUpdateServiceDaemon : NSObject <SUUpdateService, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSMutableArray* _clients;
	NSMutableArray* _availableUpdates;
	SUProduct* _adoptedManualProduct;
	SUPowerAssertionManager* _powerAssertionManager;
	long long _didAutoInstallNotifyCount;
	NSMutableArray* _didAutoInstallNotifyStrings;
	NSMutableArray* _additionalPostLogoutInstallRequests;
	NSMutableDictionary* _productsInstalledAfterPostLogoutInstallDictionary;
	NSMutableDictionary* _additionalPackageDigestsByURL;
	NSDictionary* _principalUserCookie;
	dispatch_queue_sRef _serviceQueue;
	dispatch_queue_sRef _updateInfoQueue;
	dispatch_queue_sRef _clientNotifyQueue;
	dispatch_queue_sRef _backgroundActivityQueue;
	long long _lastThermalEmergencyCount;
	long long _retriesForBackgroundActivity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_daemonStateArchivePath;
+(id)sharedUpdateServiceDaemon;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)cancelUpdatesForProductKeys:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)currentDevKeyModeWithReply:(/*^block*/id)arg1 ;
-(id)_archivedState;
-(char)_unarchiveStateFrom:(id)arg1 ;
-(void)installStatus:(id)arg1 didChangeExternallyForProductKey:(id)arg2 ;
-(void)packageReferenceForMatchingIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPrevious:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3 ;
-(void)dumpServiceDebugInfo;
-(void)_refreshLocalUpdateObjects:(id)arg1 afterScan:(char)arg2 ;
-(void)_saveCurrentState;
-(void)_installStateDidChangeForKeys:(id)arg1 ;
-(void)_runBackgroundActionsOnCurrentQueueIfAppropriate:(char*)arg1 ;
-(void)_scheduleTransientBackgroundActionWithDelay:(long long)arg1 grace:(long long)arg2 ;
-(void)_setProductsForPostLogoutInstallResultsNotification:(id)arg1 nowIsLater:(char)arg2 ;
-(void)_performDownloadAndStageWithProductKeys:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_addAdditionalPostLogoutInstallRequests:(id)arg1 ;
-(id)_takeAllValidAdditionalPostLogoutInstallRequests;
-(id)_currentClients;
-(void)authChallengeWasReceived:(id)arg1 handled:(char*)arg2 ;
-(void)_updateProductForPostLogoutInstallResultsNotification:(id)arg1 withStatus:(id)arg2 ;
-(void)endTransactions;
-(void)authorizeForUpdatingWithExternalFormData:(id)arg1 additionalTransactions:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)takePostInstallNotificationsWithReply:(/*^block*/id)arg1 ;
-(void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 filteredByState:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)catalogInformationWithReply:(/*^block*/id)arg1 ;
-(void)refreshAvailableUpdates:(char)arg1 preferredLocalizations:(id)arg2 replyWhenDone:(/*^block*/id)arg3 ;
-(void)progressForRefreshOfAvailableUpdatesWithReply:(/*^block*/id)arg1 ;
-(void)refreshAvailableUpdatesForCurrentConfigurationLimitedToProductKeys:(id)arg1 distributionEnvironment:(id)arg2 distributionEvalutionMetainfo:(id)arg3 installedPrinters:(id)arg4 preferredLocalizations:(id)arg5 replyWhenDone:(/*^block*/id)arg6 ;
-(void)setHidden:(char)arg1 forProductKeys:(id)arg2 replyWhenDone:(/*^block*/id)arg3 ;
-(void)clearAllHiddenUpdatesWithReply:(/*^block*/id)arg1 ;
-(void)markRampedUpdatesAsSeenWithReply:(/*^block*/id)arg1 ;
-(void)buildTagCacheIfNecessaryWithReply:(/*^block*/id)arg1 ;
-(void)deviceInitiatedScanWithReply:(/*^block*/id)arg1 ;
-(void)calculateDiskSpaceRequiredForUpdatesWithProductKeys:(id)arg1 downloadingOnly:(char)arg2 reply:(/*^block*/id)arg3 ;
-(void)startDownloadingForProductKeys:(id)arg1 replyWhenDone:(/*^block*/id)arg2 ;
-(void)startUpdatesForProductKeys:(id)arg1 clientBlocksRestart:(char)arg2 replyWhenDone:(/*^block*/id)arg3 ;
-(void)startRootModeUpdatesForProductKeys:(id)arg1 clientBlocksRestart:(char)arg2 replyWhenDone:(/*^block*/id)arg3 ;
-(void)registerToInstallAfterLogoutForProductKeys:(id)arg1 nowIsLater:(char)arg2 restartNow:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)productKeysToInstallAfterLogoutWithReply:(/*^block*/id)arg1 ;
-(void)adoptManualProductArchiveByReadingFromFileHandle:(id)arg1 archiveName:(id)arg2 displayName:(id)arg3 displayVersion:(id)arg4 allowDevSigning:(char)arg5 replyWithResult:(/*^block*/id)arg6 ;
-(void)setAutomaticallyInstallLater:(char)arg1 forProductKeys:(id)arg2 replyWhenDone:(/*^block*/id)arg3 ;
-(void)productKeysToAutomaticallyInstallLaterWithReply:(/*^block*/id)arg1 ;
-(void)stashLoginCredentialsEnablingFLO:(char)arg1 reply:(/*^block*/id)arg2 ;
-(void)commitLoginCredentialsDisablingFLO:(char)arg1 finishBlock:(/*^block*/id)arg2 ;
-(void)stashURLCredential:(id)arg1 ;
-(void)stringRepresentationOfLongDescriptionForProductKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registerRequestsToInstallAfterPostLogoutUpdates:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)takeRequestsToInstallAfterPostLogoutUpdatesWithReply:(/*^block*/id)arg1 ;
-(void)statusForUpdateWithProductKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)combinedStatusForUpdatesWithProductKeys:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetServiceWithReply:(/*^block*/id)arg1 ;
-(void)schedulePeriodicActions;
-(void)startListeningForConnections;
-(void)startUpdatesForProductKeys:(id)arg1 usingClientAuthorization:(AuthorizationOpaqueRefRef)arg2 holdingBoostDuringInstall:(char)arg3 clientBlocksRestart:(char)arg4 allowOnlyAppleSigned:(char)arg5 packageScriptUserID:(unsigned)arg6 sendingStatusUpdates:(char)arg7 replyWhenDone:(/*^block*/id)arg8 ;
-(id)init;
-(void)dealloc;
@end
