/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/0xED.app/Contents/MacOS/0xED
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSComboBox, NSButton, NSPopUpButton, NSTextField, NSMutableArray;

@interface FindPanelController : NSWindowController {

	NSComboBox* m_pFindBoxCbb;
	NSComboBox* m_pReplaceBoxCbb;
	NSButton* m_pIgnoreCaseBtn;
	NSButton* m_pWrapAroundBtn;
	NSPopUpButton* m_pSearchTypePub;
	NSTextField* m_pStatusTextField;
	NSMutableArray* m_pFindPreviousArr;
	NSMutableArray* m_pReplacePreviousArr;

}
+(id)sharedFindPanelController;
-(void)populateBox:(id)arg1 withPBoardContents:(id)arg2 ;
-(void)resetUI;
-(void)numberOfItemsReplaced:(id)arg1 ;
-(void)findItemFound:(id)arg1 ;
-(void)allCombosActivated;
-(void)comboActivated:(id)arg1 forArray:(id)arg2 withKey:(id)arg3 pasteboard:(id)arg4 ;
-(void)findField:(id)arg1 ;
-(void)replaceField:(id)arg1 ;
-(long long)isString:(id)arg1 inArr:(id)arg2 caseSensitive:(char)arg3 ;
-(void)replaceAll:(id)arg1 ;
-(void)searchType:(id)arg1 ;
-(void)wrapAround:(id)arg1 ;
-(void)ignoreCase:(id)arg1 ;
-(void)findNext:(id)arg1 ;
-(void)findPrevious:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)awakeFromNib;
-(unsigned long long)numberOfItemsInComboBox:(id)arg1 ;
-(id)comboBox:(id)arg1 objectValueForItemAtIndex:(int)arg2 ;
-(unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2 ;
-(void)replace:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
@end
