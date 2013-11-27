/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPBottomSingleButtonBar.h>

@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {

	TPButton* _button2;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setButton2:(id)arg1 andStyle:(BOOL)arg2 ;
-(void)setButton:(id)arg1 andStyle:(BOOL)arg2 ;
-(void)_layoutButtons;
-(float)_buttonWidth;
-(id)initForIncomingCallWithFrame:(CGRect)arg1 ;
-(id)initForCallFailureWithFrame:(CGRect)arg1 ;
-(id)initForEmergencyCallWithFrame:(CGRect)arg1 ;
-(id)initForVideoChatWithFrame:(CGRect)arg1 ;
-(id)button2;
-(void)setDrawsSeparateWells:(BOOL)arg1 ;
@end
