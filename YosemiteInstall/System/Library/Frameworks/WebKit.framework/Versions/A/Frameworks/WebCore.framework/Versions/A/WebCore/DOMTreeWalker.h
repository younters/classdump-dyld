/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class DOMNode;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode * root; 
@property (readonly) unsigned whatToShow; 
@property (readonly) id<DOMNodeFilter> filter; 
@property (readonly) char expandEntityReferences; 
@property (retain) DOMNode * currentNode; 
-(id)firstChild;
-(id)lastChild;
-(id)previousSibling;
-(id)nextSibling;
-(unsigned)whatToShow;
-(id<DOMNodeFilter>)filter;
-(char)expandEntityReferences;
-(id)nextNode;
-(id)previousNode;
-(void)finalize;
-(void)dealloc;
-(id)parentNode;
-(void)setCurrentNode:(DOMNode *)arg1 ;
-(DOMNode *)currentNode;
-(DOMNode *)root;
@end
