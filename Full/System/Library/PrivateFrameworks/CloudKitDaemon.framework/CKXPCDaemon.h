/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKXPCDaemon <NSObject>
@required
-(void)performModifyRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchLikesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)setContainerID:(id)arg1 bundleID:(id)arg2 accountInfoOverride:(id)arg3 withBlock:(/*^block*/id)arg4;
-(void)cancelOperationWithIdentifier:(id)arg1;
-(void)accountStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)currentUserIDWithCompletionHandler:(/*^block*/id)arg1;
-(void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performDiscoverUserInfosOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performDiscoverAllContactsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifyRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performPublishAssetsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifyWebSharingOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)getNewWebSharingIdentity:(/*^block*/id)arg1;
-(void)performQueryOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifySubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifyBadgeOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchSharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifySharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchShareInvitationsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performShareInvitationResponseOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchShareCommentsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifyShareCommentsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performLikeItemsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performUpdateUserPresenceOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchUserQuotaOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)serverPreferredPushEnvironmentWithCompletionHandler:(/*^block*/id)arg1;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
-(void)clearAssetCacheWithDatabaseScope:(long long)arg1;
-(void)clearRecordCacheWithDatabaseScope:(long long)arg1;
-(void)clearAuthTokensForRecordWithID:(id)arg1 inScope:(long long)arg2;
-(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
-(void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
-(void)accountsWillDeleteAccount:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)accountChangedWithID:(id)arg1;
-(void)setApplicationPermission:(unsigned long long)arg1 enabled:(char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)resetAllApplicationPermissionsWithCompletionHandler:(/*^block*/id)arg1;
-(void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)wipeAllCachesAndDie;
-(void)updatePushTokens;
-(void)getPCSDiagnosticsForZonesWithCompletionHandler:(/*^block*/id)arg1;
-(void)repairZonePCSWithInfo:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)tossConfigWithCompletionHandler:(/*^block*/id)arg1;

@end
