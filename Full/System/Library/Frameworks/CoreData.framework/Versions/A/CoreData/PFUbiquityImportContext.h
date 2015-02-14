/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _PFUbiquityStack, PFUbiquityStoreMetadata, PFUbiquityPeer, PFUbiquityKnowledgeVector, NSString, PFUbiquityTransactionLog, PFUbiquityStoreSaveSnapshot, NSDictionary, NSMutableDictionary, PFUbiquitySwitchboardCacheWrapper, PFUbiquityBaselineHeuristics;

@interface PFUbiquityImportContext : NSObject {

	_PFUbiquityStack* _stack;
	PFUbiquityStoreMetadata* _storeMetadata;
	PFUbiquityPeer* _actingPeer;
	PFUbiquityKnowledgeVector* _kv;
	PFUbiquityKnowledgeVector* _currentKnowledgeVector;
	NSString* _exportingPeerID;
	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquityStoreSaveSnapshot* _storeSaveSnapshot;
	NSDictionary* _globalIDToLocalIDURICache;
	NSMutableDictionary* _globalIDToFetchedObject;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;
	PFUbiquityBaselineHeuristics* _heuristics;

}

@property (nonatomic,retain) _PFUbiquityStack * stack;                                        //@synthesize stack=_stack - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata;                         //@synthesize storeMetadata=_storeMetadata - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeer * actingPeer;                                   //@synthesize actingPeer=_actingPeer - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * knowledgeVector;                     //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKnowledgeVector;              //@synthesize currentKnowledgeVector=_currentKnowledgeVector - In the implementation block
@property (nonatomic,retain) NSString * exportingPeerID;                                      //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityTransactionLog * transactionLog;                       //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * storeSaveSnapshot;                 //@synthesize storeSaveSnapshot=_storeSaveSnapshot - In the implementation block
@property (nonatomic,retain) NSDictionary * globalIDToLocalIDURICache;                        //@synthesize globalIDToLocalIDURICache=_globalIDToLocalIDURICache - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;                //@synthesize cacheWrapper=_cacheWrapper - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * globalIDToFetchedObject;                 //@synthesize globalIDToFetchedObject=_globalIDToFetchedObject - In the implementation block
@property (nonatomic,retain) PFUbiquityBaselineHeuristics * heuristics;                       //@synthesize heuristics=_heuristics - In the implementation block
-(NSString *)exportingPeerID;
-(PFUbiquityPeer *)actingPeer;
-(PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(PFUbiquityTransactionLog *)transactionLog;
-(void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(void)setGlobalIDToLocalIDURICache:(NSDictionary *)arg1 ;
-(char)prefetchManagedObjectsInContext:(id)arg1 error:(id*)arg2 ;
-(id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2 ;
-(void)setHeuristics:(PFUbiquityBaselineHeuristics *)arg1 ;
-(void)setStack:(_PFUbiquityStack *)arg1 ;
-(void)setStoreMetadata:(PFUbiquityStoreMetadata *)arg1 ;
-(void)setExportingPeerID:(NSString *)arg1 ;
-(void)setTransactionLog:(PFUbiquityTransactionLog *)arg1 ;
-(void)setStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg1 ;
-(PFUbiquityStoreSaveSnapshot *)storeSaveSnapshot;
-(void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setCurrentKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(_PFUbiquityStack *)stack;
-(NSDictionary *)globalIDToLocalIDURICache;
-(NSMutableDictionary *)globalIDToFetchedObject;
-(PFUbiquityKnowledgeVector *)currentKnowledgeVector;
-(PFUbiquityBaselineHeuristics *)heuristics;
-(PFUbiquityStoreMetadata *)storeMetadata;
-(void)setActingPeer:(PFUbiquityPeer *)arg1 ;
-(id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end
