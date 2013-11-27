/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertViewAccessibility_super.h>

@interface UIAlertViewAccessibility : UIAlertViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)_accessibilitySendAlert;
-(void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2 ;
-(void)show;
-(BOOL)accessibilityPerformEscape;
-(void)_setTextFieldsHidden:(BOOL)arg1 ;
-(void)_slideSheetOut:(BOOL)arg1 ;
-(void)_performPopoutAnimationAnimated:(BOOL)arg1 coveredBySpringBoardAlert:(BOOL)arg2 ;
-(void)_performPopup:(BOOL)arg1 animationType:(int)arg2 revealedBySpringBoardAlert:(BOOL)arg3 ;
-(void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2 atOffset:(float)arg3 ;
@end
