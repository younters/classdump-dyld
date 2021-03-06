/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <iBAReaderKit/BKMacSearchFieldCellDelegate.h>
#import <iBAReaderKit/NSOutlineViewDataSource.h>
#import <iBAReaderKit/NSOutlineViewDelegate.h>
#import <iBAReaderKit/NSTextFieldDelegate.h>
#import <iBAReaderKit/NSTableViewDelegate.h>
#import <iBAReaderKit/NSTableViewDataSource.h>

@protocol THMacSearchOutlineViewControllerDelegate;
@class NSSearchField, NSTableView, THMacSearchOutlineView, THMacScrollView, TMAGradientView, BKPlatformHairlineView, NSObject, THSearchController, THMacSearchNode, NSString;

@interface THMacSearchOutlineViewController : NSViewController <BKMacSearchFieldCellDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate, NSTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource> {

	char _programaticallyChangingSelection;
	int _searchOutlineType;
	NSSearchField* _searchField;
	NSTableView* _recentsView;
	NSTableView* _suggestionsView;
	THMacSearchOutlineView* _resultsView;
	THMacScrollView* _recentsScrollView;
	THMacScrollView* _suggestionsScrollView;
	THMacScrollView* _resultsScrollView;
	TMAGradientView* _searchHeaderBackground;
	BKPlatformHairlineView* _searchHeaderSeparator;
	NSObject*<THMacSearchOutlineViewControllerDelegate> _delegate;
	THSearchController* _searchController;
	NSTableView* _activeTableView;
	THMacSearchNode* _rootNode;
	THMacSearchNode* _currentNode;
	THMacSearchNode* _textNode;
	THMacSearchNode* _mediaNode;
	THMacSearchNode* _notesNode;
	THMacSearchNode* _seeAllNode;
	THMacSearchNode* _expandedCategoryNode;
	THMacSearchNode* _automaticallyExpandedCategoryNode;
	long long _lastSearchPboardChangeCount;
	double _rightMargin;

}

