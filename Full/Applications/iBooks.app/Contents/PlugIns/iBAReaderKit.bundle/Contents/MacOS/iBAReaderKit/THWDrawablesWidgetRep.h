/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THContainerRep.h>
#import <iBAReaderKit/THWPressableRep.h>
#import <iBAReaderKit/THWExpandableRep.h>
#import <iBAReaderKit/THAnimationControllerObserver.h>
#import <iBAReaderKit/THWExpandedRep.h>
#import <iBAReaderKit/TSDGestureTarget.h>
#import <iBAReaderKit/THWFreeTransformableRep.h>
#import <iBAReaderKit/THWExpandedRotationAnimationController.h>

@protocol THWExpandedRepController;
@class THAnimationController, THWPressableRepGestureTargetHandler, NSArray, THWFreeTransformableRepGestureTargetHandler, NSString, CALayer;

@interface THWDrawablesWidgetRep : THContainerRep <THWPressableRep, THWExpandableRep, THAnimationControllerObserver, THWExpandedRep, TSDGestureTarget, THWFreeTransformableRep, THWExpandedRotationAnimationController> {

	THAnimationController* mAnimationController;
	THWPressableRepGestureTargetHandler* mPressableHandler;
	NSArray* mStageChildReps;
	char _handlingPress;
	char _isPresentingExpanded;
	char _shouldUseContainerForAnimation;
	char _animationContainerProvidesShadowForAnimation;
	THWFreeTransformableRepGestureTargetHandler* mFreeTransformableHandler;
	id<THWExpandedRepController> _expandedRepController;

}

@property (assign,nonatomic) char isPresentingExpanded;                                                                    //@synthesize isPresentingExpanded=_isPresentingExpanded - In the implementation block
@property (nonatomic,retain) THWPressableRepGestureTargetHandler * pressableHandler; 
@property (assign,nonatomic) id<THWExpandedRepController> expandedRepController;                                           //@synthesize expandedRepController=_expandedRepController - In the implementation block
@property (assign,nonatomic) char shouldUseContainerForAnimation;                                                          //@synthesize shouldUseContainerForAnimation=_shouldUseContainerForAnimation - In the implementation block
@property (assign,nonatomic) char animationContainerProvidesShadowForAnimation;                                            //@synthesize animationContainerProvidesShadowForAnimation=_animationContainerProvidesShadowForAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CALayer * pressableAnimationLayer; 
@property (nonatomic,readonly) CALayer * pressableAnimationShadowLayer; 
@property (nonatomic,readonly) char wantsPressAnimation; 
@property (nonatomic,readonly) char wantsPressAction; 
@property (assign,nonatomic) char handlingPress;                                                                           //@synthesize handlingPress=_handlingPress - In the implementation block
@property (nonatomic,readonly) int pressableAction; 
@property (nonatomic,readonly) char wantsRecoilAnimation; 
@property (nonatomic,retain,readonly) THAnimationController * animationController; 
@property (nonatomic,retain,readonly) THWFreeTransformableRepGestureTargetHandler * freeTransformableHandler; 
-(id)animationLayer;
-(char)isPresentingExpanded;
-(char)shouldAnimateTargetLayer:(id)arg1 ;
-(char)expandedContentAllowPinchZoom;
-(char)shouldHitTestChildImageRep:(id)arg1 ;
-(void)freeTransformDidEnd;
-(id)styledRep;
-(id)transformLayer;
-(id)p_repToAnimate;
-(id)targetLayer;
-(char)p_isExpanded;
-(char)p_isExpanding;
-(CGAffineTransform)freeTransform;
-(THWFreeTransformableRepGestureTargetHandler *)freeTransformableHandler;
-(unsigned long long)hitTestOptions;
-(CGRect)ftcTargetFrame;
-(CGRect)rectForCompletion;
-(double)scaleForCenteredAutoRotateFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(id)expandedRotationAnimationController;
-(int)autoRotationMode;
-(void)freeTransformWillBegin;
-(CGPoint)translateForCenteredAutoRotateFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(char)p_expandedStageDrawableWantsFreeTransform;
-(char)expandedKeepCanvasCenteredDuringRotation;
-(void)willBeginHandlingGesture:(id)arg1 ;
-(id)sourceReflectionLayer;
-(CGRect)pressableNaturalBounds;
-(id)targetReflectionLayer;
-(char)shouldRecognizePressOnRep:(id)arg1 ;
-(void)p_suppressRendering:(char)arg1 ;
-(id)p_animationLayer;
-(id)hitRep:(CGPoint)arg1 withGesture:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)expandedChildInfosForPanel:(int)arg1 ;
-(void)setExpandedRepController:(id<THWExpandedRepController>)arg1 ;
-(char)shouldFadeOutAnimationLayer:(id)arg1 ;
-(void)setHandlingPress:(char)arg1 ;
-(void)setPressableHandler:(THWPressableRepGestureTargetHandler *)arg1 ;
-(char)canHandleGesture:(id)arg1 ;
-(id)targetShadowLayer;
-(void)didPresentExpanded;
-(char)freeTransformWantsShadow;
-(char)wantsPressAction;
-(int)expandedAppearanceForPanel:(int)arg1 ;
-(char)canHandleGesture:(id)arg1 forChildRep:(id)arg2 ;
-(char)shouldFadeInTargetLayer:(id)arg1 ;
-(char)freeTransformMayBeginOverRep:(id)arg1 ;
-(char)wantsPressAnimation;
-(void)setIsPresentingExpanded:(char)arg1 ;
-(id<THWExpandedRepController>)expandedRepController;
-(CALayer *)pressableAnimationShadowLayer;
-(char)shouldClickDragToPanWhenZoomed;
-(char)handlingPress;
-(id)hostICC;
-(void)animationControllerDidPresent:(id)arg1 ;
-(id)shadowAnimationLayer;
-(int)pressableAction;
-(char)pIsChildInfo:(id)arg1 inContainerInfo:(id)arg2 ;
-(char)expandedHasContentForPanel:(int)arg1 ;
-(char)isFreeTransformInProgress;
-(THWPressableRepGestureTargetHandler *)pressableHandler;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(CALayer *)pressableAnimationLayer;
-(id)p_setupContainerLayer;
-(id)sourceShadowLayer;
-(char)shouldUseContainerForAnimation;
-(char)canExpand;
-(char)expandedContentAllowDoubleTapZoom;
-(CGRect)expandedFrameInUnscaledCanvasSize;
-(id)expandedContentDrawableToPresent;
-(void)expandedWillPresentWithController:(id)arg1 ;
-(void)expandedWidgetLayoutFrameDidChangeFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 ;
-(char)p_shouldSuppressRenderingDuringExpansion;
-(void)setShouldUseContainerForAnimation:(char)arg1 ;
-(void)setAnimationContainerProvidesShadowForAnimation:(char)arg1 ;
-(char)p_isFreeTransformInProgressOnSourceRep;
-(char)meetsStageDimensionRequirementForExpanded;
-(void)p_addChildRepsToArray:(id)arg1 inContainer:(id)arg2 ;
-(char)animationContainerProvidesShadowForAnimation;
-(char)freeTransformUseTracedShadowPath;
-(char)allowTrackingContainedRep:(id)arg1 ;
-(void)addTrackingAboveChildren:(id)arg1 ;
-(THAnimationController *)animationController;
-(id)shadowPath;
-(char)handleGesture:(id)arg1 ;
-(void)dealloc;
-(char)isExpanded;
@end
