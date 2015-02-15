/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/usernoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <usernoted/NCApplicationDelegate.h>
#import <usernoted/NCStorageDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NCConnection, NSMutableDictionary, NSMutableArray, NSMapTable, NCStorage, NSString, NSArray, PNPushNotificationCenter, NSDictionary;

@interface NCNotificationServer : NSObject <NCApplicationDelegate, NCStorageDelegate> {

	NSObject*<OS_dispatch_queue> _server_queue;
	NSMutableSet* _connections;
	NSMutableSet* _pushConnections;
	NCConnection* _dockConnection;
	NCConnection* _eventConnection;
	NSMutableSet* _testConnections;
	NSMutableDictionary* _applicationsByBundleIdentifier;
	NSMutableArray* _sortedApplicationIdentifiers;
	NSMutableSet* _appsThatCantBadge;
	NSMutableSet* _proxyApplications;
	NSMutableDictionary* _preferences;
	NSMutableDictionary* _registeredEventDaemons;
	NSMutableDictionary* _connectionsByIdentity;
	NSMapTable* _notificationSchedules;
	unsigned long long _maxStoredNotifications;
	NCStorage* _storage;
	NSString* _webOnDemandToken;
	NSArray* _webOnDemandEvents;
	PNPushNotificationCenter* _pushCenter;
	BOOL _loginwindowShieldUp;
	int _time_token;
	BOOL _dndEnabled;

}

