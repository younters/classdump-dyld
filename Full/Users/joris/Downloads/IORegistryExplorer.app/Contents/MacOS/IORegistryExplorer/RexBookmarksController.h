/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Downloads/IORegistryExplorer.app/Contents/MacOS/IORegistryExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMenu, NSMenuItem, NSPanel, NSMutableArray, NSButton, NSTableView;

@interface RexBookmarksController : NSObject {

	NSMenu* bookmarksMenu;
	NSMenuItem* toggleBookmarksMenuItem;
	NSPanel* bookmarksPanel;
	NSMutableArray* bookmarks;
	id lastEditedBookmark;
	id defaultBookmark;
	NSButton* addBookmarkButton;
	NSButton* deleteBookmarkButton;
	NSButton* setDefaultBookmarkButton;
	NSButton* goBookmarkButton;
	NSTableView* bookmarksTable;

}
+(id)sharedInstance;
-(void)rebuildBookmarksMenus;
-(void)checkForDocuments:(id)arg1 ;
-(id)defaultBookmarkPath;
-(void)addBookmarkNamed:(id)arg1 forRegistryPath:(id)arg2 setAsDefault:(char)arg3 ;
-(void)toggleBookmarksPanel:(id)arg1 ;
-(void)sortBookmarks;
-(void)setDefaultBookmark:(id)arg1 updateMenu:(char)arg2 ;
-(void)saveBookmarks;
-(void)readBookmarksIfNeeded;
-(void)defaultBookmarkPopUpChanged:(id)arg1 ;
-(void)reloadBookmarksAfterEdit:(id)arg1 ;
-(void)deleteBookmark:(id)arg1 ;
-(id)defaultsToRegister;
-(void)newBookmarkFromBookmarksPanel:(id)arg1 ;
-(void)goToSelectedBookmark:(id)arg1 ;
-(void)defaultBookmarkButtonClicked:(id)arg1 ;
-(void)clearDefaultBookmarkButtonClicked:(id)arg1 ;
-(id)bookmarks;
-(id)init;
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
@end
