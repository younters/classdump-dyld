/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/ParentalControls.prefPane/Contents/MacOS/ParentalControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MCXPrefObject, FCMCXHelper, ADMUser, FamilyRemoteComputer, NSWindow;

@interface FamilyPrefTabController : NSObject {

	MCXPrefObject* _mcxManager;
	FCMCXHelper* _mcxHelper;
	ADMUser* _user;
	FamilyRemoteComputer* _remoteComputer;
	char _hasChanges;
	NSWindow* _prefWindow;

}

@property (assign) NSWindow * prefWindow;              //@synthesize prefWindow=_prefWindow - In the implementation block
-(id)remoteComputer;
-(char)applicationShouldTerminate;
-(void)selectUser:(id)arg1 force:(char)arg2 ;
-(void)setRemoteComputer:(id)arg1 ;
-(void)deselectUser;
-(void)setPrefWindow:(NSWindow *)arg1 ;
-(void)setMCXManager:(id)arg1 ;
-(NSWindow *)prefWindow;
-(long long)pcPrefsVersionOnLoad;
-(void)setHasChanges:(char)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)hasChanges;
-(id)selectedUser;
-(void)save;
@end
