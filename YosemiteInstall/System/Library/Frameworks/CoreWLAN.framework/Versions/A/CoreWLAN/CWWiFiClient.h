/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreWLAN/CoreWLAN-Structs.h>
@class NSXPCConnection, NSMutableSet, NSMutableDictionary;

@interface CWWiFiClient : NSObject {

	NSXPCConnection* _xpcConnection;
	NSMutableSet* _eventList;
	NSMutableDictionary* _interfaceMap;
	dispatch_queue_sRef _mutex;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)interfaceNames;
+(id)virtualInterfaceNames;
+(id)sharedWiFiClient;
-(id)interfaces;
-(void)relinquishBluetoothPagingLockAndReply:(/*^block*/id)arg1 ;
-(void)acquireBluetoothPagingLockAndReply:(/*^block*/id)arg1 ;
-(id)interfaceWithName:(id)arg1 ;
-(char)startMonitoringEventWithType:(long long)arg1 error:(out id*)arg2 ;
-(void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)countryCodeDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)scanCacheUpdatedForWiFiInterfaceWithName:(id)arg1 ;
-(void)autoJoinDidStartForWiFiInterfaceWithName:(id)arg1 ;
-(void)autoJoinDidCompleteForWiFiInterfaceWithName:(id)arg1 ;
-(void)__startMonitoringEventWithType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)__interfaceWithName:(id)arg1 ;
-(void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)bssidDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)linkDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)linkQualityDidChangeForWiFiInterfaceWithName:(id)arg1 rssi:(long long)arg2 transmitRate:(double)arg3 ;
-(void)modeDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)interfaceAddedWithName:(id)arg1 ;
-(void)interfaceRemovedWithName:(id)arg1 ;
-(void)rsnHandshakeDidCompleteForWiFiInterfaceWithName:(id)arg1 ;
-(void)foundTetherDevices:(id)arg1 ;
-(void)internal_startUserMode8021XUsingKeychainWithSSID:(id)arg1 interfaceWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)internal_startUserMode8021XWithSSID:(id)arg1 username:(id)arg2 password:(id)arg3 identity:(id)arg4 remember:(char)arg5 interfaceWithName:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)internal_startUserMode8021XWithPasspointDomainName:(id)arg1 interfaceWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)internal_startLoginWindowMode8021XWithProfile:(id)arg1 username:(id)arg2 password:(id)arg3 interfaceWithName:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)internal_setWiFiPasswordForUserKeychain:(id)arg1 ssid:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)internal_showAvailableWiFiNetworks:(id)arg1 interfaceName:(id)arg2 ;
-(void)internal_showMICErrorWithNetworkName:(id)arg1 ;
-(void)internal_showDHCPMessage:(id)arg1 networkName:(id)arg2 ;
-(void)internal_startBrowsingForTetherDevicesAndReply:(/*^block*/id)arg1 ;
-(void)internal_stopBrowsingForTetherDevicesAndReply:(/*^block*/id)arg1 ;
-(void)internal_enableTetherDevice:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)stopMonitoringEventWithType:(long long)arg1 error:(out id*)arg2 ;
-(char)stopMonitoringAllEventsAndReturnError:(out id*)arg1 ;
-(char)startBrowsingForTetherDevicesAndReturnError:(id*)arg1 ;
-(char)stopBrowsingForTetherDevicesAndReturnError:(id*)arg1 ;
-(void)internal_foundTetherDevices:(id)arg1 ;
-(id)interface;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)delegate;
@end

