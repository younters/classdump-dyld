/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/SharingPref.prefPane/Contents/MacOS/SharingPref
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SharingPref/SharingPref-Structs.h>
#import <PreferencePanes/NSAdminPreference.h>

@class NSView, AppleSharing_GeneralInfo, NSTableView, NSImageView, AppleSharing_SharingService, NSMutableArray;

@interface AppleSharing_SharingPref : NSAdminPreference {

	NSView* _optionsViewPlaceHolder;
	NSView* _energySaverWarningView;
	AppleSharing_GeneralInfo* _generalInfo;
	NSTableView* _table;
	NSImageView* _cautionAlertImageView;
	AppleSharing_SharingService* _currentService;
	NSMutableArray* _serviceArray;
	NSMutableArray* _hiddenServiceArray;
	char _initializedServices;
	long long _initServiceIndex;
	SCD_Struct_Ap0* _authorizationRights;

}
-(id)locString:(id)arg1 ;
-(void)reloadTableRowForService:(id)arg1 ;
-(void)doHelp:(id)arg1 ;
-(void)_eswarningDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)tableView:(id)arg1 isRowEnabled:(long long)arg2 ;
-(char)getOnOffStatusOnRow:(long long)arg1 ;
-(void)actionOpenNetwork:(id)arg1 ;
-(void)switchToEnergySaverPrefPane:(id)arg1 ;
-(void)updateAuthorizationStatus;
-(void)addOptionsView:(id)arg1 ;
-(void)delayedInitServices:(id)arg1 ;
-(void)tableButtonPressed:(id)arg1 ;
-(void)_serviceDidChangeHiddenState:(id)arg1 ;
-(void)setUpRendezvousNameField;
-(void)_tableViewSelectionDidChangeDelayed:(id)arg1 ;
-(void)setUpTable;
-(void)initializeServices;
-(void)launchAnchor:(id)arg1 ;
-(void)loadTableArray;
-(void)FUSOccurred;
-(id)sfAuthorization;
-(void)actionOpenPrintFax:(id)arg1 ;
-(void)willBecomeActive;
-(void)mainViewDidLoad;
-(void)willResignActive;
-(void)didResignActive;
-(void)handleOpenParameter:(const AEDesc*)arg1 ;
-(void)revealElementForKey:(id)arg1 ;
-(void)reflectEditableState;
-(void)runSelfTest:(unsigned long long)arg1 duration:(double)arg2 ;
-(char*)authorizationString;
-(const SCD_Struct_Ap1*)authorizationRights;
-(void)didSelect;
-(void)willSelect;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)table;
-(void)refresh;
@end
