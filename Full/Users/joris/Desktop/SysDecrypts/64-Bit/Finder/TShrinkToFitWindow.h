/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <AppKit/NSPanel.h>

@class TShrinkToFitScrollView, TShrinkToFitTextView;

@interface TShrinkToFitWindow : NSPanel {

	TShrinkToFitScrollView* _stfScrollView;
	TShrinkToFitTextView* _stfTextView;

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
