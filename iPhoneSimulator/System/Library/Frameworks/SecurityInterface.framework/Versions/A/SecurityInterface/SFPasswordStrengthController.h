/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <SecurityInterface/SFPasswordAsstController.h>

@class NSTextField, SFPasswordStrengthTextField, SFPasswordAssistantInspectorController;

@interface SFPasswordStrengthController : SFPasswordAsstController {

	NSTextField* _pwStrengthStr;
	SFPasswordStrengthTextField* _pwStrengthTitleStr;
	SFPasswordAssistantInspectorController* insp;
	NSRange _pwdStrengthWeakRange;
	NSRange _pwdStrengthFairRange;
	NSRange _pwdStrengthGoodRange;
	unsigned long long _pwdStrengthExcellent;

}
-(void)_setPasswordStrengthString:(id)arg1 ;
-(void)updateStrengthBar:(id)arg1 ;
-(void)_reCalcQualityBarWidth;
-(void)setWeakEntropyRange:(NSRange)arg1 ;
-(void)setFairEntropyRange:(NSRange)arg1 ;
-(void)setGoodEntropyRange:(NSRange)arg1 ;
-(void)setExcellentEntropy:(unsigned long long)arg1 ;
-(void)_setPasswordStrengthTitleString:(id)arg1 ;
-(void)_setPasswordStrengthTitleToolTip:(id)arg1 ;
-(void)controlTextDidCh:(id)arg1 ;
-(void)_pwaDidUpdateNewPasswordField:(id)arg1 ;
-(void)_setInspectorController:(id)arg1 ;
-(id)init;
@end
