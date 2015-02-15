/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <BrowserKit/BKArrangedItemsModule.h>

@class NSView, BKScopeBar, NSProTextField, NSProBox, NSProPathControl;

@interface BKItemsControlsModule : BKArrangedItemsModule {

	NSView* _contentsView;
	BKScopeBar* _filterBar;
	id _filterBarContainer;
	NSView* _containerView;
	NSProTextField* _noItemsToShow;
	NSProBox* _pathControlDivider;
	NSProPathControl* _pathControl;
	NSView* _topAccessoryView;
	NSView* _bottomAccessoryView;
	struct {
		unsigned _updateSubmodulesArrangedItemsPending : 1;
		unsigned _blockUpdateOfSubmodulesArrangedItems : 1;
		unsigned _frameNotificationAdded : 1;
		unsigned _unused : 29;
	}  _itemsControlsModuleFlags;

}

@property (retain) NSView * topAccessoryView;                 //@synthesize topAccessoryView=_topAccessoryView - In the implementation block
@property (retain) NSView * bottomAccessoryView;              //@synthesize bottomAccessoryView=_bottomAccessoryView - In the implementation block
+(id)defaultModuleNibName;
-(void)_registerForDraggedTypes:(id)arg1 ;
-(void)moveSelectionToPreviousItem;
-(void)moveSelectionToNextItem;
-(char)canMoveSelectionToPreviousItem;
-(char)canMoveSelectionToNextItem;
-(void)setSearchPredicates:(id)arg1 ;
-(void)replaceSubmodule:(id)arg1 with:(id)arg2 ;
-(void)_updateContentsViewFrameWithTopAccessoryView:(id)arg1 bottomAccessoryView:(id)arg2 ;
-(void)accessoryView:(id)arg1 resize:(CGSize)arg2 ;
-(void)_updateTableModuleLayout;
-(id)_submodule;
-(void)_updateFilterUTI;
-(void)_filterAction:(id)arg1 ;
-(void)_updatePathControl;
-(void)_delayedUpdateVisibleView;
-(void)_updateNoItemsToShowFrame;
-(void)_updateVisibleView;
-(void)setTopAccessoryView:(NSView *)arg1 ;
-(void)setBottomAccessoryView:(NSView *)arg1 ;
-(void)updateLayoutAfterSubmoduleReplacement;
-(void)setNoItemsString:(id)arg1 ;
-(id)noItemsString;
-(unsigned long long)view:(id)arg1 validateDrop:(id)arg2 ;
-(char)view:(id)arg1 acceptDrop:(id)arg2 ;
-(NSView *)topAccessoryView;
-(NSView *)bottomAccessoryView;
-(void)module:(id)arg1 didAddSubmodule:(id)arg2 ;
-(void)moduleViewWasInstalled:(id)arg1 ;
-(void)moduleViewWillBeRemoved:(id)arg1 ;
-(void)viewWasInstalled;
-(void)viewWillBeRemoved;
-(void)module:(id)arg1 willRemoveSubmodule:(id)arg2 ;
-(void)_viewFrameDidChange:(id)arg1 ;
-(CGSize)viewMinSize;
-(id)_sublayoutContainerView;
-(void)setSelectedItems:(id)arg1 ;
-(void)_removeViewForModule:(id)arg1 ;
-(void)_installViewForModule:(id)arg1 ;
-(id)lastKeyView;
-(void)setItems:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)selectedItems;
-(void)awakeFromNib;
-(void)_setPathLocationEmptyTitle:(id)arg1 ;
-(void)_updateLayout;
@end
