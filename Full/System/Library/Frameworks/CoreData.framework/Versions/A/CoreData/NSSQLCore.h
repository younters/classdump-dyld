/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStore.h>
#import <CoreData/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSQLModel, NSSQLAdapter, NSSQLConnection, NSMutableArray, NSManagedObjectContext, NSSQLEntity, NSSQLRowCache, NSSet, NSSaveChangesRequest, NSMutableSet, NSMutableDictionary, NSSQLRow, NSString;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {

	NSSQLModel* _model;
	NSSQLAdapter* _adapter;
	NSSQLConnection* _connection;
	NSMutableArray* _channels;
	NSManagedObjectContext* _currentContext;
	NSSQLEntity* _lastEntity;
	NSSQLRowCache* _rowCache;
	NSSet* _newInserts;
	CFDictionaryRef _changeCache;
	CFDictionaryRef _insertCache;
	CFDictionaryRef _toManyCache;
	NSSaveChangesRequest* _currentSaveRequest;
	NSMutableSet* _rowsInCurrentSave;
	int _lazyFaultDebugLevel;
	NSMutableDictionary* _batchFaultBuffer;
	NSMutableDictionary* _batchToManyFaultBuffer;
	NSScalarObjectID* _currentGlobalID;
	NSSQLRow* _currentRow;
	id _observer;
	NSMutableSet* _missingObjectGIDs;
	NSMutableDictionary* _storeMetadata;
	NSMutableArray* _externalDataReferencesToSave;
	NSMutableSet* _externalDataReferencesToDelete;
	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	int _transactionInMemorySequence;
	int _moreOtherReserved;
	struct {
		unsigned beganTransaction : 1;
		unsigned ignoreEntityCaching : 1;
		unsigned storeMetadataClean : 1;
		unsigned useToManyCaching : 1;
		unsigned useSyntaxColoredLogging : 1;
		unsigned checkedExternalReferences : 1;
		unsigned fileProtectionType : 3;
		unsigned _RESERVED : 23;
	}  _sqlCoreFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(char)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(Class)migrationManagerClass;
