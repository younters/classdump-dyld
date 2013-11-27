/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface APFormatter : NSFormatter {

	NSCharacterSet* _characterSet;
	NSCharacterSet* _invertedCharacterSet;
	unsigned _maxLength;

}

@property (assign,nonatomic) unsigned maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
+(id)formatterForBSFormatter:(int)arg1 withMaxLen:(long)arg2 ;
+(id)hexFormatter:(unsigned)arg1 ;
+(id)numberOnlyFormatter:(unsigned)arg1 ;
+(id)sharedIPFormatter;
+(id)sharedIPv6Formatter;
+(id)ipOctetFormatter:(unsigned)arg1 ;
+(id)sharedIPv4PrefixFormatter;
+(id)sharedPhoneNumberFormatter;
+(id)portRangeFormatter:(unsigned)arg1 ;
+(id)romanSet;
+(id)ipv4AddressSet;
+(id)ipv6AddressSet;
+(id)ipv4AddressWithPrefixSet;
+(id)multipleIpAddressesSet;
+(id)portRangeSet;
+(id)phoneNumberSet;
+(id)asciiSet;
+(id)hexSet;
+(id)romanFormatter:(unsigned)arg1 ;
+(id)ipFormatter:(unsigned)arg1 ;
+(id)sharedMultipleIPFormatter;
+(id)multipleIPFormatter:(unsigned)arg1 ;
+(id)maxLengthFormatter:(unsigned)arg1 ;
+(id)nonZeroNumberOnly:(unsigned)arg1 ;
+(id)phoneNumberFormatter:(unsigned)arg1 ;
+(id)asciiFormatter:(unsigned)arg1 ;
+(id)pogoPasswordSet;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)dealloc;
-(id)stringForObjectValue:(id)arg1 ;
-(id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned)arg2 ;
-(void)setInvertedCharacterSet:(id)arg1 ;
-(id)invertedCharacterSet;
-(id)initWithMaxLength:(unsigned)arg1 ;
-(id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned)arg2 ;
-(void)setCharacterSet:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)characterSet;
-(unsigned)maxLength;
-(void)setMaxLength:(unsigned)arg1 ;
@end
