/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor, UISegmentedControl;

@interface _RemindersPriorityPickerCell : UITableViewCell {

	UIColor* _color;
	UISegmentedControl* _priorityPicker;

}

@property (nonatomic,retain) UIColor * color;                                    //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * priorityPicker;              //@synthesize priorityPicker=_priorityPicker - In the implementation block
@property (assign,nonatomic) int priority; 
-(id)priorityPicker;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void).cxx_destruct;
@end
