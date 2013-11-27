/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class NSString;

@interface ACMDialog : UIViewController {

	int _savedStatusBarStyle;

}

@property (readonly) int statusBarStyle; 
@property (assign) int savedStatusBarStyle;                       //@synthesize savedStatusBarStyle=_savedStatusBarStyle - In the implementation block
@property (readonly) NSString * backgroundImageName; 
+(id)dialog;
+(void)setDialogOnFlight:(BOOL)arg1 ;
+(BOOL)dialogOnFlight;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)dealloc;
-(id)init;
-(int)statusBarStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)backgroundImageName;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)showWithOptions:(id)arg1 ;
-(void)hideWithOptions:(id)arg1 ;
-(void)setSavedStatusBarStyle:(int)arg1 ;
-(int)savedStatusBarStyle;
-(void)disableControls:(BOOL)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
@end
