/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDProtocolTranslator, NSArray, NSDictionary, NSMutableDictionary, NSData, CKDRecordCache;

@interface CKDModifyRecordsOperation : CKDDatabaseOperation {

	CKDProtocolTranslator* _translator;
	char _retryPCSFailures;
	char _canSetPreviousProtectionEtag;
	char _retriedRecords;
	char _shouldOnlySaveAssetContent;
	char _haveOutstandingMetadatas;
	char _atomic;
	int _numPCSRetries;
	/*^block*/id _saveProgressBlock;
	/*^block*/id _saveCompletionBlock;
	/*^block*/id _deleteCompletionBlock;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	NSDictionary* _metadatasByRecordID;
	NSMutableDictionary* _modifyMetadatasByZoneID;
	long long _savePolicy;
	NSData* _clientChangeTokenData;
	NSMutableDictionary* _recordsByServerID;
	CKDRecordCache* _cache;

}

@property (assign,nonatomic) char retryPCSFailures;                                          //@synthesize retryPCSFailures=_retryPCSFailures - In the implementation block
@property (assign,nonatomic) char canSetPreviousProtectionEtag;                              //@synthesize canSetPreviousProtectionEtag=_canSetPreviousProtectionEtag - In the implementation block
@property (nonatomic,copy) id saveProgressBlock;                                             //@synthesize saveProgressBlock=_saveProgressBlock - In the implementation block
@property (nonatomic,copy) id saveCompletionBlock;                                           //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                         //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> stateTransitionGroup; 
@property (nonatomic,retain) NSArray * recordsToSave;                                        //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                    //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToDeleteToEtags;                        //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;               //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * metadatasByRecordID;                             //@synthesize metadatasByRecordID=_metadatasByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifyMetadatasByZoneID;                  //@synthesize modifyMetadatasByZoneID=_modifyMetadatasByZoneID - In the implementation block
@property (assign,nonatomic) int numPCSRetries;                                              //@synthesize numPCSRetries=_numPCSRetries - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                           //@synthesize savePolicy=_savePolicy - In the implementation block
@property (nonatomic,copy) NSData * clientChangeTokenData;                                   //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsByServerID;                        //@synthesize recordsByServerID=_recordsByServerID - In the implementation block
@property (nonatomic,retain) CKDRecordCache * cache;                                         //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) char retriedRecords;                                            //@synthesize retriedRecords=_retriedRecords - In the implementation block
@property (assign,nonatomic) char shouldOnlySaveAssetContent;                                //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (assign,nonatomic) char haveOutstandingMetadatas;                                  //@synthesize haveOutstandingMetadatas=_haveOutstandingMetadatas - In the implementation block
@property (assign,nonatomic) char atomic;                                                    //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,readonly) CKDProtocolTranslator * translator; 
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(void)setSaveProgressBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(char)makeStateTransition;
-(CKDProtocolTranslator *)translator;
-(void)setRetryPCSFailures:(char)arg1 ;
-(void)setCanSetPreviousProtectionEtag:(char)arg1 ;
-(char)_saveAssets;
-(id)saveCompletionBlock;
-(id)deleteCompletionBlock;
-(void)setCache:(CKDRecordCache *)arg1 ;
-(void)_performMetadataCallbacks;
-(char)_topoSortRecords;
-(void)_fetchRecordPCSData;
-(void)_savePackages;
-(void)_saveOnlyAssetContent;
-(char)_prepareRecordsForSave;
-(void)_verifyRecordEncryption;
-(void)_continueRecordsModify;
-(char)haveOutstandingMetadatas;
-(int)numPCSRetries;
-(NSMutableDictionary *)modifyMetadatasByZoneID;
-(void)setNumPCSRetries:(int)arg1 ;
-(void)setHaveOutstandingMetadatas:(char)arg1 ;
-(void)_performCallbacksForNonAtomicZoneMetadatas:(id)arg1 ;
-(void)_performCallbacksForAtomicZoneMetadatas:(id)arg1 ;
-(NSMutableDictionary *)recordsByServerID;
-(char)retryPCSFailures;
-(void)_clearProtectionDataForRecord:(id)arg1 ;
-(void)_handleRecordSaved:(id)arg1 metadata:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8 ;
-(void)_handleRecordDeleted:(id)arg1 metadata:(id)arg2 responseCode:(id)arg3 ;
-(NSDictionary *)metadatasByRecordID;
-(id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 metadatasByRecordID:(id)arg4 ;
-(void)setMetadatasByRecordID:(NSDictionary *)arg1 ;
-(void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2 ;
-(char)_wrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 forField:(id)arg3 ;
-(char)_wrapEncryptedDataOnRecord:(id)arg1 ;
-(id)saveProgressBlock;
-(id)_wrapAssetKey:(id)arg1 forRecord:(id)arg2 withError:(id*)arg3 ;
-(char)_addAssetToSave:(id)arg1 withRecordKey:(id)arg2 record:(id)arg3 error:(id*)arg4 ;
-(void)_performSaveAssets:(id)arg1 ;
-(void)_performSavePackages:(id)arg1 ;
-(char)canSetPreviousProtectionEtag;
-(char)_canSetPreviousProtectionEtag;
-(void)_handlePCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3 ;
-(void)_createAndSavePCSForMetadata:(id)arg1 withZonePCSData:(id)arg2 ;
-(void)_fetchExistingPCSForProvidedPCSData:(id)arg1 zonePCS:(id)arg2 metadata:(id)arg3 ;
-(void)_loadPCSDataForMetadata:(id)arg1 ;
-(void)_fetchPCSDataForMetadata:(id)arg1 ;
-(void)setModifyMetadatasByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setRecordsByServerID:(NSMutableDictionary *)arg1 ;
-(char)retriedRecords;
-(void)setRetriedRecords:(char)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSData *)clientChangeTokenData;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(NSArray *)recordsToSave;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(NSArray *)recordIDsToDelete;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(long long)savePolicy;
-(void)setSavePolicy:(long long)arg1 ;
-(char)shouldOnlySaveAssetContent;
-(void)setShouldOnlySaveAssetContent:(char)arg1 ;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(char)atomic;
-(void)setAtomic:(char)arg1 ;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(CKDRecordCache *)cache;
-(void)main;
@end
