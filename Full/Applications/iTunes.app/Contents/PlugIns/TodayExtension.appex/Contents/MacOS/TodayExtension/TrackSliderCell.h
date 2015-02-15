/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iTunes.app/Contents/PlugIns/TodayExtension.appex/Contents/MacOS/TodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TodayExtension/TodayExtension-Structs.h>
#import <AppKit/NSSliderCell.h>

@class NSImage;

@interface TrackSliderCell : NSSliderCell {

	NSImage* _sliderThumbImage;
	NSImage* _sliderTrackImage;
	NSImage* _sliderRemainingImage;

}

@property (nonatomic,retain) NSImage * sliderThumbImage;                  //@synthesize sliderThumbImage=_sliderThumbImage - In the implementation block
@property (nonatomic,retain) NSImage * sliderTrackImage;                  //@synthesize sliderTrackImage=_sliderTrackImage - In the implementation block
@property (nonatomic,retain) NSImage * sliderRemainingImage;              //@synthesize sliderRemainingImage=_sliderRemainingImage - In the implementation block
-(NSImage *)sliderThumbImage;
-(void)setSliderThumbImage:(NSImage *)arg1 ;
-(NSImage *)sliderTrackImage;
-(void)setSliderTrackImage:(NSImage *)arg1 ;
-(NSImage *)sliderRemainingImage;
-(void)setSliderRemainingImage:(NSImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)drawBarInside:(CGRect)arg1 flipped:(char)arg2 ;
-(void)drawKnob:(CGRect)arg1 ;
@end
