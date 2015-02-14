/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSPanel.h>

@class FI_TShrinkToFitScrollView, FI_TShrinkToFitTextView;

@interface FI_TShrinkToFitWindow : NSPanel {

	FI_TShrinkToFitScrollView* _stfScrollView;
	FI_TShrinkToFitTextView* _stfTextView;

}
-(id)initWithSTFTextView:(id)arg1 ;
-(void)stfScrollViewFrameChanged:(id)arg1 ;
-(void)stfScrollViewScrollerStyleChanged:(id)arg1 ;
-(double)_focusRingThickness;
-(CGRect)calcGlobalFrame;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(void)sizeToFit;
-(void)_resignKeyFocus;
-(char)validateMenuItem:(id)arg1 ;
-(void)undo:(id)arg1 ;
-(char)canBecomeKeyWindow;
-(char)_canBecomeSecondaryKeyWindow;
@end
