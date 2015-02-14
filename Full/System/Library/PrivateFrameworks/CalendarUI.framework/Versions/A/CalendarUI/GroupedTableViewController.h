/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/NSTableViewDelegate.h>
#import <CalendarUI/NSTableViewDataSource.h>

@class NSArray, NSString, NSSet, NSMutableArray, NSDictionary, NSMutableDictionary;

@interface GroupedTableViewController : NSObject <NSTableViewDelegate, NSTableViewDataSource> {

	char _showsHeaderForSingularGroup;
	char _showsHeaderForFirstGroup;
	char _showsSummaryRow;
	char _summaryRowIsSelectable;
	int _organizationType;
	NSArray* _itemSortDescriptors;
	NSArray* _groupSortDescriptors;
	NSArray* _items;
	NSString* _itemPropertyForGroup;
	NSSet* _groups;
	NSString* _groupPropertyForItemArray;
	NSMutableArray* _itemsWithGroups;
	NSString* _groupPropertyForEditability;
	id _emptyGroup;
	NSDictionary* _itemsForGroups;
	/*^block*/id _itemFilter;
	/*^block*/id _groupFilter;
	NSMutableDictionary* _rowsForObjects;

}

@property (assign) int organizationType;                                //@synthesize organizationType=_organizationType - In the implementation block
@property (retain) NSArray * itemSortDescriptors;                       //@synthesize itemSortDescriptors=_itemSortDescriptors - In the implementation block
@property (retain) NSArray * groupSortDescriptors;                      //@synthesize groupSortDescriptors=_groupSortDescriptors - In the implementation block
@property (retain) NSArray * items;                                     //@synthesize items=_items - In the implementation block
@property (retain) NSString * itemPropertyForGroup;                     //@synthesize itemPropertyForGroup=_itemPropertyForGroup - In the implementation block
@property (retain) NSSet * groups;                                      //@synthesize groups=_groups - In the implementation block
@property (retain) NSString * groupPropertyForItemArray;                //@synthesize groupPropertyForItemArray=_groupPropertyForItemArray - In the implementation block
@property (retain) NSMutableArray * itemsWithGroups;                    //@synthesize itemsWithGroups=_itemsWithGroups - In the implementation block
@property (assign) char showsHeaderForSingularGroup;                    //@synthesize showsHeaderForSingularGroup=_showsHeaderForSingularGroup - In the implementation block
@property (assign) char showsHeaderForFirstGroup;                       //@synthesize showsHeaderForFirstGroup=_showsHeaderForFirstGroup - In the implementation block
@property (assign) char showsSummaryRow;                                //@synthesize showsSummaryRow=_showsSummaryRow - In the implementation block
@property (retain) NSString * groupPropertyForEditability;              //@synthesize groupPropertyForEditability=_groupPropertyForEditability - In the implementation block
@property (retain) id emptyGroup;                                       //@synthesize emptyGroup=_emptyGroup - In the implementation block
@property (retain) NSDictionary * itemsForGroups;                       //@synthesize itemsForGroups=_itemsForGroups - In the implementation block
@property (copy) id itemFilter;                                         //@synthesize itemFilter=_itemFilter - In the implementation block
@property (copy) id groupFilter;                                        //@synthesize groupFilter=_groupFilter - In the implementation block
@property (retain) NSMutableDictionary * rowsForObjects;                //@synthesize rowsForObjects=_rowsForObjects - In the implementation block
@property (assign) char summaryRowIsSelectable;                         //@synthesize summaryRowIsSelectable=_summaryRowIsSelectable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItems:(NSArray *)arg1 ;
-(void)setItemsWithGroups:(NSMutableArray *)arg1 ;
-(void)setShowsHeaderForFirstGroup:(char)arg1 ;
-(void)refreshItemsWithGroups;
-(NSMutableArray *)itemsWithGroups;
-(NSMutableDictionary *)rowsForObjects;
-(void)setOrganizationType:(int)arg1 ;
-(void)setItemPropertyForGroup:(NSString *)arg1 ;
-(void)setGroupPropertyForEditability:(NSString *)arg1 ;
-(void)setGroupSortDescriptors:(NSArray *)arg1 ;
-(void)setItemSortDescriptors:(NSArray *)arg1 ;
-(void)setGroupPropertyForItemArray:(NSString *)arg1 ;
-(void)setShowsSummaryRow:(char)arg1 ;
-(void)setSummaryRowIsSelectable:(char)arg1 ;
-(void)setEmptyGroup:(id)arg1 ;
-(NSString *)itemPropertyForGroup;
-(void)setItemFilter:(id)arg1 ;
-(id)emptyGroup;
-(int)organizationType;
-(NSString *)groupPropertyForItemArray;
-(id)itemFilter;
-(id)groupForItem:(id)arg1 ;
-(NSArray *)groupSortDescriptors;
-(char)showsHeaderForSingularGroup;
-(char)showsSummaryRow;
-(char)showsHeaderForFirstGroup;
-(NSArray *)itemSortDescriptors;
-(NSString *)groupPropertyForEditability;
-(void)setRowsForObjects:(NSMutableDictionary *)arg1 ;
-(void)setItemsForGroups:(NSDictionary *)arg1 ;
-(char)isGroupRow:(long long)arg1 ;
-(char)isSummaryRow:(long long)arg1 ;
-(char)isBlankRow:(long long)arg1 ;
-(id)groupOwningRow:(long long)arg1 ;
-(id)groupAtRow:(long long)arg1 ;
-(char)isItemRow:(long long)arg1 ;
-(NSDictionary *)itemsForGroups;
-(char)summaryRowIsSelectable;
-(id)indexesWithoutGroupRowsForProposedIndexes:(id)arg1 ;
-(id)objectsAtRows:(id)arg1 ;
-(void)updateItems:(id)arg1 ;
-(void)setItemPropertyForGroup:(id)arg1 groupPropertyForEditability:(id)arg2 groupsSortedBy:(id)arg3 itemsSortedBy:(id)arg4 ;
-(void)setGroupPropertyForItemArray:(id)arg1 groupPropertyForEditability:(id)arg2 groupsSortedBy:(id)arg3 itemsSortedBy:(id)arg4 ;
-(void)setShowsSummaryRow:(char)arg1 selectable:(char)arg2 ;
-(void)updateEmptyGroup:(id)arg1 ;
-(void)updateItemFilter:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfVisibleGroups;
-(id)objectAtRow:(long long)arg1 ;
-(id)itemsInGroup:(id)arg1 ;
-(long long)rowOfObject:(id)arg1 ;
-(id)rowsOfObjects:(id)arg1 ;
-(id)selectedItemsInTableView:(id)arg1 ;
-(void)setShowsHeaderForSingularGroup:(char)arg1 ;
-(id)groupFilter;
-(void)setGroupFilter:(id)arg1 ;
-(NSSet *)groups;
-(void)setGroups:(NSSet *)arg1 ;
-(void)updateGroups:(id)arg1 ;
-(id)init;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(NSArray *)items;
-(unsigned long long)numberOfRows;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)print:(id)arg1 ;
-(id)itemAtRow:(long long)arg1 ;
@end
