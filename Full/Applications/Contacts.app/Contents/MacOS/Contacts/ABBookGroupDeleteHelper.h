/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABGroupDeleteHelper.h>

@protocol ABCommandExecutor;
@class ABDeleteGroupSheet, ABBookGroupDeleteCommand, NSString;

@interface ABBookGroupDeleteHelper : NSObject <ABGroupDeleteHelper> {

	ABDeleteGroupSheet* _deleteSheet;
	ABBookGroupDeleteCommand* _command;
	id<ABCommandExecutor> _commandExecutor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDeleteSheet:(id)arg1 command:(id)arg2 commandExecutor:(id)arg3 ;
-(void)performDelete;
-(void)dealloc;
@end