@property (assign,nonatomic) NSSearchField * searchField;                                               //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic) NSTableView * recentsView;                                                 //@synthesize recentsView=_recentsView - In the implementation block
@property (assign,nonatomic) NSTableView * suggestionsView;                                             //@synthesize suggestionsView=_suggestionsView - In the implementation block
@property (assign,nonatomic) THMacSearchOutlineView * resultsView;                                      //@synthesize resultsView=_resultsView - In the implementation block
@property (assign,nonatomic) THMacScrollView * recentsScrollView;                                       //@synthesize recentsScrollView=_recentsScrollView - In the implementation block
@property (assign,nonatomic) THMacScrollView * suggestionsScrollView;                                   //@synthesize suggestionsScrollView=_suggestionsScrollView - In the implementation block
@property (assign,nonatomic) THMacScrollView * resultsScrollView;                                       //@synthesize resultsScrollView=_resultsScrollView - In the implementation block
@property (assign,nonatomic) TMAGradientView * searchHeaderBackground;                                  //@synthesize searchHeaderBackground=_searchHeaderBackground - In the implementation block
@property (assign,nonatomic) BKPlatformHairlineView * searchHeaderSeparator;                            //@synthesize searchHeaderSeparator=_searchHeaderSeparator - In the implementation block
@property (assign,nonatomic) NSObject*<THMacSearchOutlineViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int searchOutlineType;                                                     //@synthesize searchOutlineType=_searchOutlineType - In the implementation block
@property (assign,nonatomic) THSearchController * searchController;                                     //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) NSTableView * activeTableView;                                           //@synthesize activeTableView=_activeTableView - In the implementation block
@property (nonatomic,retain) THMacSearchNode * rootNode;                                                //@synthesize rootNode=_rootNode - In the implementation block
@property (assign,nonatomic) char programaticallyChangingSelection;                                     //@synthesize programaticallyChangingSelection=_programaticallyChangingSelection - In the implementation block
@property (assign,nonatomic) THMacSearchNode * currentNode;                                             //@synthesize currentNode=_currentNode - In the implementation block
@property (nonatomic,retain) THMacSearchNode * textNode;                                                //@synthesize textNode=_textNode - In the implementation block
@property (nonatomic,retain) THMacSearchNode * mediaNode;                                               //@synthesize mediaNode=_mediaNode - In the implementation block
@property (nonatomic,retain) THMacSearchNode * notesNode;                                               //@synthesize notesNode=_notesNode - In the implementation block
@property (nonatomic,retain) THMacSearchNode * seeAllNode;                                              //@synthesize seeAllNode=_seeAllNode - In the implementation block
@property (assign,nonatomic) THMacSearchNode * expandedCategoryNode;                                    //@synthesize expandedCategoryNode=_expandedCategoryNode - In the implementation block
@property (assign,nonatomic) THMacSearchNode * automaticallyExpandedCategoryNode;                       //@synthesize automaticallyExpandedCategoryNode=_automaticallyExpandedCategoryNode - In the implementation block
@property (assign,nonatomic) long long lastSearchPboardChangeCount;                                     //@synthesize lastSearchPboardChangeCount=_lastSearchPboardChangeCount - In the implementation block
@property (assign,nonatomic) double rightMargin;                                                        //@synthesize rightMargin=_rightMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notesCategory;
+(id)mediaCategory;
+(id)textCategory;
+(id)recentsCategory;
+(id)suggestionsCategory;
-(char)p_isMouseInsideView:(id)arg1 ;
-(void)searchFieldCanceledWhileEmpty:(id)arg1 ;
-(void)p_updateCellBorders;
-(void)popoverDidShow;
-(BKPlatformHairlineView *)searchHeaderSeparator;
-(unsigned long long)p_selectableRowIndexWithDelta:(long long)arg1 ;
-(void)setResultsView:(THMacSearchOutlineView *)arg1 ;
-(THMacScrollView *)recentsScrollView;
-(void)setSuggestionsView:(NSTableView *)arg1 ;
-(void)setSuggestionsScrollView:(THMacScrollView *)arg1 ;
-(void)setRecentsView:(NSTableView *)arg1 ;
-(THMacSearchOutlineView *)resultsView;
-(THMacScrollView *)suggestionsScrollView;
-(void)setLastSearchPboardChangeCount:(long long)arg1 ;
-(void)setRecentsScrollView:(THMacScrollView *)arg1 ;
-(long long)lastSearchPboardChangeCount;
-(void)setResultsScrollView:(THMacScrollView *)arg1 ;
-(void)setSearchHeaderBackground:(TMAGradientView *)arg1 ;
-(THMacScrollView *)resultsScrollView;
-(id)initWithDocumentRoot:(id)arg1 searchController:(id)arg2 ;
-(void)setSearchOutlineType:(int)arg1 ;
-(id)p_currentFindPasteboardText;
-(void)mouseClickOnTableView:(id)arg1 ;
-(TMAGradientView *)searchHeaderBackground;
-(void)p_setActiveTableView:(id)arg1 ;
-(double)p_tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)p_clearSearchResults;
-(void)p_setFindboardContents:(id)arg1 ;
-(void)p_searchIndexLoaded:(id)arg1 ;
-(id)p_cellIdentifierForNodeType:(int)arg1 ;
-(void)p_updateCellView:(id)arg1 withResultNode:(id)arg2 ;
-(void)p_updateResultCountForCategoryNode:(id)arg1 view:(id)arg2 ;
-(char)programaticallyChangingSelection;
-(void)p_navigateToSelectedRow;
-(char)p_tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(void)setProgramaticallyChangingSelection:(char)arg1 ;
-(void)moveSelectionWithDelta:(long long)arg1 ;
-(void)setExpandedCategoryNode:(THMacSearchNode *)arg1 ;
-(void)p_updateSearchResultsForText:(id)arg1 ;
-(void)p_updateSearchSuggestionsForText:(id)arg1 ;
-(THMacSearchNode *)expandedCategoryNode;
-(THMacSearchNode *)automaticallyExpandedCategoryNode;
-(void)setAutomaticallyExpandedCategoryNode:(THMacSearchNode *)arg1 ;
-(void)p_updateVisibleResults:(id)arg1 forCategory:(id)arg2 ;
-(void)p_updateVisibleSuggestions;
-(void)p_updateVisibleResults;
-(void)p_navigateToSearchResult:(id)arg1 ;
-(int)searchOutlineType;
-(THMacSearchNode *)textNode;
-(void)p_setupRecents;
-(THMacSearchNode *)notesNode;
-(THMacSearchNode *)mediaNode;
-(NSTableView *)suggestionsView;
-(NSTableView *)activeTableView;
-(void)setSeeAllNode:(THMacSearchNode *)arg1 ;
-(NSTableView *)recentsView;
-(void)setMediaNode:(THMacSearchNode *)arg1 ;
-(void)setTextNode:(THMacSearchNode *)arg1 ;
-(THMacSearchNode *)seeAllNode;
-(void)setNotesNode:(THMacSearchNode *)arg1 ;
-(void)setSearchHeaderSeparator:(BKPlatformHairlineView *)arg1 ;
-(void)popoverWillShow;
-(NSSearchField *)searchField;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(double)preferredHeight;
-(void)setDelegate:(NSObject*<THMacSearchOutlineViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<THMacSearchOutlineViewControllerDelegate>)delegate;
-(void)loadView;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)tableViewSelectionIsChanging:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)setSearchString:(id)arg1 ;
-(THMacSearchNode *)rootNode;
-(void)setRootNode:(THMacSearchNode *)arg1 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldCollapseItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)outlineViewSelectionIsChanging:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(double)rightMargin;
-(void)setRightMargin:(double)arg1 ;
-(THSearchController *)searchController;
-(void)setSearchController:(THSearchController *)arg1 ;
-(void)setCurrentNode:(THMacSearchNode *)arg1 ;
-(THMacSearchNode *)currentNode;
@end

