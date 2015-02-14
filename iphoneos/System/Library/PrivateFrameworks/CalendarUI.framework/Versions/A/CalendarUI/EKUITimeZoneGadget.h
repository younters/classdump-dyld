/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUILabeledGadget.h>
#import <CalendarUI/CalUITimeZonePickerDelegate.h>

@class CalUITimeZonePicker, NSString;

@interface EKUITimeZoneGadget : EKUILabeledGadget <CalUITimeZonePickerDelegate> {

	CalUITimeZonePicker* _timeZonePicker;

}

@property (retain) CalUITimeZonePicker * timeZonePicker;              //@synthesize timeZonePicker=_timeZonePicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(id)labelString;
-(double)pixelsBetweenLabelAndControl;
-(char)shouldDisplayWhenNotEditable;
-(void)setTimeZonePicker:(CalUITimeZonePicker *)arg1 ;
-(CalUITimeZonePicker *)timeZonePicker;
-(void)timeZoneEnabledPrefChanged;
-(void)timeZoneSelected:(id)arg1 ;
-(void)otherSelected:(/*^block*/id)arg1 ;
-(void)dealloc;
-(double)baselineOffset;
@end
