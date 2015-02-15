/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TScriptableWindowController.h>
#import <Finder/NSMenuDelegate.h>

@class TButton, TPopUpButton, TTextField, NSProgressIndicator, TConnectToFavoriteTextField, TTableView, NSWindow, NSString;

@interface TConnectToWindowController : TScriptableWindowController <NSMenuDelegate> {

	TButton* _addBookmarkButton;
	TButton* _removeBookmarkButton;
	TPopUpButton* _recentsMenuButton;
	TTextField* _urlField;
	TButton* _helpButton;
	TButton* _connectToButton;
	TButton* _browseButton;
	NSProgressIndicator* _progressIndicator;
	TConnectToFavoriteTextField* _promptLabel;
	TTextField* _favoritesLabel;
	TTableView* _favoritesTable;
	NSWindow* _connectToWindow;
	TNSRef<TFavoriteServersTableViewController *> _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateConnectTo:(id)arg1 ;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)show;
-(void)addBookmarkTo:(id)arg1 ;
-(void)favoriteSelected:(const TSharedFileListItem*)arg1 ;
-(void)urlTextAccepted:(id)arg1 ;
-(void)loadSavedURLData;
-(void)urlTextChanged;
-(void)refreshRecentServers;
-(void)loadSavedFrameData;
-(void)saveData;
-(void)bookmarkSelected:(CFURLRef)arg1 ;
-(id)_stringForScheme:(id)arg1 ;
-(id)_stringForAcceptableSchemes;
-(void)selectRecentServer:(id)arg1 ;
-(void)clearRecentServers:(id)arg1 ;
-(void)removeSelectedBookmarks:(id)arg1 ;
-(void)browseServers:(id)arg1 ;
-(void)addBookmark:(id)arg1 ;
-(void)helpButtonPressed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cancel:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)windowDidLoad;
@end
