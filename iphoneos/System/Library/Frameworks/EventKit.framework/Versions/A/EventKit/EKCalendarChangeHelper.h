/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKBackingStore;

@interface EKCalendarChangeHelper : NSObject {

	char _currentlyChangingCalendar;
	EKBackingStore* _backingStore;

}

@property (nonatomic,__weak,readonly) EKBackingStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
-(EKBackingStore *)backingStore;
-(id)initWithBackingStore:(id)arg1 ;
-(char)isAlreadyChangingCalendar;
-(char)doCalendarChangeForItem:(id)arg1 isNewItem:(char)arg2 error:(id*)arg3 ;
-(id)doCopyEvent:(id)arg1 toCalendar:(id)arg2 withOptions:(long long)arg3 error:(id*)arg4 ;
-(char)_handleCalendarChangeForEvent:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3 isNewItem:(char)arg4 requirements:(long long)arg5 error:(id*)arg6 ;
-(char)_handleCalendarChangeForEvent:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3 isNewItem:(char)arg4 requirements:(long long)arg5 copyOptions:(long long)arg6 forceCopy:(char)arg7 handlingDetached:(char)arg8 outEvent:(id*)arg9 error:(id*)arg10 ;
-(id)_moveEventHelperDoDuplication:(id)arg1 toCalendar:(id)arg2 requirements:(long long)arg3 additionalOptions:(long long)arg4 error:(id*)arg5 ;
-(id)_moveEventHelperDoRecreation:(id)arg1 toCalendar:(id)arg2 requirements:(long long)arg3 error:(id*)arg4 ;
-(id)_moveEventHelperDoAlterations:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3 requirements:(long long)arg4 ;
-(id)_moveEventHelperDoReinviteAttendees:(id)arg1 toCalendar:(id)arg2 requirements:(long long)arg3 ;
-(id)_moveEventHelperDoRemoveAttendees:(id)arg1 requirements:(long long)arg2 ;
-(char)_moveEventHelperHandleDetachedEvents:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3 error:(id*)arg4 ;
-(id)_moveEventHelperDoAlterationsToPrivacy:(id)arg1 toCalendar:(id)arg2 ;
-(id)_moveEventHelperDoAlterationsToScheduleAgent:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3 requirements:(long long)arg4 ;
-(id)_moveEventHelperDoAlterationsToAttachments:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3 ;
-(void)_moveEventHelperMoveFieldsToNotes:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3 requirements:(long long)arg4 ;
-(id)_moveEventHelperDoAlterationsToURL:(id)arg1 toCalendar:(id)arg2 notes:(id)arg3 ;
-(id)_moveEventHelperDoAlterationsToAlarms:(id)arg1 toCalendar:(id)arg2 notes:(id)arg3 ;
-(id)_moveEventHelperDoAlterationsToRecurrence:(id)arg1 toCalendar:(id)arg2 notes:(id)arg3 ;
-(id)_moveEventHelperDoAlterationsToTimeZone:(id)arg1 toCalendar:(id)arg2 notes:(id)arg3 ;
@end
