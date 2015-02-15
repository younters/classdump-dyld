/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ECSBDelegate <NSObject>
@optional
-(void)endDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
-(void)cancelDragOfItem:(id)arg1 andLayer:(id)arg2;
-(id)makeGroupUsingItem:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3 onPage:(id)arg4;
-(id)pagesOfGroup:(id)arg1;
-(void)performChanges:(/*^block*/id)arg1;
-(void)dragOfItemCompleted;
-(void)searchTextCleared;
-(void)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 ofGroup:(id)arg3 onPage:(id)arg4;
-(id)rootLayerForGroups;
-(char)canMakeGroupUsingItem:(id)arg1 withItem:(id)arg2;
-(id)nameForGroupUsingItem:(id)arg1 withItem:(id)arg2;
-(void)groupShownForItem:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)groupHiddenForItem:(id)arg1 atIndex:(unsigned long long)arg2;
-(id)rootLayerForDragging;
-(void)beginDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
-(void)didBeginDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
-(char)didDragItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
-(char)willEndDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
-(void)didEndDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
-(id)rootLayerForAlertPanel;
-(char)shouldPresentAlertPanelForAction:(id)arg1 ofItem:(id)arg2 withEvent:(id)arg3;
-(id)alertPanelInfoForAction:(id)arg1 ofItem:(id)arg2;
-(void)willChangeToPage:(id)arg1;
-(void)didChangeToPage:(id)arg1;
-(void)didBeginEditing;
-(void)didEndEditing;
-(void)didBeginDeleting;
-(void)didEndDeleting;
-(void)selectionWillChangeFromItem:(id)arg1 toItem:(id)arg2;
-(void)selectionDidChangeFromItem:(id)arg1 toItem:(id)arg2;
-(void)zoomFactorChanged:(double)arg1;
-(void)removeItem:(id)arg1 ofGroup:(id)arg2 onPage:(id)arg3;
-(void)willChangeToSearchPage;
-(void)didChangeToSearchPage;
-(void)searchTextChanged:(id)arg1;

@required
-(id)addPageToGroup:(id)arg1;
-(void)removePage:(id)arg1 fromGroup:(id)arg2;
-(void)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 onPage:(id)arg3;
-(void)removeItem:(id)arg1 onPage:(id)arg2;
-(id)addPage;
-(void)removePage:(id)arg1;

@end
