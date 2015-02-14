/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface BKGradientView : NSView {

	NSColor* _midColor;
	char _roundedCorners;
	char _startsFromCenter;
	char _horizontal;
	NSColor* _color1;
	NSColor* _color2;
	double _blendPoint;

}

@property (nonatomic,copy) NSColor * color1;                                   //@synthesize color1=_color1 - In the implementation block
@property (nonatomic,copy) NSColor * color2;                                   //@synthesize color2=_color2 - In the implementation block
@property (assign,nonatomic) double blendPoint;                                //@synthesize blendPoint=_blendPoint - In the implementation block
@property (assign,nonatomic) char roundedCorners;                              //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) char startsFromCenter;                            //@synthesize startsFromCenter=_startsFromCenter - In the implementation block
@property (assign,getter=isHorizontal,nonatomic) char horizontal;              //@synthesize horizontal=_horizontal - In the implementation block
-(void)updateMidColor;
-(char)roundedCorners;
-(void)clipCorners;
-(void)setBlendPoint:(double)arg1 ;
-(void)setStartsFromCenter:(char)arg1 ;
-(void)setColor1:(NSColor *)arg1 ;
-(void)setColor2:(NSColor *)arg1 ;
-(NSColor *)color1;
-(NSColor *)color2;
-(double)blendPoint;
-(void)setRoundedCorners:(char)arg1 ;
-(char)startsFromCenter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHorizontal:(char)arg1 ;
-(char)isHorizontal;
@end
