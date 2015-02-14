/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Calendar/CalUICalendarListCellViewDelegate.h>
#import <Calendar/CalUICalendarListCellViewDataSource.h>
#import <Calendar/CalUICalendarListViewDelegate.h>
#import <Calendar/CalUICalendarInfoPopoverControllerDelegate.h>
#import <Calendar/CalUIColorPickerDelegate.h>

@protocol CalUICalendarListViewNode;
@class CALMainController, CalUICalendarListDataSourceEK, CalUICalendarInfoPopoverController, NSString, CalNewNodeInspectorController, EKCalendarPreferences, CalUICalendarListView;

@interface CalUICalendarListViewController : NSViewController <CalUICalendarListCellViewDelegate, CalUICalendarListCellViewDataSource, CalUICalendarListViewDelegate, CalUICalendarInfoPopoverControllerDelegate, CalUIColorPickerDelegate> {

	char _inEditMode;
	char _isReloading;
	char _reloadNeededAfterEndEditing;
	CALMainController* _mainController;
	CalUICalendarListDataSourceEK* _dataSource;
	CalUICalendarInfoPopoverController* _popoverController;
	long long _contextMenuRow;
	id<CalUICalendarListViewNode> _currentlyEditingNode;
	id<CalUICalendarListViewNode> _currentlyInspectedNode;
	NSString* _currentlySelectedNodeUid;
	CalNewNodeInspectorController* _nodeInspectorController;
	EKCalendarPreferences* _calendarPreferences;

}

