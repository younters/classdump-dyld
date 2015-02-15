/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/SharingPref.prefPane/Contents/MacOS/SharingPref
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SharingPref/SharingPref-Structs.h>
@class NSTextField, AppleSharing_NameSheet, NSLock, NSString, NSBundle, AppleSharing_ConfigdMonitor, AppleSharing_SharingPref, NSButton, NSNumber;

@interface AppleSharing_GeneralInfo : NSObject {

	NSTextField* _computerNameFieldLabel;
	NSTextField* _computerNameField;
	NSTextField* _rendezvousExplanationField;
	AppleSharing_NameSheet* _nameSheet;
	char _computerNameDidChange;
	char _computerNameDidChangeSheet;
	NSLock* _lock;
	NSString* _ipAddress;
	NSString* _dnsAddress;
	NSBundle* _bundle;
	AppleSharing_ConfigdMonitor* _cMonitor;
	AppleSharing_SharingPref* _sharingPref;
	NSButton* _editButton;
	NSNumber* _linkComputerNames;
	char _localChanged;

}
-(id)locString:(id)arg1 ;
-(void)updateDNSName:(id)arg1 ;
-(void)storeRendezvousName:(id)arg1 ;
-(void)showEditableState:(char)arg1 ;
-(void)setUpRendezvousNameField;
-(void)mainViewDidLoad:(id)arg1 ;
-(void)updateIPAddress:(id)arg1 ;
-(void)updateComputerName:(id)arg1 ;
-(void)updateLocalName:(id)arg1 ;
-(void)setRendezvousExplanationField:(id)arg1 ;
-(void)actionComputerName:(id)arg1 ;
-(id)zeroConfNameFromComputerName:(id)arg1 ;
-(void)setZeroConfNameBasedOnComputerName:(id)arg1 ;
-(id)getValidRendezvousNameFromString:(id)arg1 ;
-(void)nameSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)showNames:(id)arg1 ;
-(id)dnsLookupAddress;
-(void)setAuthorizationRef:(AuthorizationOpaqueRefRef)arg1 ;
-(void)didSelect;
-(id)ipAddress;
-(void)dealloc;
-(void)controlTextDidBeginEditing:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(void)save;
@end
