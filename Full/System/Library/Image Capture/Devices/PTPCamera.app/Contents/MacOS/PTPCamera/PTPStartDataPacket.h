/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Image Capture/Devices/PTPCamera.app/Contents/MacOS/PTPCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPStartDataPacket : NSObject {

	unsigned _transactionID;
	unsigned long long _totalDataSize;

}
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(id)initWithTransactionID:(unsigned)arg1 totalDataSize:(unsigned long long)arg2 ;
-(unsigned long long)totalDataSize;
-(void)setTotalDataSize:(unsigned long long)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(id)description;
@end
