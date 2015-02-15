/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/SharingPref.prefPane/Contents/MacOS/SharingPref
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SharingPref/SharingPref-Structs.h>
#import <SharingPref/AppleSharing_SharingService.h>
#import <SharingPref/NSMenuDelegate.h>
#import <SharingPref/NSOpenSavePanelDelegate.h>

@class AppleSharing_SambaUsersSheetManager, AppleSharing_AFPStopWindowController, NSSplitView, NSTableView, AddRemoveView, NSPopUpButton, NSButton, NSTextField, NSMenu, NSBox, NSMenuItem, NSParagraphStyle, NSNumber, NSMutableArray, NSString, NSTimer;

@interface AppleSharing_FileSharing : AppleSharing_SharingService <NSMenuDelegate, NSOpenSavePanelDelegate> {

	AppleSharing_SambaUsersSheetManager* _usersSheetManager;
	AppleSharing_AFPStopWindowController* _stopWindow;
	NSSplitView* _splitView;
	NSTableView* _aclTable;
	AddRemoveView* _ACLEntryAddRemoveButton;
	NSPopUpButton* _aclPopupButton;
	NSButton* _windowsSharing;
	NSTextField* _firstTableLabel;
	NSTextField* _secondTableLabel;
	NSMenu* _sharePointsMenu;
	NSBox* _sharePointNotAvailWarning;
	NSMenuItem* _advancedACLEditMenu;
	NSMenuItem* _noAccessACLEditMenu;
	OpaqueLSSharedFileListRefRef _sharePointsListRef;
	NSParagraphStyle* _cellParagraphStyle;
	NSNumber* _serviceState;
	char _userDidAddSharePoint;
	char _didAuthenticateSFL;
	char _applyToEnclosedDone;
	char _applyToEnclosedTakesTooLong;
	NSMutableArray* _usersList;
	NSMutableArray* _tempUsersList;
	NSString* _infoString;
	NSString* _stateString;
	long long _stateImageTag;
	NSTimer* _shutdownTimer;
	unsigned _smbShutdownRef;
	unsigned _afpShutdownRef;
	NSMutableArray* _sharePointsList;

}

@property (retain) NSMutableArray * sharePointsList;                //@synthesize sharePointsList=_sharePointsList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextualMenuForRow:(long long)arg1 ;
-(void)_aclIdentityPickerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(OpaqueLSSharedFileListRefRef)sharedFileListRef;
-(void)addIdentities:(id)arg1 ;
-(void)_updateServiceStateTimer:(id)arg1 ;
-(void)_addPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)onOffButtonPressed;
-(void)delayedInitService;
-(void)_usersSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)ipChanged:(id)arg1 ;
-(char)hasSearchKeyword:(id)arg1 ;
-(void)_revealSelectedSharePoint:(id)arg1 ;
-(void)addACLEntry:(id)arg1 ;
-(char)isServiceActive;
-(void)removeACLEntry:(id)arg1 ;
-(NSMutableArray *)sharePointsList;
-(char)hasMixedState;
-(void)_addSharePointsFromArray:(id)arg1 ;
-(void)_removeIdentities:(id)arg1 ;
-(void)_removeACLEntry:(id)arg1 ;
-(void)_updateServiceState;
-(void)_updateAddDeleteButtonsState;
-(void)removeIdentities:(id)arg1 ;
-(void)setSharePointsList:(NSMutableArray *)arg1 ;
-(void)_updateSharedPointsList;
-(void)_authenticateSFLIfNeeded;
-(void)_removeIdentitiesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_stopWindowSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)_disabledIdentitiesForPicker;
-(void)_removeACLEntrySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_applyToEnclosedWarningDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_openFinderInfoWindowForPath:(id)arg1 ;
-(void)revealSharePoint:(id)arg1 ;
-(void)showFinderGetInfo:(id)arg1 ;
-(void)applyPermissionsToEnclosed:(id)arg1 ;
-(void)usersButtonPressed:(id)arg1 ;
-(void)_doubleClickAction:(id)arg1 ;
-(void)mainViewDidLoad;
-(void)revealElementForKey:(id)arg1 ;
-(void)menuAction:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)name;
-(long long)state;
-(id)helpAnchor;
-(char)validateMenuItem:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(CGRect*)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(CGPoint)arg6 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)tableViewSelectionIsChanging:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)refreshUI;
-(double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(char)panel:(id)arg1 shouldShowFilename:(id)arg2 ;
-(void)_applicationWillTerminate:(id)arg1 ;
@end
