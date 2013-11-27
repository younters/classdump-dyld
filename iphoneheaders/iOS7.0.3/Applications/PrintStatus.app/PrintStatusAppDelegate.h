/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/PrintStatus.app/PrintStatus
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PrintStatus/PrintStatus-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PrintStatusViewController;

@interface PrintStatusAppDelegate : UIResponder <UIApplicationDelegate> {

	UIWindow* _window;
	PrintStatusViewController* _viewController;

}

@property (nonatomic,retain) UIWindow * window;                                       //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) PrintStatusViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(id)window;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
@end
