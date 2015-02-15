/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/0xED.app/Contents/MacOS/0xED
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <0xED/0xED-Structs.h>
#import <AppKit/NSView.h>

@class NSPopUpButton, NSButton, NSButtonCell, NSSlider;

@interface STPreferencesUIView : NSView {

	NSPopUpButton* vertLinePopup;
	NSButton* animateOtherForkOpening;
	NSPopUpButton* fontSelectionCtl;
	NSPopUpButton* fontSizeCtl;
	NSButtonCell* blockCursorCtl;
	NSButtonCell* vertLineCursorCtl;
	NSButton* _highlightNonPrintableButton;
	NSButton* _drawNonPrintableButton;
	NSSlider* windowByteWidthSlider;

}
-(void)reinitInterface;
-(void)populateFontsPopup;
-(void)populateFontSizesPopup;
-(void)showFontSelection;
-(void)animateOtherForkOpening:(id)arg1 ;
-(void)vertLineSelected:(id)arg1 ;
-(void)selectFont:(id)arg1 ;
-(void)selectFontSize:(id)arg1 ;
-(void)selectBlockCursorCtl:(id)arg1 ;
-(void)selectVertLineCursorCtl:(id)arg1 ;
-(void)highlightNonPrintable:(id)arg1 ;
-(void)drawNonPrintable:(id)arg1 ;
-(void)windowByteWidthSliderMoved:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
@end
