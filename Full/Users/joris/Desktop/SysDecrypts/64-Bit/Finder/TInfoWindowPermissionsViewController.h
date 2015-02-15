/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/TInfoWindowViewController.h>

@class TPrivsSummaryTextController, TSpacerView, TPrivsTableViewMainController, TPrivsPlusButtonController, TPrivsMinusButtonController, TPrivsActionPopUpButtonController, TPrivsAuthButtonController, TPrivsIgnoreOwnershipCheckboxController;

@interface TInfoWindowPermissionsViewController : TInfoWindowViewController {

	TPrivsSummaryTextController* _youCanSummaryTextController;
	TSpacerView* _tableViewSpacerView;
	TPrivsTableViewMainController* _tableViewController;
	TSpacerView* _buttonsSpacerView;
	TPrivsPlusButtonController* _plusButtonController;
	TPrivsMinusButtonController* _minusButtonController;
	TPrivsActionPopUpButtonController* _actionPopUpButtonController;
	TPrivsAuthButtonController* _authButtonController;
	TSpacerView* _ignoreOwnershipSpacerView;
	TPrivsIgnoreOwnershipCheckboxController* _ignoreOwnershipCheckboxController;

}
+(id)controller;
-(void)targetNodesChanging;
-(void)loadValueControllers;
-(id)expandedPrefKey;
-(unsigned)scriptingID;
-(void)dealloc;
@end
