/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <AppKit/NSImageRep.h>

@interface BKIconRefImageRep : NSImageRep {

	OpaqueIconRefRef _iconRef;
	void* _proReserved1;
	void* _proReserved2;

}
+(id)imageFromPath:(id)arg1 ;
+(id)imageFromIconRef:(OpaqueIconRefRef)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIconRef:(OpaqueIconRefRef)arg1 ;
-(char)draw;
-(int)_uncachedSize;
-(char)drawInRect:(CGRect)arg1 ;
-(char)drawAtPoint:(CGPoint)arg1 ;
-(char)_drawFromRect:(CGRect)arg1 toRect:(CGRect)arg2 operation:(unsigned long long)arg3 alpha:(float)arg4 compositing:(char)arg5 flipped:(char)arg6 ignoreContext:(char)arg7 ;
@end
