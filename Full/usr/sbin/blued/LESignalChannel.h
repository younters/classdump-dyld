/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/blued
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IOBluetoothL2CAPChannel;

@interface LESignalChannel : NSObject {

	IOBluetoothL2CAPChannel* _l2capChannel;
	char _updateInProgress;
	unsigned short _identifier;
	IOBluetoothL2CAPChannel* l2capChannel;

}

@property (retain) IOBluetoothL2CAPChannel * l2capChannel; 
@property (assign) unsigned short identifier;                           //@synthesize identifier=_identifier - In the implementation block
-(id)initWithL2CAPChannel:(id)arg1 ;
-(IOBluetoothL2CAPChannel *)l2capChannel;
-(void)setL2capChannel:(IOBluetoothL2CAPChannel *)arg1 ;
-(void)sendCommandReject:(unsigned char)arg1 reason:(unsigned short)arg2 data:(void*)arg3 dataLength:(unsigned long long)arg4 ;
-(void)updateConnectionParametersWithMinimumInterval:(unsigned short)arg1 maximumInterval:(unsigned short)arg2 slaveLatency:(unsigned short)arg3 timeoutMultiplier:(unsigned short)arg4 ;
-(void)sendCreditBasedConnectionResponse:(unsigned char)arg1 destinationCID:(unsigned short)arg2 MTU:(unsigned short)arg3 MPS:(unsigned short)arg4 initialCredits:(unsigned short)arg5 result:(unsigned short)arg6 ;
-(void)l2capChannelClosed:(id)arg1 ;
-(void)l2capChannelData:(id)arg1 data:(char*)arg2 length:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned short)identifier;
-(void)setIdentifier:(unsigned short)arg1 ;
@end
