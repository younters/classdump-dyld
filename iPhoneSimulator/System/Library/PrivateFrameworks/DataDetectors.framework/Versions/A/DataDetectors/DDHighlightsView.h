/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <AppKit/NSView.h>

@protocol DDHighlightsDataSource, DDHighlightsDelegate;
@class NSView, NSArray, NSMapTable, NSMutableArray;

@interface DDHighlightsView : NSView {

	NSView* _documentView;
	id<DDHighlightsDataSource> _dataSource;
	id<DDHighlightsDelegate> _delegate;
	NSArray* _highlightedObjects;
	NSMapTable* _objectsToArrowlessViewMapping;
	char _alwaysShowHighlights;
	NSMutableArray* _highlightQueue;
	char _relayoutInProgress;
	long long _numberOfTrackingAreasCreated;
	long long _numberOfItemRectsAsked;

}
+(void)initialize;
-(void)reloadHighlights;
-(void)enqueuePerformLayout;
-(void)setAlwaysShowHighlights:(char)arg1 ;
-(id)initOnView:(id)arg1 usingScrollView:(id)arg2 ;
-(void)recomputeLayout;
-(void)setHighlightedObjects:(id)arg1 ;
-(void)removeAllTrackingAreas;
-(void)setAllState:(int)arg1 disableAnimations:(char)arg2 ;
-(void)_setTrackingAreaForBasicHighlight:(id)arg1 entering:(char)arg2 ;
-(void)_addMultiViewForObject:(id)arg1 withArrow:(char)arg2 availableViews:(id)arg3 ;
-(void)updateHighlightStatesForMousePosition;
-(void)forwardEvent:(id)arg1 nextEvent:(id)arg2 ;
-(void)hideHighlights;
-(void)_mouseEnteredBasicHLView:(id)arg1 withRelatedObjects:(id)arg2 ;
-(void)_mouseExitedBasicHLView:(id)arg1 withInfos:(id)arg2 ;
-(void)handleEvent:(id)arg1 nextEvent:(id)arg2 ;
-(void)removeHighlights;
-(void)updateToolTips;
-(char)eventIsOnHighlight:(id)arg1 onTriangle:(char*)arg2 ;
-(void)accessibilityShowMenuForPoint:(id)arg1 ;
-(void)scrollViewDidScroll;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 ;
-(void)deactivate;
-(id)viewForObject:(id)arg1 ;
-(id)documentView;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)windowDidResignKey:(id)arg1 ;
-(void)windowDidBecomeMain:(id)arg1 ;
@end