@property (readonly) NSObject*<OS_dispatch_queue> server_queue;              //@synthesize server_queue=_server_queue - In the implementation block
@property (readonly) NSArray * centerConnections; 
@property (readonly) NSArray * preferenceConnections; 
@property (readonly) NSArray * sortedBundleIdentifiers;                      //@synthesize sortedApplicationIdentifiers=_sortedApplicationIdentifiers - In the implementation block
@property (readonly) NSDictionary * preferences;                             //@synthesize preferences=_preferences - In the implementation block
@property (readonly) BOOL loginwindowShieldUp;                               //@synthesize loginwindowShieldUp=_loginwindowShieldUp - In the implementation block
@property (nonatomic,readonly) NSArray * allApplications; 
@property (assign,nonatomic) BOOL dndEnabled;                                //@synthesize dndEnabled=_dndEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(NSObject*<OS_dispatch_queue>)server_queue;
-(void)addClientConnection:(id)arg1 daemon:(char)arg2 ;
-(void)addWebConnection:(id)arg1 ;
-(void)addSocialConnection:(id)arg1 ;
-(void)addProxyConnection:(id)arg1 ;
-(void)addCenterConnection:(id)arg1 ;
-(void)addPreferenceConnection:(id)arg1 ;
-(void)addDockConnection:(id)arg1 ;
-(void)addUserEventAgentConnection:(id)arg1 ;
-(void)addTestConnection:(id)arg1 ;
-(void)application:(id)arg1 badgeIconsChangedTo:(char)arg2 ;
-(void)sendPreferenceChangeMessageForApplication:(id)arg1 fromConnection:(id)arg2 ;
-(void)pushWakeEnabled:(BOOL)arg1 changedForApplication:(id)arg2 ;
-(id)pushTokenForApplication:(id)arg1 ;
-(void)application:(id)arg1 displayedNotificationShouldBeRemoved:(id)arg2 ;
-(void)application:(id)arg1 presentNotification:(id)arg2 droppedNotifications:(unsigned long long)arg3 ;
-(void)application:(id)arg1 alertUpdated:(id)arg2 ;
-(BOOL)loginwindowShieldUp;
-(void)applicationDeliveredRemoved:(id)arg1 notifications:(id)arg2 ;
-(void)application:(id)arg1 setBadge:(unsigned long long)arg2 ;
-(void)application:(id)arg1 notificationFired:(id)arg2 ;
-(void)application:(id)arg1 notificationShouldBePresentedPing:(id)arg2 ;
-(void)application:(id)arg1 alertSnoozed:(id)arg2 ;
-(void)applicationDisplayedNotificationsCleared:(id)arg1 ;
-(void)application:(id)arg1 updateSummary:(id)arg2 forToday:(BOOL)arg3 ;
-(void)applicationNoLongerInList:(id)arg1 ;
-(void)sendAppUpdatedMessage:(id)arg1 ;
-(void)deliveredNotificationsChangedForApplication:(id)arg1 ;
-(void)scheduledNotificationsChangedForApplication:(id)arg1 ;
-(void)displayedNotificationsChangedForApplication:(id)arg1 ;
-(void)applicationPresentedListChanged:(id)arg1 force:(char)arg2 ;
-(void)applicationSendWakeEvent:(id)arg1 withToken:(id)arg2 ;
-(void)application:(id)arg1 showSnoozedAlert:(id)arg2 ;
-(void)application:(id)arg1 notificationsExpired:(id)arg2 ;
-(void)_shieldUp:(id)arg1 ;
-(void)_shieldDown:(id)arg1 ;
-(void)_prepopulateDefaultSystemApplications;
-(void)expireSummaries;
-(void)sendDockDisabledBadgeList;
-(void)_debugDump:(id)arg1 ;
-(BOOL)dndEnabled;
-(NSArray *)centerConnections;
-(id)applicationWithBundleIdentifier:(id)arg1 createIfNecessary:(char)arg2 creationInfo:(id)arg3 ;
-(void)sendOrderChangeMessage:(id)arg1 ;
-(void)_recalculateBadgeDisabledTable;
-(id)applicationWithBundleIdentifier:(id)arg1 createIfNecessary:(char)arg2 ;
-(void)sendAppDeletedMessage:(id)arg1 ;
-(void)setNewApplicationOrder:(id)arg1 fromConnection:(id)arg2 ;
-(void)tellClientsAboutSummaryStateChanged:(BOOL)arg1 ;
-(id)applicationForConnection:(id)arg1 createIfNecessary:(char)arg2 ;
-(NSArray *)preferenceConnections;
-(void)sendExtraTestInfoForApplication:(id)arg1 ;
-(id)applicationForPushTopic:(id)arg1 ;
-(void)unregisterLiverpoolPushTopicFromApp:(id)arg1 ;
-(id)effectiveApplicationForNotificationMessage:(id)arg1 toApplication:(id)arg2 ;
-(id)effectiveAppForNotifications:(id)arg1 app:(id)arg2 ;
-(void)writeOutArchive:(id)arg1 withAdditionalInfo:(id)arg2 ;
-(void)debugDumpToPath:(id)arg1 withAdditionalInfo:(id)arg2 ;
-(void)application:(id)arg1 responseStateChanged:(id)arg2 ;
-(void)applicationPresentedListChanged:(id)arg1 ;
-(void)applicationRestoreAlerts:(id)arg1 ;
-(void)storage:(id)arg1 resetRebuildWithData:(/*^block*/id)arg2 ;
-(void)setDndEnabled:(BOOL)arg1 ;
-(void)changeDoNotDisturbValue:(BOOL)arg1 ;
-(id)applicationOrWidgetWithBundleIdentifier:(id)arg1 ;
-(void)iterateCentersOfType:(int)arg1 callback:(/*^block*/id)arg2 ;
-(void)checkForDeletedApplication:(id)arg1 ;
-(void)noteUpdateApplication:(id)arg1 ;
-(void)registerDaemon:(id)arg1 events:(id)arg2 token:(id)arg3 ;
-(void)unregisterDaemon:(id)arg1 ;
-(void)registerWebOnDemandDaemonWithEvents:(id)arg1 token:(id)arg2 ;
-(void)unregisterWebOnDemandDaemonWithToken:(id)arg1 ;
-(void)sendProgressForApplicationMessage:(id)arg1 ;
-(void)setPreferences:(id)arg1 fromConnection:(id)arg2 ;
-(void)pushConnectionsForEnvironment:(id)arg1 receivedToken:(id)arg2 ;
-(void)pushNotificationReceivedFor:(id)arg1 withUserInfo:(id)arg2 ;
-(id)registerPushWithConnection:(id)arg1 app:(id)arg2 ;
-(void)unregisterPushFromConnection:(id)arg1 app:(id)arg2 ;
-(id)applicationQueue:(id)arg1 ;
-(void)testAppDeleteApplication:(id)arg1 ;
-(NSArray *)sortedBundleIdentifiers;
-(NSArray *)allApplications;
-(void)unregisterConnection:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeApplication:(id)arg1 ;
-(NSDictionary *)preferences;
@end
