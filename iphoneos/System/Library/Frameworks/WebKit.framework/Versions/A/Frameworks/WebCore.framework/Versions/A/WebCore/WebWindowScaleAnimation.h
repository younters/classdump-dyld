/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <AppKit/NSAnimation.h>

@class NSWindow, NSAnimation;

@interface WebWindowScaleAnimation : NSAnimation {

	CGRect _initialFrame;
	CGRect _finalFrame;
	CGRect _realFrame;
	NSWindow* _window;
	NSAnimation* _subAnimation;
	double _hintedDuration;

}
-(CGRect)currentFrame;
-(id)initWithHintedDuration:(double)arg1 window:(id)arg2 initalFrame:(CGRect)arg3 finalFrame:(CGRect)arg4 ;
-(void)setSubAnimation:(id)arg1 ;
-(double)additionalDurationNeededToReachFinalFrame;
-(id)init;
-(void)dealloc;
-(void)setDuration:(double)arg1 ;
-(void)startAnimation;
-(void)stopAnimation;
-(void)setCurrentProgress:(float)arg1 ;
-(float)currentValue;
-(void)setWindow:(id)arg1 ;
@end

