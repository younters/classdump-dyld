/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextInput.h>

@class NSString, NSImage;

@interface NSInputManager : NSObject <NSTextInput> {

	id _currentClient;
	id _server;
	id _bundleObj;
	id _keybindings;
	NSString* _trueName;
	NSString* _connectionName;
	NSString* _hostName;
	NSString* _procToExec;
	NSString* _visibleName;
	NSString* _bundleName;
	NSString* _language;
	NSImage* _image;
	unsigned _flags;
	NSString* _keyBindingsName;
	int _reservedInputManager2;

}
+(void)initialize;
+(void)installInputManagerMenu:(id)arg1 ;
+(char)worksWhenModal;
+(id)currentInputManager;
+(void)setCurrentInputManager:(id)arg1 ;
+(void)_terminate:(id)arg1 ;
+(void)cycleToNextInputLanguage:(id)arg1 ;
+(void)cycleToNextInputServerInLanguage:(id)arg1 ;
+(void)_switchToPlatformInput:(id)arg1 ;
+(id)_inputManagerInNextScript:(id)arg1 ;
+(id)_nextInputManagerInScript:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)image;
-(char)isEnabled;
-(char)worksWhenModal;
-(void)doCommandBySelector:(SEL)arg1 ;
-(char)hasMarkedText;
-(NSRange)selectedRange;
-(void)insertText:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(void)_terminate;
-(char)_isActivated;
-(void)_loadBundle;
-(void)_activateServer;
-(id)initWithName:(id)arg1 host:(id)arg2 ;
-(char)wantsToInterpretAllKeystrokes;
-(char)wantsToDelayTextChangeNotifications;
-(char)wantsToHandleMouseEvents;
-(void)_senderIsInvalid:(id)arg1 ;
-(void)insertText:(id)arg1 client:(id)arg2 ;
-(void)doCommandBySelector:(SEL)arg1 client:(id)arg2 ;
-(void)markedTextAbandoned:(id)arg1 ;
-(void)markedTextSelectionChanged:(NSRange)arg1 client:(id)arg2 ;
-(char)_validateBundleSecurity;
-(void)_loadKeyboardBindings;
-(char)_setActivationState:(char)arg1 ;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 ;
-(void)getMarkedText:(id*)arg1 selectedRange:(NSRange*)arg2 ;
-(void)unmarkText;
-(id)validAttributesForMarkedText;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 ;
-(NSRange)markedRange;
-(long long)conversationIdentifier;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)_keyBindingManager;
-(id)_currentClient;
-(void)_setCurrentClient:(id)arg1 ;
-(void)activateInputManagerFromMenu:(id)arg1 ;
-(id)localizedInputManagerName;
-(char)handleMouseEvent:(id)arg1 ;
-(id)server;
-(id)bundleObject;
-(id)language;
-(id)_trueName;
@end
