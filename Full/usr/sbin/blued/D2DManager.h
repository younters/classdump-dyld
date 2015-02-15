/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/blued
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <blued/blued-Structs.h>
@class NSMutableArray, NSDictionary, NSMutableSet, NSMutableIndexSet, NSNumber, IOBluetoothSDPServiceRecord, IOBluetoothL2CAPChannel, NSMutableDictionary, NSTimer, NSData, NSSet;

@interface D2DManager : NSObject {

	NSMutableArray* advertisedPairs;
	NSDictionary* SDPDictionary;
	NSMutableSet* blacklistKeys;
	NSMutableSet* keysToBrowse;
	NSMutableIndexSet* browseKeysCRCSet;
	NSNumber* serviceRecordHandle;
	IOBluetoothSDPServiceRecord* serviceRecord;
	IOBluetoothL2CAPChannel* bnepChannel;
	NSMutableDictionary* deviceTimeouts;
	NSTimer* timeout;
	NSData* fullEIRAdvertisement;
	int generationCounter;
	int numberOfActiveConnections;
	int maxNumberOfActiveConnections;
	int backoffCounter;
	char _D2DEnabled;

}

@property (readonly) D2DEIRRecord D2DEIRRecord; 
@property (retain) NSData * fullEIRAdvertisement; 
@property (assign) int D2DGeneration; 
@property (copy) NSNumber * serviceRecordHandle; 
@property (assign,nonatomic) char D2DEnabled;                     //@synthesize D2DEnabled=_D2DEnabled - In the implementation block
@property (readonly) int inquiryDelay; 
@property (readonly) char isAdvertising; 
@property (readonly) NSSet * keysToBrowse; 
@property (retain) NSMutableArray * advertisedPairs; 
@property (retain) NSDictionary * SDPDictionary; 
+(id)sharedD2DManager;
-(char)D2DEnabled;
-(D2DEIRRecord)D2DEIRRecord;
-(void)publishSDPRecord;
-(NSSet *)keysToBrowse;
-(char)deviceEIRRecordMatchesBrowseKeys:(id)arg1 ;
-(void)sendBrowseResultsForDevice:(id)arg1 ;
-(int)inquiryDelay;
-(void)handleBonjourData:(id)arg1 device:(id)arg2 ;
-(NSMutableArray *)advertisedPairs;
-(void)setAdvertisedPairs:(NSMutableArray *)arg1 ;
-(void)setServiceRecordHandle:(NSNumber *)arg1 ;
-(void)setSDPDictionary:(NSDictionary *)arg1 ;
-(void)setD2DEnabled:(char)arg1 ;
-(void)l2capChannelConnected:(id)arg1 ;
-(void)l2capChannelDisconnected:(id)arg1 ;
-(int)D2DGeneration;
-(void)setFullEIRAdvertisement:(NSData *)arg1 ;
-(void)postMessageToMDNSResponder:(id)arg1 key:(id)arg2 value:(id)arg3 device:(id)arg4 ;
-(char)isValidKey:(id)arg1 ;
-(char)advertisingKey:(id)arg1 value:(id)arg2 ;
-(void)rebuildFullAdvertisement;
-(void)setD2DGeneration:(int)arg1 ;
-(NSNumber *)serviceRecordHandle;
-(NSDictionary *)SDPDictionary;
-(void)armDeviceTimeout;
-(void)timeoutDevices:(id)arg1 ;
-(void)sendTimeoutForDevice:(id)arg1 ;
-(void)updateTimeoutForDevice:(id)arg1 ;
-(void)mDNSResponderConnectionError;
-(void)startAdvertisingKey:(id)arg1 value:(id)arg2 ;
-(void)stopAdvertisingKey:(id)arg1 value:(id)arg2 ;
-(void)startBrowsingForKey:(id)arg1 ;
-(void)stopBrowsingForKey:(id)arg1 ;
-(void)retainInstance:(id)arg1 ;
-(void)releaseInstance:(id)arg1 ;
-(NSData *)fullEIRAdvertisement;
-(char)isAdvertising;
-(id)init;
-(void)dealloc;
@end
