/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Access/DefaultAccessPlugin.bundle/DefaultAccessPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DefaultAccessPlugin/ACDAccountAccessPlugin.h>

@interface ACDefaultAccessPlugin : NSObject <ACDAccountAccessPlugin>
+(id)_supportedAccountTypeIdentifiers;
+(id)_defaultAccessEntitlementForAccountType:(id)arg1 ;
+(BOOL)_accessAlertSupportedByAccountType:(id)arg1 ;
+(id)_fullAccessEntitlementForAccountType:(id)arg1 ;
+(BOOL)supportsAccountTypeWithIdentifier:(id)arg1 ;
-(BOOL)_shouldGrantClient:(id)arg1 defaultAccessToAccountType:(id)arg2 ;
-(void)_presentAccessAlertforClient:(id)arg1 onAccountType:(id)arg2 withHandler:(/*^block*/ id)arg3 ;
-(BOOL)_shouldGrantClient:(id)arg1 unrestrictedAccessToAccountType:(id)arg2 ;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(BOOL)arg5 completion:(/*^block*/ id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/ id)arg3 ;
@end
