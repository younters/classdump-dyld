/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABMainWindowEditModeController;
@class CNWeakReference, ABAddressBook, ABGroupListController, ABGroupEntriesList, ABDefaultGroupEntriesFactory, ABLastImportGroupController, ABPointOfInterestSearchController, ABPersonListController, ABPersonListSearchController, ABMainWindowSelectionController, ABCardView;

@interface ABMainWindowViewModel : NSObject {

	CNWeakReference* _mainWindowController;
	ABAddressBook* _addressBook;
	ABGroupListController* _groupListController;
	ABGroupEntriesList* _groupEntriesList;
	ABDefaultGroupEntriesFactory* _groupEntriesFactory;
	ABLastImportGroupController* _lastImportGroupController;
	ABPointOfInterestSearchController* _pointOfInterestSearchController;
	ABPersonListController* _personListController;
	ABPersonListSearchController* _personListSearchController;
	ABMainWindowSelectionController* _windowSelectionController;
	ABCardView* _cardView;
	id<ABMainWindowEditModeController> _editModeController;

}
+(id)accountForNewRecords:(id)arg1 ;
+(void)selectContactWithIdentifier:(id)arg1 edit:(char)arg2 model:(id)arg3 ;
+(void)selectAllContactsIfSelectedGroupIsReadOnly:(id)arg1 ;
+(void)updateSearchPlaceholderText:(id)arg1 ;
+(char)isAllContactsGroupEntrySelected:(id)arg1 ;
-(id)mainWindowController;
-(void)focusContactSearchField;
-(id)addressBookForBrowsing;
-(unsigned long long)countOfSelectedContactEntries;
-(id)contactsInFocusSelection;
-(char)showsLastImportGroup;
-(void)setShowsLastImportGroup:(char)arg1 ;
-(void)overrideShowsLastImportGroup:(char)arg1 ;
-(char)showsPointOfInterestSearch;
-(void)setShowsPointOfInterestSearch:(char)arg1 ;
-(id)timeMachineRestoreSourceFromCurrentSelection;
-(id)fileNameOfFocusedGroupsOrContacts;
-(void)ensureGroupListIsVisible;
-(void)searchForContactsMatchingString:(id)arg1 ;
-(id)contactEntryForIdentifier:(id)arg1 ;
-(void)selectAllContactsGroupEntry;
-(void)ensureContactViewIsVisible;
-(void)selectContactEntries:(id)arg1 ;
-(void)scrollToSelectedContacts;
-(void)setEditingContact:(char)arg1 ;
-(id)accountForSelectedContacts;
-(char)isAllContactsGroupEntrySelected;
-(id)initWithMainWindowController:(id)arg1 addressBook:(id)arg2 groupListController:(id)arg3 groupEntriesList:(id)arg4 groupEntriesFactory:(id)arg5 lastImportGroupController:(id)arg6 pointOfInterestSearchController:(id)arg7 personListController:(id)arg8 personListSearchController:(id)arg9 windowSelectionController:(id)arg10 cardView:(id)arg11 editModeController:(id)arg12 ;
-(void)overrideAccounts:(id)arg1 addressBook:(id)arg2 ;
-(void)selectGroupWithIdentifier:(id)arg1 ;
-(void)selectGroup:(id)arg1 ;
-(void)selectGroups:(id)arg1 ;
-(char)canSelectedGroupEntryCreatePeople;
-(unsigned long long)countOfContactEntries;
-(id)observableForCountOfContactEntries;
-(id)selectedContactEntries;
-(id)selectedContactRecords;
-(id)selectedContactRecordIdentifiers;
-(id)selectedLinkedContactRecords;
-(id)addressBookForSeletedContacts;
-(char)selectContactsWithIdentifiers:(id)arg1 ;
-(void)selectPreviousContact;
-(void)selectNextContact;
-(id)contactSearchString;
-(id)makeBrowsingSearchConfiguration;
-(id)makeQuerySearchConfiguration;
-(char)shouldUnifyContacts;
-(char)isEditingContact;
-(void)beginEditingContact;
-(void)stopEditingContact;
-(void)toggleEditingContact;
-(void)commitContactEditing;
-(void)setNoContactLabel:(id)arg1 ;
-(char)canEditContactKey:(id)arg1 ;
-(void)beginEditingContactKey:(id)arg1 ;
-(void)beginEditingContactKey:(id)arg1 label:(id)arg2 ;
-(char)canEditContactImage;
-(void)clearContactImage;
-(void)beginEditingContactImage;
-(void)postAppearanceDidChangeNotification;
-(id)accountForNewRecords;
-(void)selectContactWithIdentifier:(id)arg1 edit:(char)arg2 ;
-(void)selectAllContactsIfSelectedGroupIsReadOnly;
-(void)updateSearchPlaceholderText;
-(id)selectedGroupEntry;
-(id)allContactsGroupEntry;
-(id)selectedGroups;
-(id)peopleInFocusedSelection;
-(char)canEditContact;
-(void)setSearchConfiguration:(id)arg1 ;
-(void)setSearchGroupName:(id)arg1 isAllContacts:(char)arg2 ;
-(id)defaultDirectoryGroupEntry;
-(void)selectGroupEntry:(id)arg1 ;
-(id)selectedGroupEntryIdentifier;
-(void)selectGroupEntryWithIdentifier:(id)arg1 ;
-(id)selectedGroup;
-(void)highlightGroupsWithMembers:(id)arg1 ;
-(void)importFiles:(id)arg1 showImportConfirmation:(char)arg2 ;
-(id)selectedGroupName;
-(void)dealloc;
@end
