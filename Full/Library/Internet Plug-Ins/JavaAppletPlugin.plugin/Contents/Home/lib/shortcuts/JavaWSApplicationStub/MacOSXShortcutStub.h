/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Internet Plug-Ins/JavaAppletPlugin.plugin/Contents/Home/lib/shortcuts/JavaWSApplicationStub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <JavaWSApplicationStub/NSApplicationDelegate.h>

@class NSArray;

@interface MacOSXShortcutStub : NSObject <NSApplicationDelegate> {

	NSArray* openFiles;
	NSArray* printFiles;

}

@property (nonatomic,retain) NSArray * printFiles; 
@property (nonatomic,retain) NSArray * openFiles; 
-(NSArray *)openFiles;
-(void)setOpenFiles:(NSArray *)arg1 ;
-(void)setPrintFiles:(NSArray *)arg1 ;
-(void)launchWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
-(NSArray *)printFiles;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(unsigned long long)application:(id)arg1 printFiles:(id)arg2 withSettings:(id)arg3 showPrintPanels:(char)arg4 ;
-(void)launch;
@end
