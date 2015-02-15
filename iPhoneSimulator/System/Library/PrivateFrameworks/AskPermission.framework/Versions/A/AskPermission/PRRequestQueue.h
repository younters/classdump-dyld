/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/Versions/A/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PRRequestDelegate;
@class NSString;

@interface PRRequestQueue : NSObject {

	id<PRRequestDelegate> _delegate;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<PRRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
+(id)defaultRequestQueue;
+(id)_requestQueueForIdentifier:(id)arg1 ;
-(id)_agentRemoteObjectInterface;
-(void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_agentXPCConnection;
-(void)addRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)agentRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)askPermissionTo:(id)arg1 withRequestInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pendingRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveStorePushNotificationWithPayload:(id)arg1 ;
-(void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestToBePresentedWithReply:(/*^block*/id)arg1 ;
-(void)_userDidApproveRequestWithRequestID:(id)arg1 ;
-(void)_userDidDenyRequestWithRequestID:(id)arg1 ;
-(void)_clearCachedRequests;
-(void)_registerPushToken;
-(id)_pushToken;
-(void)_readTestValueFromTouchIDKeychain;
-(void)_writeTestValueToTouchIDKeychain;
-(void)_deleteTestValueFromTouchIDKeychain;
-(void)_didStartNewPurchaseRequestWithInfo:(id)arg1 ;
-(void)setDelegate:(id<PRRequestDelegate>)arg1 ;
-(NSString *)identifier;
-(id<PRRequestDelegate>)delegate;
-(id)initWithIdentifier:(id)arg1 ;
@end
