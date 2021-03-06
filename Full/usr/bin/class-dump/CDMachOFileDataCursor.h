/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/class-dump
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <class-dump/CDDataCursor.h>

@class CDMachOFile;

@interface CDMachOFileDataCursor : CDDataCursor {

	CDMachOFile* _machOFile;

}

@property (readonly) CDMachOFile * machOFile;              //@synthesize machOFile=_machOFile - In the implementation block
-(CDMachOFile *)machOFile;
-(id)initWithFile:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)initWithFile:(id)arg1 address:(unsigned long long)arg2 ;
-(id)initWithSection:(id)arg1 ;
-(unsigned short)readInt16;
-(unsigned)peekInt32;
-(unsigned long long)readPtr;
-(unsigned)readInt32;
-(unsigned long long)readInt64;
-(id)initWithFile:(id)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
@end

