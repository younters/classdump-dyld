/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/NSTextFieldDelegate.h>

@protocol ABPersonListControllerProtocol, ABPersonListHeadlining, ABPersonSearchControllerDelegate;
@class NSSearchField, NSString, ABPersonSearchConfiguration, ABAddressBook, ABPersonListSearchControllerUsageStatisticsHelper, NSArray;

@interface ABPersonListSearchController : NSObject <NSTextFieldDelegate> {

	id<ABPersonListControllerProtocol> _personListController;
	NSSearchField* _searchField;
	NSString* _previousSearchString;
	ABPersonSearchConfiguration* _currentConfiguration;
	id<ABPersonListHeadlining> _browsingHeadliner;
	ABAddressBook* _browsingAddressBook;
	id<ABPersonSearchControllerDelegate> _delegate;
	ABPersonListSearchControllerUsageStatisticsHelper* _usageStatisticsHelper;
	unsigned long long _countOfLocalSearchesPerformed;
	unsigned long long _countOfServerSearchesPerformed;
	char _shouldSelectBestEntry;

}

@property (assign) id<ABPersonListControllerProtocol> personListController;                                //@synthesize personListController=_personListController - In the implementation block
@property (assign) NSSearchField * searchField;                                                            //@synthesize searchField=_searchField - In the implementation block
@property (assign) id<ABPersonSearchControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (retain) ABAddressBook * browsingAddressBook;                                                    //@synthesize browsingAddressBook=_browsingAddressBook - In the implementation block
@property (retain) id<ABPersonListHeadlining> browsingHeadliner;                                           //@synthesize browsingHeadliner=_browsingHeadliner - In the implementation block
@property (copy) NSString * searchString; 
@property (copy) NSString * previousSearchString;                                                          //@synthesize previousSearchString=_previousSearchString - In the implementation block
@property (copy,readonly) NSArray * searchTerms; 
@property (assign) char shouldSelectBestEntry;                                                             //@synthesize shouldSelectBestEntry=_shouldSelectBestEntry - In the implementation block
@property (readonly) unsigned long long countOfLocalSearchesPerformed; 
@property (readonly) unsigned long long countOfServerSearchesPerformed; 
@property (retain) ABPersonListSearchControllerUsageStatisticsHelper * usageStatisticsHelper;              //@synthesize usageStatisticsHelper=_usageStatisticsHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSearchField *)searchField;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(void)searchForString:(id)arg1 ;
-(void)setBrowsingAddressBook:(ABAddressBook *)arg1 ;
-(void)setBrowsingHeadliner:(id<ABPersonListHeadlining>)arg1 ;
-(id<ABPersonListHeadlining>)browsingHeadliner;
-(void)setPersonListController:(id<ABPersonListControllerProtocol>)arg1 ;
-(id<ABPersonListControllerProtocol>)personListController;
-(char)shouldSelectBestEntry;
-(void)setShouldSelectBestEntry:(char)arg1 ;
-(NSString *)previousSearchString;
-(ABPersonListSearchControllerUsageStatisticsHelper *)usageStatisticsHelper;
-(void)_implicitlyAdvanceTheSelection:(id)arg1 ;
-(void)setPreviousSearchString:(NSString *)arg1 ;
-(void)setPlaceholderStringForAllContacts;
-(void)setPlaceholderStringWithGroupName:(id)arg1 ;
-(NSArray *)searchTerms;
-(void)focusSearchField:(id)arg1 ;
-(void)setSearchConfiguration:(id)arg1 ;
-(void)selectBestRecordMatchingQuery:(id)arg1 ;
-(unsigned long long)countOfLocalSearchesPerformed;
-(unsigned long long)countOfServerSearchesPerformed;
-(void)resetCountsOfSearchesPerformed;
-(void)searchConfigurationPerformedLocalSearch;
-(void)searchConfigurationPerformedServerSearch;
-(void)setSearchGroupName:(id)arg1 isAllContacts:(char)arg2 ;
-(ABAddressBook *)browsingAddressBook;
-(void)setUsageStatisticsHelper:(ABPersonListSearchControllerUsageStatisticsHelper *)arg1 ;
-(void)setDelegate:(id<ABPersonSearchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ABPersonSearchControllerDelegate>)delegate;
-(void)selectNext:(id)arg1 ;
-(void)selectPrevious:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)controlTextDidBeginEditing:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)_searchFieldAction:(id)arg1 ;
@end
