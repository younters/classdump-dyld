/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ASKDialogReply : NSObject {

	NSString* _buttonReturned;
	NSString* _textReturned;
	char _gaveUp;

}
+(id)replyWithButtonReturned:(id)arg1 textReturned:(id)arg2 gaveUp:(char)arg3 ;
-(id)buttonReturned;
-(id)textReturned;
-(char)gaveUp;
-(id)initWithButtonReturned:(id)arg1 textReturned:(id)arg2 gaveUp:(char)arg3 ;
-(void)dealloc;
@end
