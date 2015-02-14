/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTableView.h>

@protocol TableViewPlusScrollDelegate;
@interface TableViewPlus : NSTableView {

	char _startEditTimerOnMouseUp;
	long long _clickedRow;
	long long _clickedColumn;
	char _preservesSelectionWhenDisplayingContextMenu;
	id<TableViewPlusScrollDelegate> _scrollDelegate;

}

@property (assign,nonatomic) char preservesSelectionWhenDisplayingContextMenu;                   //@synthesize preservesSelectionWhenDisplayingContextMenu=_preservesSelectionWhenDisplayingContextMenu - In the implementation block
@property (assign,nonatomic,__weak) id<TableViewPlusScrollDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (assign,nonatomic) id<TableViewPlusDelegate> delegate; 
@property (assign,nonatomic) id<TableViewPlusDataSource> dataSource; 
-(char)shouldEditOnDoubleClick:(id)arg1 inRow:(long long)arg2 tableColumn:(id)arg3 ;
-(char)shouldEditOnSingleClick:(id)arg1 inRow:(long long)arg2 tableColumn:(id)arg3 ;
-(void)setPreservesSelectionWhenDisplayingContextMenu:(char)arg1 ;
-(void)_editClickedCell:(id)arg1 ;
-(void)_cancelEditOnMouseUp;
-(id<TableViewPlusScrollDelegate>)scrollDelegate;
-(char)preservesSelectionWhenDisplayingContextMenu;
-(void)setScrollDelegate:(id<TableViewPlusScrollDelegate>)arg1 ;
-(id)accessibilityActionNames;
-(void)sizeToFit;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(id)menuForEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
-(void)copy:(id)arg1 ;
-(CGRect)adjustScroll:(CGRect)arg1 ;
-(char)_userCanEditTableColumn:(id)arg1 row:(long long)arg2 ;
@end
