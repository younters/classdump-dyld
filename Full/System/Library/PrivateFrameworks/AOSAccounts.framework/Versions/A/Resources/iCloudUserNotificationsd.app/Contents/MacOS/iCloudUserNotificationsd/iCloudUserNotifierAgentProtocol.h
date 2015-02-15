/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSAccounts.framework/Versions/A/Resources/iCloudUserNotificationsd.app/Contents/MacOS/iCloudUserNotificationsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol iCloudUserNotifierAgentProtocol <NSObject>
@required
-(void)setClientIdentifier:(id)arg1;
-(void)setDelegateMachServiceName:(id)arg1;
-(void)deliverNotificaton:(id)arg1;
-(void)removeNotificationWithIdentifier:(id)arg1;
-(void)removeAllNotifications;
-(void)pendingNotificationsWithIdentifier:(id)arg1 replyBlock:(/*^block*/id)arg2;

@end