+(char)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(char)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(void)setDebugDefault:(int)arg1 ;
+(char)SQLGenerationV1Default;
+(char)coloredLoggingDefault;
+(int)debugDefault;
+(char)sanityCheckFileAtURL:(id)arg1 error:(id*)arg2 ;
+(void)setColoredLoggingDefault:(char)arg1 ;
+(void)setSQLGenerationV1Default:(char)arg1 ;
+(void)initialize;
-(id)metadata;
-(id)model;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(char)loadMetadata:(id*)arg1 ;
-(Class)_objectIDClass;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(char)load:(id*)arg1 ;
-(const id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(char)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(id)externalDataReferencesDirectory;
-(id)entityForEntityDescription:(id)arg1 ;
-(id)_externalDataLinksDirectory;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(CFArrayRef)_deleteAllRowsNoRelationshipIntegrityForEntityWithAllSubentities:(id)arg1 ;
-(void)setDatabaseUUID:(id)arg1 ;
-(id)databaseUUID;
-(void)_setMetadata:(id)arg1 ;
-(id)rowForObjectID:(id)arg1 ;
-(id)entityForFetchRequest:(id)arg1 ;
-(id)adapter;
-(void)commitTransaction;
-(void)rollbackTransaction;
-(void)setExclusiveLockingMode:(char)arg1 ;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(void)_performPostSaveTasks;
-(void)_disconnect;
-(id)channels;
-(void)resetExternalDataReferencesDirectories;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(NSScalarObjectID*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)_newAdapterForModel:(id)arg1 ;
-(void)_ensureDatabaseMatchesModel;
-(id)rowCache;
-(id)rowForObjectID:(id)arg1 after:(double)arg2 ;
-(id)fetchRowForObjectID:(NSScalarObjectID*)arg1 ;
-(id)newFetchedPKsForSourceID:(NSScalarObjectID*)arg1 andRelationship:(id)arg2 ;
-(void)_beginTransaction:(id)arg1 ;
-(void)beginTransaction_core;
-(void)commitTransaction_core;
-(void)rollbackTransaction_core;
-(id)changeSnapshotForObjectID:(id)arg1 ;
-(void)recordChangeSnapshot:(id)arg1 forObjectID:(id)arg2 ;
-(id)_availableChannelFromRegisteredChannels;
-(void)registerChannel:(id)arg1 ;
-(id)_availableChannel;
-(id)externalDataLinksDirectory;
-(int)fileProtectionLevel;
-(SCD_Struct_NS13*)_newRawRowsForFetch:(id)arg1 ;
-(void)appendFetchResultSet:(SCD_Struct_NS13*)arg1 toData:(id)arg2 ;
-(SCD_Struct_NS13*)_newRawRowsForFetchPlan:(id)arg1 ;
-(SCD_Struct_NS13*)_newRawRows:(id)arg1 cached:(char)arg2 statement:(id)arg3 ;
-(id)_obtainOpenChannel;
-(id)_prepareDictionaryResultsFromResultSet:(SCD_Struct_NS13*)arg1 usingFetchPlan:(id)arg2 ;
-(id)_prepareResultsFromResultSet:(SCD_Struct_NS13*)arg1 usingFetchPlan:(id)arg2 withMatchingRows:(id*)arg3 ;
-(void)_prefetchWithFetchRequest:(id)arg1 withObjectIDs:(id)arg2 inContext:(id)arg3 ;
-(long long)_knownPrimaryKeyForObjectID:(id)arg1 ;
-(unsigned)_knownEntityKeyForObjectID:(id)arg1 ;
-(void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned long long*)arg4 reorderedIndexes:(char**)arg5 ;
-(unsigned)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4 ;
-(long long)_knownPrimaryKeyForObject:(id)arg1 ;
-(unsigned)_knownEntityKeyForObject:(id)arg1 ;
-(unsigned)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3 ;
-(id)externalDataReferencesToDelete;
-(void)recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(char)arg4 ;
-(id)entityForObject:(id)arg1 ;
-(id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalSnapshot:(id)arg3 value:(id)arg4 added:(id)arg5 deleted:(id)arg6 sourceRowPK:(long long)arg7 properties:(id)arg8 sourceObject:(id)arg9 newIndexes:(unsigned long long*)arg10 reorderedIndexes:(char**)arg11 ;
-(id)findOrCreateChangeSnapshotForGlobalID:(id)arg1 ;
-(id)correlationTableUpdateTrackerForRelationship:(id)arg1 ;
-(void)insertEntity:(id)arg1 intoOrderingArray:(id)arg2 withDependencies:(id)arg3 processingSet:(id)arg4 ;
-(void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(char)arg4 ;
-(void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1 ;
-(void)createCorrelationTrackerUpdatesForDeletedObject:(id)arg1 ;
-(void)beginTransaction_NotificationFree;
-(void)commitTransaction_NotificationFree;
-(CFArrayRef)_rowsForConflictDetection:(id)arg1 withChannel:(id)arg2 ;
-(id)_newObjectGraphStyleForSQLRow:(id)arg1 withObject:(id)arg2 ;
-(id)_newConflictRecordForObject:(id)arg1 originalRow:(id)arg2 newRow:(id)arg3 ;
-(void)forgetChangeSnapshotForObjectID:(id)arg1 ;
-(char)_performFastConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2 ;
-(void)writeChanges;
-(void)_cleanUpAfterSave;
-(id)newRowsForFetchPlan:(id)arg1 ;
-(id)_newRowsForFetchPlan:(id)arg1 selectedBy:(SEL)arg2 withArgument:(id)arg3 ;
-(void)prepareForSave:(id)arg1 ;
-(void)performChanges;
-(id)writeExternalDataReferences;
-(void)commitChanges:(id)arg1 ;
-(void)deleteExternalDataReferences:(id)arg1 ;
-(void)rollbackChanges;
-(id)_performExhaustiveConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2 ;
-(void)beginBatchUpdateOnConnection:(id)arg1 ;
-(id)objectsForFetchRequest:(id)arg1 inContext:(id)arg2 ;
-(id)countForFetchRequest:(id)arg1 inContext:(id)arg2 ;
-(void)rollbackBatchUpdateOnConnection:(id)arg1 ;
-(void)commitBatchUpdateOnConnection:(id)arg1 ;
-(id)saveChanges:(id)arg1 ;
-(id)performBatchUpdate:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)_checkAndRepairCorrelationTables:(char)arg1 storeVersionNumber:(id)arg2 ;
-(id)_dissectCorrelationTableCreationSQL:(id)arg1 ;
-(id)_collectSkewedComponents:(id*)arg1 ;
-(void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(char)arg4 ;
-(id)_loadAndSetMetadata;
-(id)_loadAndSetMetadataReadOnly;
-(id)rawSQLTextForToManyFaultStatement:(id)arg1 stripBindVariables:(char)arg2 swapEKPK:(char)arg3 ;
-(id)hackQueryForManyToManyPrefetching:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3 ;
-(id)newFaultingPredicateForSourceID:(NSScalarObjectID*)arg1 andRelationship:(id)arg2 ;
-(id)newSortDescriptorForOrderedRelationship:(id)arg1 ;
-(id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3 ;
-(void)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5 ;
-(void)generatePrimaryKeysForEntity:(id)arg1 ;
-(NSScalarObjectID*)newForeignKeyID:(long long)arg1 entity:(id)arg2 ;
-(void)_useModel:(id)arg1 ;
-(void)_cacheRows:(id)arg1 ;
-(void)_uncacheRows:(id)arg1 ;
-(id)newAdapterForModel:(id)arg1 ;
-(void)unregisterChannel:(id)arg1 ;
-(id)createChannel;
-(id)availableChannel;
-(id)_newRowDataForFetch:(id)arg1 error:(id*)arg2 ;
-(id)_processRawRows:(SCD_Struct_NS13*)arg1 forFetchPlan:(id)arg2 selectedBy:(SEL)arg3 withArgument:(id)arg4 ;
-(unsigned)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 orderedManyToMany:(id)arg3 ;
-(id)_entityForObject:(id)arg1 ;
-(id)externalLocationForFileWithUUID:(id)arg1 ;
-(id)safeguardLocationForFileWithUUID:(id)arg1 ;
-(id)externalDataReferencesToSave;
-(id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2 ;
-(void)_purgeRowCache;
-(void)recomputePrimaryKeyMaxForEntities:(id)arg1 ;
-(id)_newReservedKeysForEntities:(id)arg1 counts:(id)arg2 ;
-(id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2 ;
-(id)connection;
-(void)beginTransaction;
-(void)dealloc;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)identifier;
-(id)currentContext;
-(id)type;
-(void)setCurrentContext:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(id)refreshObjects:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
@end
