/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindow.h>

@interface PVWindow : NSWindow {

	char _fullScreenToolbarAutohidingDisabled;
	char _fullScreenToolbarHidden;
	char _firstResponderLocked;

}

@property (assign,nonatomic) char toolbarHiddenInFullScreen;              //@synthesize fullScreenToolbarHidden=_fullScreenToolbarHidden - In the implementation block
@property (assign) char firstResponderLocked;                             //@synthesize firstResponderLocked=_firstResponderLocked - In the implementation block
-(void)setAlphaNumber:(id)arg1 ;
-(void)setToolbarHiddenInFullScreen:(char)arg1 ;
-(char)toolbarAutohidingEnabled;
-(char)_toolbarWindowShouldUseLayers;
-(char)toolbarHiddenInFullScreen;
-(char)firstResponderLocked;
-(void)setFirstResponderLocked:(char)arg1 ;
-(char)makeFirstResponder:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)_close:(id)arg1 ;
-(void)setStyleMask:(unsigned long long)arg1 ;
-(id)undoManager;
-(void)toggleToolbarShown:(id)arg1 ;
-(id)_batchClose;
@end
