/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:59:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/QuickLook/iCal.qlgenerator/Contents/MacOS/iCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDateComponents, NSCalendar;

@interface QLIcalDate : NSObject {

	NSDateComponents* components;
	NSCalendar* calendar;
	char isFloating;
	char isAllDay;

}

@property (readonly) NSDateComponents * components; 
@property (readonly) NSCalendar * calendar; 
+(id)qlEndDateWithICSDate:(id)arg1 icsCalendar:(id)arg2 ;
+(id)qlDateWithICSDate:(id)arg1 icsCalendar:(id)arg2 ;
-(id)descriptionWithFriendlyTerms;
-(void)configureFormatter:(id)arg1 ;
-(id)remindersTimeDescription;
-(id)initWithICSDate:(id)arg1 icsCalendar:(id)arg2 endDate:(char)arg3 ;
-(id)stringWithFormatter:(id)arg1 ;
-(id)timeDescriptionWithDate:(id)arg1 ;
-(id)shortTimeZoneDescription;
-(void)dealloc;
-(id)description;
-(NSDateComponents *)components;
-(NSCalendar *)calendar;
@end
