/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface CNAutocompleteContactPredicateFactory : NSObject {

	NSArray* _terms;
	NSDictionary* _propertyMap;
	NSArray* _properties;

}
+(id)predicateForProperties:(id)arg1 term:(id)arg2 ;
+(id)predicateForProperties:(id)arg1 terms:(id)arg2 ;
+(id)factoryWithTerms:(id)arg1 properties:(id)arg2 ;
+(id)contactPropertyMap;
+(id)contactIsPersonPredicate;
+(id)contactIsCompanyPredicate;
+(void)separateKeyPath:(id)arg1 intoKey:(id*)arg2 valueKeyPath:(id*)arg3 ;
-(id)makePredicate;
-(id)initWithTerms:(id)arg1 properties:(id)arg2 propertyMap:(id)arg3 ;
-(id)makePredicateForTerm:(id)arg1 ;
-(id)propertyPredicatesForTerm:(id)arg1 ;
-(id)makeNamePredicatesForTerm:(id)arg1 ;
-(void)addPredicateForTerm:(id)arg1 property:(id)arg2 toCollection:(id)arg3 ;
-(id)makePersonNamePredicateForTerm:(id)arg1 ;
-(id)makeCompanyNamePredicateForTerm:(id)arg1 ;
-(id)makeNamePredicateForTerm:(id)arg1 properties:(id)arg2 personOrCompanyQualifyingPredicate:(id)arg3 ;
-(id)makePredicateForTerm:(id)arg1 property:(id)arg2 ;
-(id)makePredicateForValue:(id)arg1 key:(id)arg2 ;
-(id)makePredicateForValue:(id)arg1 relationshipKey:(id)arg2 valueKeyPath:(id)arg3 ;
@end
