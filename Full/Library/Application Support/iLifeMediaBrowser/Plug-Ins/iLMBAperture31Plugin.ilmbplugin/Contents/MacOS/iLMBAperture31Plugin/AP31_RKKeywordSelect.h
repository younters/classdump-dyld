/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperture31Plugin.ilmbplugin/Contents/MacOS/iLMBAperture31Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperture31Plugin/AP31_RKSelect.h>

@class NSMutableSet, AP31_RKWhereClause, AP31_RKSelect;

@interface AP31_RKKeywordSelect : AP31_RKSelect {

	NSMutableSet* _keywordStrings;
	AP31_RKWhereClause* _keywordsLike;
	int _matchType;
	AP31_RKSelect* _forAllKeywords;
	int _combine;
	AP31_RKSelect* _forEachKeyword;
	AP31_RKSelect* _exactMatchOnly;

}
+(id)selectFromFilter:(id)arg1 ;
+(id)selectKeywordsLike:(id)arg1 ;
+(id)selectForQualifier:(long long)arg1 firstValue:(id)arg2 ;
-(void)setForAllKeywords:(id)arg1 ;
-(void)setForExactMatchOnly:(id)arg1 ;
-(void)setForEachKeyword:(id)arg1 ;
-(void)setQueriesForMatchType:(int)arg1 ;
-(void)setKeywordsLike:(id)arg1 ;
-(id)queryWithBindingValues:(id)arg1 bindingVariables:(id)arg2 limitedTo:(id)arg3 fromDatabase:(id)arg4 ;
-(id)keywordStrings;
-(void)setMatchType:(int)arg1 ;
-(id)descriptionWithIndent:(long long)arg1 ;
-(id)init;
-(void)dealloc;
@end
