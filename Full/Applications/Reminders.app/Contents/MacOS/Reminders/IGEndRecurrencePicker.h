/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <Reminders/IGExpandingField.h>
#import <Reminders/DatePickerWithMiniCalDelegate.h>

@class RemindersPopUpButton, NSString;

@interface IGEndRecurrencePicker : IGExpandingField <DatePickerWithMiniCalDelegate> {

	char _isLoadingFromReminder;
	RemindersPopUpButton* _typePicker;

}

@property (retain) RemindersPopUpButton * typePicker;               //@synthesize typePicker=_typePicker - In the implementation block
@property (assign) char isLoadingFromReminder;                      //@synthesize isLoadingFromReminder=_isLoadingFromReminder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateFromReminder;
-(void)setIsLoadingFromReminder:(char)arg1 ;
-(char)isLoadingFromReminder;
-(void)datePickerChanged:(id)arg1 ;
-(void)datePickerResignedFirstResponder;
-(void)setTypePicker:(RemindersPopUpButton *)arg1 ;
-(RemindersPopUpButton *)typePicker;
-(void)endTypeSelected;
-(int)endRecurrenceTypeForReminder:(id)arg1 ;
-(void)endTypeChanged;
-(CGPoint)labelOffset;
-(id)datePicker;
-(id)init;
-(void)sizeToFit;
-(char)isVisible;
@end
