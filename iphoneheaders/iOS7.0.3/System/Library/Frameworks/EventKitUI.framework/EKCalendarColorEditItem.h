/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray;

@interface EKCalendarColorEditItem : EKCalendarEditItem {

	NSMutableArray* _cells;
	unsigned _checkedRow;

}

@property (nonatomic,readonly) NSMutableArray * cells;              //@synthesize cells=_cells - In the implementation block
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSubitems;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned)arg2 ;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(id)_cellForColor:(id)arg1 ;
-(void)reset;
-(id)headerTitle;
-(void).cxx_destruct;
-(id)cells;
@end
