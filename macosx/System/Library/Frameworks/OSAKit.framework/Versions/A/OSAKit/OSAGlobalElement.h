/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAKit-Structs.h>
#import <OSAKit/OSAScriptElement.h>

@class NSMutableArray;

@interface OSAGlobalElement : OSAScriptElement {

	NSMutableArray* _globals;

}
+(id)elementWithGlobal:(id)arg1 ;
+(id)elementWithGlobal:(id)arg1 range:(NSRange)arg2 ;
+(id)elementWithGlobals:(id)arg1 ;
+(id)elementWithGlobals:(id)arg1 range:(NSRange)arg2 ;
-(id)globals;
-(char)generateIntoText:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)initWithGlobal:(id)arg1 ;
-(id)initWithGlobal:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithGlobals:(id)arg1 ;
-(id)initWithGlobals:(id)arg1 range:(NSRange)arg2 ;
-(id)global;
-(void)setGlobal:(id)arg1 ;
-(void)setGlobals:(id)arg1 ;
-(void)dealloc;
-(id)title;
@end
