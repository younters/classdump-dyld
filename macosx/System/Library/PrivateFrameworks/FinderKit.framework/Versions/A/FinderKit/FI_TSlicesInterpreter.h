/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FI_TSlicesInterpreter : NSObject
+(id)slicesForTag:(id)arg1 andLabel:(short)arg2 ;
+(id)sharedSlicesInterpreter;
-(id)searchForRules:(id)arg1 ;
-(void)queryStringDictionaryForCriterion:(id)arg1 withDisplayValue:(id)arg2 intoDictionary:(id)arg3 ;
-(id)queryDictionaryForRow:(id)arg1 searchSystemFiles:(id*)arg2 fileNameOnly:(id*)arg3 searchNonFinderFiles:(id*)arg4 ;
-(id)queryStringForRules:(id)arg1 searchSystemFiles:(id*)arg2 fileNameOnly:(id*)arg3 searchNonFinderFiles:(id*)arg4 ;
@end
