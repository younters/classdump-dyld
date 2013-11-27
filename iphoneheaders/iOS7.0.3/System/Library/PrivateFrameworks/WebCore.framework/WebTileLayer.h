/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTileLayer : CALayer {

	TileController* _tileController;
	unsigned _paintCount;

}
-(id)actionForKey:(id)arg1 ;
-(unsigned)paintCount;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setTileController:(TileController*)arg1 ;
-(void)resetPaintCount;
-(unsigned)incrementPaintCount;
-(void)logFilledFreshTile;
@end
