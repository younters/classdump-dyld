/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/blued
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <blued/blued-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSDate, NSMutableSet, NSTimer, IOBluetoothDevice, IOBluetoothHostController;

@interface InquiryManager : NSObject {

	NSMutableArray* _inquiryManagerClientsArray;
	NSMutableArray* _foundDevicesArray;
	NSMutableArray* _nameRequestFailedLastTimeArray;
	NSMutableDictionary* _devicesFoundNeedingRNR;
	NSMutableArray* _devicesPendingNames;
	NSDate* _timeToStopRNR;
	NSMutableSet* _devicesWithCompleteRNR;
	NSMutableSet* _devicesPendingD2DSDP;
	NSMutableDictionary* _d2dGenerationDictionary;
	NSTimer* _inquiryTimer;
	IOBluetoothDevice* _deviceWithFinishedNameRequest;
	IOBluetoothDevice* _currentD2DSDPDevice;
	int _lastInquiryStatus;
	int _lastNameRequestStatus;
	char _wantsToGoIdle;
	char _inquiryInProgress;
	char _inquiryWasPaused;
	char _nameRequestsComplete;
	char _commandDisallowedRetryPending;
	char _foundInterestingDevicesThisCycle;
	unsigned char _currentActivity;
	unsigned char _defaultInquiryTime;
	char _inquiryThreshold;
	IOBluetoothHostController* _hostController;

}

@property (nonatomic,retain) IOBluetoothDevice * deviceWithFinishedNameRequest;              //@synthesize deviceWithFinishedNameRequest=_deviceWithFinishedNameRequest - In the implementation block
@property (nonatomic,retain) NSDate * timeToStopRNR;                                         //@synthesize timeToStopRNR=_timeToStopRNR - In the implementation block
@property (assign,nonatomic) unsigned char defaultInquiryTime;                               //@synthesize defaultInquiryTime=_defaultInquiryTime - In the implementation block
@property (assign,nonatomic) char inquiryThreshold;                                          //@synthesize inquiryThreshold=_inquiryThreshold - In the implementation block
@property (retain) IOBluetoothDevice * currentD2DSDPDevice;                                  //@synthesize currentD2DSDPDevice=_currentD2DSDPDevice - In the implementation block
+(id)defaultManager;
-(int)newDeviceFound:(IOBluetoothHCIUnifiedInquiryResult*)arg1 ;
-(void)inquiryCompleteHCIEvent:(int)arg1 ;
-(IOBluetoothDevice *)currentD2DSDPDevice;
-(void)inquiryStopTimerFired:(id)arg1 ;
-(id)findClientForRemoteObject:(id)arg1 ;
-(char)doWeHaveActiveClients;
-(void)notifyAllClientsOfPendingDelegateMessages;
-(void)manageStateMachine;
-(id)findInquiryClientForRemoteObject:(id)arg1 ;
-(unsigned char)defaultInquiryTime;
-(char)doWeHaveD2DClients;
-(int)cancelHCIInquiry;
-(void)stopNameRequests;
-(void)startGoingIdle;
-(int)startHCIInquiry;
-(void)notifyAllClientsOfDeviceInquiryStarted;
-(int)notifyClientsOfInquiryComplete:(unsigned char)arg1 infiniteSearchClientsOnly:(char)arg2 ;
-(char)doWeHaveUpdateNewDeviceNamesClient;
-(int)startNameRequests;
-(void)notifyAllClientsOfDeviceWithUpdatedName:(id)arg1 ;
-(void)setDeviceWithFinishedNameRequest:(IOBluetoothDevice *)arg1 ;
-(void)incrementAllClientIterations;
-(void)setClientsToInactiveIfAppropriate;
-(void)inquiryRetryDueToCommandDisallowed;
-(void)setTimeToStopRNR:(NSDate *)arg1 ;
-(void)notifyAllClientsOfUpdatingDeviceNamesStarted;
-(void)handleRemoteNameRequests;
-(void)notifyAllClientsOfUpdatingDeviceName:(id)arg1 ;
-(void)handleD2DSDP;
-(void)setCurrentD2DSDPDevice:(IOBluetoothDevice *)arg1 ;
-(void)getAggregateParametersOfAllInquiryClients:(unsigned*)arg1 length:(char*)arg2 maxResponseCount:(char*)arg3 ;
-(void)notifyClient:(id)arg1 deviceFound:(id)arg2 rssi:(char)arg3 ;
-(void)notifyClient:(id)arg1 updatingNameOfDevice:(id)arg2 ;
-(void)notifyClient:(id)arg1 deviceWithUpdatedName:(id)arg2 ;
-(id)getFoundDeviceForDeviceAddress:(BluetoothDeviceAddress)arg1 ;
-(void)notifyAllClientsOfDeviceFound:(id)arg1 rssi:(char)arg2 ;
-(char)doWeHaveAtLeastOneInfiniteClient;
-(void)d2dBrowseKeysChanged;
-(void)notifyAllClientsOfPreviouslyFoundDevices:(id)arg1 ;
-(IOBluetoothDevice *)deviceWithFinishedNameRequest;
-(NSDate *)timeToStopRNR;
-(char)inquiryThreshold;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(void)remoteNameRequestComplete:(id)arg1 status:(int)arg2 ;
-(int)joinInquiryWithRemoteObject:(n@)arg1 withAttributes:(nO@)arg2 withParameters:(n@)arg3 ;
-(int)unjoinInquiryForRemoteObject:(n@)arg1 ;
-(char)hasRemoteObjectJoinedInquiry:(n@)arg1 ;
-(char)setInquiryParameters:(id)arg1 forRemoteObject:(id)arg2 ;
-(void)setDefaultInquiryTime:(unsigned char)arg1 ;
-(void)setInquiryThreshold:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)resume;
-(void)removeClient:(id)arg1 ;
-(void)pause;
@end
