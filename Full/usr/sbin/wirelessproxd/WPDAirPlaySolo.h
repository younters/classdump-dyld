/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/wirelessproxd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <wirelessproxd/CBPeripheralManagerDelegate.h>
#import <wirelessproxd/XPCConnectionDelegate.h>

@class XPCConnection, CBPeripheralManager, NSData, NSString;

@interface WPDAirPlaySolo : NSObject <CBPeripheralManagerDelegate, XPCConnectionDelegate> {

	char _isScanning;
	char _isAdvertising;
	long long _advertisingType;
	XPCConnection* _connection;
	CBPeripheralManager* _peripheralManager;
	NSData* _advertisingPayload;
	NSData* _foundPayload;
	NSString* _processName;

}

@property (assign) char isScanning;                                                //@synthesize isScanning=_isScanning - In the implementation block
@property (assign) char isAdvertising;                                             //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign) long long advertisingType;                                      //@synthesize advertisingType=_advertisingType - In the implementation block
@property (nonatomic,retain) XPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) CBPeripheralManager * peripheralManager;              //@synthesize peripheralManager=_peripheralManager - In the implementation block
@property (nonatomic,retain) NSData * advertisingPayload;                          //@synthesize advertisingPayload=_advertisingPayload - In the implementation block
@property (nonatomic,retain) NSData * foundPayload;                                //@synthesize foundPayload=_foundPayload - In the implementation block
@property (retain) NSString * processName;                                         //@synthesize processName=_processName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsAdvertising:(char)arg1 ;
-(void)connectionDied;
-(CBPeripheralManager *)peripheralManager;
-(void)setAdvertisingType:(long long)arg1 ;
-(void)setAdvertisingPayload:(NSData *)arg1 ;
-(long long)advertisingType;
-(void)advertise:(unsigned char)arg1 ;
-(NSData *)advertisingPayload;
-(void)setIsScanning:(char)arg1 ;
-(char)isScanning;
-(void)messageArrived:(id)arg1 ;
-(id)initWithConnection:(id)arg1 processName:(id)arg2 ;
-(void)setPeripheralManager:(CBPeripheralManager *)arg1 ;
-(void)transferPeripheralDiscovered:(id)arg1 ;
-(void)setFoundPayload:(NSData *)arg1 ;
-(NSData *)foundPayload;
-(void)startConnectionlessAirPlaySoloAdvertising:(id)arg1 ;
-(void)stopConnectionlessAirPlaySoloAdvertising;
-(void)startConnectionlessAirPlaySoloScanning:(id)arg1 ;
-(void)stopConnectionlessAirPlaySoloScanning:(id)arg1 ;
-(void)airPlaySoloLostDevice:(id)arg1 ;
-(void)startScanning:(unsigned char)arg1 ;
-(void)startTrackingPeer:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)setConnection:(XPCConnection *)arg1 ;
-(XPCConnection *)connection;
-(void)setProcessName:(NSString *)arg1 ;
-(char)isAdvertising;
-(void)dealloc;
-(NSString *)processName;
@end
