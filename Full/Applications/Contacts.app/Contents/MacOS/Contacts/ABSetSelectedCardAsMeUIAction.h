/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABUserInterfaceAction.h>

@class ABMainWindowViewModel, ABCommandExecutor, NSString;

@interface ABSetSelectedCardAsMeUIAction : NSObject <ABUserInterfaceAction> {

	ABMainWindowViewModel* _mainWindowViewModel;
	ABCommandExecutor* _commandExecutor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMainWindowViewModel:(id)arg1 commandExecutor:(id)arg2 ;
-(char)validateWithMenuItem:(id)arg1 ;
-(void)performWithSender:(id)arg1 ;
-(void)dealloc;
@end
