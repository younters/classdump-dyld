/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:23:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Keychain Access.app/Contents/MacOS/Keychain Access
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Keychain Access/Keychain Access-Structs.h>
@class NSPanel, NSTextField, NSPopUpButton, NSButton, NSMutableArray, KeychainStore;

@interface NewCertificatePrefItem : NSObject {

	NSPanel* _panel;
	NSTextField* _name;
	NSPopUpButton* _certPopup;
	NSButton* _addButton;
	NSMutableArray* _certificates;
	long long _lastIndex;
	long long _index;
	KeychainStore* _store;
	char _identitiesOnly;

}
-(void)setShowsIdentitiesOnly:(char)arg1 ;
-(void)setSelectedCertificate:(OpaqueSecCertificateRefRef)arg1 ;
-(void)certPopupSelected:(id)arg1 ;
-(long long)indexOfCertificate:(OpaqueSecCertificateRefRef)arg1 ;
-(void)insertMenuItemForCertificate:(OpaqueSecCertificateRefRef)arg1 withImage:(id)arg2 ;
-(void)populateMenu;
-(void)addCertificatePreference:(id)arg1 ;
-(void)windowResignedKey:(id)arg1 ;
-(void)show:(id)arg1 ;
-(id)certificates;
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
-(void)textDidChange:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowDidUpdate:(id)arg1 ;
-(void)windowBecameKey:(id)arg1 ;
@end
