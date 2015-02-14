/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUICompositeGadget.h>

@class EKUITitleGadget, EKUICalendarGadget, NSArray;

@interface EKUITitleCalendarCompositeGadget : EKUICompositeGadget {

	EKUITitleGadget* _titleGadget;
	EKUICalendarGadget* _calendarGadget;
	NSArray* _existingConstraints;

}

@property (retain) EKUITitleGadget * titleGadget;                    //@synthesize titleGadget=_titleGadget - In the implementation block
@property (retain) EKUICalendarGadget * calendarGadget;              //@synthesize calendarGadget=_calendarGadget - In the implementation block
@property (retain) NSArray * existingConstraints;                    //@synthesize existingConstraints=_existingConstraints - In the implementation block
-(id)initWithEventViewController:(id)arg1 ;
-(id)claimedPboardTypes;
-(EKUITitleGadget *)titleGadget;
-(void)selectTitle;
-(void)setTitleGadget:(EKUITitleGadget *)arg1 ;
-(EKUICalendarGadget *)calendarGadget;
-(void)setExistingConstraints:(NSArray *)arg1 ;
-(NSArray *)existingConstraints;
-(id)subgadgets;
-(void)setCalendarGadget:(EKUICalendarGadget *)arg1 ;
-(void)updateConstraints;
-(char)performDragOperation:(id)arg1 ;
@end
