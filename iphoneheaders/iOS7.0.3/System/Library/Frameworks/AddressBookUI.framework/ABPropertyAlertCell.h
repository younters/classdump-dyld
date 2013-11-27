/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABPropertyCell.h>
#import <AddressBookUI/ABPickerControllerDelegate.h>

@class NSLayoutConstraint, UIImageView, ABPropertyGroupAlertItem;

@interface ABPropertyAlertCell : ABPropertyCell <ABPickerControllerDelegate> {

	float _labelWidth;
	NSLayoutConstraint* _labelWidthConstraint;
	UIImageView* _chevron;

}

@property (nonatomic,readonly) ABPropertyGroupAlertItem * alertItem; 
@property (nonatomic,retain) NSLayoutConstraint * labelWidthConstraint;              //@synthesize labelWidthConstraint=_labelWidthConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                                  //@synthesize chevron=_chevron - In the implementation block
-(void)performDefaultAction;
-(id)contentViewEditingConstraints;
-(id)contentViewConstraints;
-(void)setLabelWidth:(float)arg1 ;
-(id)chevron;
-(void)setChevron:(id)arg1 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(id)alertItem;
-(id)labelWidthConstraint;
-(float)labelWidth;
-(void)setLabelWidthConstraint:(id)arg1 ;
-(id)_toneManger;
-(id)_vibrationManager;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)shouldPerformDefaultAction;
@end
