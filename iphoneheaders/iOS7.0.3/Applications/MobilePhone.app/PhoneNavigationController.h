/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UINavigationController.h>
#import <FaceTime/PhoneTabViewController.h>

@protocol PhoneTabViewController;
@class UIViewController;

@interface PhoneNavigationController : UINavigationController <PhoneTabViewController> {

	UIViewController<PhoneTabViewController>* _rootController;

}
+(id)tabBarIconImage;
+(id)tabBarIconImageSelected;
+(id)tabBarIconName;
+(int)tabViewType;
+(BOOL)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2 ;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)_updateRootViewController;
-(void)dealloc;
-(id)rootViewController;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
@end
