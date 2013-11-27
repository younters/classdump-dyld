/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountsUI/ACUIViewController.h>

@class NSString, PSTextFieldSpecifier, PSSpecifier;

@interface WEPAccountCreationController : ACUIViewController {

	NSString* _screenName;
	NSString* _email;
	NSString* _password;
	NSString* _verify;
	NSString* _gender;
	BOOL _geoEnabled;
	PSTextFieldSpecifier* _emailSpecifier;
	PSSpecifier* _signUpSpecifier;
	PSSpecifier* _legalSpecifier;

}
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(void)_createAccount;
-(void)_signUpButtonClicked:(id)arg1 ;
-(void)setScreenName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)screenNameWithSpecifier:(id)arg1 ;
-(BOOL)_validateValues;
-(void)setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(id)verifyWithSpecifier:(id)arg1 ;
-(void)setEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)emailWithSpecifier:(id)arg1 ;
-(void)setGender:(id)arg1 withSpecifier:(id)arg2 ;
-(id)genderWithSpecifier:(id)arg1 ;
-(void)setLocation:(id)arg1 withSpecifier:(id)arg2 ;
-(id)locationWithSpecifier:(id)arg1 ;
-(void)_legalTermsOfServiceLinkTapped:(id)arg1 ;
-(BOOL)_haveEnoughValuesForValidation;
-(BOOL)_isEmailAddressValid;
-(void)_presentInvalidEmailAddressAlert;
-(void)_presentScreenNameTooLongAlert;
-(BOOL)_isScreenNameValid;
-(void)_presentScreenNameInvalidAlert;
-(void)_presentPasswordVerifyDoNotMatchAlert;
-(BOOL)_isPasswordBlackListed;
-(void)_presentPasswordTooSimpleAlert;
-(void)_presentPasswordTooLongAlert;
-(void)_presentResponseError:(id)arg1 ;
-(void)_incrementNewAccountCounter;
-(void)_setGeotagAccountSetting:(BOOL)arg1 ;
-(void)_presentErrorCreatingAccount;
-(void)_presentPasswordTooShortAlert;
-(id)_localizedMessageForErrorCode:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)propertyValueChanged:(id)arg1 ;
-(void)_updateDoneButton;
-(void)updateNavButtons;
-(void)_cancelButtonClicked:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(id)gender;
-(void)setGender:(id)arg1 ;
-(void).cxx_destruct;
@end
