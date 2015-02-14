/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface MCSubdata : NSData {

	NSData* _parentData;
	NSRange _subrange;

}

@property (assign,nonatomic) NSRange subrange;                 //@synthesize subrange=_subrange - In the implementation block
@property (nonatomic,retain) NSData * parentData;              //@synthesize parentData=_parentData - In the implementation block
-(NSRange)subrange;
-(NSData *)parentData;
-(void)setSubrange:(NSRange)arg1 ;
-(void)setParentData:(NSData *)arg1 ;
-(id)initWithParent:(id)arg1 range:(NSRange)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(const void*)bytes;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(char)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end
