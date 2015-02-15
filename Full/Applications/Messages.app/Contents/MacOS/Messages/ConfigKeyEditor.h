/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTextView.h>

@class NSNumber;

@interface ConfigKeyEditor : NSTextView {

	id _master;
	NSNumber* _virtualKey;
	unsigned long long _modifiers;
	id _textField;
	char _operationModeEnabled;
	unsigned _savedHotKeyOperatingMode;

}
-(void)_disableHotKeyOperationMode;
-(void)_restoreHotKeyOperationMode;
-(void)_windowDidBecomeKeyNotification:(id)arg1 ;
-(id)initConfigKeyEditorWithMaster:(id)arg1 ;
-(void)dealloc;
-(id)key;
-(char)performKeyEquivalent:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(id)textField;
-(id)modifier;
-(void)setTextField:(id)arg1 ;
-(void)_windowDidResignKeyNotification:(id)arg1 ;
@end
