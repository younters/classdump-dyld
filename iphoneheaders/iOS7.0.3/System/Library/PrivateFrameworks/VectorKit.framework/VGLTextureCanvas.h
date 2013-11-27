/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLCanvas.h>

@class VGLContext, VGLTexture, VGLResource, VGLTextureFramebuffer;

@interface VGLTextureCanvas : NSObject <VGLCanvas> {

	VGLContext* _targetContext;
	VGLTexture* _targetTexture;
	CGSize _size;
	CGSize _sizeInPixels;
	float _contentScale;
	VGLColor _glClearColor;
	VGLResource* _framebufferResource;
	VGLResource* _depthbufferResource;
	VGLTextureFramebuffer* _framebuffer;

}

@property (nonatomic,readonly) VGLContext * vglContext;               //@synthesize targetContext=_targetContext - In the implementation block
@property (nonatomic,retain) VGLTexture * targetTexture;              //@synthesize targetTexture=_targetTexture - In the implementation block
@property (assign,nonatomic) VGLColor glClearColor;                   //@synthesize glClearColor=_glClearColor - In the implementation block
@property (nonatomic,readonly) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float contentScale;                    //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) CGSize sizeInPixels;                   //@synthesize sizeInPixels=_sizeInPixels - In the implementation block
+(Class)contextClass;
-(void)dealloc;
-(CGSize)size;
-(id)description;
-(id).cxx_construct;
-(float)contentScale;
-(id)vglContext;
-(void)willDrawView;
-(void)didDrawView;
-(CGSize)sizeInPixels;
-(void)setGlClearColor:(VGLColor)arg1 ;
-(VGLColor)glClearColor;
-(id)initWithSize:(CGSize)arg1 scale:(float)arg2 ;
-(void)setTargetTexture:(id)arg1 ;
-(void)setRasterizedContext:(id)arg1 ;
-(id)targetTexture;
-(void)_bindFramebuffer;
-(id)_framebufferResource;
-(void)dumpTextureToPath:(id)arg1 ;
@end
