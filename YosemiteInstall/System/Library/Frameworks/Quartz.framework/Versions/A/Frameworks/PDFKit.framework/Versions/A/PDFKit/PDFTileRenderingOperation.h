/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <Foundation/NSOperation.h>

@class PDFTileRenderer, PDFViewLayout, CALayer;

@interface PDFTileRenderingOperation : NSOperation {

	PDFTileRenderer* _renderer;
	CGImageRef _imageRef;
	CGSize _size;
	double _contentsScale;
	CGRect _clipRect;
	CGPoint _scrollOffset;
	CGSize _contentSize;
	id _delegate;
	CGPathRef _shadowMask;
	PDFViewLayout* _layout;
	CALayer* _layer;

}

@property (assign) PDFTileRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (assign) CGSize size;                             //@synthesize size=_size - In the implementation block
@property (assign) double contentsScale;                    //@synthesize contentsScale=_contentsScale - In the implementation block
@property (readonly) CGImageRef image; 
@property (assign) CGRect clipRect;                         //@synthesize clipRect=_clipRect - In the implementation block
@property (assign) id delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign) CGSize contentSize;                      //@synthesize contentSize=_contentSize - In the implementation block
@property (assign) CGPoint scrollOffset;                    //@synthesize scrollOffset=_scrollOffset - In the implementation block
@property (retain) PDFViewLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (retain) CALayer * layer;                         //@synthesize layer=_layer - In the implementation block
-(CGRect)clipRect;
-(void)setClipRect:(CGRect)arg1 ;
-(CGPoint)scrollOffset;
-(void)setScrollOffset:(CGPoint)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(double)contentsScale;
-(CALayer *)layer;
-(id)description;
-(void)setRenderer:(PDFTileRenderer *)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(void)cancel;
-(CGImageRef)image;
-(PDFViewLayout *)layout;
-(void)setContentSize:(CGSize)arg1 ;
-(id)delegate;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)main;
-(PDFTileRenderer *)renderer;
-(void)setLayout:(PDFViewLayout *)arg1 ;
-(void)setShadowMask:(CGPathRef)arg1 ;
-(void)drawShadowedRectInContext:(CGContextRef)arg1 withBounds:(CGRect)arg2 ;
-(CGPathRef)shadowMask;
-(char)isOptimalForSize:(CGSize)arg1 scaleFactor:(double)arg2 ;
@end
