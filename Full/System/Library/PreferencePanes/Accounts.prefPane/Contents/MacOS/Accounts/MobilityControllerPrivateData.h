/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Accounts.prefPane/Contents/MacOS/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ADMUser, NSWindow, LocRsrcs, MobilityCreatePrefs, MobilitySyncPrefs, MobilitySyncDisplayHelper;

@interface MobilityControllerPrivateData : NSObject {

	ADMUser* fCurrUser;
	NSWindow* fParentWindow;
	BOOL fInCreateMode;
	BOOL fIsNetworkUser;
	BOOL fIsMobileUser;
	LocRsrcs* fLocRsrcs;
	MobilityCreatePrefs* fCreatePrefs;
	MobilitySyncPrefs* fSyncPrefs;
	MobilitySyncPrefs* fOrigSyncPrefs;
	MobilitySyncDisplayHelper* fSyncDisplayHelper;
	int fUserRequestedMode;

}
-(id)init;
@end
