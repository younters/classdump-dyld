/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MCActivityTarget.h>

@class NSMutableDictionary, NSMapTable, NSMutableSet, NSMutableArray, NSTimer, NSString;

@interface MFAccountStatus : NSObject <MCActivityTarget> {

	NSMutableDictionary* _states;
	NSMutableDictionary* _stateDetails;
	CFNetDiagnosticRef _netDiagnostics;
	NSMapTable* _clients;
	NSMutableSet* _allRegisteredAccounts;
	unsigned long long _allRegisteredTypes;
	NSMutableArray* _accountRefreshQueue;
	char _isRefreshingInternet;
	NSTimer* _refreshTimer;

}

@property (nonatomic,readonly) NSTimer * refreshTimer;              //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (assign) char isRefreshingInternet;                       //@synthesize isRefreshingInternet=_isRefreshingInternet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedStatus;
-(void)_networkChanged:(id)arg1 ;
-(void)_accountInfoChanged:(id)arg1 ;
-(void)_timedRefresh:(id)arg1 ;
-(NSTimer *)refreshTimer;
-(void)registerAccountTypes:(unsigned long long)arg1 accounts:(id)arg2 forClient:(id)arg3 ;
-(id)_registeredAccountsForClient:(id)arg1 onlyWithUnknownStatus:(char)arg2 ;
-(id)_accountsForTypes:(unsigned long long)arg1 ;
-(long long)knownAccountStatus:(id)arg1 ;
-(void)_refreshAccounts:(id)arg1 andInternet:(char)arg2 clearingStatus:(char)arg3 ;
-(void)refreshAndClearStatus:(char)arg1 ;
-(id)_allRegisteredAccounts;
-(long long)internetStatus;
-(char)isRefreshingInternet;
-(void)_setInternetStatus:(long long)arg1 ;
-(void)setIsRefreshingInternet:(char)arg1 ;
-(void)_refreshInternetStatus;
-(void)_refreshAccountStatus:(id)arg1 ;
-(void)_accountStatusUpdatedWithInfo:(id)arg1 ;
-(void)_setStatus:(long long)arg1 forAccount:(id)arg2 ;
-(void)_setStatusDetails:(id)arg1 forAccount:(id)arg2 ;
-(void)registerAccountTypes:(unsigned long long)arg1 forClient:(id)arg2 ;
-(void)registerAccounts:(id)arg1 forClient:(id)arg2 ;
-(id)registeredAccountsForClient:(id)arg1 ;
-(void)diagnoseInternetConnection;
-(long long)accountStatus:(id)arg1 ;
-(id)accountStatusDetails:(id)arg1 ;
-(void)refreshStatusForClient:(id)arg1 forceRefresh:(char)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)unregisterClient:(id)arg1 ;
@end
