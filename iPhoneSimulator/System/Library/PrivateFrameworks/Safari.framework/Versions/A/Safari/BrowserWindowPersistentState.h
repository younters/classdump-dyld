/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSString;

@interface BrowserWindowPersistentState : NSObject {

	Vector<BrowserTabPersistentState *, 0, WTF::CrashOnOverflow>* _tabStates;
	CGRect _windowContentRect;
	long long _selectedTabIndex;
	NSString* _customUnifiedFieldText;
	char _locationBarHidden;
	char _favoritesBarHidden;
	char _fullScreenFavoritesBarHidden;
	char _tabBarHidden;
	char _statusBarHidden;
	char _isMinimized;
	char _prefersSidebarVisible;

}
-(char)containsAnyURLs;
-(void)restoreBrowserWindow;
-(id)initWithBrowserWindowController:(BrowserWindowController*)arg1 ;
-(void)restoreWindowContents:(BrowserWindowController*)arg1 ;
-(void)_initWithDictionaryRepresentationCommon:(id)arg1 ;
-(id)_initWithV1DictionaryRepresentation:(id)arg1 ;
-(id)_initWithV2DictionaryRepresentation:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
