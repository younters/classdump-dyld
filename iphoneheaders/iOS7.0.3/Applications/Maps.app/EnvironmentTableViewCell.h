/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UIButton, UIActivityIndicatorView;

@interface EnvironmentTableViewCell : UITableViewCell {

	UIButton* _errorButton;
	UIActivityIndicatorView* _loadingView;

}

@property (nonatomic,readonly) UIButton * errorButton;              //@synthesize errorButton=_errorButton - In the implementation block
-(id)errorButton;
-(void)configureFromEnvironment:(id)arg1 ;
-(void)_configureEnvironmentCell;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
