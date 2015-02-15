/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKFrozenCalendarItem.h>
#import <EventKit/EKProtocolReminderOccurrence.h>

@class NSDate, NSNumber, NSString, NSDictionary, NSManagedObjectID, NSURL, NSTimeZone;

@interface EKFrozenReminder : EKFrozenCalendarItem <EKProtocolReminderOccurrence> {

	char statusCompleteNotByDate;
	char canEditRecurrence;
	char cachedHasLocationAlarm;
	NSDate* dueDateUnadjustedFromUTC;
	NSDate* completionDate;
	NSNumber* orderNumber;
	NSDate* _dueDate;

}

@property (nonatomic,readonly) NSDate * dueDate;                                             //@synthesize dueDate=_dueDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,retain,readonly) NSDate * recurrenceDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSNumber * calendarItemPermissionNumber; 
@property (nonatomic,copy,readonly) id<EKProtocolCalendar> container; 
@property (nonatomic,copy,readonly) NSString * recurrenceRuleString; 
@property (nonatomic,readonly) char cachedHasAttendee; 
@property (nonatomic,readonly) char cachedHasAttachment; 
@property (nonatomic,readonly) char cachedHasAlarm; 
@property (nonatomic,readonly) char cachedIsCalendarOwnerInvitedAttendee; 
@property (nonatomic,readonly) char cachedIsCurrentUserInvitedAttendee; 
@property (nonatomic,copy,readonly) id<EKProtocolParticipant> participantForMe; 
@property (nonatomic,copy,readonly) NSString * organizerName; 
@property (nonatomic,copy,readonly) NSURL * organizerURL; 
@property (nonatomic,copy,readonly) NSString * organizerEmail; 
@property (nonatomic,readonly) char organizedByMe; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSString * scheduleAgentString; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZoneObject; 
@property (nonatomic,copy,readonly) NSDate * startDateUnadjustedFromUTC; 
@property (nonatomic,readonly) char defaultAlarmWasDeleted; 
@property (nonatomic,copy,readonly) NSDate * dueDateUnadjustedFromUTC; 
@property (nonatomic,copy,readonly) NSDate * completionDate; 
@property (nonatomic,copy,readonly) NSNumber * orderNumber; 
@property (nonatomic,readonly) char statusCompleteNotByDate; 
@property (nonatomic,readonly) char canEditRecurrence; 
@property (nonatomic,readonly) char cachedHasLocationAlarm; 
+(Class)meltedClass;
-(id)initWithObject:(id)arg1 createPartialObject:(char)arg2 preFrozenRelationshipObjects:(id)arg3 ;
-(NSDate *)completionDate;
-(NSDate *)dueDate;
-(char)isReminder;
-(NSNumber *)orderNumber;
-(NSDate *)dueDateUnadjustedFromUTC;
-(char)statusCompleteNotByDate;
-(char)canEditRecurrence;
-(char)cachedHasLocationAlarm;
@end
