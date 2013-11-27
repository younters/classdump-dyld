/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, SSAuthenticateRequest, HSCloudClient, SSAppPurchaseHistoryDatabase;

@interface ASPurchasesDatabase : NSObject {

	NSMutableArray* _authenticationCompletionBlocks;
	SSAuthenticateRequest* _authenticateRequest;
	HSCloudClient* _cloudClient;
	int _databaseChangeToken;
	int _state;
	SSAppPurchaseHistoryDatabase* _underlyingDatabase;

}

@property (nonatomic,readonly) int state;              //@synthesize state=_state - In the implementation block
+(id)sharedPurchasesDatabase;
-(void)updateFromServerWithReason:(int)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)authenticateWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)itemsWithPredicate:(id)arg1 sortColumn:(id)arg2 sortAscending:(BOOL)arg3 ;
-(void)_connectCloudClient;
-(void)_authenticationActivity:(id)arg1 ;
-(void)_setUpdateInProgress:(BOOL)arg1 isInitialLoad:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)_setState:(int)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_finishSignInWithResponse:(id)arg1 error:(id)arg2 ;
-(void).cxx_destruct;
@end
