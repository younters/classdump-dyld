/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface VUMeter : NSView {

	int _style;
	double _floatValue;
	NSImage* _underImage;
	NSImage* _overImage;

}

@property (assign,nonatomic) double floatValue;                 //@synthesize floatValue=_floatValue - In the implementation block
@property (assign,nonatomic) int style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSImage * underImage;              //@synthesize underImage=_underImage - In the implementation block
@property (nonatomic,retain) NSImage * overImage;               //@synthesize overImage=_overImage - In the implementation block
-(NSImage *)underImage;
-(void)setUnderImage:(NSImage *)arg1 ;
-(NSImage *)overImage;
-(void)setOverImage:(NSImage *)arg1 ;
-(int)style;
-(void)drawRect:(CGRect)arg1 ;
-(double)floatValue;
-(void)setFloatValue:(double)arg1 ;
-(void)setStyle:(int)arg1 ;
@end
