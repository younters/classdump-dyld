/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,retain) SAWebWebSearchResult * results; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(SAWebWebSearchResult *)results;
-(void)setResults:(SAWebWebSearchResult *)arg1 ;
-(id)groupIdentifier;
@end
