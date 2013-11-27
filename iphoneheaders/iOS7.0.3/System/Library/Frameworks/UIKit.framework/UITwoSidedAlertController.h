/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIAlertView;

@interface UITwoSidedAlertController : NSObject {

	UIAlertView* _front;
	UIAlertView* _back;
	UIAlertView* _currentAlert;
	id _delegate;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)show;
-(void)alertViewCancel:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)dismiss;
-(void)alertSheet:(id)arg1 buttonClicked:(int)arg2 ;
-(void)didPresentAlertView:(id)arg1 ;
-(id)createFrontAlert;
-(id)createBackAlert;
-(id)frontAlert;
-(id)backAlert;
-(void)flip;
-(void)frontAlertClickedButtonAtIndex:(int)arg1 ;
-(void)backAlertClickedButtonAtIndex:(int)arg1 ;
@end
