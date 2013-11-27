/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@interface WebUIModalAlertView : UIAlertView <UIAlertViewDelegate> {

	int _clickedButton;

}
+(id)modalAlertSheetWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(int)clickedButton;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
@end
