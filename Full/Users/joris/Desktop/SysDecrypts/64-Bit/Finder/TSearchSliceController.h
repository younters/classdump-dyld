/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <AppKit/NSResponder.h>

@class TSearchSliceView, TSearchForSliceController, TSearchScopeSliceController, TSearchCriteriaController, NSSearchField, TBrowserContainerController, NSSet, NSView;

@interface TSearchSliceController : NSResponder {

	TSearchSliceView* _view;
	TSearchForSliceController* _searchForSliceController;
	TSearchScopeSliceController* _scopeSliceController;
	TSearchCriteriaController* _criteriaController;
	NSSearchField* _toolbarSearchField;
	TBrowserContainerController* _containerController;
	NSSet* _searchFilterUTIs;
	BOOL _sliceUpdatesAreDisabled;
	BOOL _isSaveable;
	BOOL _configuring;

}

@property (retain,readonly) NSView * view;                                                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) TBrowserContainerController * containerController;              //@synthesize containerController=_containerController - In the implementation block
@property (assign) BOOL isSaveable;                                                          //@synthesize isSaveable=_isSaveable - In the implementation block
@property (assign) BOOL configuring;                                                         //@synthesize configuring=_configuring - In the implementation block
@property (retain) NSSet * searchFilterUTIs;                                                 //@synthesize searchFilterUTIs=_searchFilterUTIs - In the implementation block
+(void)copySuggestionsFrom:(id)arg1 to:(id)arg2 ;
+(id)searchFieldState:(id)arg1 ;
+(void)setSearchFieldState:(id)arg1 withState:(id)arg2 ;
-(BOOL)searchForSliceIsVisible;
-(BOOL)addSearchForSlice;
-(BOOL)removeSearchForSlice;
-(void)setSearchForIsVisible:(BOOL)arg1 ;
-(BOOL)makeSearchForSliceFirstResponder;
-(id)searchForSliceString;
-(TBrowserContainerController *)containerController;
-(void)aboutToTearDown;
-(id)currentSearchField;
-(void)criteriaSliceChange:(BOOL)arg1 ;
-(void)setContainerController:(TBrowserContainerController *)arg1 ;
-(void)setToolbarSearchField:(id)arg1 ;
-(void)adjustSlices;
-(void)disableSliceUpdates:(BOOL)arg1 ;
-(BOOL)criteriaIsCollapsed;
-(BOOL)setScopeIsVisible:(BOOL)arg1 ;
-(void)setCriteriaTo:(id)arg1 ;
-(BOOL)hasCriteria;
-(void)showDefaultCriteria:(BOOL)arg1 ;
-(void)setCriteriaIsVisible:(BOOL)arg1 ;
-(void)slicesFrameSizeChanged;
-(void)autoEnableScopeSaveButton;
-(BOOL)scopeSliceIsVisible;
-(id)currentScopeString;
-(void)updateQueryFromUIAndClearContent:(BOOL)arg1 ;
-(void)setScopePlusMinusButtonTitle:(BOOL)arg1 ;
-(void)setScopePlusMinusButtonEnabled:(BOOL)arg1 ;
-(void)removeAllCriteriaSlices;
-(void)updateScopePlusMinusButton;
-(void)setSearchFieldText:(id)arg1 ;
-(void)configureSlice:(id)arg1 ;
-(BOOL)removeScopeSlice;
-(BOOL)addScopeSlice;
-(void)setScopeSelection:(unsigned long long)arg1 ;
-(BOOL)isSaveable;
-(BOOL)criteriaIsVisible;
-(id)userCriteria:(BOOL)arg1 ;
-(void)clearSearchField;
-(BOOL)hideCriteria;
-(BOOL)addCriteria;
-(void)setSuggestionFieldScope:(long long)arg1 ;
-(void)setDefaultFileNameOnly:(int)arg1 ;
-(int)searchWhen;
-(id)queryStringForSearchField;
-(id)appendSearchWhen:(int)arg1 toString:(id)arg2 ;
-(BOOL)configuring;
-(id)generateQueryStringForScope:(int)arg1 filteredSavedSearch:(BOOL)arg2 ;
-(void)setConfiguring:(BOOL)arg1 ;
-(void)setScopeButtonTitles:(id)arg1 andHelpTags:(id)arg2 ;
-(void)finishedConfiguringSlices;
-(BOOL)queryIsCannedSearch;
-(void)setIsSaveable:(BOOL)arg1 ;
-(void)toggleSlices;
-(void)scopeChanged:(id)arg1 index:(unsigned long long)arg2 ;
-(void)fieldChanged:(id)arg1 nameOnly:(BOOL)arg2 ;
-(void)saveButtonPressed:(id)arg1 ;
-(void)plusMinusButtonPressed:(id)arg1 title:(BOOL)arg2 ;
-(void)scopeSetByUser:(unsigned long long)arg1 ;
-(id)userSlices;
-(BOOL)addSearchStringAndSuggestionsToCriteria;
-(void)configureForAction:(int)arg1 forSearchString:(id)arg2 ;
-(void)updateUIForAction;
-(NSSet *)searchFilterUTIs;
-(void)setSearchFilterUTIs:(NSSet *)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSView *)view;
-(void)controlTextDidChange:(id)arg1 ;
-(void)saveQuery;
-(TMDQueryAliasNode*)queryNode;
-(double)height;
@end
