/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <ShareKit/SHKBorderlessEffectWindow.h>

@class CALayer, NSWindow;

@interface SHKDimAndShadowWindow : SHKBorderlessEffectWindow {

	char animatesTransitions;
	CALayer* dimLayer;
	CALayer* shadowLayer;
	CALayer* shadowCenterKnockoutLayer;
	NSWindow* _remoteWindow;
	NSWindow* _sourceWindow;

}

@property (__weak) NSWindow * remoteWindow;               //@synthesize remoteWindow=_remoteWindow - In the implementation block
@property (__weak) NSWindow * sourceWindow;               //@synthesize sourceWindow=_sourceWindow - In the implementation block
@property (assign) char animatesTransitions; 
-(void)setSourceWindow:(NSWindow *)arg1 ;
-(NSWindow *)sourceWindow;
-(void)setRemoteWindow:(NSWindow *)arg1 ;
-(NSWindow *)remoteWindow;
-(id)initWithFrame:(CGRect)arg1 noSourceWindow:(char)arg2 ;
-(void)updateShadowFrame:(CGRect)arg1 ;
-(void)animateLayersToFrame:(CGRect)arg1 oldFrame:(CGRect)arg2 ;
-(void)startTransitionInWithDimFrame:(CGRect)arg1 serviceScreenFrame:(CGRect)arg2 initialLayerTransform:(CGAffineTransform)arg3 ;
-(void)continueTransitionInWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(char)arg2 ;
-(void)continueTransitionInWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(char)arg2 currentMediaTime:(double)arg3 ;
-(void)startTransitionOut;
-(void)setAnimatesTransitions:(char)arg1 ;
-(char)animatesTransitions;
@end
