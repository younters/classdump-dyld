/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSResponder.h>
#import <AppKit/NSAccessibilityElement.h>
#import <AppKit/NSAccessibility.h>

@class NSLock, NSWindow, NSString, NSView, NSURL, NSArray;

@interface NSDrawer : NSResponder <NSAccessibilityElement, NSAccessibility> {

	unsigned long long _drawerState;
	unsigned long long _drawerNextState;
	unsigned long long _drawerEdge;
	unsigned long long _drawerNextEdge;
	unsigned long long _drawerPreferredEdge;
	float _drawerPercent;
	float _drawerPercentSaved;
	double _drawerLeadingOffset;
	double _drawerTrailingOffset;
	NSLock* _drawerLock;
	NSWindow* _drawerWindow;
	NSWindow* _drawerParentWindow;
	NSWindow* _drawerNextParentWindow;
	NSString* _drawerSaveName;
	double _drawerStartTime;
	double _drawerTotalTime;
	CFRunLoopRef _drawerLoop;
	CFRunLoopTimerRef _drawerTimer;
	id _drawerDelegate;
	unsigned _drawerFlags;
	CFRunLoopObserverRef _drawerObserver;

}

@property (assign) NSWindow * parentWindow; 
@property (retain) NSView * contentView; 
@property (assign) unsigned long long preferredEdge; 
@property (assign) id<NSDrawerDelegate> delegate; 
@property (readonly) long long state; 
@property (readonly) unsigned long long edge; 
@property (assign) CGSize contentSize; 
@property (assign) CGSize minContentSize; 
@property (assign) CGSize maxContentSize; 
@property (assign) double leadingOffset; 
@property (assign) double trailingOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAccessibilityElement) char accessibilityElement; 
@property (assign) CGRect accessibilityFrame; 
@property (getter=isAccessibilityFocused) char accessibilityFocused; 
@property (assign) CGPoint accessibilityActivationPoint; 
@property (__weak) id accessibilityTopLevelUIElement; 
@property (copy) NSURL * accessibilityURL; 
@property (retain) id accessibilityValue; 
@property (copy) NSString * accessibilityValueDescription; 
@property (copy) NSArray * accessibilityVisibleChildren; 
@property (copy) NSString * accessibilitySubrole; 
@property (copy) NSString * accessibilityTitle; 
@property (__weak) id accessibilityTitleUIElement; 
@property (copy) NSArray * accessibilityNextContents; 
@property (assign) long long accessibilityOrientation; 
@property (retain) id accessibilityOverflowButton; 
@property (__weak) id accessibilityParent; 
@property (copy) NSString * accessibilityPlaceholderValue; 
@property (copy) NSArray * accessibilityPreviousContents; 
@property (copy) NSString * accessibilityRole; 
@property (copy) NSString * accessibilityRoleDescription; 
@property (retain) id accessibilitySearchButton; 
@property (retain) id accessibilitySearchMenu; 
@property (getter=isAccessibilitySelected) char accessibilitySelected; 
@property (copy) NSArray * accessibilitySelectedChildren; 
@property (copy) NSArray * accessibilityServesAsTitleForUIElements; 
@property (retain) id accessibilityShownMenu; 
@property (retain) id accessibilityMinValue; 
@property (retain) id accessibilityMaxValue; 
@property (copy) NSArray * accessibilityLinkedUIElements; 
@property (__weak) id accessibilityWindow; 
@property (copy) NSString * accessibilityIdentifier; 
@property (copy) NSString * accessibilityHelp; 
@property (copy) NSString * accessibilityFilename; 
@property (getter=isAccessibilityExpanded) char accessibilityExpanded; 
@property (getter=isAccessibilityEdited) char accessibilityEdited; 
@property (getter=isAccessibilityEnabled) char accessibilityEnabled; 
@property (copy) NSArray * accessibilityChildren; 
@property (retain) id accessibilityClearButton; 
@property (retain) id accessibilityCancelButton; 
@property (getter=isAccessibilityProtectedContent) char accessibilityProtectedContent; 
@property (copy) NSArray * accessibilityContents; 
@property (copy) NSString * accessibilityLabel; 
@property (getter=isAccessibilityAlternateUIVisible) char accessibilityAlternateUIVisible; 
@property (copy) NSArray * accessibilitySharedFocusElements; 
@property (retain) id accessibilityApplicationFocusedUIElement; 
@property (retain) id accessibilityMainWindow; 
@property (getter=isAccessibilityHidden) char accessibilityHidden; 
@property (getter=isAccessibilityFrontmost) char accessibilityFrontmost; 
@property (retain) id accessibilityFocusedWindow; 
@property (copy) NSArray * accessibilityWindows; 
@property (__weak) id accessibilityExtrasMenuBar; 
@property (__weak) id accessibilityMenuBar; 
@property (copy) NSArray * accessibilityColumnTitles; 
@property (getter=isAccessibilityOrderedByRow) char accessibilityOrderedByRow; 
@property (assign) long long accessibilityHorizontalUnits; 
@property (assign) long long accessibilityVerticalUnits; 
@property (copy) NSString * accessibilityHorizontalUnitDescription; 
@property (copy) NSString * accessibilityVerticalUnitDescription; 
@property (copy) NSArray * accessibilityHandles; 
@property (retain) id accessibilityWarningValue; 
@property (retain) id accessibilityCriticalValue; 
@property (getter=isAccessibilityDisclosed) char accessibilityDisclosed; 
@property (__weak) id accessibilityDisclosedByRow; 
@property (retain) id accessibilityDisclosedRows; 
@property (assign) long long accessibilityDisclosureLevel; 
@property (copy) NSArray * accessibilityMarkerUIElements; 
@property (retain) id accessibilityMarkerValues; 
@property (retain) id accessibilityMarkerGroupUIElement; 
@property (assign) long long accessibilityUnits; 
@property (copy) NSString * accessibilityUnitDescription; 
@property (assign) long long accessibilityRulerMarkerType; 
@property (copy) NSString * accessibilityMarkerTypeDescription; 
@property (retain) id accessibilityHorizontalScrollBar; 
@property (retain) id accessibilityVerticalScrollBar; 
@property (copy) NSArray * accessibilityAllowedValues; 
@property (copy) NSArray * accessibilityLabelUIElements; 
@property (assign) float accessibilityLabelValue; 
@property (copy) NSArray * accessibilitySplitters; 
@property (retain) id accessibilityDecrementButton; 
@property (retain) id accessibilityIncrementButton; 
@property (copy) NSArray * accessibilityTabs; 
@property (retain) id accessibilityHeader; 
@property (assign) long long accessibilityColumnCount; 
@property (assign) long long accessibilityRowCount; 
@property (assign) long long accessibilityIndex; 
@property (copy) NSArray * accessibilityColumns; 
@property (copy) NSArray * accessibilityRows; 
@property (copy) NSArray * accessibilityVisibleRows; 
@property (copy) NSArray * accessibilitySelectedRows; 
@property (copy) NSArray * accessibilityVisibleColumns; 
@property (copy) NSArray * accessibilitySelectedColumns; 
@property (assign) long long accessibilitySortDirection; 
@property (copy) NSArray * accessibilityRowHeaderUIElements; 
@property (copy) NSArray * accessibilitySelectedCells; 
@property (copy) NSArray * accessibilityVisibleCells; 
@property (copy) NSArray * accessibilityColumnHeaderUIElements; 
@property (assign) NSRange accessibilityRowIndexRange; 
@property (assign) NSRange accessibilityColumnIndexRange; 
@property (assign) long long accessibilityInsertionPointLineNumber; 
@property (assign) NSRange accessibilitySharedCharacterRange; 
@property (copy) NSArray * accessibilitySharedTextUIElements; 
@property (assign) NSRange accessibilityVisibleCharacterRange; 
@property (assign) long long accessibilityNumberOfCharacters; 
@property (copy) NSString * accessibilitySelectedText; 
@property (assign) NSRange accessibilitySelectedTextRange; 
@property (copy) NSArray * accessibilitySelectedTextRanges; 
@property (retain) id accessibilityToolbarButton; 
@property (getter=isAccessibilityModal) char accessibilityModal; 
@property (retain) id accessibilityProxy; 
@property (getter=isAccessibilityMain) char accessibilityMain; 
@property (retain) id accessibilityFullScreenButton; 
@property (retain) id accessibilityGrowArea; 
@property (copy) NSString * accessibilityDocument; 
@property (retain) id accessibilityDefaultButton; 
@property (retain) id accessibilityCloseButton; 
@property (retain) id accessibilityZoomButton; 
@property (retain) id accessibilityMinimizeButton; 
@property (getter=isAccessibilityMinimized) char accessibilityMinimized; 
+(void)initialize;
+(char)_usesCorrectContentSize;
+(void)_setDrawerVelocity:(double)arg1 ;
+(double)_drawerVelocity;
+(void)_setDrawerTransform:(unsigned long long)arg1 ;
+(unsigned long long)_drawerTransform;
-(void)setDelegate:(id<NSDrawerDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_startLiveResize;
-(void)_endLiveResize;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityParentAttribute;
-(char)accessibilityIsParentAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(long long)state;
-(id)accessibilityChildrenAttribute;
-(NSView *)contentView;
-(void)setContentSize:(CGSize)arg1 ;
-(id<NSDrawerDelegate>)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(id)validRequestorForSendType:(id)arg1 returnType:(id)arg2 ;
-(id)_registerDragTypesIfNeeded;
-(id)_resetDisableCounts;
-(id)_resetPostingCounts;
-(NSWindow *)parentWindow;
-(id)menu;
-(void)setContentView:(NSView *)arg1 ;
-(char)tryToPerform:(SEL)arg1 with:(id)arg2 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityParent;
-(void)setMenu:(id)arg1 ;
-(void)close;
-(char)accessibilityIsChildrenAttributeSettable;
-(CGSize)contentSize;
-(unsigned long long)preferredEdge;
-(void)setPreferredEdge:(unsigned long long)arg1 ;
-(void)_size;
-(id)undoManager;
-(CGSize)minContentSize;
-(void)interpretKeyEvents:(id)arg1 ;
-(void)open:(id)arg1 ;
-(char)_allowsImplicitRemovalFromMovementGroup;
-(id)_initWithContentSize:(CGSize)arg1 preferredEdge:(unsigned long long)arg2 ;
-(void)setMinContentSize:(CGSize)arg1 ;
-(void)setMaxContentSize:(CGSize)arg1 ;
-(void)setLeadingOffset:(double)arg1 ;
-(void)setTrailingOffset:(double)arg1 ;
-(void)setAutosaveName:(id)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(CGSize)maxContentSize;
-(double)leadingOffset;
-(double)trailingOffset;
-(id)autosaveName;
-(void)_doStopDrawer;
-(void)_doSetParentWindow:(id)arg1 ;
-(void)_moveByOffset:(CGSize)arg1 ;
-(unsigned long long)edge;
-(void)openOnEdge:(unsigned long long)arg1 ;
-(void)_doCloseDrawer;
-(void)_setDrawerEdge:(unsigned long long)arg1 ;
-(void)_doOpenDrawer;
-(void)open;
-(void)close:(id)arg1 ;
-(void)_doRemoveDrawer;
-(void)_doAutoselectEdge;
-(void)_doPositionDrawerAndSize:(CGSize)arg1 parentFrame:(CGRect)arg2 ;
-(id)initWithContentSize:(CGSize)arg1 preferredEdge:(unsigned long long)arg2 ;
-(void)toggle:(id)arg1 ;
-(void)removeImmediately:(char)arg1 ;
-(char)isOpen;
-(id)_drawerWindow;
-(void)_doDetachDrawer;
-(void)_doAttachDrawerIgnoreHidden:(char)arg1 ;
-(void)_doPositionDrawer;
-(void)_doSlideDrawerWithDelta:(CGPoint)arg1 ;
-(void)_doResizeDrawerWithDelta:(CGPoint)arg1 fromFrame:(CGRect)arg2 ;
-(unsigned long long)_edge;
-(void)_hide;
-(void)_unhide;
-(void)_destroyRealWindow;
-(void)_displayIfNeeded;
-(void)_position;
-(void)_sizeWithRect:(CGRect)arg1 ;
-(void)_changeKeyState;
-(void)_changeMainState;
-(void)_changeFirstResponderToParentsFirstResponder;
-(void)_takeFocus;
-(CGSize)_minParentWindowContentSize;
-(void)_slideWithDelta:(CGPoint)arg1 beginOperation:(char)arg2 endOperation:(char)arg3 ;
-(void)_resizeWithDelta:(CGPoint)arg1 fromFrame:(CGRect)arg2 beginOperation:(char)arg3 endOperation:(char)arg4 ;
-(void)_setLevel;
-(void)_setVisibleWithoutLogin;
-(void)_doPositionDrawerAndSize:(CGSize)arg1 parentFrame:(CGRect)arg2 stashSize:(char)arg3 ;
-(void)_doAttachDrawer;
-(void)_doStartDrawer;
-(void)flushBufferedKeyEvents;
-(void)helpRequested:(id)arg1 ;
@end
