/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AmbientDisplay.framework/Versions/A/Resources/Calibration Assistant.app/Contents/MacOS/Calibration Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calibration Assistant/Calibration Assistant-Structs.h>
#import <AppKit/NSView.h>

@class AMBDUILevelView, AMBDUIColorView, NSSlider, AMBDUIRGBObject;

@interface AMBDUIView : NSView {

	AMBDUILevelView* _blackLevelView;
	AMBDUIColorView* _colorView;
	NSSlider* _blackSlider;
	float* _redLUT;
	float* _greenLUT;
	float* _blueLUT;
	AMBDUIRGBObject* _whitePoint;
	AMBDUIRGBObject* _blackPoint;
	AMBDUIRGBObject* _blackPointPrevious;
	AMBDUIRGBObject* _whitePointPrevious;
	unsigned _displayID;
	int _adjustmentMethod;
	BOOL _useFramework;
	BOOL _canAdjust;
	BOOL _parameterChanged;
	BOOL _hasChanged;
	char updateOrSkip;
	unsigned launchedDisplayID;

}

@property (assign) unsigned launchedDisplayID; 
-(void)setLaunchedDisplayID:(unsigned)arg1 ;
-(char)resetLUTToDefault:(unsigned)arg1 ;
-(void)centerUI;
-(BOOL)hasChanged;
-(void)handleDisplayRemoved:(unsigned)arg1 ;
-(void)setHasChanged:(BOOL)arg1 ;
-(void)blackSliderChanged:(id)arg1 ;
-(void)screenChanged:(id)arg1 ;
-(void)checkForParameterChange;
-(void)resetLUTWithFramework:(unsigned)arg1 ;
-(void)resetLUTDirectly:(unsigned)arg1 ;
-(void)setWhitePoint:(id)arg1 ;
-(void)setBlackPoint:(id)arg1 ;
-(BOOL)setUIWithWhite:(id)arg1 andBlack:(id)arg2 ;
-(void)adjustLUT;
-(void)setLUTWithFramework;
-(void)setLUTDirectly;
-(void)updateReferenceTable:(unsigned)arg1 ;
-(id)blackPoint;
-(int)adjustmentMethod;
-(void)setAdjustmentMethod:(int)arg1 ;
-(int)useFramework;
-(void)setUseFramework:(BOOL)arg1 ;
-(BOOL)canAdjust;
-(void)setCanAdjust:(BOOL)arg1 ;
-(unsigned)launchedDisplayID;
-(void)setDisplayID:(unsigned)arg1 ;
-(unsigned)displayID;
-(id)whitePoint;
-(id)initWithFrame:(CGRect)arg1 ;
@end
