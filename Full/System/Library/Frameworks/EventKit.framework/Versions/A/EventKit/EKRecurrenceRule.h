/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <EventKit/NSCopying.h>

@class EKRecurrenceEnd, EKFrozenRecurrenceRule, NSString, NSArray;

@interface EKRecurrenceRule : EKObject <NSCopying> {

	EKRecurrenceEnd* _cachedEnd;
	EKFrozenRecurrenceRule* backingRule;

}

@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) EKRecurrenceEnd * recurrenceEnd; 
@property (nonatomic,readonly) int frequency; 
@property (nonatomic,readonly) long long interval; 
@property (nonatomic,readonly) long long firstDayOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheMonth; 
@property (nonatomic,readonly) NSArray * daysOfTheYear; 
@property (nonatomic,readonly) NSArray * weeksOfTheYear; 
@property (nonatomic,readonly) NSArray * monthsOfTheYear; 
@property (nonatomic,readonly) NSArray * setPositions; 
@property (nonatomic,retain) EKRecurrenceEnd * cachedEnd;                         //@synthesize cachedEnd=_cachedEnd - In the implementation block
@property (nonatomic,readonly) EKFrozenRecurrenceRule * backingRule; 
+(Class)frozenClass;
+(id)ruleWithBackingRule:(id)arg1 ;
+(id)knownIdentityKeys;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(char)arg2 isFloating:(char)arg3 ;
+(id)_stringValueForRecurrenceRule:(id)arg1 asDateOnly:(char)arg2 isFloating:(char)arg3 ;
+(id)_acceptableStartDateRangeForDailyRecurrenceWithCurrentStartDate:(id)arg1 ;
+(id)_acceptableStartDateRangeForWeeklyRecurrenceWithCurrentStartDate:(id)arg1 ;
+(id)_acceptableStartDateRangeForMonthlyRecurrenceWithCurrentStartDate:(id)arg1 ;
+(id)_acceptableStartDateRangeForYearlyRecurrenceWithCurrentStartDate:(id)arg1 ;
+(id)iCalendarValueFromRecurrenceType:(int)arg1 ;
+(id)_andDaysOfWeekString:(id)arg1 ;
+(id)_weekDayPositionAsString:(long long)arg1 ;
+(id)_orDaysOfWeekString:(id)arg1 ;
+(id)_dayOfMonthAsString:(long long)arg1 ;
+(id)_numberedWeekDayString:(id)arg1 ;
+(id)_daysOfWeek;
+(id)_customDayCombinationDescription:(id)arg1 ;
+(id)recurrenceRuleWithType:(int)arg1 interval:(unsigned long long)arg2 end:(id)arg3 ;
+(int)daysTypeForDayArray:(id)arg1 ;
+(id)uniqueIdentifierForObject:(id)arg1 ;
-(void)setInterval:(long long)arg1 ;
-(id)backingObject;
-(void)canonicalize;
-(char)hasDuplicateMonthsOfYear;
-(char)newStartDateIsInvalid:(id)arg1 currentStartDate:(id)arg2 ;
-(id)stringValueAsDateOnly:(char)arg1 isFloating:(char)arg2 ;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)setSetPositions:(NSArray *)arg1 ;
-(id)initWithBackingRule:(id)arg1 ;
-(EKFrozenRecurrenceRule *)backingRule;
-(id)firstDayOfTheWeekNumber;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(id)_initializeArrayWithCapacity:(int)arg1 withValue:(id)arg2 ;
-(id)_acceptableStartDateRangeWithCurrentStartDate:(id)arg1 ;
-(char)newStartDateIsValid:(id)arg1 currentStartDate:(id)arg2 ;
-(id)frequencyNumber;
-(id)intervalNumber;
-(id)countNumber;
-(char)shouldPinMonthDays;
-(void)setCountNumber:(id)arg1 ;
-(long long)firstDayOfTheWeek;
-(id)humanReadableDescriptionWithStartDate:(id)arg1 ;
-(EKRecurrenceEnd *)recurrenceEnd;
-(void)setRecurrenceEnd:(EKRecurrenceEnd *)arg1 ;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(NSArray *)monthsOfTheYear;
-(NSArray *)setPositions;
-(id)initRecurrenceWithFrequency:(int)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 ;
-(id)initRecurrenceWithFrequency:(int)arg1 interval:(long long)arg2 end:(id)arg3 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)endDate;
-(NSString *)calendarIdentifier;
-(long long)interval;
-(id)cachedEndDate;
-(void)setEndDate:(id)arg1 ;
-(void)setCachedEnd:(EKRecurrenceEnd *)arg1 ;
-(EKRecurrenceEnd *)cachedEnd;
@end
