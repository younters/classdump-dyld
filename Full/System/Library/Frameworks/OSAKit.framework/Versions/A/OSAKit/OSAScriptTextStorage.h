/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAKit-Structs.h>
#import <OSAKit/OSATextStorage.h>

@class OSAScriptController;

@interface OSAScriptTextStorage : OSATextStorage {

	OSAScriptController* _controller;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)controller;
-(id)initWithController:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setController:(id)arg1 ;
-(id)undoManager;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
@end
