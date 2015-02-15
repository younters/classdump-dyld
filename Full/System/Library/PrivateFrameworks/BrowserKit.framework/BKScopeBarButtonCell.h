/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <ProKit/NSProButtonCell.h>

@interface BKScopeBarButtonCell : NSProButtonCell {

	char _mouseInside;

}
-(char)useHighlightedTextColors;
-(id)highlightEnabledTextColor;
-(id)normalEnabledTextColor;
-(id)highlightDisabledTextColor;
-(id)normalDisabledTextColor;
-(id)textColorForButtonState;
-(id)textShadowColorForButtonState;
-(double)textShadowOffsetForButtonState;
-(id)shadowTitleForTitle:(id)arg1 ;
-(void)updateRenditionKey:(id)arg1 getFocus:(char*)arg2 userInfo:(id)arg3 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)attributedTitle;
-(id)_textAttributes;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)_needsRedrawOnMouseInsideChange;
@end
