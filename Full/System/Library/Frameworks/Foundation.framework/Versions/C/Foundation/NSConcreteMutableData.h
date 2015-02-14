/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface NSConcreteMutableData : NSMutableData {

	unsigned _reserved : 1;
	unsigned _needToZero : 1;
	unsigned _hasVM : 1;
	unsigned _retainCount : 29;
	unsigned long long _length;
	unsigned long long _capacity;
	void* _bytes;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(char)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)_freeBytes;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(const void*)bytes;
-(unsigned long long)length;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
@end
