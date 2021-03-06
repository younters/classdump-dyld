/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:25 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSPopoverToolbar, NSMutableArray, NSStackView, NSView;

@interface _NSPopoverToolbarView : NSView {

	NSPopoverToolbar* _toolbar;
	NSMutableArray* _tabButtons;
	NSStackView* _stackView;
	NSView* _separatorView;

}

@property (assign) NSPopoverToolbar * toolbar;              //@synthesize toolbar=_toolbar - In the implementation block
+(char)requiresConstraintBasedLayout;
-(void)dealloc;
-(void)updateSelectedIndex;
-(void)setToolbar:(NSPopoverToolbar *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_reloadViews;
-(NSPopoverToolbar *)toolbar;
-(void)_tabButtonPressed:(id)arg1 ;
-(void)updateConstraints;
@end

