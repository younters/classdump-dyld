/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABAbstractMainWindowViewModelUIAction.h>

@class ABOpenInWindowsService;

@interface ABCleanContactListDoubleClickUIAction : ABAbstractMainWindowViewModelUIAction {

	ABOpenInWindowsService* _openInWindowsService;

}
-(id)initWithMainWindowViewModel:(id)arg1 openInWindowsService:(id)arg2 ;
-(id)groupEntryForSelectionWithEntries:(id)arg1 ;
-(void)performWithSender:(id)arg1 ;
-(void)dealloc;
@end
