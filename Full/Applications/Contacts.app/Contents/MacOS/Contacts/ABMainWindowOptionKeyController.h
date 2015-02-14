/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABMainWindowViewModel, NSWindow;

@interface ABMainWindowOptionKeyController : NSObject {

	ABMainWindowViewModel* _mainWindowViewModel;
	NSWindow* _window;
	char _optionKeyDown;

}

@property (getter=isOptionKeyDown) char optionKeyDown;              //@synthesize optionKeyDown=_optionKeyDown - In the implementation block
-(char)isOptionKeyDown;
-(void)setOptionKeyDown:(char)arg1 ;
-(id)initWithMainWindowViewModel:(id)arg1 window:(id)arg2 ;
-(void)dealloc;
-(void)windowDidUpdate:(id)arg1 ;
@end
