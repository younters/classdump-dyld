/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABImporterDelegate <NSObject>
@required
-(id)mergeDelegate;
-(char)importerCanImport;
-(char)importvCardFiles:(id)arg1 showImportConfirmation:(char)arg2;
-(id)aggregateAddressBook;
-(char)importvCardFiles:(id)arg1;
-(id)selectedGroups;
-(id)selectedAccount;
-(id)window;
-(id)undoManager;

@end
