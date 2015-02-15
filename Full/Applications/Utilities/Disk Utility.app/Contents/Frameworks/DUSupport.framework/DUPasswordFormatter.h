/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:06:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Disk Utility.app/Contents/Frameworks/DUSupport.framework/DUSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface DUPasswordFormatter : NSFormatter {

	unsigned long long _maxLength;
	NSCharacterSet* _characterSet;

}
+(id)passwordFormatter;
+(id)unixNameFormatter;
+(id)asciiSet;
+(id)hexSet;
+(id)maxLengthFormatter:(unsigned long long)arg1 ;
-(char)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned long long)arg2 ;
-(id)initWithMaxLength:(unsigned long long)arg1 ;
-(void)dealloc;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
@end
