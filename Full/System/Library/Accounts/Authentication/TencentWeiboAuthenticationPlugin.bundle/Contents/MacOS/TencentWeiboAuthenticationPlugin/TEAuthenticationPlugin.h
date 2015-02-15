/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:56:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Accounts/Authentication/TencentWeiboAuthenticationPlugin.bundle/Contents/MacOS/TencentWeiboAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TencentWeiboAuthenticationPlugin/ACDAccountAuthenticationPlugin.h>
#import <TencentWeiboAuthenticationPlugin/SLTencentWeiboMigrationDialogListener.h>
#import <TencentWeiboAuthenticationPlugin/NSXPCListenerDelegate.h>

@protocol SLTencentWeiboMigrationDialogProtocol;
@class NSXPCListener, ACDClient, ACDAccountStore, ACAccount, ACAccountCredential, NSString;

@interface TEAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin, SLTencentWeiboMigrationDialogListener, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	id<SLTencentWeiboMigrationDialogProtocol> _migrationDialogProxy;
	ACDClient* _client;
	ACDAccountStore* _store;
	ACAccount* _account;
	ACAccountCredential* _cachedCredential;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsAccountType:(id)arg1 ;
-(void)_renewClientCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_obtainPasswordForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(char)arg5 handler:(/*^block*/id)arg6 ;
-(void)migrationDialogDidObtainPassword:(id)arg1 ;
-(void)_startListeningForMigrationDialog;
-(void)_stopListeningForMigrationDialog;
-(void)_renewMasterCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(char)_duplicateAccountExists:(id)arg1 ;
-(void)migrationDialogWasCanceled;
-(void)migrationDialogDidLaunch;
-(void)_authenticateAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)tencentWeiboIconURL;
-(char)_validateClientRenewalReturnObject:(id)arg1 ;
-(id)md5:(id)arg1 ;
-(char)_validateAuthenticationReturnObject:(id)arg1 ;
-(id)_errorForErrorCode:(id)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
@end
