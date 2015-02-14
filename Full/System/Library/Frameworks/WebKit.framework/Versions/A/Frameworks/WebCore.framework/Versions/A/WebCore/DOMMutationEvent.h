/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@class DOMNode, NSString;

@interface DOMMutationEvent : DOMEvent

@property (readonly) DOMNode * relatedNode; 
@property (copy,readonly) NSString * prevValue; 
@property (copy,readonly) NSString * newValue; 
@property (copy,readonly) NSString * attrName; 
@property (readonly) unsigned short attrChange; 
-(DOMNode *)relatedNode;
-(NSString *)prevValue;
-(NSString *)newValue;
-(NSString *)attrName;
-(unsigned short)attrChange;
-(void)initMutationEvent:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 relatedNode:(id)arg4 prevValue:(id)arg5 newValue:(id)arg6 attrName:(id)arg7 attrChange:(unsigned short)arg8 ;
-(void)initMutationEvent:(id)arg1 :(char)arg2 :(char)arg3 :(id)arg4 :(id)arg5 :(id)arg6 :(id)arg7 :(unsigned short)arg8 ;
@end
