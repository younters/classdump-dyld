/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLANKit/APFormatter.h>

@interface UTF8Formatter : APFormatter {

	unsigned long long _maxByteCount;

}
+(id)utf8Formatter;
+(id)utf8Formatter:(int)arg1 ;
+(id)utf8FormatterWithMaxByteCount:(int)arg1 maxLength:(int)arg2 ;
-(char)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)initWithMaxByteCount:(int)arg1 maxLength:(int)arg2 ;
-(void)setMaxByteCount:(unsigned long long)arg1 ;
-(unsigned long long)maxByteCount;
@end
