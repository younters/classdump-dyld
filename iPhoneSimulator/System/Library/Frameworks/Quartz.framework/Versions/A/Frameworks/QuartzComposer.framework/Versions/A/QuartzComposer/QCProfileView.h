/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class NSString;

@interface QCProfileView : NSView {

	unsigned long long _size;
	id* _colors;
	id* _names;
	NSString* _label;
	double _units;
	double* _buffer;
	unsigned long long _bufferStart;
	unsigned long long _bufferLength;
	double* _min;
	double* _max;
	void** _unused[4];

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)isOpaque;
-(void)mouseDown:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(void)setSampleSize:(unsigned long long)arg1 ;
-(void)setUnits:(double)arg1 ;
-(void)setColor:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setName:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)clearAllSamples;
-(void)addSample:(const double*)arg1 ;
-(id)nameForIndex:(unsigned long long)arg1 ;
-(double)units;
-(void)_plotCurve:(CGContextRef)arg1 offset:(double)arg2 scale:(double)arg3 sample:(double*)arg4 min:(double*)arg5 max:(double*)arg6 stride:(unsigned long long)arg7 count:(unsigned long long)arg8 ;
-(unsigned long long)sampleSize;
-(id)colorForIndex:(unsigned long long)arg1 ;
@end
