/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTSurfaceRendererTile.h>

@interface QTSurfaceRendererSoftwareTile : QTSurfaceRendererTile {

	unsigned _backBufferConnectionID;
	unsigned _backBufferWindowID;
	CGContextRef _backBufferContext;
	CGSize _backBufferDimensions;
	CGImageRef _image;
	CVBufferRef _lastRenderedImageBuffer;
	CGColorRef _lastRenderedBackgroundColor;

}
-(id)pixelBufferAttributes;
-(void)setConnectionID:(unsigned)arg1 ;
-(id)diagnosticString;
-(void)unbindSurface;
-(void)bindSurface;
-(void)ensureBackBuffer;
-(unsigned)backBufferWindowID;
-(unsigned)backBufferConnectionID;
-(CGContextRef)backBufferContext;
-(void)render;
-(void)tearDown;
@end
