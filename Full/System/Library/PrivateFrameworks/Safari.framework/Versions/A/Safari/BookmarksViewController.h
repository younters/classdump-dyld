/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSResponder.h>
#import <Safari/NSOutlineViewDataSource.h>

@class BookmarksSearcher, NSString, NSTableColumn, BarBackground, WebBookmark, OutlineViewPlus, NSButton, NSSearchField, NSTextField;

@interface BookmarksViewController : NSResponder <NSOutlineViewDataSource> {

	char _draggingUndeletableBookmarks;
	char _abortedDraggingBookmarks;
	BookmarksSearcher* _searcher;
	NSString* _pendingInitialSearchString;
	BrowserContentViewController* _contentViewController;
	NSTableColumn* _hiddenAddressColumn;
	char _bookmarkChangeIsExpected;
	char _setupComplete;
	char _outlineViewWasFocused;
	BarBackground* _rootView;
	WebBookmark* _selectedCollection;
	OutlineViewPlus* _outlineView;
	NSTableColumn* _bookmarkColumn;
	NSButton* _contentModificationButton;
	NSSearchField* _searchField;
	NSTextField* _searchMatchesLabel;

}

@property (assign,nonatomic,__weak) BarBackground * rootView;                                  //@synthesize rootView=_rootView - In the implementation block
@property (nonatomic,retain) WebBookmark * selectedCollection;                                 //@synthesize selectedCollection=_selectedCollection - In the implementation block
@property (assign,nonatomic) BrowserContentViewController* contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) OutlineViewPlus * outlineView;                             //@synthesize outlineView=_outlineView - In the implementation block
@property (assign,nonatomic,__weak) NSTableColumn * bookmarkColumn;                            //@synthesize bookmarkColumn=_bookmarkColumn - In the implementation block
@property (assign,nonatomic,__weak) NSButton * contentModificationButton;                      //@synthesize contentModificationButton=_contentModificationButton - In the implementation block
@property (assign,nonatomic,__weak) NSSearchField * searchField;                               //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * searchMatchesLabel;                          //@synthesize searchMatchesLabel=_searchMatchesLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)draggedBookmarks;
+(void)setDraggedBookmarks:(id)arg1 ;
+(id)parentColumnTitle;
+(float)bottomGradientHeight;
-(NSSearchField *)searchField;
-(char)contentItemCanHaveChildren:(id)arg1 ;
-(int)numberOfChildrenOfContentItem:(id)arg1 ;
-(id)bookmarkFromContentItem:(id)arg1 ;
-(void)goToContentItemInNewWindow:(id)arg1 ;
-(void)goToContentItemInNewTab:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2 ;
-(char)canGoToContentItem:(id)arg1 ;
-(id)bookmarksFromContentItems:(id)arg1 ;
-(TabPlacementHint*)tabPlacementHint;
-(id)_searchString;
-(void)iconChanged:(id)arg1 ;
-(void)activateItem:(id)arg1 ;
-(void)removeBookmarks:(id)arg1 ;
-(void)_editTitleOfBookmark:(id)arg1 ;
-(void)_editAddressOfBookmark:(id)arg1 ;
-(char)outlineView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)outlineView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)outlineView:(id)arg1 keyDown:(id)arg2 ;
-(id)outlineView:(id)arg1 dragImageForRowsWithIndexes:(id)arg2 tableColumns:(id)arg3 event:(id)arg4 offset:(CGPoint*)arg5 ;
-(id)outlineView:(id)arg1 menuForEvent:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(void)replaceBookmarksWithUndoInfo:(id)arg1 target:(id)arg2 selector:(SEL)arg3 reverseOrder:(char)arg4 ;
-(void)removeBookmarksWithUndoInfo:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)changeTitleOfBookmark:(id)arg1 to:(id)arg2 ;
-(void)switchedIntoView;
-(void)willSwitchOutOfView;
-(id)pageTitle;
-(BarBackground *)rootView;
-(void)focusSearchField;
-(char)canAddToDisplayedContents;
-(id)collectBookmarksToMoveToNewFolder;
-(id)makeNewContentsFolderWithTitle:(id)arg1 positionIgnoresSelection:(char)arg2 ;
-(char)moveBookmarks:(id)arg1 toNewFolder:(id)arg2 ;
-(id)_browserWindow;
-(void)focusOnNewlyCreatedContentItem:(id)arg1 ;
-(char)_canCopySelectedContentItems;
-(id)selectedContentItems;
-(void)_copyContentItems:(id)arg1 ;
-(char)canCut;
-(char)_canDeleteSelectedContentItems;
-(void)deleteSelectedContentItems;
-(void)_editBookmark:(id)arg1 columnID:(id)arg2 ;
-(char)_view:(id)arg1 supportsScrollEventAsSwipeGesture:(id)arg2 ;
-(char)canPaste;
-(WebBookmark *)selectedCollection;
-(void)refreshContentsAndDeselectAll:(char)arg1 ;
-(void)setSelectionToBookmarks:(id)arg1 ;
-(unsigned long long)_numberOfHiddenBookmarksPriorToBookmarkAtIndex:(long long)arg1 ;
-(void)undoNewBookmark:(id)arg1 ;
-(void)undoMoveBookmarks:(id)arg1 ;
-(void)reloadAllDisplayedBookmarks;
-(void)_editSelectedBookmarkTitle:(id)arg1 ;
-(char)isShowingFilterSearchResults;
-(char)_shouldDisplayBookmark:(id)arg1 ;
-(void)cleanUpAfterDraggingBookmarksWithOperation:(unsigned long long)arg1 ;
-(unsigned long long)_searchResultsCount;
-(id)collectionForDisplayedContentItem:(id)arg1 ;
-(void)changeAddressForBookmark:(id)arg1 to:(id)arg2 ;
-(char)optionKeyDown;
-(unsigned long long)_writeContentItems:(id)arg1 fromView:(id)arg2 toPasteboard:(id)arg3 ;
-(id)dragImageForRowCount:(int)arg1 dragImageOffset:(CGPoint*)arg2 ;
-(void)activateSelectedItems;
-(void)goToChildrenOfContentItemInTabs:(id)arg1 ;
-(char)canEditTitleOfContentItemAtRow:(int)arg1 ;
-(char)canEditAddressOfContentItemAtRow:(int)arg1 ;
-(char)isShowingFilteredBookmarks;
-(void)revealSelectedFilteredItem;
-(char)canCopyContentItemAtRow:(int)arg1 ;
-(char)canDeleteContentItemAtRow:(int)arg1 ;
-(void)_deleteContentItems:(id)arg1 ;
-(char)shouldEditTableColumn:(id)arg1 forContentItem:(id)arg2 ;
-(void)stopObservingWhileOffScreen;
-(void)cancelPendingFilterSearch;
-(void)startObservingWhileOnScreen;
-(char)_hasPendingInitialSearch;
-(void)_applyPendingInitialSearch;
-(void)performFilterSearch;
-(char)_isShowingHistory;
-(void)updateSelectedCollection;
-(void)updateUIForChangeToBookmark:(id)arg1 typeOfChange:(int)arg2 ;
-(void)_setSearchString:(id)arg1 ;
-(void)updateCollectionSpecificColumns;
-(void)bookmarkSourceContentsChanged:(id)arg1 ;
-(void)bookmarksReloaded:(id)arg1 ;
-(void)bookmarksChanged:(id)arg1 ;
-(void)allIconsRemoved:(id)arg1 ;
-(void)redrawForIconChanges;
-(void)redrawContents;
-(void)performFilterSearchSoon;
-(void)expandContentsOfSelectedCollection;
-(void)refreshContentsForSelectedProxy;
-(void)showClearHistoryPanel:(id)arg1 ;
-(void)addContentsFolder:(id)arg1 ;
-(void)updateContentModificationButton;
-(void)_clearSearch;
-(void)expandInitialContentsOfSelectedCollection;
-(char)_canDeleteOrCopyContentItems:(id)arg1 ;
-(char)_canCopyContentItems:(id)arg1 ;
-(char)canDeleteOrCopyBookmark:(id)arg1 ;
-(char)_canDeleteOrCopySelectedContentItems;
-(id)_addressColumn;
-(id)addTemporaryColumnWithID:(id)arg1 title:(id)arg2 ;
-(char)shouldShowAddressColumnForCollection:(id)arg1 ;
-(void)adjustWidthOfOutlineViewColumnWithID:(id)arg1 forToggledTableColumn:(id)arg2 ;
-(void)updateAddressColumnVisibility;
-(void)updateParentColumnVisibility;
-(id)createAndAddParentColumn;
-(void)expandAncestorsOfBookmark:(id)arg1 ;
-(void)goToContentItem:(id)arg1 ;
-(void)goToSelectedContentItemsInNewTabsOrWindows;
-(id)dragImageWithoutBadge;
-(id)badgeImageFromItemCount:(int)arg1 ;
-(char)_canDeleteContentItems:(id)arg1 ;
-(void)prepareForDraggingBookmarks:(id)arg1 fromView:(id)arg2 ;
-(void)undoPasteBookmarks:(id)arg1 ;
-(/*^block*/id)_undoNewBookmarkPreflightBlock;
-(/*^block*/id)_undoNewBookmarkCompletionBlockForUndoInfo:(id)arg1 ;
-(/*^block*/id)_redoNewBookmarkPreflightBlock;
-(/*^block*/id)_redoNewBookmarkCompletionBlockForUndoInfo:(id)arg1 ;
-(/*^block*/id)_undoMovePreflightBlock;
-(/*^block*/id)_undoMoveCompletionBlock;
-(/*^block*/id)_redoMovePreflightBlock;
-(/*^block*/id)_redoMoveCompletionBlock;
-(void)redoPasteBookmarks:(id)arg1 ;
-(void)updateUIAfterFilterSearchChanged;
-(void)performFilterSearchGuts;
-(void)collectFilterSearchResults;
-(char)revealBookmarkInCurrentCollection:(id)arg1 expand:(char)arg2 ;
-(void)_setSearchResultMatchCount:(unsigned long long)arg1 ;
-(char)handleScrollEventAsSwipeGesture:(id)arg1 ;
-(void)outlineView:(id)arg1 draggedImage:(id)arg2 endedAt:(CGPoint)arg3 operation:(unsigned long long)arg4 ;
-(unsigned long long)outlineView:(id)arg1 draggingSourceOperationMaskForLocal:(char)arg2 ;
-(void)showBookmarksCollection:(id)arg1 ;
-(void)performSearchForString:(id)arg1 ;
-(id)initWithBrowserContentViewController:(BrowserContentViewController*)arg1 ;
-(char)canEditSelectedBookmarkAddress;
-(char)canEditSelectedBookmarkTitle;
-(char)canEditTitleOfCollection:(id)arg1 ;
-(void)goToChildrenOfSelectedCollectionInTabs;
-(void)searchTextDidChange:(id)arg1 ;
-(void)setRootView:(BarBackground *)arg1 ;
-(void)setSelectedCollection:(WebBookmark *)arg1 ;
-(NSTableColumn *)bookmarkColumn;
-(void)setBookmarkColumn:(NSTableColumn *)arg1 ;
-(NSButton *)contentModificationButton;
-(void)setContentModificationButton:(NSButton *)arg1 ;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(NSTextField *)searchMatchesLabel;
-(void)setSearchMatchesLabel:(NSTextField *)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)endEditing;
-(BrowserContentViewController*)contentViewController;
-(void)delete:(id)arg1 ;
-(OutlineViewPlus *)outlineView;
-(void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4 ;
-(char)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3 ;
-(char)outlineView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3 ;
-(void)outlineViewItemDidExpand:(id)arg1 ;
-(void)outlineViewItemDidCollapse:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4 ;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3 ;
-(void)setContentViewController:(BrowserContentViewController*)arg1 ;
-(void)setOutlineView:(OutlineViewPlus *)arg1 ;
-(char)handleKeyDown:(id)arg1 ;
-(void)doubleClick:(id)arg1 ;
@end
