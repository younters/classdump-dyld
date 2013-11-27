/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class StocksListView, StockDetailView, StocksStatusView, UIView;

@interface StocksMainView : UIView {

	int _orientation;
	int _oldOrientation;
	int _pendingOrientation;
	BOOL _animatingPreRotation;
	BOOL _animatingRotation;
	BOOL _animatingFinalStage;
	BOOL _statusBarHidden;
	StocksListView* _listView;
	StockDetailView* _detailView;
	StocksStatusView* _statusView;
	UIView* _blurView;

}

@property (nonatomic,readonly) BOOL isRotating; 
@property (nonatomic,readonly) BOOL isAnimating; 
+(int)listRowCount;
-(void)_rotateToOrientation:(int)arg1 ;
-(void)_rotationDidFinish;
-(void)prepareForApplicationScreenshot;
-(void)performPendingAnimationsIfNeeded;
-(CGRect)detailViewFrame;
-(void)attemptRotationToOrientation:(int)arg1 ;
-(CGRect)_statusViewFrame;
-(void)setStatusBarHiddenDuringRotation:(BOOL)arg1 ;
-(void)_preRotationAnimationDidFinish;
-(void)setStatusBarOrientationDuringRotation:(int)arg1 ;
-(void)_finalAnimationDidFinish;
-(void)_animatePreRotationWithOrientation:(int)arg1 ;
-(void)_startRotation;
-(void)_animatePostRotation;
-(void)_rotateToPendingOrientationIfNeeded;
-(id)listView;
-(id)detailView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)orientation;
-(BOOL)isRotating;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)isAnimating;
-(void)_layoutSubviews;
-(id)statusView;
-(void).cxx_destruct;
@end
