/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABUserInterfaceAction.h>

@class NSWindow, ABExportArchiveService, NSString;

@interface ABExportArchiveUIAction : NSObject <ABUserInterfaceAction> {

	NSWindow* _window;
	ABExportArchiveService* _exportArchiveService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)savePanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)exportToPath:(id)arg1 ;
-(id)initWithWindow:(id)arg1 exportArchiveService:(id)arg2 ;
-(char)validateWithMenuItem:(id)arg1 ;
-(void)performWithSender:(id)arg1 ;
-(void)dealloc;
@end
