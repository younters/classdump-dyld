/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:02:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/ColorSync/Calibrators/Display Calibrator.app/Contents/MacOS/Display Calibrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Display Calibrator/Display Calibrator-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface CompareView : NSView {

	unsigned char _patternData[24];
	NSColor* _pattern;
	NSColor* _shape;

}
-(void)setCompareColor:(int)arg1 lineTintA:(float)arg2 lineTintB:(float)arg3 shapeTint:(float)arg4 ;
-(void)createPatternFromData;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isOpaque;
@end
