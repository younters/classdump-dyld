/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Image Capture/Automatic Tasks/Build Web Page.app/Contents/MacOS/Build Web Page
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSTimer;

@interface AppDel : NSObject {

	NSMutableArray* recursiveFileArray;
	NSString* mainfolderpath;
	NSString* mainpagetext;
	int tdcount;
	int curritemcount;
	int maxitemcount;
	id progressInfoTextField;
	id progressItemTextField;
	id progressBar;
	id progressWindow;
	id prefsWindow;
	id bgcolorwell;
	id textcolorwell;
	id smallsizebox;
	id largesizebox;
	id shownamesbox;
	NSTimer* nextFileTimer;
	char filesHaveBeenOpened;
	char shouldQuitAfterProcessing;

}
-(void)setmainpagetext:(id)arg1 ;
-(void)setmainfolderpath:(id)arg1 ;
-(void)setrecursivefilearray:(id)arg1 ;
-(void)logDefaults;
-(void)processFiles:(id)arg1 ;
-(id)returnPathArrayFrom:(id)arg1 ;
-(void)createCleanFoldersAtPath:(id)arg1 ;
-(void)processNextFile;
-(void)wrapUp;
-(void)quitEarlyAndCleanUp:(id)arg1 ;
-(void)openAction:(id)arg1 ;
-(void)quitFromMenu:(id)arg1 ;
-(void)openPrefsWindow:(id)arg1 ;
-(void)bgcolorChanged:(id)arg1 ;
-(void)textcolorChanged:(id)arg1 ;
-(void)smallsizeChanged:(id)arg1 ;
-(void)largesizeChanged:(id)arg1 ;
-(void)shownamesChanged:(id)arg1 ;
-(void)invisochanged:(id)arg1 ;
-(void)registerDefaults;
-(void)applicationWillFinishLaunching:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)log:(id)arg1 ;
-(id)init;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)awakeFromNib;
-(char)windowShouldClose:(id)arg1 ;
@end
