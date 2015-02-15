/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:23:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Keychain Access.app/Contents/MacOS/Keychain Access
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Keychain Access/Keychain Access-Structs.h>
#import <Keychain Access/NSTableViewDelegate.h>

@class NSTableView, NSMatrix, NSButton, NSTextField, TrustedApp, KeychainItemBasic, NSMutableArray, NSWindow, NSString;

@interface ACLEditor : NSObject <NSTableViewDelegate> {

	id _propView;
	NSTableView* _browser;
	NSMatrix* _warningControl;
	NSButton* _askForPassword;
	NSButton* _addButton;
	NSButton* _removeButton;
	NSButton* _saveButton;
	NSTextField* _label;
	NSTextField* _labelText;
	NSTextField* _listLabelText;
	NSTextField* _status;
	id _expertSheet;
	id _expertSheetField;
	TrustedApp* _expertRef;
	KeychainItemBasic* _item;
	OpaqueSecAccessRefRef _accessRef;
	OpaqueSecKeychainItemRefRef _itemRef;
	OpaqueSecTrustRefRef _aclRef;
	NSMutableArray* _appList;
	BOOL _allowWithoutWarning;
	BOOL _isCloudKeychainItem;
	cssm_acl_keychain_prompt_selector _promptSelector;
	CFStringRef _promptDescription;
	char _isDirty;
	char _saveChanges;
	NSWindow* _window;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)helpButton:(id)arg1 ;
-(void)populateAttributes;
-(char)saveChangesAlert;
-(void)saveClicked:(id)arg1 ;
-(id)initByAddingViewTo:(id)arg1 window:(id)arg2 withItem:(id)arg3 ;
-(void)selectionDidChange:(id)arg1 ;
-(void)releaseAttributes;
-(void)enableControls:(BOOL)arg1 ;
-(void)expertSheetForTrustedApp:(id)arg1 ;
-(void)_openPanelSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)updateToolTipForItem:(long long)arg1 ;
-(void)warningControl:(id)arg1 ;
-(void)askForPassword:(id)arg1 ;
-(void)addACL:(id)arg1 ;
-(void)removeACL:(id)arg1 ;
-(void)clearDirtyFlag;
-(void)expertSheetOK:(id)arg1 ;
-(void)expertSheetCancel:(id)arg1 ;
-(void)updateToolTips;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)textDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowWillClose:(id)arg1 ;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)refresh;
-(void)setDirty:(char)arg1 ;
@end
