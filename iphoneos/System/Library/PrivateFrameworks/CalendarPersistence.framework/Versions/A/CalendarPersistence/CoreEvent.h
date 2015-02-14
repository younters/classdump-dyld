/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALEntity.h>

@class CALDate, CALDateTime, NSTimeZone;

@interface CoreEvent : CALEntity {

	CALDate* _eventCachedEndDate;
	CALDate* _alldaycacheStart;
	CALDateTime* _alldaycacheEnd;
	NSTimeZone* _alldaycacheTimeZone;
	double _travelDuration;
	char _hasEverUsedWorkingElswhere;

}

@property (readonly) char hasEverUsedWorkingElswhere;              //@synthesize hasEverUsedWorkingElswhere=_hasEverUsedWorkingElswhere - In the implementation block
+(id)event;
+(id)entityFromManagedObject:(id)arg1 ;
+(id)entityFromManagedObject:(id)arg1 omitAttendees:(char)arg2 ;
-(void)setLocations:(id)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(id)checkValidity;
-(void)finalize;
-(void)dealloc;
-(void)setDuration:(id)arg1 ;
-(id)duration;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(id)endDate;
-(id)expandOnTimeRange:(id)arg1 ;
-(char)isYearlessBirthday;
-(void)actualCommitInManagedObjectContext:(id)arg1 ;
-(char)isValidStatus:(int)arg1 ;
-(Class)correspondingOccurrenceClass;
-(void)forceDatesToGMT;
-(void)releaseCachedEndDate;
-(void)invalidateEntityCaches;
-(char)isFullDayEvent;
-(id)lastSavedDuration;
-(void)setEndDate:(id)arg1 ;
-(void)setFullDayEvent:(char)arg1 withHintTimeRange:(id)arg2 ;
-(id)locations;
-(char)needsReply;
-(char)isOrganizerMe;
-(char)isOverlappingAdjacentOccurrenceForStartDate:(id)arg1 endDate:(id)arg2 originalStartDate:(id)arg3 ;
-(char)isOverlappingAlarmForStartDate:(id)arg1 endDate:(id)arg2 newDuration:(id)arg3 ;
-(id)linkID;
-(id)humanReadableRepeatDescription;
-(char)isExchangeCompatible;
-(char)hasAlarmWithDuration:(id)arg1 thatOverlapsOccWithStartDate:(id)arg2 andEndDate:(id)arg3 ;
-(void)moveToStartDate:(id)arg1 ;
-(void)setFullDayEvent:(char)arg1 ;
-(void)removePriority;
-(id)travelDuration;
-(void)setTravelDuration:(id)arg1 ;
-(void)removeTransparency;
-(id)structuredLocation;
-(void)setStructuredLocation:(id)arg1 ;
-(id)travelStartLocation;
-(void)setTravelStartLocation:(id)arg1 ;
-(id)locationString;
-(void)setNeedsReply:(char)arg1 ;
-(char)isOrganizerOwner;
-(char)hasOccurrencesThatOverlap;
-(id)birthdayName;
-(void)setBirthdayName:(id)arg1 ;
-(void)setIsYearlessBirthday:(char)arg1 ;
-(id)defaultAlarmsBasedOnItemAndPreferencesInContext:(id)arg1 ;
-(void)cleanUp;
-(void)setLinkID:(id)arg1 ;
-(id)upperBoundDate;
-(id)_makeExchangeCompatible;
-(char)_isAlarmExchangeCompatible:(id)arg1 ;
-(void)_makeAlarmExchangeCompatible:(id)arg1 ;
-(char)hasEverUsedWorkingElswhere;
-(void)forceFullDayEvent;
-(id)endNSCalendarDate;
-(void)setEndNSCalendarDate:(id)arg1 ;
-(int)transparency;
-(void)setTransparency:(int)arg1 ;
@end
