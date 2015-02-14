/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SOServerPageController.h>

@class NSTextField, NSPopUpButton, NSMenu;

@interface SOViewAccountViewController : SOServerPageController {

	NSTextField* _locationLabel;
	NSPopUpButton* _locationPopup;
	NSMenu* _regionsMenu;

}

@property (assign,nonatomic) id<SOViewAccountViewControllerDelegate> delegate; 
+(id)pageToLoad;
-(void)_regionListFinishedLoading:(id)arg1 ;
-(void)rightButtonClicked:(id)arg1 ;
-(id)nameForButtonTitle:(id)arg1 ;
-(void)saveLocationChange;
-(void)_updateRegionMenu;
-(id)init;
-(void)dealloc;
-(void)loadView;
@end
