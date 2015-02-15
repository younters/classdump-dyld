/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView, NSBitmapImageRep, NSRegion, CALayer, NSResponder, NSTimer, NSWindow;

@interface _NSAutomaticFocusRingState : NSObject {

	char automaticFocusRingShown;
	char automaticFocusRingNeedsUpdate;
	NSView* automaticFocusRingView;
	NSBitmapImageRep* automaticFocusRingBitmap;
	CGRect automaticFocusRingWindowRect;
	NSRegion* automaticFocusRingRegion;
	CALayer* automaticFocusRingLayer;
	NSResponder* previousActiveFirstResponder;
	double focusRingAnimationStartTime;
	NSTimer* animationTimer;
	CGRect animatedFocusRingBounds;
	NSWindow* alreadyFocusedWindow;
	NSView* lastNonNilFocusRingView;
	double nilFocusTime;

}

@property (assign) char automaticFocusRingShown; 
@property (assign) char automaticFocusRingNeedsUpdate; 
@property (retain) NSView * automaticFocusRingView; 
@property (retain) NSBitmapImageRep * automaticFocusRingBitmap; 
@property (assign) CGRect automaticFocusRingWindowRect; 
@property (retain) NSRegion * automaticFocusRingRegion; 
@property (retain) CALayer * automaticFocusRingLayer; 
@property (retain) NSResponder * previousActiveFirstResponder; 
@property (assign) double focusRingAnimationStartTime; 
@property (retain) NSTimer * animationTimer; 
@property (assign) CGRect animatedFocusRingBounds; 
@property (retain) NSWindow * alreadyFocusedWindow; 
@property (assign) NSView * lastNonNilFocusRingView; 
@property (assign) double nilFocusTime; 
-(char)automaticFocusRingShown;
-(void)setAutomaticFocusRingShown:(char)arg1 ;
-(char)automaticFocusRingNeedsUpdate;
-(void)setAutomaticFocusRingNeedsUpdate:(char)arg1 ;
-(NSView *)automaticFocusRingView;
-(void)setAutomaticFocusRingView:(NSView *)arg1 ;
-(NSBitmapImageRep *)automaticFocusRingBitmap;
-(void)setAutomaticFocusRingBitmap:(NSBitmapImageRep *)arg1 ;
-(CGRect)automaticFocusRingWindowRect;
-(void)setAutomaticFocusRingWindowRect:(CGRect)arg1 ;
-(NSRegion *)automaticFocusRingRegion;
-(void)setAutomaticFocusRingRegion:(NSRegion *)arg1 ;
-(CALayer *)automaticFocusRingLayer;
-(void)setAutomaticFocusRingLayer:(CALayer *)arg1 ;
-(NSResponder *)previousActiveFirstResponder;
-(void)setPreviousActiveFirstResponder:(NSResponder *)arg1 ;
-(double)focusRingAnimationStartTime;
-(void)setFocusRingAnimationStartTime:(double)arg1 ;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(CGRect)animatedFocusRingBounds;
-(void)setAnimatedFocusRingBounds:(CGRect)arg1 ;
-(NSWindow *)alreadyFocusedWindow;
-(void)setAlreadyFocusedWindow:(NSWindow *)arg1 ;
-(NSView *)lastNonNilFocusRingView;
-(void)setLastNonNilFocusRingView:(NSView *)arg1 ;
-(double)nilFocusTime;
-(void)setNilFocusTime:(double)arg1 ;
@end
