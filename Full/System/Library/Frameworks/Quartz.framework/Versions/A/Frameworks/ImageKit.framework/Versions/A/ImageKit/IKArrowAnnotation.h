/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKAnnotation.h>

@interface IKArrowAnnotation : IKAnnotation {

	double _lineWidth;
	char _arrowAtStart;
	char _arrowAtEnd;

}
-(void)updateBorderWidth:(int)arg1 ;
-(void)toggleArrowAtStart;
-(void)toggleArrowAtEnd;
-(void)setAnchorPointAndKeepFrame:(CGPoint)arg1 ;
-(unsigned)defaultKnob;
-(unsigned)knobLayerFlags;
-(void)changeBackgroundColor:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setup:(id)arg1 ;
@end
