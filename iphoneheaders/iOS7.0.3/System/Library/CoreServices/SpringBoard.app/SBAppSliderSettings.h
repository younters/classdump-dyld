/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UISettings.h>

@class SBFAnimationSettings, _UIScreenEdgePanRecognizerSettings;

@interface SBAppSliderSettings : _UISettings {

	int _simplicityOptions;
	SBFAnimationSettings* _dosidoAnimationSettings;
	_UIScreenEdgePanRecognizerSettings* _gestureSettings;

}

@property (assign) int simplicityOptions;                                             //@synthesize simplicityOptions=_simplicityOptions - In the implementation block
@property (retain) SBFAnimationSettings * dosidoAnimationSettings;                    //@synthesize dosidoAnimationSettings=_dosidoAnimationSettings - In the implementation block
@property (retain) _UIScreenEdgePanRecognizerSettings * gestureSettings;              //@synthesize gestureSettings=_gestureSettings - In the implementation block
+(id)settingsControllerModule;
-(BOOL)shouldSimplifyForOptions:(int)arg1 ;
-(void)setSimplicityOptions:(int)arg1 ;
-(id)dosidoAnimationSettings;
-(int)simplicityOptions;
-(void)setDosidoAnimationSettings:(id)arg1 ;
-(id)gestureSettings;
-(void)setGestureSettings:(id)arg1 ;
-(void)setDefaultValues;
@end
