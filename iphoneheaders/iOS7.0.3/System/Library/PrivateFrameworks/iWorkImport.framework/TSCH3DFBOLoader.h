/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResourceLoader.h>

@protocol TSCH3DRenderBufferAllocator;
@class ;

@interface TSCH3DFBOLoader : TSCH3DResourceLoader {

	tvec2<int> mSize;
	FramebufferAttributes mFramebufferAttributes;
	<TSCH3DRenderBufferAllocator>* mColorAllocator;
	<TSCH3DRenderBufferAllocator>* mDepthAllocator;

}

@property (nonatomic,readonly) tvec2<int> size; 
@property (nonatomic,readonly) FramebufferAttributes framebufferAttributes; 
@property (nonatomic,readonly) <TSCH3DRenderBufferAllocator> * colorAllocator; 
@property (nonatomic,readonly) <TSCH3DRenderBufferAllocator> * depthAllocator; 
+(id)loaderWithFramebufferAttributes:(const FramebufferAttributes*)arg1 size:(const tvec2<int>*)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4 ;
-(id)generateHandleWithConfig:(void*)arg1 ;
-(unsigned)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(void)bindHandle:(id)arg1 config:(void*)arg2 ;
-(void)deactivateHandle:(id)arg1 insideContext:(id)arg2 ;
-(id)initWithFramebufferAttributes:(const FramebufferAttributes*)arg1 size:(const tvec2<int>*)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4 ;
-(SessionLoadResourceResult)loadResource:(id)arg1 insideSession:(id)arg2 ;
-(id)colorAllocator;
-(id)depthAllocator;
-(FramebufferAttributes)framebufferAttributes;
-(void)dealloc;
-(tvec2<int>)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id).cxx_construct;
@end
