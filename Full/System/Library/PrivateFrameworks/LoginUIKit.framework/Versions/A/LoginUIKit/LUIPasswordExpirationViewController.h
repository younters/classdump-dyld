/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LUIPopoverViewController.h>

@class NSTextField, NSButton;

@interface LUIPasswordExpirationViewController : LUIPopoverViewController {

	NSTextField* _titleTextField;
	NSTextField* _expirationTextField;
	NSButton* _continueButton;
	NSButton* _changePasswordButton;
	double _days;

}

@property (assign) NSTextField * titleTextField;                   //@synthesize titleTextField=_titleTextField - In the implementation block
@property (assign) NSTextField * expirationTextField;              //@synthesize expirationTextField=_expirationTextField - In the implementation block
@property (assign) NSButton * continueButton;                      //@synthesize continueButton=_continueButton - In the implementation block
@property (assign) NSButton * changePasswordButton;                //@synthesize changePasswordButton=_changePasswordButton - In the implementation block
-(void)setContinueButton:(NSButton *)arg1 ;
-(NSButton *)continueButton;
-(NSTextField *)titleTextField;
-(void)setTitleTextField:(NSTextField *)arg1 ;
-(void)awakeFromNib;
-(char)isTransient;
-(void)setChangePasswordButtonTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(void)setExpirationDays:(double)arg1 ;
-(void)setContinueButtonHidden:(char)arg1 ;
-(void)setContinueButtonTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(void)_layoutContentView;
-(void)prepareForDisplay;
-(NSTextField *)expirationTextField;
-(void)setExpirationTextField:(NSTextField *)arg1 ;
-(NSButton *)changePasswordButton;
-(void)setChangePasswordButton:(NSButton *)arg1 ;
@end
