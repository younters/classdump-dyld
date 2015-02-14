/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CalUIAlertsManager : NSObject
+(void)readOnlyAlertWithEvent:(id)arg1 calendar:(id)arg2 ;
+(char)shouldMoveEventWithOverlappingOccurrencesToExchangeCalendar;
+(char)shouldMoveIncompatibleEventsToExchangeCalendarWithNumEvents:(long long)arg1 ;
+(id)genericAlertWithTitle:(id)arg1 subtext:(id)arg2 ;
+(char)noAlertWithTitle:(id)arg1 subtext:(id)arg2 noButton:(id)arg3 ;
+(int)cancelOrSpanDecisionAlertWithTitle:(id)arg1 subtext:(id)arg2 span:(int)arg3 spanButton:(id)arg4 ;
+(int)_spanDecisionWithTitle:(id)arg1 subtext:(id)arg2 spanThis:(id)arg3 spanFuture:(id)arg4 spanAll:(id)arg5 ;
+(id)youreChangingARepeatingEvent;
+(id)onlyThisEvent;
+(id)allFutureEvents;
+(char)YesOrNoAlertWithTitle:(id)arg1 subtext:(id)arg2 yesButton:(id)arg3 noButton:(id)arg4 ;
+(id)areYouSureYouWantToDeleteThisEvent;
+(id)deleteAndNotifyButtonTitle;
+(id)deleteAndDontNotifyButtonTitle;
+(int)_commitDecisionWithTitle:(id)arg1 subtext:(id)arg2 commitAndNotify:(id)arg3 commitAndDontNotify:(id)arg4 ;
+(id)areYouSureYouWantToDeleteTheseEvents;
+(char)cancelAlertWithTitle:(id)arg1 subtext:(id)arg2 ;
+(int)_sendSaveWithAlertTitle:(id)arg1 eventTitle:(id)arg2 userOption:(int)arg3 ;
+(int)cancelOrSpanThisAlertWithTitle:(id)arg1 subtext:(id)arg2 spanThisButton:(id)arg3 ;
+(id)moveButton;
+(char)noMeCardAlertWithTitle:(id)arg1 subtext:(id)arg2 ;
+(int)spanDecisionForDeleteSingleEventProposeFuture:(char)arg1 ;
+(int)spanDecisionForDeleteMultipleEventsProposeFuture:(char)arg1 allAreRecurring:(char)arg2 ;
+(int)spanDecisionForTimeZoneChangeProposeFuture:(char)arg1 ;
+(int)spanDecisionForDurationChangeProposeFuture:(char)arg1 ;
+(int)spanDecisionForChangedStartTime:(id)arg1 proposeFuture:(char)arg2 ;
+(int)spanDecisionForChangedStartDate:(id)arg1 proposeFuture:(char)arg2 ;
+(char)shouldDeleteEventWithAttachment;
+(char)shouldDeleteAlreadyDeclinedEvent;
+(char)shouldDeleteSingleAttachmentWithFilename:(id)arg1 ;
+(char)shouldDeleteMultipleAttachmentsWithCount:(unsigned long long)arg1 ;
+(int)commitDecisionForDeleteSingleEventAsAttendeeWithDontNotifyOption:(char)arg1 ;
+(int)commitDecisionForDeleteMultipleEventsAsAttendeeWithDontNotifyOption:(char)arg1 ;
+(int)commitDecisionForDeleteSingleEventAsOrganizerWithDontNotifyOption:(char)arg1 ;
+(int)commitDecisionForDeleteMultipleEventsAsOrganizer;
+(int)commitDecisionForDeleteMultipleEventsAsOrganizerAndAttendeeWithDontNotifyOption:(char)arg1 ;
+(int)commitDecisionForDecline;
+(int)commitDecisionForDeclineWithDontNotifyOption;
+(int)spanDecisionForRespondingToRepeatingEventInvitation;
+(char)shouldSaveOverlappingExchangeEvents;
+(char)shouldSaveExchangeEventsWithOverlappingAlarms;
+(char)shouldSaveEventsWithRecurrenceIntervalShorterThanDuration;
+(int)spanDecisionForAllDayAppliesToEntireSeries;
+(int)spanDecisionForPrivacyAppliesToEntireSeries;
+(int)spanDecisionForRecurrenceRulesAppliesToAllFuture;
+(int)spanDecisionForRecurrenceRulesAppliesToEntireSeries;
+(int)spanDecisionForTimeChangeOnOnlyThisEvent;
+(int)spanDecisionForSaveRecurringEventProposeFuture:(char)arg1 ;
+(unsigned long long)conflictDecisionForEventTitle:(id)arg1 withConflictCount:(unsigned long long)arg2 outOfTotalCount:(unsigned long long)arg3 ;
+(int)commitDecisionForSendChangesForEventTitle:(id)arg1 withUserOption:(int)arg2 ;
+(int)commitDecisionForSendInvitationForEventTitle:(id)arg1 withUserOption:(int)arg2 ;
+(int)commitDecisionForSendingInvitationFromNonDistinguishedExchangeCalendar;
+(int)spanDecisionForCutSingleEventInRecurringSeries;
+(int)spanDecisionForCutMultipleEventsInRecurringSeries;
+(int)spanDecisionForCopySingleEventInRecurringSeries;
+(int)spanDecisionForCopyMultipleEventsInRecurringSeries;
+(int)spanDecisionForDuplicateSingleEventInRecurringSeries;
+(int)spanDecisionForDuplicateMultipleEventsInRecurringSeries;
+(char)shouldMoveOrganizerSideEventToNonDistinguishedExchangeCalendar;
+(char)shouldMoveAttendeeSideEventToNonDistinguishedExchangeCalendar;
+(char)shouldMoveMultipleEventsToNonDistinguishedExchangeCalendar;
+(char)shouldMoveFromLocalAccountToExchangeAccountWithTitle:(id)arg1 ;
+(char)shouldMoveFromServerAccountWithTitle:(id)arg1 toServerAccountWithTitle:(id)arg2 ;
+(char)shouldMoveFromServerAccountWithTitleToLocalAccount:(id)arg1 ;
+(char)shouldMoveFromLocalAccountToServerAccountWithTitle:(id)arg1 ;
+(char)shouldMoveEventToNonSchedulingCalendar:(id)arg1 ;
+(char)shouldDeleteCalendarFromUnwriteableAccount;
+(char)shouldDeleteDefaultSchedulingCalendar;
+(char)warningRemainingCalendarCannotBeDefaultSchedulingCalendar;
+(char)shouldDeleteSharedToMeCalendarWithTitle:(id)arg1 ;
+(int)shouldDeleteCalendarWithTitleContainingMeetingsWithInvitations:(id)arg1 isDualType:(char)arg2 dontNotifyOption:(char)arg3 ;
+(char)shouldDeleteCalendarWithTitleContainingMeetings:(id)arg1 isDualType:(char)arg2 ;
+(char)shouldDeleteGroupWithTitle:(id)arg1 ;
+(void)noMeCardSet;
+(void)noMeCardEmailSet;
+(void)noMeCardValidEmailSet:(id)arg1 ;
+(id)continueButton;
+(id)removeButton;
+(id)allEvents;
+(id)okButton;
+(id)deleteButton;
+(id)cancelButton;
@end
