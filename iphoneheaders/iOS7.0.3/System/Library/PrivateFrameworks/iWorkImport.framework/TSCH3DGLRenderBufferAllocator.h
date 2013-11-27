/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRenderBufferAllocator.h>

@class TSCH3DRenderBufferStorage;

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator> {

	TSCH3DRenderBufferStorage* mStorage;

}

@property (nonatomic,readonly) BOOL isTexturable; 
+(id)allocator;
+(id)allocatorWithStorage:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(BOOL)isTexturable;
-(id)colorbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
-(id)depthbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
-(id)bufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 internalFormat:(unsigned)arg2 attachment:(unsigned)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
@end
