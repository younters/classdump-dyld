/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:39:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Grapher.app/Contents/MacOS/Grapher
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Grapher/CPModalDialog.h>

@class GView, CPView, NSTableView, NSArray;

@interface CPLayoutDialog : CPModalDialog {

	GView* mLayoutDataView;
	CPView* mLayoutView;
	NSTableView* mLayoutTableView;
	NSArray* mLayoutDataSource;

}
-(void)showWithViewController:(id)arg1 ;
-(Class)viewClass;
-(void)layoutViewFrameDidChange:(id)arg1 ;
-(void)applyLayout:(id)arg1 ;
-(void)showLayout:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)awakeFromNib;
-(id)dataSource;
@end
