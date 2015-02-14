/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow, NSImageView, NSTextField, NSSecureTextField, NSButton, NSString, NSImage;

@interface MMNATPMP : NSObject {

	NSWindow* _passwordWindow;
	NSImageView* _passwordIcon;
	NSTextField* _passwordTitleField;
	NSSecureTextField* _passwordTextField;
	NSButton* _passwordContinueButton;
	NSButton* _passwordCancelButton;
	NSString* _ipAddress;
	NSString* _ABSPassword;
	NSString* _wanMAC;
	NSString* _radioMAC;
	NSString* _ABSName;
	NSImage* _airportIcon;

}

@property (retain) NSWindow * passwordWindow;                          //@synthesize passwordWindow=_passwordWindow - In the implementation block
@property (retain) NSImageView * passwordIcon;                         //@synthesize passwordIcon=_passwordIcon - In the implementation block
@property (retain) NSTextField * passwordTitleField;                   //@synthesize passwordTitleField=_passwordTitleField - In the implementation block
@property (retain) NSSecureTextField * passwordTextField;              //@synthesize passwordTextField=_passwordTextField - In the implementation block
@property (retain) NSButton * passwordContinueButton;                  //@synthesize passwordContinueButton=_passwordContinueButton - In the implementation block
@property (retain) NSButton * passwordCancelButton;                    //@synthesize passwordCancelButton=_passwordCancelButton - In the implementation block
@property (copy) NSString * ipAddress;                                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (copy) NSString * absPassword;                               //@synthesize ABSPassword=_ABSPassword - In the implementation block
@property (copy) NSString * wanMAC;                                    //@synthesize wanMAC=_wanMAC - In the implementation block
@property (copy) NSString * radioMAC;                                  //@synthesize radioMAC=_radioMAC - In the implementation block
@property (copy) NSString * absName;                                   //@synthesize ABSName=_ABSName - In the implementation block
-(void)enableNATPMP:(id)arg1 ;
-(void)setIpAddress:(NSString *)arg1 ;
-(int)_readABSServerInfo;
-(void)_configureBaseStation:(id)arg1 ;
-(id)_ABSPasswordFromKeychain;
-(void)setAbsPassword:(NSString *)arg1 ;
-(NSString *)absPassword;
-(int)verifyABSPassword;
-(id)airportIcon;
-(int)_enableNATPMP;
-(NSString *)wanMAC;
-(NSString *)radioMAC;
-(NSString *)ipAddress;
-(void)setWanMAC:(NSString *)arg1 ;
-(void)setRadioMAC:(NSString *)arg1 ;
-(void)endCurrentSheet:(id)arg1 ;
-(NSWindow *)passwordWindow;
-(void)setPasswordWindow:(NSWindow *)arg1 ;
-(NSImageView *)passwordIcon;
-(void)setPasswordIcon:(NSImageView *)arg1 ;
-(NSSecureTextField *)passwordTextField;
-(void)setPasswordTextField:(NSSecureTextField *)arg1 ;
-(NSTextField *)passwordTitleField;
-(void)setPasswordTitleField:(NSTextField *)arg1 ;
-(NSButton *)passwordContinueButton;
-(void)setPasswordContinueButton:(NSButton *)arg1 ;
-(NSButton *)passwordCancelButton;
-(void)setPasswordCancelButton:(NSButton *)arg1 ;
-(NSString *)absName;
-(void)setAbsName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)controlTextDidChange:(id)arg1 ;
@end
