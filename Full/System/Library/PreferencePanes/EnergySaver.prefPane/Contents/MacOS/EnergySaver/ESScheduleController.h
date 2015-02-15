/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/EnergySaver.prefPane/Contents/MacOS/EnergySaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EnergySaverPref, NSPanel, NSButton, NSPopUpButton, NSDatePicker, NSTextField;

@interface ESScheduleController : NSObject {

	EnergySaverPref* _energySaverPref;
	NSPanel* _scheduleSheet;
	NSButton* _startupCheckbox;
	NSPopUpButton* _startupWeekdaysPopup;
	NSDatePicker* _startupDatePicker;
	NSTextField* _startupAtTextField;
	NSButton* _shutdownCheckbox;
	NSPopUpButton* _shutdownOrSleepPopUp;
	NSPopUpButton* _shutdownWeekdaysPopUp;
	NSDatePicker* _shutdownDatePicker;
	NSTextField* _shutdownAtTextField;
	NSTextField* _warningTextField;
	char _isDirty;

}
-(void)showWarningMessage:(id)arg1 ;
-(void)datePickerValueDidChange;
-(void)showScheduleSheet:(id)arg1 ;
-(void)hideWarningMessage;
-(void)doScheduleControllerHelpLookup:(id)arg1 ;
-(void)changedShutdownWeekdaysPopUp:(id)arg1 ;
-(void)changedShutdownCheckbox:(id)arg1 ;
-(void)changedStartupCheckbox:(id)arg1 ;
-(void)changedShutdownOrSleepPopUp:(id)arg1 ;
-(void)cancelScheduleSheet:(id)arg1 ;
-(void)changedStartupWeekdaysPopUp:(id)arg1 ;
-(void)setScheduleAndDismissSheet:(id)arg1 ;
-(void)setDirtyFromTimeChange;
@end
