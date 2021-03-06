/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMUIEvent.h>

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent

@property (copy,readonly) NSString * keyIdentifier; 
@property (readonly) unsigned location; 
@property (readonly) unsigned keyLocation; 
@property (readonly) char ctrlKey; 
@property (readonly) char shiftKey; 
@property (readonly) char altKey; 
@property (readonly) char metaKey; 
@property (readonly) char altGraphKey; 
@property (readonly) int keyCode; 
@property (readonly) int charCode; 
-(NSString *)keyIdentifier;
-(unsigned)keyLocation;
-(char)ctrlKey;
-(char)shiftKey;
-(char)altKey;
-(char)metaKey;
-(char)altGraphKey;
-(int)charCode;
-(char)getModifierState:(id)arg1 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned)arg6 ctrlKey:(char)arg7 altKey:(char)arg8 shiftKey:(char)arg9 metaKey:(char)arg10 altGraphKey:(char)arg11 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned)arg6 ctrlKey:(char)arg7 altKey:(char)arg8 shiftKey:(char)arg9 metaKey:(char)arg10 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned)arg6 ctrlKey:(char)arg7 altKey:(char)arg8 shiftKey:(char)arg9 metaKey:(char)arg10 altGraphKey:(char)arg11 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned)arg6 ctrlKey:(char)arg7 altKey:(char)arg8 shiftKey:(char)arg9 metaKey:(char)arg10 ;
-(int)keyCode;
-(unsigned)location;
@end

