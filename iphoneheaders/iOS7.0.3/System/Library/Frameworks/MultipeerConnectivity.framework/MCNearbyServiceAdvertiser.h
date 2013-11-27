/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirTraffic/NSNetServiceDelegate.h>

@protocol MCNearbyServiceAdvertiserDelegate, OS_dispatch_queue;
@class , MCPeerID, NSDictionary, NSString, NSMutableDictionary, NSObject, NSNetService;

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate> {

	BOOL _isAdvertising;
	BOOL _wasAdvertising;
	<MCNearbyServiceAdvertiserDelegate>* _delegate;
	MCPeerID* _myPeerID;
	NSDictionary* _discoveryInfo;
	NSString* _serviceType;
	NSString* _formattedServiceType;
	NSMutableDictionary* _peers;
	int _outgoingInviteID;
	NSObject<OS_dispatch_queue>* _syncQueue;
	NSMutableDictionary* _invites;
	NSNetService* _networkServer;

}

@property (assign,nonatomic) <MCNearbyServiceAdvertiserDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MCPeerID * myPeerID;                                       //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,copy) NSDictionary * discoveryInfo;                                  //@synthesize discoveryInfo=_discoveryInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                        //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * formattedServiceType;                               //@synthesize formattedServiceType=_formattedServiceType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peers;                                 //@synthesize peers=_peers - In the implementation block
@property (nonatomic,retain) NSNetService * networkServer;                                //@synthesize networkServer=_networkServer - In the implementation block
@property (assign,nonatomic) int outgoingInviteID;                                        //@synthesize outgoingInviteID=_outgoingInviteID - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * syncQueue;                     //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invites;                               //@synthesize invites=_invites - In the implementation block
@property (assign,nonatomic) BOOL isAdvertising;                                          //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign,nonatomic) BOOL wasAdvertising;                                         //@synthesize wasAdvertising=_wasAdvertising - In the implementation block
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(id)syncQueue;
-(id)myPeerID;
-(id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3 ;
-(id)discoveryInfo;
-(void)startAdvertisingPeer;
-(void)stopAdvertisingPeer;
-(void)setDiscoveryInfo:(id)arg1 ;
-(BOOL)isAdvertising;
-(void)setIsAdvertising:(BOOL)arg1 ;
-(BOOL)wasAdvertising;
-(void)setWasAdvertising:(BOOL)arg1 ;
-(void)applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)applicationWillTerminateNotification:(id)arg1 ;
-(id)networkServer;
-(id)formattedServiceType;
-(void)setNetworkServer:(id)arg1 ;
-(void)insertTXTRecord;
-(void)syncStartAdvertisingPeer;
-(void)syncStopAdvertisingPeer;
-(void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2 ;
-(void)parseIDString:(id*)arg1 displayName:(id*)arg2 fromIdentifier:(id)arg3 ;
-(void)syncCloseConnectionForPeer:(id)arg1 ;
-(void)syncReceivedData:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncAttachConnection:(id)arg1 toPeer:(id)arg2 ;
-(void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)setFormattedServiceType:(id)arg1 ;
-(int)outgoingInviteID;
-(void)setOutgoingInviteID:(int)arg1 ;
-(id)invites;
-(void)setInvites:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)setServiceType:(id)arg1 ;
-(id)serviceType;
-(id)peers;
-(void)setPeers:(id)arg1 ;
-(void)setSyncQueue:(id)arg1 ;
@end
