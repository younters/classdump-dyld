/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABMainWindowController <NSObject>
@property (assign) char readOnlyOverride; 
@required
-(void)postApearanceDidChangeNotification;
-(id)mergeDelegate;
-(void)ensureGroupListIsVisible;
-(void)ensureCardViewIsVisible;
-(id)importerDelegate;
-(id)importAction;
-(id)shareMyCardAction;
-(id)aggregateAddressBook;
-(void)selectRecordWithUniqueId:(id)arg1 edit:(char)arg2;
-(id)applicationScriptingModel;
-(id)timeMachineWindowController;
-(void)setReadOnlyOverride:(char)arg1;
-(void)switchToAllContactsIfSelectedGroupIsReadOnly;
-(char)readOnlyOverride;
-(void)setAccounts:(id)arg1;
-(void)invalidate;
-(id)window;
-(void)showWindow:(id)arg1;
-(id)undoManager;
-(void)setAutosaveName:(id)arg1;
-(id)autosaveName;

@end
