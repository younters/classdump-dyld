/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSTabView, NSSegmentedControl, NSSearchField, IKImageBrowserView, NSSlider, AMImageView, AMResultsTableView, NSTextField, NSTextView, NSArrayController, AMAction, NSMutableArray;

@interface AMResultsViewController : NSViewController {

	NSTabView* _tabView;
	NSSegmentedControl* _segmentedControl;
	NSSearchField* _searchField;
	IKImageBrowserView* _imageBrowserView;
	NSSlider* _imageZoomSlider;
	AMImageView* _largerMan;
	AMImageView* _smallerMan;
	AMResultsTableView* _resultsTableView;
	NSTextField* _resultsCountField;
	NSTextView* _oldViewResultsView;
	NSArrayController* _resultsController;
	AMAction* _action;
	NSMutableArray* _results;
	long long _selectedSegment;
	double _zoomValue;
	char _showingResultsView;

}
-(char)isShowingResultsView;
-(void)setShowingResultsView:(char)arg1 ;
-(void)setResultsViewControlsEnabled:(char)arg1 ;
-(id)imageZoomSlider;
-(void)createResults;
-(void)updateResultsCount;
-(char)_createListView;
-(char)_createIconView;
-(char)_createTextView;
-(id)stringValueForOutputItemsAtIndexes:(id)arg1 ;
-(void)clearResults;
-(id)_lastActionOutputTypes;
-(void)search:(id)arg1 ;
-(id)imageBrowserView;
-(void)setZoomValue:(double)arg1 ;
-(double)zoomValue;
-(id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsInImageBrowser:(id)arg1 ;
-(unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAction:(id)arg1 ;
-(id)action;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(void)awakeFromNib;
-(id)results;
-(void)setSelectedSegment:(long long)arg1 ;
-(long long)selectedSegment;
-(id)tabView;
-(void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2 ;
@end
