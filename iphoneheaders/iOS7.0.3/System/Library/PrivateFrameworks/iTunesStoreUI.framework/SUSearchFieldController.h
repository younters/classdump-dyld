/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISStoreURLOperationDelegate.h>
#import <iTunesStoreUI/SUScriptTextFieldDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class SUClientInterface, NSArray, ISStoreURLOperation, SUSearchFieldConfiguration, UIControl, UISearchBar, SUSearchDisplayController, SUScriptTextFieldDelegate;

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {

	SUClientInterface* _clientInterface;
	NSArray* _completions;
	ISStoreURLOperation* _completionsOperation;
	SUSearchFieldConfiguration* _configuration;
	UIControl* _dimmerView;
	UISearchBar* _searchBar;
	SUSearchDisplayController* _searchController;
	int _searchFieldStyle;
	SUScriptTextFieldDelegate* _textFieldDelegate;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (nonatomic,copy) SUSearchFieldConfiguration * searchFieldConfiguration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) int searchFieldStyle;                                             //@synthesize searchFieldStyle=_searchFieldStyle - In the implementation block
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)isActive;
-(void)willRotateToInterfaceOrientation:(int)arg1 ;
-(id)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)setSearchFieldConfiguration:(id)arg1 ;
-(id)searchFieldConfiguration;
-(void)handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3 ;
-(id)newRequestPropertiesWithSearchTerm:(id)arg1 ;
-(int)searchFieldStyle;
-(id)initWithContentsController:(id)arg1 style:(int)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithContentsController:(id)arg1 ;
-(id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 ;
-(id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 style:(int)arg3 ;
-(id)_newSearchDisplayControllerWithContentsController:(id)arg1 ;
-(void)_savedSearchTermChangedNotification:(id)arg1 ;
-(void)_tearDownDimmerView;
-(void)_fetchResultsForURLRequestProperties:(id)arg1 ;
-(id)_newSearchBar;
-(void)_reloadSearchBar;
-(void)_resizeSearchBarForOrientation:(int)arg1 ;
-(void)_saveSearchTermToDefaults:(id)arg1 ;
-(void)_fetchResultsForTerm:(id)arg1 ;
-(BOOL)_focusTransientViewController;
-(void)_showDimmerView;
-(void)_cancelCompletionsOperation;
-(void)_reloadCompletionsForSearchString:(id)arg1 ;
-(void)_fetchResultsForURL:(id)arg1 ;
-(id)_defaultSearchTerm;
-(void)_fetchCompletions;
-(id)_targetViewController;
-(id)_newBlankStorePageViewController;
-(void)_dimmerViewAction:(id)arg1 ;
-(id)_newTransientViewController;
-(void)scriptDidChangeTextForField:(id)arg1 ;
-(void)searchBarWillRemoveFromSuperview:(id)arg1 ;
-(void)setSearchFieldStyle:(int)arg1 ;
-(id)_cancelButtonView;
@end
