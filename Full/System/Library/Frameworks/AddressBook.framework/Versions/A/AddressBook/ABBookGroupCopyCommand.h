/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookCommand.h>

@class NSPasteboard, ABGroup;

@interface ABBookGroupCopyCommand : ABBookCommand {

	NSPasteboard* _pasteboard;
	ABGroup* _group;

}
-(void)execute;
-(id)pasteboardData;
-(id)initWithPasteboard:(id)arg1 group:(id)arg2 ;
-(void)dealloc;
@end
