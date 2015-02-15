/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BrowserParentalControls : NSObject {

	char _parentalControlsEnabled;
	char _adultContentFilterEnabled;

}
+(id)sharedParentalControls;
-(char)parentalControlsEnabled;
-(char)adultContentFilterEnabled;
-(void)notifyFamilyControlsParentChangedBookmarks:(id)arg1 ;
-(char)shouldFillWithBuiltInBookmarks;
-(void)_updateParentalControlsEnabled;
-(void)_updateAdultContentFilterEnabled;
-(char)_parentalControlsEnabled;
-(void*)_familyControlsFramework;
-(char)_adultContentFilterEnabled;
-(char)_isManagedUser;
-(char)_userHasWebSiteRestrictions;
-(void)_mcxPreferencesChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
