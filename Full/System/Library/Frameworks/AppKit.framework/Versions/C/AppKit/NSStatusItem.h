/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSStatusBar, NSWindow, NSView, NSMutableDictionary, NSData, NSString, NSMenu, NSStatusBarButton;

@interface NSStatusItem : NSObject {

	NSStatusBar* _fStatusBar;
	double _fLength;
	NSWindow* _fWindow;
	NSView* _fView;
	int _fPriority;
	struct {
		unsigned customView : 1;
		unsigned highlightMode : 1;
		unsigned hasAlternateImage : 1;
		unsigned hidden : 1;
		unsigned backgroundStyle : 4;
		unsigned inAdjustLength : 1;
		unsigned pendingReplicantDisplay : 1;
		unsigned disableImageReplicationCount : 4;
		unsigned updatingReplicant : 1;
		unsigned didInactiveTemplateStyling : 1;
		unsigned reserved : 16;
	}  _fFlags;
	id _statusItemMenu;
	NSMutableDictionary* _replicants;
	NSData* _subitemOffsets;
	NSString* _displayIdentifier;

}

@property (readonly) NSStatusBar * statusBar; 
@property (assign) double length; 
@property (retain) NSMenu * menu; 
@property (readonly) NSStatusBarButton * button; 
+(id)_itemInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 ;
-(void)dealloc;
-(double)length;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)view;
-(id)target;
-(SEL)action;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)screen;
-(NSMenu *)menu;
-(void)setMenu:(NSMenu *)arg1 ;
-(id)_window;
-(void)setLength:(double)arg1 ;
-(void)setView:(id)arg1 ;
-(SEL)doubleAction;
-(void)setDoubleAction:(SEL)arg1 ;
-(id)alternateImage;
-(void)setAlternateImage:(id)arg1 ;
-(id)attributedTitle;
-(void)setAttributedTitle:(id)arg1 ;
-(id)toolTip;
-(char)_isHidden;
-(long long)_backgroundStyle;
-(long long)sendActionOn:(long long)arg1 ;
-(void)setToolTip:(id)arg1 ;
-(void)_setHidden:(char)arg1 ;
-(void)_removePopupMenuAssociation:(id)arg1 ;
-(void)_setPopupMenuAssociation:(id)arg1 ;
-(void)_adjustLength;
-(id)_button;
-(id)_moveToScreenContainingActiveMenuBar;
-(void)_activeMenuBarDrawingStyleDidChange;
-(long long)backgroundStyleForHighlight:(char)arg1 ;
-(void)_setBackgroundStyle:(long long)arg1 ;
-(int)_priority;
-(unsigned long long)_confiningSpaceID;
-(id)_confiningDisplayID;
-(unsigned)_statusItemFlags;
-(void)_removeAllReplicants;
-(void)_replicateWithKeys:(id)arg1 ;
-(void)setHighlightMode:(char)arg1 ;
-(char)highlightMode;
-(void)_statusBarButtonDidSetImage;
-(void)_statusBarButtonDidSetAlternateImage;
-(void)_statusBarButtonDidSetTitle;
-(char)_drawingReplicantView;
-(NSStatusBar *)statusBar;
-(id)_displayIdentifier;
-(char)_retargetEvent:(id)arg1 fromWindow:(id)arg2 ;
-(void)_windowDidFlush:(id)arg1 ;
-(void)_rawSetDisplayIdentifier:(id)arg1 ;
-(id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 hidden:(char)arg4 ;
-(void)_swapScreensWithReplicant:(id)arg1 ;
-(char)_shouldReplicate;
-(void)_updateButtonImagePosition;
-(void)_updateReplicants;
-(id)_statusItemMenu;
-(id)_popupMenuBeingOpened;
-(void)_propagateBackgroundStyle;
-(void)_adjustLengthDueToViewFrameChange:(id)arg1 ;
-(id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 ;
-(char)_isExitFullScreen;
-(void)_setSubitemOffsets:(id)arg1 ;
-(void)_updateReplicant:(id)arg1 ;
-(void)_setDisplayIdentifier:(id)arg1 ;
-(void)_removeReplicantForKey:(id)arg1 ;
-(void)_updateReplicantsUnlessMenuIsTracking:(id)arg1 ;
-(void)popUpStatusItemMenu:(id)arg1 ;
-(void)drawStatusBarBackgroundInRect:(CGRect)arg1 withHighlight:(char)arg2 ;
-(NSStatusBarButton *)button;
-(char)_moveToScreen:(id)arg1 ;
-(void)_setSubitemOffsets:(const int*)arg1 count:(unsigned long long)arg2 ;
-(id)_subitemOffsets;
-(void)_disableStatusItemImageReplication;
-(void)_enableStatusItemImageReplication;
-(id)_accessibilityContainer;
@end
