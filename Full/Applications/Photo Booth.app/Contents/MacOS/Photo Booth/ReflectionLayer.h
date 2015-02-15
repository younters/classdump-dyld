/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:45:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Photo Booth.app/Contents/MacOS/Photo Booth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photo Booth/Photo Booth-Structs.h>
#import <QuartzCore/CAOpenGLLayer.h>

@class NSImage, NSString;

@interface ReflectionLayer : CAOpenGLLayer {

	char _visible;
	NSImage* _maskImage;
	NSString* _identifier;
	NSString* _alignmentMode;
	unsigned _programID;

}

@property (retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * alignmentMode;              //@synthesize alignmentMode=_alignmentMode - In the implementation block
@property (retain) NSImage * maskImage; 
-(void)_newFrameReady:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 maskImage:(id)arg2 alignmentMode:(id)arg3 ;
-(void)setupShaders;
-(NSString *)alignmentMode;
-(void)dealloc;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMaskImage:(NSImage *)arg1 ;
-(NSImage *)maskImage;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(void)drawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_Fo5*)arg4 ;
-(void)releaseCGLPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(CGLContextObject*)copyCGLContextForPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(void)releaseCGLContext:(CGLContextObject*)arg1 ;
-(id)renderingContext;
-(void)setAlignmentMode:(NSString *)arg1 ;
@end
