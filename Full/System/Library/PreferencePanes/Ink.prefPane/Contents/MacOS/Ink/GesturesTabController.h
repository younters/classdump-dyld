/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Ink.prefPane/Contents/MacOS/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Ink/NSComboBoxDataSource.h>

@class InkPref, NSTableColumn, NSMutableArray, NSString;

@interface GesturesTabController : NSObject <NSComboBoxDataSource> {

	id gesturesTableView;
	id gesturePictBox;
	id gestureExplainTextField;
	InkPref* inkObj;
	NSTableColumn* gCheckboxColumn;
	NSMutableArray* gGestureList;
	int gCurrentListSelection;
	unsigned char inited;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)okToSwitch:(id)arg1 ;
-(void)setGestureText:(int)arg1 ;
-(void)buttonAction:(id)arg1 ;
-(void)gestureTableViewAction:(id)arg1 ;
-(void)setupGesturesTab;
-(void)gesturePictBoxAction:(id)arg1 ;
-(void)redrawGesturePictBox;
-(void)finalize;
-(void)dealloc;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(int)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3 ;
-(void)updateControls;
@end
