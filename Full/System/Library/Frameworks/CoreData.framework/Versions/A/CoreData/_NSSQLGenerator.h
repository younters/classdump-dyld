/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLStatement, NSSQLAdapter, NSMutableString, NSMutableDictionary, NSSQLStoreMappingGenerator, NSMutableArray;

@interface _NSSQLGenerator : NSObject {

	NSSQLStatement* _statement;
	NSSQLAdapter* _adapter;
	NSMutableString* _sqlString;
	NSMutableDictionary* _aliasMap;
	NSSQLStoreMappingGenerator* _aliasNamer;
	NSMutableString* _joinClause;
	NSMutableString* _whereClause;
	NSMutableString* _selectList;
	NSMutableString* _orderByClause;
	char _allowToManyKeyPath;
	char _useDistinct;
	char _autoDistinct;
	unsigned _scopedByORPredicate;
	NSMutableArray* _comparisonPredicateScopedItem;

}
+(void)initialize;
-(id)initWithStatement:(id)arg1 forAdapter:(id)arg2 ;
-(void)prepareInsertStatementWithRow:(id)arg1 ;
-(id)sqlString;
-(void)prepareUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 ;
-(void)prepareDeleteStatementWithRow:(id)arg1 ;
-(void)prepareSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(char)arg2 ;
-(id)whereClause;
-(void)prepareCountStatementWithFetchRequest:(id)arg1 ;
-(void)prepareInsertStatementForRelationship:(id)arg1 ;
-(void)prepareDeleteStatementForRelationship:(id)arg1 ;
-(void)prepareMasterReorderStatementForRelationship:(id)arg1 ;
-(void)prepareMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(void)prepareReorderStatementForRelationship:(id)arg1 ;
-(unsigned)sqlTypeForExpressionConstantValue:(id)arg1 ;
-(void)appendSQL:(id)arg1 ;
-(id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID*)arg1 ;
-(void)appendWhereClause:(id)arg1 ;
-(unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)arg1 ;
-(void)_addBindVarForConstVal1:(id)arg1 ;
-(void)_startSQL:(id)arg1 ;
-(void)_preparePredicate:(id)arg1 ;
-(void)appendClause:(id)arg1 forProperty:(id)arg2 keypath:(id)arg3 ;
-(void)addJoinForToOneRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(void)addJoinForManyToManyRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(void)addJoinForToManyRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(char)isToManyCountKeyPath:(id)arg1 ;
-(void)appendCountClause:(id)arg1 forToManyKeyPath:(id)arg2 ;
-(void)appendClause:(id)arg1 forKeyPath:(id)arg2 allowToMany:(char)arg3 ;
-(void)buildWhereClauseForRow:(id)arg1 optLock:(long long)arg2 ;
-(void)appendWhereClauseToSQL;
-(id)_newPredicateWithInheritanceForFetchRequest:(id)arg1 ;
-(void)buildWhereClauseWithSelectPredicate:(id)arg1 ;
-(void)buildOrderByClauseWithSortDescriptors:(id)arg1 ;
-(void)appendSelectListToSQLForRequest:(id)arg1 ;
-(void)appendJoinClauseToSQL;
-(void)appendOrderByClauseToSQL;
-(void)appendLimitClauseToSQL:(unsigned)arg1 ;
-(id)addJoinForDirectToManyToMany:(id)arg1 ;
-(void)_addBindVarForConstVal2:(id)arg1 ;
-(void)appendClause:(id)arg1 forKeyPathExpression:(id)arg2 allowToMany:(char)arg3 ;
-(id)_newWildSubStringForGlob:(id)arg1 wildStart:(char)arg2 wildEnd:(char)arg3 ;
-(void)_preparePredicateExpression:(id)arg1 ;
-(void)_appendWhereClauseForConstVal:(id)arg1 ;
-(char)_prepareFunctionExpression:(id)arg1 ;
-(void)_appendWhereClauseForExpressionCollection:(id)arg1 ;
-(void)_appendWhereClauseForConstantCollection:(id)arg1 ;
-(void)_prepareConst:(id)arg1 inManyToMany:(id)arg2 ;
-(void)_prepareConst:(id)arg1 inToMany:(id)arg2 ;
-(void)_prepareConst:(id)arg1 inAttribute:(id)arg2 sensitiveOptions:(unsigned)arg3 ;
-(void)_prepareString:(id)arg1 expressionPath:(id)arg2 sensitiveOptions:(unsigned)arg3 wildStart:(char)arg4 wildEnd:(char)arg5 allowToMany:(char)arg6 ;
-(void)_prepareSubstringWith:(id)arg1 wildStart:(char)arg2 wildEnd:(char)arg3 ;
-(char)_isNullExpression:(id)arg1 ;
-(void)prepareMatches:(id)arg1 ;
-(void)prepareLike:(id)arg1 ;
-(void)prepareBeginsWith:(id)arg1 ;
-(void)prepareEndsWith:(id)arg1 ;
-(void)prepareIn:(id)arg1 swap:(char)arg2 ;
-(void)prepareBetween:(id)arg1 ;
-(void)_preparePredicateOperator:(id)arg1 ;
-(id)_reducedSubpredicates:(id)arg1 ;
-(char)foldComparisonPredicate:(id)arg1 ;
-(void)prepareComparisonPredicate:(id)arg1 ;
-(char)_isForeignObjectExpression:(id)arg1 ;
-(id)_retainedPrimaryKeyNumberForObject:(id)arg1 ;
-(void)buildWhereClauseWithSimplePredicate:(id)arg1 ;
-(char)autoDistinct;
-(void)setAutoDistinct:(char)arg1 ;
-(void)dealloc;
@end
