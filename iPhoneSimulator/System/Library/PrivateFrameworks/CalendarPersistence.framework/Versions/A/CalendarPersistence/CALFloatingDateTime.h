/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/CALDate.h>

@interface CALFloatingDateTime : CALDate
+(id)date;
+(id)dateWithYear:(int)arg1 month:(unsigned)arg2 day:(unsigned)arg3 hour:(unsigned)arg4 minute:(unsigned)arg5 second:(unsigned)arg6 ;
+(id)timeOnlyWithHour:(unsigned)arg1 minute:(unsigned)arg2 second:(unsigned)arg3 ;
-(id)description;
-(double)timeIntervalSinceNow;
-(id)initWithString:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(id)representationID;
-(id)NSDate;
-(void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
-(char)meetComparisonCondition:(unsigned char)arg1 withDate:(id)arg2 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 ;
-(void)years:(long long*)arg1 months:(long long*)arg2 days:(long long*)arg3 hours:(long long*)arg4 minutes:(long long*)arg5 seconds:(long long*)arg6 sinceDate:(id)arg7 ;
-(long long)offsetFromGMT;
-(id)NSDateWithTimeZone:(id)arg1 ;
-(id)NSCalendarDate;
-(void)addYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(id)NSDateWithGMT;
-(long long)offsetFromGMTForTimeZone:(id)arg1 ;
-(void)setTimeZone:(id)arg1 keepingLocalDate:(char)arg2 ;
-(void)roundToDay;
-(void)addSecondsInGMT:(long long)arg1 ;
-(void)takeValueFrom:(id)arg1 ;
-(char)isEqualAsDateOnly:(id)arg1 ;
-(id)initWithYear:(int)arg1 month:(unsigned)arg2 day:(unsigned)arg3 hour:(unsigned)arg4 minute:(unsigned)arg5 second:(unsigned)arg6 ;
-(void)setYear:(int)arg1 month:(unsigned)arg2 day:(unsigned)arg3 hour:(unsigned)arg4 minute:(unsigned)arg5 second:(unsigned)arg6 ;
-(void)fillComparisonCDate:(CALCDate*)arg1 forDate:(id)arg2 ;
-(id)NSDateWithCalendar:(id)arg1 ;
@end
