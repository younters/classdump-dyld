/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:46:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/sbin/emond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface GCDAsyncWritePacket : NSObject {

	NSData* buffer;
	unsigned long long bytesDone;
	long long tag;
	double timeout;

}
-(id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3 ;
-(void)dealloc;
@end
