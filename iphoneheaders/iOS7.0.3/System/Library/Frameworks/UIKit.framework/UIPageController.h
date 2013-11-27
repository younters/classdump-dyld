/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol UIPageControllerDelegate;
@class NSMutableArray, UIView, UIScrollView, UIPageControl, , UIViewController;

@interface UIPageController : UIViewController {

	NSMutableArray* _viewControllers;
	UIView* _wrapperViews[3];
	int _notificationState[3];
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	<UIPageControllerDelegate>* _delegate;
	int _pageSpacing;
	int _visibleIndex;
	int _pageCount;
	struct {
		unsigned delegateViewControllerAtIndex : 1;
		unsigned delegateWillBeginPaging : 1;
		unsigned delegateDidEndPaging : 1;
		unsigned displaysPageControl : 1;
		unsigned wraps : 1;
	}  _pageControllerFlags;

}

@property (assign,nonatomic) <UIPageControllerDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float pageSpacing; 
@property (assign,nonatomic) BOOL displaysPageControl; 
@property (nonatomic,readonly) UIViewController * visibleViewController; 
@property (assign,nonatomic) int pageCount; 
@property (assign,nonatomic) int visibleIndex; 
@property (assign,nonatomic) BOOL wraps; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(int)arg1 ;
-(BOOL)_allowsAutorotation;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(BOOL)_shouldUseOnePartRotation;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI26*)arg1 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)visibleViewController;
-(id)_scrollView;
-(int)pageCount;
-(void)_scrollView:(id)arg1 boundsDidChangeToSize:(CGSize)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_scrollViewWillBeginPaging;
-(void)_scrollViewDidEndPaging;
-(int)visibleIndex;
-(CGRect)_scrollViewFrame;
-(void)_createPageControl;
-(BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(int)arg2 ;
-(void)_adjustScrollViewContentInsets;
-(void)_replaceViewControllerAtIndex:(int)arg1 withViewController:(id)arg2 ;
-(id)_visibleViewController;
-(void)_setPreviousViewController:(id)arg1 ;
-(void)_setVisibleViewController:(id)arg1 ;
-(void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setNextViewController:(id)arg1 ;
-(id)_loadPreviousViewController;
-(id)_loadVisibleViewControllerAndNotify:(BOOL)arg1 ;
-(id)_loadNextViewController;
-(id)_previousViewController;
-(id)_nextViewController;
-(void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4 ;
-(int)_previousViewControllerNotificationState;
-(int)_visibleViewControllerNotificationState;
-(int)_nextViewControllerNotificationState;
-(void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2 ;
-(void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasPreviousViewController;
-(BOOL)_hasNextViewController;
-(void)_setNextViewControllerNotificationState:(int)arg1 ;
-(void)_setVisibleViewControllerNotificationState:(int)arg1 ;
-(void)_setPreviousViewControllerNotificationState:(int)arg1 ;
-(void)setVisibleIndex:(int)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setVisibleIndex:(int)arg1 ;
-(void)reloadViewControllerAtIndex:(int)arg1 ;
-(BOOL)_needToLoadPrevious;
-(BOOL)_needToLoadNext;
-(void)setVisibleIndex:(int)arg1 animated:(BOOL)arg2 ;
-(void)_pageChanged:(id)arg1 ;
-(BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)arg1 ;
-(void)setPageSpacing:(float)arg1 ;
-(float)pageSpacing;
-(BOOL)_needToLoadVisible;
-(BOOL)_hasVisibleViewController;
-(void)setPageCount:(int)arg1 ;
-(BOOL)wraps;
-(void)setWraps:(BOOL)arg1 ;
-(BOOL)displaysPageControl;
-(void)setDisplaysPageControl:(BOOL)arg1 ;
-(int)indexOfViewController:(id)arg1 ;
-(id)_pageControllerScrollView;
@end
