/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALFloatingDateTime.h>

@interface CALDateOnly : CALFloatingDateTime
+(id)date;
+(id)dateOnlyWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 ;
+(id)dateOnlyFromDate:(id)arg1 ;
+(id)dateOnlyArrayFromDateTimeArray:(id)arg1 ;
-(id)description;
-(id)representationID;
-(id)NSDate;
-(void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
-(void)addYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(id)dateByAddingRawInterval:(double)arg1 ;
-(id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(void)addSecondsInGMT:(long long)arg1 ;
-(void)takeValueFrom:(id)arg1 ;
-(id)NSCalendarDateForISync;
@end
