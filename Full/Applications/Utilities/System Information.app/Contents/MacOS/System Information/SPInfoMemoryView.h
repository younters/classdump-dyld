/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:27:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/System Information.app/Contents/MacOS/System Information
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System Information/SPInfoView.h>

@class NSTextField, NSView, NSButton, NSImageView, NSLayoutConstraint, NSString;

@interface SPInfoMemoryView : SPInfoView {

	NSTextField* _memInfoText;
	NSTextField* _memTotalText;
	NSTextField* _slotsUsedText;
	NSView* _slotsView;
	NSButton* _memHelpButton;
	NSView* _errorView;
	NSImageView* _cautionView;
	NSLayoutConstraint* _slotsViewHeightConstraint;
	NSString* _memInfoFormat;
	NSString* _memTotalFormat;
	NSString* _slotsUsedFormat;

}
+(id)createFromNib;
-(void)memHelpButtonPressed:(id)arg1 ;
-(void)loadData;
@end
