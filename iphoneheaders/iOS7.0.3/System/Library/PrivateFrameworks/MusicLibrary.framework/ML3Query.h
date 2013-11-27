/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@class ML3MusicLibrary, ML3Predicate, NSArray, NSString, ML3AggregateQuery;

@interface ML3Query : NSObject <NSCoding> {

	ML3MusicLibrary* _library;
	Class _entityClass;
	ML3Predicate* _predicate;
	NSArray* _orderingTerms;
	NSString* _propertyToCount;
	ML3AggregateQuery* _nonDirectAggregateQuery;
	BOOL _usingSections;
	BOOL _ignoreSystemFilterPredicates;
	BOOL _filtersOnDynamicProperties;

}

@property (readonly) ML3MusicLibrary * library;                                          //@synthesize library=_library - In the implementation block
@property (readonly) Class entityClass;                                                  //@synthesize entityClass=_entityClass - In the implementation block
@property (readonly) ML3Predicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (readonly) ML3Predicate * predicateIncludingSystemwidePredicates; 
@property (readonly) NSArray * orderingTerms;                                            //@synthesize orderingTerms=_orderingTerms - In the implementation block
@property (readonly) NSString * propertyToCount;                                         //@synthesize propertyToCount=_propertyToCount - In the implementation block
@property (readonly) BOOL hasEntities; 
@property (readonly) long long anyEntityPersistentID; 
@property (readonly) unsigned countOfEntities; 
@property (readonly) ML3AggregateQuery * nonDirectAggregateQuery;                        //@synthesize nonDirectAggregateQuery=_nonDirectAggregateQuery - In the implementation block
@property (readonly) NSString * sectionProperty; 
@property (readonly) BOOL usingSections;                                                 //@synthesize usingSections=_usingSections - In the implementation block
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates;                          //@synthesize ignoreSystemFilterPredicates=_ignoreSystemFilterPredicates - In the implementation block
@property (readonly) NSString * selectPersistentIDsSQL; 
@property (readonly) NSString * selectCountSQL; 
@property (readonly) NSString * persistentIDProperty; 
@property (readonly) BOOL filtersOnDynamicProperties;                                    //@synthesize filtersOnDynamicProperties=_filtersOnDynamicProperties - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)sections;
-(id)predicate;
-(id)library;
-(BOOL)hasEntities;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/ id)arg1 ;
-(unsigned)countOfEntities;
-(Class)entityClass;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(BOOL)ignoreSystemFilterPredicates;
-(id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(BOOL)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7 ;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(id)orderingTerms;
-(id)nonDirectAggregateQuery;
-(id)propertyToCount;
-(BOOL)usingSections;
-(void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(BOOL)arg4 cancelHandler:(/*^block*/ id)arg5 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned)arg3 ;
-(id)persistentIDParameters;
-(BOOL)hasRowForColumn:(id)arg1 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 ;
-(unsigned)countOfDistinctRowsForColumn:(id)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 ;
-(id)selectSectionsSQL;
-(id)sectionProperty;
-(id)sectionsParameters;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/ id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(id)nameOrderPropertyForProperty:(id)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 distinct:(BOOL)arg6 limit:(unsigned)arg7 ;
-(id)predicateIncludingSystemwidePredicates;
-(id)persistentIDProperty;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 distinct:(BOOL)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(BOOL)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(BOOL)arg3 ;
-(long long)anyEntityPersistentID;
-(BOOL)deleteAllEntitiesFromLibrary;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 ;
-(id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2 ;
-(id)selectUnorderedPersistentIDsSQL;
-(id)selectPersistentIDsSQL;
-(id)selectCountSQL;
-(id)countStatementParameters;
-(BOOL)filtersOnDynamicProperties;
-(void).cxx_destruct;
@end
