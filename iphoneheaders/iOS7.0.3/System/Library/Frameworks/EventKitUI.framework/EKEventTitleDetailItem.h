/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <EventKitUI/EKEventDetailTitleCellDelegate.h>

@protocol EKEventTitleDetailItemDelegate;
@class UITableViewCell, UIColor, NSObject;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {

	UITableViewCell* _cell;
	UIColor* _color;
	BOOL _showDot;
	NSObject<EKEventTitleDetailItemDelegate>* _editDelegate;

}

@property (assign,nonatomic,__weak) NSObject<EKEventTitleDetailItemDelegate> * editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
-(void)setEditDelegate:(id)arg1 ;
-(id)editDelegate;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(BOOL)shouldShowEditButtonInline;
-(void)editButtonPressed;
-(void)reset;
-(void).cxx_destruct;
@end
