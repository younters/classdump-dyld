/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgent.framework/CalendarAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgent/CalendarLinkProxy.h>
#import <CalendarAgent/CalendarStore.h>

@interface CalendarStoreProxy : CalendarLinkProxy <CalendarStore>
+(id)_defaultLocalCalendarAttachmentsBackupPath;
+(char)_calendarIsDefaultLocal:(id)arg1 ;
-(id)_fetchRemoteManagedObjects:(Class)arg1 withPredicate:(id)arg2 prefetchingKeyPaths:(id)arg3 ;
-(id)originatorIdForPid:(int)arg1 ;
-(id)_calendarPredicateForCalendarIds:(id)arg1 ;
-(char)_saveLegacyEntity:(id)arg1 isNew:(char)arg2 source:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5 ;
-(id)_createURLStringForServerURL:(id)arg1 removePath:(char)arg2 ;
-(void)mainPrincipalForAccount:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)eventForRecurrenceException:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchPrincipalsWithPredicate:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchCalendarsWithPredicate:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)calendar:(id)arg1 hasCapability:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)removeCalendar:(id)arg1 originatorProcessId:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)saveCalendar:(id)arg1 originatorProcessId:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recurrenceRuleFromICSString:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)CDVServerURLForURL:(id)arg1 withPath:(char)arg2 withReply:(/*^block*/id)arg3 ;
-(void)currentTimeZoneWithReply:(/*^block*/id)arg1 ;
-(void)dateInTimeZone:(id)arg1 fromFloatingDateInGMT:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)date:(id)arg1 withTimeZone:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)dateWithGMT:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)isPluginId:(id)arg1 supportedForApp:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)setupCalendarPersistenceWithReply:(/*^block*/id)arg1 ;
-(void)nodeWithUid:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)remoteManagedObjectWithObjectId:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)passwordForAccount:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setPassword:(id)arg1 forAccount:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)activeCalendarWithReply:(/*^block*/id)arg1 ;
-(void)anyLocalCalendarHasAttachmentsWithReply:(/*^block*/id)arg1 ;
-(void)anyLocalCalendarsExistWithReply:(/*^block*/id)arg1 ;
-(void)calendarsForGroup:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)defaultLocalCalendarAttachmentsBackupPathWithReply:(/*^block*/id)arg1 ;
-(void)fetchLocalCalendarsWithPredicate:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)migrateLocalCalendarsToGroup:(id)arg1 originatorProcessId:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)eventWithItemId:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)expandEvent:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 isInvitation:(char)arg4 originalDuration:(double)arg5 withReply:(/*^block*/id)arg6 ;
-(void)fetchEventsWithPredicate:(id)arg1 inCalendars:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)fetchEventsWithSharedUid:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchEventsWithSharedUid:(id)arg1 occurrence:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)removeEvent:(id)arg1 span:(int)arg2 originatorProcessId:(int)arg3 withReply:(/*^block*/id)arg4 ;
-(void)saveEvent:(id)arg1 span:(int)arg2 originatorProcessId:(int)arg3 withReply:(/*^block*/id)arg4 ;
-(void)groupsWithReply:(/*^block*/id)arg1 ;
-(void)groupWithExchangeUrl:(id)arg1 externalURL:(id)arg2 userName:(id)arg3 emailAddress:(id)arg4 withReply:(/*^block*/id)arg5 ;
-(void)groupWithPrincipalUrl:(id)arg1 userName:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)groupWithUid:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)removeGroup:(id)arg1 originatorProcessId:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)saveGroup:(id)arg1 originatorProcessId:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)anyLocalRemindersExistWithReply:(/*^block*/id)arg1 ;
-(void)exchangeCompatibleTaskWithTask:(id)arg1 withCalendar:(id)arg2 originatorProcessId:(int)arg3 withReply:(/*^block*/id)arg4 ;
-(void)fetchTasksWithPredicate:(id)arg1 inCalendars:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)fetchTasksWithSharedUid:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)removeTask:(id)arg1 originatorProcessId:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)saveTask:(id)arg1 originatorProcessId:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)task:(id)arg1 isExchangeCompatibleWithReply:(/*^block*/id)arg2 ;
-(void)setCurrentTimeZone:(id)arg1 ;
-(void)notifyAccountsChangedExternally;
@end
