/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:03 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/MacOS/HWMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <HWMonitor/HWMonitor-Structs.h>
#import <AppKit/NSViewController.h>
#import <HWMonitor/NSTableViewDataSource.h>
#import <HWMonitor/NSTableViewDelegate.h>

@protocol SensorsViewControllerDelegate, NSPopoverDelegate;
@class NSDate, NSArray, NSScrollView, NSTableView, HWMEngine;

@interface SensorsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate> {

	NSDate* _lastReloaded;
	NSArray* _sensorsAndGroupsCollectionSnapshot;
	double _contentHeight;
	id<SensorsViewControllerDelegate> _delegate;
	id<NSPopoverDelegate> _popoverDelegate;
	unsigned long long _currentItemDragOperation;
	NSScrollView* _scrollView;
	NSTableView* _tableView;

}

@property (assign) id<SensorsViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) id<NSPopoverDelegate> popoverDelegate;                       //@synthesize popoverDelegate=_popoverDelegate - In the implementation block
@property (readonly) NSArray * sensorsAndGroupsCollectionSnapshot;              //@synthesize sensorsAndGroupsCollectionSnapshot=_sensorsAndGroupsCollectionSnapshot - In the implementation block
@property (assign) unsigned long long currentItemDragOperation;                 //@synthesize currentItemDragOperation=_currentItemDragOperation - In the implementation block
@property (readonly) char hasDraggedFavoriteItem; 
@property (assign) NSScrollView * scrollView;                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (assign) NSTableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (readonly) double contentHeight;                                      //@synthesize contentHeight=_contentHeight - In the implementation block
@property (readonly) HWMEngine * monitorEngine; 
-(HWMEngine *)monitorEngine;
-(NSArray *)sensorsAndGroupsCollectionSnapshot;
-(char)hasDraggedFavoriteItem;
-(unsigned long long)currentItemDragOperation;
-(void)setCurrentItemDragOperation:(unsigned long long)arg1 ;
-(id<NSPopoverDelegate>)popoverDelegate;
-(void)setPopoverDelegate:(id<NSPopoverDelegate>)arg1 ;
-(double)contentHeight;
-(id)init;
-(void)setDelegate:(id<SensorsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSTableView *)tableView;
-(id<SensorsViewControllerDelegate>)delegate;
-(void)reloadData;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 operation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(NSScrollView *)scrollView;
-(void)setTableView:(NSTableView *)arg1 ;
-(void)setScrollView:(NSScrollView *)arg1 ;
@end
