/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Spotlight.prefPane/Contents/MacOS/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Spotlight/Spotlight-Structs.h>
@class NSView, PrivacyItemTable, AddRemoveView, NSMutableArray, NSArray;

@interface SpotlightPrefPrivacyController : NSObject {

	NSView* _privacyView;
	PrivacyItemTable* _privacyTable;
	AddRemoveView* _addRemoveView;
	NSMutableArray* _privacyItems;
	NSArray* _excludedSpotlightPaths;
	NSArray* _pathsThatCouldBreakApps;
	id _parent;

}
-(void)_tableDoubleClick:(id)arg1 ;
-(void)_reloadExclusions:(id)arg1 ;
-(void)_setPathsThatCouldBreakApps;
-(char)_checkPathsThatCouldBreakApps:(id)arg1 ;
-(void)openPanelFinished:(id)arg1 returnCode:(int)arg2 ;
-(char)_itemIsDuplicate:(id)arg1 ;
-(id)privacyView;
-(char)_handlePrivacyError:(int)arg1 forPath:(id)arg2 ;
-(void)_getPrivateItems;
-(void)undoAddDelete:(id)arg1 ;
-(char)_pathCouldBreakAppsAndUserCanceled:(id)arg1 ;
-(void)_addKeyEquivalentsToDeleteButton;
-(void)willResignActive;
-(void)deleteItem:(id)arg1 ;
-(void)willSelect;
-(id)init;
-(id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(CGRect*)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(CGPoint)arg6 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)awakeFromNib;
-(void)addItem:(id)arg1 ;
-(void)setParent:(id)arg1 ;
@end
