/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class _GKBubbleFlowTransitionInfo;

@interface GKTabBarTransitionAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	_GKBubbleFlowTransitionInfo* _transitionInfo;

}

@property (nonatomic,retain) _GKBubbleFlowTransitionInfo * transitionInfo;              //@synthesize transitionInfo=_transitionInfo - In the implementation block
-(void)_animateTransitionInTwoParts:(id)arg1 ;
-(void)_animateTransition:(id)arg1 ;
-(id)transitionInfo;
-(void)setTransitionInfo:(id)arg1 ;
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
@end
