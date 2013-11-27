/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <PhotoLibrary/PLModalDimmingContained.h>

@class UIImageView, UIView, UINavigationBar, UINavigationController;

@interface PLTexturedCardViewController : UIViewController <PLModalDimmingContained> {

	UIImageView* _decorationView;
	UIImageView* _innerShadowView;
	UIView* _wrapperView;
	UINavigationBar* _navigationBar;
	UINavigationController* _navigationController;

}
-(void)dealloc;
-(void)popViewControllerAnimated:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateNavigationBarToOrientation:(int)arg1 ;
-(void)_updateWrapperViewToOrientation:(int)arg1 ;
-(CGSize)preferredSizeInParentViewController;
-(CGPoint)preferredOffsetInParentViewController;
@end
