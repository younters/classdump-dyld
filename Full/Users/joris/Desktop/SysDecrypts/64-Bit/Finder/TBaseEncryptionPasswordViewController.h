/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TViewController.h>
#import <Finder/NSTextFieldDelegate.h>

@class TSecureTextField, NSString;

@interface TBaseEncryptionPasswordViewController : TViewController <NSTextFieldDelegate> {

	TSecureTextField* _passwordFld;
	TFENode* _volumeNode;

}

@property (nonatomic,readonly) BOOL okButtonShouldBeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)okButtonPressed:(id)arg1 ;
-(BOOL)okButtonShouldBeEnabled;
-(void)setVolumeNode:(const TFENode*)arg1 ;
-(void)closeWindow;
-(void)helpButtonPressed:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
@end
