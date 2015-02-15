/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <AppKit/NSViewController.h>
#import <Maps/CNContactPickerSectionDelegate.h>

@class NSTableView, NSArrayController, NSButton, NVPlacesManager, NSString;

@interface NVBookmarksViewController : NSViewController <CNContactPickerSectionDelegate> {

	char _altMode;
	unsigned long long _type;
	NSTableView* _tableView;
	NSArrayController* _arrayController;
	NSButton* _bottomActionButton;

}

@property (assign) char altMode; 
@property (retain) NSTableView * tableView;                          //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSArrayController * arrayController;              //@synthesize arrayController=_arrayController - In the implementation block
@property (retain) NSButton * bottomActionButton;                    //@synthesize bottomActionButton=_bottomActionButton - In the implementation block
@property (readonly) NVPlacesManager * manager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 identifierForRow:(long long)arg2 ;
-(void)showPlaceOrTrip:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 type:(unsigned long long)arg3 ;
-(void)deleteElementAction:(id)arg1 ;
-(id)nibNameForType:(unsigned long long)arg1 ;
-(void)bookmarkClicked:(id)arg1 ;
-(void)updateBottomActionButtonTitle;
-(NSArrayController *)arrayController;
-(void)updateTableState;
-(void)cleanUpState;
-(NSButton *)bottomActionButton;
-(void)updateDeleteButtonsState:(char)arg1 ;
-(void)clearEditMode:(id)arg1 ;
-(void)bottomActionButtonClicked:(id)arg1 ;
-(void)setArrayController:(NSArrayController *)arg1 ;
-(void)setBottomActionButton:(NSButton *)arg1 ;
-(unsigned long long)contactPickerSection:(id)arg1 validateDrop:(id)arg2 ;
-(char)contactPickerSection:(id)arg1 acceptDrop:(id)arg2 ;
-(char)altMode;
-(void)setAltMode:(char)arg1 ;
-(void)setFilter:(id)arg1 ;
-(void)dealloc;
-(NSTableView *)tableView;
-(void)loadView;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 operation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3 ;
-(void)viewDidLoad;
-(id)nibName;
-(id)nibBundle;
-(void)viewWillDisappear;
-(NVPlacesManager *)manager;
-(void)setTableView:(NSTableView *)arg1 ;
@end
