/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <AppKit/NSComboBox.h>

@class ServicePopUp, NSString;

@interface ExtendedComboBox : NSComboBox {

	char _allowsLineBreaks;
	char _passesReturnKey;
	char _allowsRichText;
	char _trimWhitespace;
	ServicePopUp* _servicePopUp;
	NSString* _prefKey;
	char _autoFilled;
	NSString* _suffix;
	id _returnDelegate;

}
-(void)setPassesReturnEvent:(char)arg1 ;
-(void)setReturnDelegate:(id)arg1 ;
-(void)setPopUpButtonVisible:(char)arg1 ;
-(void)updateNumberOfVisibleItems;
-(void)updateRecentsList;
-(void)setRecentsListPrefKey:(id)arg1 ;
-(void)saveRecentsList;
-(void)loadLastRecentValue;
-(void)setTrimsWhitespace:(char)arg1 ;
-(char)passesReturnEvent;
-(char)trimsWhitespace;
-(char)isPopUpButtonVisible;
-(void)_installCustomCell;
-(id)_prefKey;
-(id)recentsListPrefKey;
-(void)setSuffix:(id)arg1 ;
-(id)suffix;
-(id)_suffixAttributes;
-(void)setAutoFilled:(char)arg1 ;
-(char)isAutoFilled;
-(char)allowsLineBreaks;
-(void)setAllowsLineBreaks:(char)arg1 ;
-(char)allowsRichText;
-(void)setAllowsRichText:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setStringValue:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)setObjectValue:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
@end
