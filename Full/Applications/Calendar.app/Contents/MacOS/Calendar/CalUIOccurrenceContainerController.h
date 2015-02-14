/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/ISCViewController.h>

@class CalUIOccurrenceChangeInfo;

@interface CalUIOccurrenceContainerController : ISCViewController {

	CalUIOccurrenceChangeInfo* _changeInfo;

}

@property (retain) CalUIOccurrenceChangeInfo * changeInfo;              //@synthesize changeInfo=_changeInfo - In the implementation block
-(id)dateRange;
-(void)eventsChanged:(id)arg1 ;
-(char)needsToPopulate;
-(void)populateNow;
-(void)setChangeInfo:(CalUIOccurrenceChangeInfo *)arg1 ;
-(CalUIOccurrenceChangeInfo *)changeInfo;
-(id)occurrenceContainerView;
-(void)eventsChanged:(id)arg1 blocking:(char)arg2 ;
-(long long)allDaynessOfDisplayedEvents;
-(void)doPostPopulationWorkForEvents:(id)arg1 ;
-(void)_addChangeInfoToExistingChangeInfo:(id)arg1 ;
@end
