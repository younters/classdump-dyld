/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType; 
@property (readonly) double numberValue; 
@property (copy,readonly) NSString * stringValue; 
@property (readonly) char booleanValue; 
@property (readonly) DOMNode * singleNodeValue; 
@property (readonly) char invalidIteratorState; 
@property (readonly) unsigned snapshotLength; 
-(double)numberValue;
-(DOMNode *)singleNodeValue;
-(char)invalidIteratorState;
-(unsigned)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(unsigned)arg1 ;
-(void)finalize;
-(void)dealloc;
-(NSString *)stringValue;
-(char)booleanValue;
-(unsigned short)resultType;
@end
