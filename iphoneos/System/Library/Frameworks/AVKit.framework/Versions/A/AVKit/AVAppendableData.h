/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSMutableData;

@interface AVAppendableData : NSData {

	NSMutableData* _backing;
	unsigned long long _readOnlyLength;
	unsigned long long _appendableLength;

}
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
-(unsigned long long)maximumCapacity;
-(id)init;
-(const void*)bytes;
-(unsigned long long)length;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)appendData:(id)arg1 ;
@end
