/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeinappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SSDownloadMetadata, MicroPaymentClient, NSData, NSDate, NSNumber, NSArray;

@interface MicroPayment : NSObject {

	NSString* _transactionIdentifier;
	NSString* _temporaryIdentifier;
	char _paymentIsHostedFlag;
	char _transientFailed;
	SSDownloadMetadata* _downloadMetadata;
	NSString* _actionParams;
	MicroPaymentClient* _client;
	NSData* _errorData;
	NSDate* _insertDate;
	NSDate* _originalPurchaseDate;
	NSString* _originalTransactionIdentifier;
	NSString* _productIdentifier;
	NSDate* _purchaseDate;
	NSNumber* _quantity;
	NSData* _receiptData;
	NSData* _requestData;
	NSNumber* _state;
	NSNumber* _userDSID;
	unsigned long long _itemIdentifier;
	NSArray* _hostedAssets;
	NSString* _applicationUsername;

}

@property (getter=isReady,nonatomic,readonly) char ready; 
@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (readonly) SSDownloadMetadata * downloadMetadata;                              //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
@property (nonatomic,retain) NSString * actionParams;                                    //@synthesize actionParams=_actionParams - In the implementation block
@property (nonatomic,retain) MicroPaymentClient * client;                                //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSData * errorData;                                         //@synthesize errorData=_errorData - In the implementation block
@property (nonatomic,retain) NSDate * insertDate;                                        //@synthesize insertDate=_insertDate - In the implementation block
@property (nonatomic,retain) NSDate * originalPurchaseDate;                              //@synthesize originalPurchaseDate=_originalPurchaseDate - In the implementation block
@property (nonatomic,retain) NSString * originalTransactionIdentifier;                   //@synthesize originalTransactionIdentifier=_originalTransactionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * productIdentifier;                               //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                                      //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,retain) NSNumber * quantity;                                        //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,retain) NSData * receiptData;                                       //@synthesize receiptData=_receiptData - In the implementation block
@property (nonatomic,retain) NSData * requestData;                                       //@synthesize requestData=_requestData - In the implementation block
@property (nonatomic,retain) NSNumber * state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * transactionIdentifier; 
@property (nonatomic,retain) NSNumber * userDSID;                                        //@synthesize userDSID=_userDSID - In the implementation block
@property (assign,nonatomic) unsigned long long itemIdentifier;                          //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * hostedAssets;                                     //@synthesize hostedAssets=_hostedAssets - In the implementation block
@property (assign,nonatomic) char paymentIsHostedFlag;                                   //@synthesize paymentIsHostedFlag=_paymentIsHostedFlag - In the implementation block
@property (assign,getter=isTransientFailed,nonatomic) char transientFailed;              //@synthesize transientFailed=_transientFailed - In the implementation block
@property (nonatomic,retain) NSString * applicationUsername;                             //@synthesize applicationUsername=_applicationUsername - In the implementation block
+(char)responseIsValid:(id)arg1 ;
-(NSString *)applicationUsername;
-(void)setApplicationUsername:(NSString *)arg1 ;
-(NSNumber *)quantity;
-(void)setQuantity:(NSNumber *)arg1 ;
-(id)copyPropertyListRepresentation;
-(id)copyProcessingOperations;
-(void)setPaymentIsHostedFlag:(char)arg1 ;
-(char)paymentIsHostedFlag;
-(void)setFailedWithError:(id)arg1 ;
-(void)setActionParams:(NSString *)arg1 ;
-(void)setTransientFailed:(char)arg1 ;
-(NSNumber *)userDSID;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(long long)_clientStateForServerState:(long long)arg1 ;
-(id)_temporaryIdentifier;
-(NSArray *)hostedAssets;
-(void)setOriginalPurchaseDate:(NSDate *)arg1 ;
-(void)setOriginalTransactionIdentifier:(NSString *)arg1 ;
-(void)setHostedAssets:(NSArray *)arg1 ;
-(char)isTransientFailed;
-(void)setErrorData:(NSData *)arg1 ;
-(NSString *)matchingIdentifier;
-(char)isEqualToResponse:(id)arg1 compareAllFields:(char)arg2 ;
-(void)mergeValuesFromResponse:(id)arg1 ;
-(NSData *)errorData;
-(NSDate *)insertDate;
-(void)setInsertDate:(NSDate *)arg1 ;
-(NSDate *)originalPurchaseDate;
-(NSString *)originalTransactionIdentifier;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(char)isReady;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSData *)requestData;
-(void)setRequestData:(NSData *)arg1 ;
-(void)setState:(NSNumber *)arg1 ;
-(NSNumber *)state;
-(MicroPaymentClient *)client;
-(void)setClient:(MicroPaymentClient *)arg1 ;
-(unsigned long long)itemIdentifier;
-(NSDate *)purchaseDate;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSString *)actionParams;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(SSDownloadMetadata *)downloadMetadata;
-(NSData *)receiptData;
-(void)setReceiptData:(NSData *)arg1 ;
@end
