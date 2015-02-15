/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@class NSTimer;

@interface HardcopyCableReplacement : NSObject {

	char* incomingDataBuffer;
	unsigned incomingdataBufferSize;
	unsigned incomingReadHead;
	unsigned incomingWriteHead;
	char transportIsOpen;
	id dataTransportLayer;
	id hcrpDelegate;
	unsigned char printerStatus;
	char* last1284ID;
	unsigned idLen;
	unsigned currentOffset;
	unsigned short transactionID;
	unsigned pendingTransactionID;
	PDUQueueElement* pduHead;
	PDUQueueElement* pduTail;
	unsigned numberOfRemoteCreditsGrantedSoFar;
	unsigned numberOfRemoteCreditsSavedJustInCase;
	double waitTime;
	NSTimer* pduTimer;
	/*function pointer*/void* eventListener;
	void* eventRefcon;
	char printer1284IDBuffer[8096];

}

@property (retain) id transport; 
+(id)stringForTokenFrom1284ID:(id)arg1 token:(id)arg2 ;
+(id)hardcopyCableReplacement;
+(id)hardcopyCableReplacementWith:(id)arg1 ;
+(id)manufacturerFrom1284ID:(id)arg1 ;
+(id)productFrom1284ID:(id)arg1 ;
-(int)closeTransportConnection;
-(id)initWithTransport:(id)arg1 ;
-(void)setTransport:(id)arg1 ;
-(int)openTransportConnection;
-(void)flushPDUQueue;
-(void)flushDataQueue;
-(unsigned short)transportConnectionMaximumTransferUnit;
-(int)requestCredits;
-(void)decrementLocalCreditCount:(unsigned)arg1 ;
-(int)writeOnTransport:(void*)arg1 length:(unsigned)arg2 blocking:(char)arg3 numberOfWrittenBytes:(unsigned long long*)arg4 ;
-(int)dequeueBytes:(char*)arg1 length:(unsigned)arg2 deQueuedBytes:(unsigned long long*)arg3 ;
-(int)vendCreditsToClient:(unsigned)arg1 ;
-(unsigned short)getNewValidTransactionID;
-(char*)buildPDU:(int)arg1 transaction:(unsigned short)arg2 paramterLength:(unsigned short)arg3 parameters:(char*)arg4 ;
-(int)sendPDU:(char*)arg1 ;
-(int)enqueueBytes:(char*)arg1 length:(unsigned)arg2 ;
-(unsigned)nBytesInQueue;
-(void)handleCreditOutOfSync;
-(void)delayedRequestForCredits:(id)arg1 ;
-(char*)dequeuePDU;
-(void)pduSent:(char*)arg1 ;
-(char)mustEnqueuePDU;
-(int)enqueuePDU:(char*)arg1 ;
-(int)transportSendPDU:(char*)arg1 ;
-(void)timerAction:(id)arg1 ;
-(int)processPDU:(int)arg1 transaction:(unsigned short)arg2 paramterLength:(unsigned short)arg3 status:(int)arg4 parameters:(char*)arg5 ;
-(int)handleCatastrophicError:(id)arg1 ;
-(void)processIncomingCredits:(unsigned)arg1 ;
-(int)openConnectionWith:(id)arg1 ;
-(unsigned short)connectionMaximumTransferUnit;
-(int)write:(void*)arg1 length:(unsigned long long)arg2 numberOfWrittenBytes:(unsigned long long*)arg3 ;
-(int)read:(void*)arg1 length:(unsigned long long)arg2 numberOfReadBytes:(unsigned long long*)arg3 ;
-(int)peek:(void*)arg1 length:(unsigned long long)arg2 numberOfReadBytes:(unsigned long long*)arg3 ;
-(int)printerStatus:(char*)arg1 ;
-(int)get1284ID:(char*)arg1 ;
-(int)hardReset;
-(int)setupAndValidateTransportConnection:(int)arg1 ;
-(void)writeDataCompleted:(int)arg1 ;
-(int)processNewData:(char*)arg1 length:(unsigned)arg2 ;
-(unsigned)numberOfRemoteCreditsGrantedSoFar;
-(int)returnsUnusedCredits;
-(unsigned)removeAllPDUsOfType:(int)arg1 ;
-(int)receivePDU:(char*)arg1 ;
-(int)setEventCallBack:(/*function pointer*/void*)arg1 refCon:(void*)arg2 ;
-(id)transport;
-(unsigned)readBufferSize;
-(int)setReadBufferSize:(unsigned)arg1 ;
-(int)softReset;
-(int)openConnection;
-(int)closeConnection;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)delegate;
@end
