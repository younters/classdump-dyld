/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient; 
@property (readonly) char horizontalOverflow; 
@property (readonly) char verticalOverflow; 
-(unsigned short)orient;
-(char)horizontalOverflow;
-(char)verticalOverflow;
-(void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(char)arg2 verticalOverflow:(char)arg3 ;
@end
