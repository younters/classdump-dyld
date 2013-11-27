/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Passbook.app/Passbook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Passbook/Passbook-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PKPassLibrary, PKPassGroupsViewController;

@interface PBKAppDelegate : UIResponder <UIApplicationDelegate> {

	PKPassLibrary* _passLibrary;
	PKPassGroupsViewController* _cardsViewController;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                                               //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) PKPassGroupsViewController * cardsViewController;              //@synthesize cardsViewController=_cardsViewController - In the implementation block
-(void)_initializeViewController;
-(id)applicationDocumentsDirectory;
-(id)cardsViewController;
-(void)dealloc;
-(id)window;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(id)arg1 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/ id)arg2 ;
@end
