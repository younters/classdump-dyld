/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TViewController.h>

@class NSString, FI_TAirDropDiscoveryController;

@interface FI_TAirDropLegacyModeButtonController : FI_TViewController {

	TNSRef<FI_TAirDropDiscoveryController *> _discoveryController;
	TNSRef<FI_TAirDropLegacyModePopoverViewController *> _popoverViewContoller;
	TNotificationCenterObserver* _popoverWillCloseObserver;

}

@property (nonatomic,retain,readonly) NSString * buttonTitle; 
@property (readonly) FI_TAirDropDiscoveryController * discoveryController; 
+(id)keyPathsForValuesAffectingButtonTitle;
-(void)initCommon;
-(FI_TAirDropDiscoveryController *)discoveryController;
-(NSString *)buttonTitle;
-(void)popoverWillClose;
-(void)buttonPressed:(id)arg1 ;
@end
