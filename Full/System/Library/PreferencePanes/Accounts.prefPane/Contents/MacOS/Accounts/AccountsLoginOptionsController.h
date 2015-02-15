/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Accounts.prefPane/Contents/MacOS/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <Accounts/AccountsTabProtocol.h>

@class NSTabViewItem, NSButton, NSPopUpButton, NSMatrix, NSView, ODCSummaryView, NSString, ADMLoginPrefs;

@interface AccountsLoginOptionsController : NSObject <AccountsTabProtocol> {

	NSTabViewItem* mTabViewItem;
	NSButton* mDisableRestartShutDown;
	NSButton* mHideHints;
	NSPopUpButton* mAutologinPopUp;
	NSPopUpButton* mFUSPopUp;
	NSMatrix* mDisplayLoginWindowAs;
	NSButton* mEnableMultiSession;
	NSButton* mEnableVOAtLoginWindow;
	NSButton* mEnableIMAtLoginWindow;
	NSButton* mAllowNetworkUsersToLogin;
	NSView* mAllowNetworkUsersToLoginView;
	ODCSummaryView* mODCView;
	NSString* mSavedAutoLoginUser;
	char mAdminEditMode;
	SCDynamicStoreRef mDynamicStoreRef;
	ADMLoginPrefs* _loginPrefs;

}

@property (retain) ADMLoginPrefs * loginPrefs;                      //@synthesize loginPrefs=_loginPrefs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ADMLoginPrefs *)loginPrefs;
-(void)setLoginPrefs:(ADMLoginPrefs *)arg1 ;
-(void)hideHints:(id)arg1 ;
-(void)wasRemovedFromTabView;
-(void)networkUsersOptions:(id)arg1 ;
-(void)enableMultiSession:(id)arg1 ;
-(void)wasAddedToTabView;
-(void)refreshUI:(id)arg1 ;
-(void)setAdminMode:(char)arg1 ;
-(void)_networkUsersOptionsSheetsDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)changeAutologin:(id)arg1 ;
-(void)displayLoginwindowAs:(id)arg1 ;
-(void)enableVOAtLoginWindow:(id)arg1 ;
-(void)enableIMAtLoginWindow:(id)arg1 ;
-(void)allowNetworkUsersToLogin:(id)arg1 ;
-(void)_updateAutologin;
-(void)_setControlsEnabled:(char)arg1 inView:(id)arg2 ;
-(void)_applyMCXSettings;
-(void)_updateMultiSessionUI:(id)arg1 ;
-(void)_autologinSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)disableRestartShutDown:(id)arg1 ;
-(void)fusStyle:(id)arg1 ;
-(void)revealElementForKey:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
@end
