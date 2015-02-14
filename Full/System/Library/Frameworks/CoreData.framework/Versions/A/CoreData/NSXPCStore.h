/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSIncrementalStore.h>

@class NSPersistentStoreCache, NSMutableDictionary, NSXPCStoreConnection, NSSQLModel, NSSQLCore, NSString, NSXPCStoreNotificationObserver, NSGenerationToken;

@interface NSXPCStore : NSIncrementalStore {

	NSPersistentStoreCache* _cache;
	NSMutableDictionary* _changeCache;
	NSXPCStoreConnection* _myConnection;
	NSSQLModel* _model;
	NSSQLCore* _core;
	NSString* _sanityCheckToken;
	NSXPCStoreNotificationObserver* _observer;
	NSGenerationToken* _identifier;
	NSString* _remoteStoreChangedNotificationName;

}

@property (copy,readonly) NSString * remoteStoreChangedNotificationName;              //@synthesize remoteStoreChangedNotificationName=_remoteStoreChangedNotificationName - In the implementation block
+(int)debugDefault;
+(char)_isOnExtendedTimeout;
+(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
+(void)initialize;
+(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(id)serviceName;
-(id)model;
-(void)disconnect;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(char)loadMetadata:(id*)arg1 ;
-(Class)_objectIDClass;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(char)load:(id*)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)_cachedRowForObjectWithID:(id)arg1 ;
-(void)_clearCachedRowForObjectWithID:(id)arg1 ;
-(id)entityForEntityDescription:(id)arg1 ;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(id)sqlCore;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(NSScalarObjectID*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(NSScalarObjectID*)newForeignKeyID:(long long)arg1 entity:(id)arg2 ;
-(id)_cachedRowForRelationship:(id)arg1 onObjectWithID:(id)arg2 ;
-(void)_updateRollbackCacheForObjectWithID:(id)arg1 relationship:(id)arg2 withValuesFrom:(id)arg3 ;
-(void)setSQLCore:(id)arg1 ;
-(void)teardownRemoteStoreObserver;
-(id)retainedConnection;
-(void)disconnectConnection:(id)arg1 ;
-(id)sendMessage:(id)arg1 fromContext:(id)arg2 interrupts:(unsigned long long*)arg3 error:(id*)arg4 ;
-(NSString *)remoteStoreChangedNotificationName;
-(void)setupRemoteStoreObserver;
-(void)cacheFetchedRows:(id)arg1 forManagedObjects:(id)arg2 ;
-(void)decodePrefetchArray:(id)arg1 forSources:(id)arg2 context:(id)arg3 ;
-(id)decodeResults:(id)arg1 forFetch:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)_cacheNodePropertiesFromObject:(id)arg1 ;
-(id)encodeObjectsForSave:(id)arg1 forDelete:(char)arg2 ;
-(id)encodeSaveRequest:(id)arg1 forceInsertsToUpdates:(char)arg2 ;
-(void)_commitChangesForRequest:(id)arg1 ;
-(id)_executeSaveRequest:(id)arg1 forceInsertsToUpdates:(char)arg2 withContext:(id)arg3 interrupts:(unsigned long long*)arg4 error:(id*)arg5 ;
-(id)executeSaveRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)executePullChangesRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_createAndCacheRowForObjectWithID:(id)arg1 propertyValues:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)decodeResults:(id)arg1 forFaultOfObjectWithID:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)decodeValue:(id)arg1 forRelationship:(id)arg2 onSource:(id)arg3 inContext:(id)arg4 error:(id*)arg5 ;
-(void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 ;
-(id)_sanityCheckToken;
-(void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 withTimestamp:(double)arg4 ;
-(void)decodePrefetchResult:(id)arg1 forSources:(id)arg2 context:(id)arg3 ;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(void)dealloc;
-(void)setIdentifier:(id)arg1 ;
-(id)type;
-(void)setURL:(id)arg1 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
@end
