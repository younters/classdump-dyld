/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSNumberFormatter, NSString;

@interface NSUnitFormatter : NSFormatter {

	NSNumberFormatter* _numberFormatter;
	long long _unitStyle;
	UAMeasureFormatRef _formatter;
	UPluralRulesRef _prules;
	char _modified;
	NSString* _localeID;

}

@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
-(NSNumberFormatter *)numberFormatter;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(long long)unitStyle;
-(void)setUnitStyle:(long long)arg1 ;
-(id)unitStringFromValue:(double)arg1 unit:(unsigned long long)arg2 ;
-(id)stringForValue1:(double)arg1 unit1:(unsigned long long)arg2 value2:(double)arg3 unit2:(unsigned long long)arg4 ;
-(id)stringForValue:(double)arg1 unit:(unsigned long long)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end
