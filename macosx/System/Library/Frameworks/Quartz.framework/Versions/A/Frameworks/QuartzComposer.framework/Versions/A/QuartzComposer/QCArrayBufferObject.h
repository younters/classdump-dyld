/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCArray.h>

@class QCCGLContext;

@interface QCArrayBufferObject : QCArray {

	unsigned _vertexBuffer;
	unsigned _target;
	QCCGLContext* _context;
	void** _unused2[4];

}

@property (readonly) unsigned vertexBuffer;               //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (readonly) unsigned target;                     //@synthesize target=_target - In the implementation block
@property (readonly) QCCGLContext * context;              //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(QCCGLContext *)context;
-(void*)array;
-(unsigned)target;
-(void)bindArrayToContext:(id)arg1 clientState:(int)arg2 savedState:(SCD_Struct_QC19*)arg3 ;
-(void)unbindArrayFromContext:(id)arg1 clientState:(int)arg2 savedState:(SCD_Struct_QC19*)arg3 ;
-(char)beginUpdateArray;
-(void)endUpdateArray;
-(id)NSArrayRepresentation;
-(unsigned)vertexBuffer;
-(id)initWithContext:(id)arg1 target:(unsigned)arg2 count:(unsigned long long)arg3 elementSize:(unsigned long long)arg4 type:(int)arg5 ;
-(id)initWithVertexBufferObject:(int)arg1 releaseCallback:(/*function pointer*/void*)arg2 releaseInfo:(void*)arg3 context:(id)arg4 target:(unsigned)arg5 count:(unsigned long long)arg6 elementSize:(unsigned long long)arg7 type:(int)arg8 ;
-(char)beginRenderBuffer;
-(void)endRenderBuffer;
@end