@property (__weak,readonly) CalUICalendarListView * listView; 
@property (__weak) CALMainController * mainController;                                   //@synthesize mainController=_mainController - In the implementation block
@property (retain) CalUICalendarListDataSourceEK * dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) char inEditMode;                                                      //@synthesize inEditMode=_inEditMode - In the implementation block
@property (assign) char isReloading;                                                     //@synthesize isReloading=_isReloading - In the implementation block
@property (assign) char reloadNeededAfterEndEditing;                                     //@synthesize reloadNeededAfterEndEditing=_reloadNeededAfterEndEditing - In the implementation block
@property (retain) CalUICalendarInfoPopoverController * popoverController;               //@synthesize popoverController=_popoverController - In the implementation block
@property (assign) long long contextMenuRow;                                             //@synthesize contextMenuRow=_contextMenuRow - In the implementation block
@property (retain) id<CalUICalendarListViewNode> currentlyEditingNode;                   //@synthesize currentlyEditingNode=_currentlyEditingNode - In the implementation block
@property (retain) id<CalUICalendarListViewNode> currentlyInspectedNode;                 //@synthesize currentlyInspectedNode=_currentlyInspectedNode - In the implementation block
@property (retain) NSString * currentlySelectedNodeUid;                                  //@synthesize currentlySelectedNodeUid=_currentlySelectedNodeUid - In the implementation block
@property (retain) CalNewNodeInspectorController * nodeInspectorController;              //@synthesize nodeInspectorController=_nodeInspectorController - In the implementation block
@property (readonly) EKCalendarPreferences * calendarPreferences;                        //@synthesize calendarPreferences=_calendarPreferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CALMainController *)mainController;
-(void)setMainController:(CALMainController *)arg1 ;
-(void)showSharingPopover:(id)arg1 ;
-(void)selectNode:(id)arg1 checked:(long long)arg2 ;
-(id)nodeForUid:(id)arg1 ;
-(id)checkedCalendarUIDs;
-(long long)stateForCalendarWithUID:(id)arg1 ;
-(void)newCalendarInSelectedGroup:(id)arg1 ;
-(void)newLocalCalendar:(id)arg1 ;
-(void)addNewCalendarToSourceWithIdentifier:(id)arg1 ;
-(void)newLocalGroup:(id)arg1 ;
-(void)editNode:(id)arg1 ;
-(id)writeableSourceIDs;
-(char)allowsLocalCalendars;
-(void)getInfo:(id)arg1 ;
-(char)migrateCheckedCalendarState;
-(char)migrateExpandedToplevelNodeState;
-(char)migrateSourceDisplayOrder;
-(id)allCalendarListNodesInView;
-(id)initWithCalendarListDataSource:(id)arg1 ;
-(void)selectNode:(id)arg1 checked:(long long)arg2 shouldChangeChecked:(char)arg3 ;
-(void)selectFirstNonGroupNode;
-(void)popoverControllerDidClose:(id)arg1 ;
-(void)calendarListModelChanged:(id)arg1 ;
-(CalUICalendarInfoPopoverController *)popoverController;
-(void)reloadDataWithForce:(char)arg1 ;
-(void)setIsReloading:(char)arg1 ;
-(id<CalUICalendarListViewNode>)currentlyEditingNode;
-(char)inEditMode;
-(void)setInEditMode:(char)arg1 ;
-(void)setReloadNeededAfterEndEditing:(char)arg1 ;
-(NSString *)currentlySelectedNodeUid;
-(id)selectedNodeUid;
-(char)isItemGroupRow:(id)arg1 ;
-(void)toggleNode:(id)arg1 toChecked:(char)arg2 ;
-(void)_sourceSelectionChanged;
-(void)setCurrentlySelectedNodeUid:(NSString *)arg1 ;
-(void)_postCheckboxChangeNotification;
-(void)validateSourceWithIdentifier:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(void)addNewGroup;
-(char)isKeyDefined:(id)arg1 ;
-(void)setCurrentlyEditingNode:(id<CalUICalendarListViewNode>)arg1 ;
-(char)reloadNeededAfterEndEditing;
-(void)setCurrentlyInspectedNode:(id<CalUICalendarListViewNode>)arg1 ;
-(id<CalUICalendarListViewNode>)currentlyInspectedNode;
-(void)showSharingSettings:(id)arg1 ;
-(id)backgroundMenu;
-(id)menuForNode:(id)arg1 ;
-(void)_addIfValidToSection:(id)arg1 item:(id)arg2 ;
-(void)customColorMenuSelected:(id)arg1 ;
-(void)setNodeInspectorController:(CalNewNodeInspectorController *)arg1 ;
-(CalNewNodeInspectorController *)nodeInspectorController;
-(void)getInfoForNode:(id)arg1 ;
-(void)calendarListCellViewDidBeginEditing:(id)arg1 ;
-(void)calendarListCellViewDidEndEditing:(id)arg1 ;
-(void)displayErrorFromCalendarListCellView:(id)arg1 ;
-(void)showSharingSettingsFromCalendarListCellView:(id)arg1 ;
-(id)currentlyInspectedSharingNode;
-(void)calendarListCellView:(id)arg1 didChangeCheckboxState:(long long)arg2 withModifierFlags:(unsigned long long)arg3 ;
-(void)calendarListCellView:(id)arg1 didSelectCalendarColor:(id)arg2 ;
-(void)calendarListCellView:(id)arg1 didChangeName:(id)arg2 ;
-(id)contextMenuForRow:(long long)arg1 ;
-(id)shareCalendarString;
-(void)reloadNode:(id)arg1 reloadParent:(char)arg2 ;
-(long long)contextMenuRow;
-(void)setContextMenuRow:(long long)arg1 ;
-(void)setPopoverController:(CalUICalendarInfoPopoverController *)arg1 ;
-(CalUICalendarListView *)listView;
-(id)selectedNode;
-(void)selectNode:(id)arg1 ;
-(EKCalendarPreferences *)calendarPreferences;
-(void)symbolicColorPicked:(id)arg1 ;
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)reloadData;
-(void)loadView;
-(void)setDataSource:(CalUICalendarListDataSourceEK *)arg1 ;
-(void)paste:(id)arg1 ;
-(void)changeColor:(id)arg1 ;
-(CalUICalendarListDataSourceEK *)dataSource;
-(void)toggle:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(char)isExpandedNode:(id)arg1 ;
-(char)isReloading;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)outlineViewItemWillExpand:(id)arg1 ;
-(void)outlineViewItemWillCollapse:(id)arg1 ;
-(void)setup;
@end
