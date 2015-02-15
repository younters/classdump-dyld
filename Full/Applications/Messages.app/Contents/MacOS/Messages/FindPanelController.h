/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSTextField, NSWindow;

@interface FindPanelController : NSWindowController {

	NSTextField* searchTextField;
	NSTextField* statusTextField;
	long long _lastFindPasteboardChangeCount;
	NSWindow* _searchTargetWindow;

}

@property (__weak) NSWindow * searchTargetWindow;              //@synthesize searchTargetWindow=_searchTargetWindow - In the implementation block
+(id)sharedController;
-(NSWindow *)searchTargetWindow;
-(id)_searchTarget;
-(char)_doSearchForString:(id)arg1 direction:(char)arg2 caseSensitive:(char)arg3 inTarget:(id)arg4 ;
-(void)updateFindPasteboardFromSearchField;
-(void)_findWithDirection:(char)arg1 caseSensitive:(char)arg2 ;
-(void)selectText;
-(void)setSearchTargetWindow:(NSWindow *)arg1 ;
-(id)_searchString;
-(void)findNext:(id)arg1 ;
-(void)findPrevious:(id)arg1 ;
-(void)_updateSearchFieldFromFindPasteboard;
-(char)readyToFind;
-(void)_setStatus:(id)arg1 ;
-(void)dealloc;
-(id)windowNibName;
-(id)windowFrameAutosaveName;
@end
