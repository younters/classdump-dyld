/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/Helpers/AOSPushRelay.app/Contents/MacOS/AOSPushRelay
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSPushRelay/NSApplicationDelegate.h>

@class NSMenuItem, AMBDUIView, NSWindow, NSTextField, NSString;

@interface AppDelegate : NSObject <NSApplicationDelegate> {

	NSMenuItem* frameworkMenuItem;
	NSMenuItem* directMenuItem;
	NSMenuItem* multiplicativeMenuItem;
	NSMenuItem* subtractiveMenuItem;
	NSMenuItem* gammaMenuItem;
	NSMenuItem* disableMenuItem;
	AMBDUIView* view;
	NSWindow* window;
	NSTextField* levelViewTextField;
	NSTextField* colorViewTextField;
	NSMenuItem* _resetToDefaultMenuItem;

}

@property (assign) NSWindow * window; 
@property (assign) AMBDUIView * view; 
@property (assign) NSTextField * levelViewTextField; 
@property (assign) NSTextField * colorViewTextField; 
@property (assign) NSMenuItem * resetToDefaultMenuItem;              //@synthesize resetToDefaultMenuItem=_resetToDefaultMenuItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetToDefaultAction:(id)arg1 ;
-(NSTextField *)levelViewTextField;
-(void)setLevelViewTextField:(NSTextField *)arg1 ;
-(NSTextField *)colorViewTextField;
-(void)setColorViewTextField:(NSTextField *)arg1 ;
-(NSMenuItem *)resetToDefaultMenuItem;
-(void)setResetToDefaultMenuItem:(NSMenuItem *)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(NSWindow *)window;
-(AMBDUIView *)view;
-(char)validateMenuItem:(id)arg1 ;
-(void)setView:(AMBDUIView *)arg1 ;
-(void)setWindow:(NSWindow *)arg1 ;
-(char)windowShouldClose:(id)arg1 ;
@end
