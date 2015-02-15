/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactListCellViewControllerDelegate.h>
#import <ContactsUI/NSOutlineViewDelegate.h>
#import <ContactsUI/NSOutlineViewDataSource.h>
#import <ContactsUI/ABPersonListControllerProtocol.h>

@class ABAccount, ABAddressBook, ABGroup, NSArray, ABPersonEntriesList, CNContactListView, CNContactListHelperFactory, CNContactListCellView, NSString;

@interface CNContactListController : NSObject <CNContactListCellViewControllerDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource, ABPersonListControllerProtocol> {

	ABPersonEntriesList* _personEntriesList;
	unsigned long long _countOfContactsExpanded;
	char _shouldUnifyPeople;
	ABAccount* _account;
	ABAddressBook* _addressBook;
	ABGroup* _displayedGroup;
	NSArray* _displayedKeys;
	CNContactListView* _contactListView;
	CNContactListHelperFactory* _helperFactory;
	CNContactListCellView* _cellView;
	long long _expandedRow;

}

@property (nonatomic,copy) NSArray * displayedKeys;                                     //@synthesize displayedKeys=_displayedKeys - In the implementation block
@property (nonatomic,retain) CNContactListView * contactListView;                       //@synthesize contactListView=_contactListView - In the implementation block
@property (retain) CNContactListHelperFactory * helperFactory;                          //@synthesize helperFactory=_helperFactory - In the implementation block
@property (nonatomic,readonly) char shouldSelectContacts; 
@property (nonatomic,readonly) unsigned long long countOfContactsExpanded; 
@property (retain) CNContactListCellView * cellView;                                    //@synthesize cellView=_cellView - In the implementation block
@property (assign) long long expandedRow;                                               //@synthesize expandedRow=_expandedRow - In the implementation block
@property (assign) char shouldUnifyPeople;                                              //@synthesize shouldUnifyPeople=_shouldUnifyPeople - In the implementation block
@property (copy) NSString * filterTerms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) ABAccount * account;                                                 //@synthesize account=_account - In the implementation block
@property (retain) ABAddressBook * addressBook;                                         //@synthesize addressBook=_addressBook - In the implementation block
@property (retain) ABGroup * displayedGroup;                                            //@synthesize displayedGroup=_displayedGroup - In the implementation block
@property (readonly) NSArray * entries; 
@property (readonly) NSArray * personEntries; 
@property (readonly) char shouldIncludeGroups; 
-(NSArray *)displayedKeys;
-(void)setupListView;
-(void)setupCellView;
-(void)refreshContactList;
-(void)registerNibWithName:(id)arg1 forIdentifier:(id)arg2 ;
-(void)expandRow:(long long)arg1 shouldAnimate:(char)arg2 ;
-(char)shouldSelectContacts;
-(char)isValidRow:(long long)arg1 ;
-(id)viewControllerAtRow:(long long)arg1 ;
-(id)contactAtRow:(long long)arg1 ;
-(char)isHeaderRow:(unsigned long long)arg1 ;
-(double)heightOfExpandedEntry:(id)arg1 ;
-(void)reloadPersonEntriesList;
-(void)expandRow:(long long)arg1 ;
-(void)cellViewController:(id)arg1 selectValueWithScope:(id)arg2 ;
-(id)initWithPersonEntriesList:(id)arg1 ;
-(void)setContactListView:(CNContactListView *)arg1 ;
-(id)expandedItem;
-(unsigned long long)countOfContactsExpanded;
-(void)resetCountOfContactsExpanded;
-(CNContactListView *)contactListView;
-(long long)expandedRow;
-(void)setExpandedRow:(long long)arg1 ;
-(void)rowClicked:(id)arg1 ;
-(ABAddressBook *)addressBook;
-(CNContactListCellView *)cellView;
-(void)setCellView:(CNContactListCellView *)arg1 ;
-(void)setHelperFactory:(CNContactListHelperFactory *)arg1 ;
-(void)personEntriesDidChange:(id)arg1 ;
-(NSString *)filterTerms;
-(void)setFilterTerms:(NSString *)arg1 ;
-(void)fetchContacts;
-(char)shouldIncludeGroups;
-(char)shouldUnifyPeople;
-(ABGroup *)displayedGroup;
-(unsigned long long)countOfEntries;
-(void)setShouldUnifyPeople:(char)arg1 ;
-(void)setHeadliner:(id)arg1 ;
-(void)setSelectedEntries:(id)arg1 ;
-(void)clearExtraUniqueIdsInSearchResults;
-(void)reflectChangesInUIForNotificationUserInfo:(id)arg1 ;
-(void)scrollVisibleToSelectedRow;
-(void)setDisplayedGroup:(ABGroup *)arg1 ;
-(NSArray *)personEntries;
-(char)outlineViewNeedsIndentation:(id)arg1 ;
-(CNContactListHelperFactory *)helperFactory;
-(void)setDisplayedKeys:(NSArray *)arg1 ;
-(NSArray *)entries;
-(id)affectedStores;
-(void)dealloc;
-(void)rearrangeObjects;
-(void)selectNext:(id)arg1 ;
-(void)selectPrevious:(id)arg1 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldCollapseItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)fetchPredicate;
-(ABAccount *)account;
-(void)setAccount:(ABAccount *)arg1 ;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
@end
