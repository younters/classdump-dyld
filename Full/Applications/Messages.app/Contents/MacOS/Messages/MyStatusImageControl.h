/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <AppKit/NSView.h>

@class NSExtendedImageView, ErrorButton;

@interface MyStatusImageControl : NSView {

	NSExtendedImageView* _statusImage;
	ErrorButton* _errorButton;
	id _target;
	SEL _action;
	char _isShowingDisconnectedButton;

}

@property (assign,nonatomic) id target;               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;              //@synthesize action=_action - In the implementation block
-(void)showErrorButtonAsDisconnection;
-(void)showErrorButtonAsAlert;
-(void)showStatusImage:(id)arg1 ;
-(void)_showErrorButtonWithState:(long long)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAccessibilityValue:(id)arg1 ;
@end
