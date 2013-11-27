/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <SpringBoard/SBIconObserver.h>

@protocol SBIconAccessoryView, SBStarkKnobLauncherCellDelegate;
@class SBIcon, UIView, ;

@interface SBStarkKnobLauncherCell : UITableViewCell <SBIconObserver> {

	SBIcon* _icon;
	UIView<SBIconAccessoryView>* _accessoryView;
	BOOL _showsDisclosureIndicator;
	<SBStarkKnobLauncherCellDelegate>* _delegate;

}

@property (nonatomic,retain) SBIcon * icon; 
@property (assign,nonatomic) BOOL showsDisclosureIndicator;                             //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
@property (assign,nonatomic) <SBStarkKnobLauncherCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setShowsDisclosureIndicator:(BOOL)arg1 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(CGRect)_accessoryFrameInBounds:(CGRect)arg1 ;
-(BOOL)showsDisclosureIndicator;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setIcon:(id)arg1 ;
-(id)icon;
@end
