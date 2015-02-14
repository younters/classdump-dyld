/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/CNFetchRequest.h>

@class NSPredicate, NSArray;

@interface CNContactFetchRequest : CNFetchRequest {

	NSPredicate* _predicate;
	NSArray* _keysToFetch;
	char _unifyResults;
	char _mutableObjects;

}

@property (nonatomic,copy) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * keysToFetch;                //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) char unifyResults;                  //@synthesize unifyResults=_unifyResults - In the implementation block
@property (assign,nonatomic) char mutableObjects;                //@synthesize mutableObjects=_mutableObjects - In the implementation block
-(void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(char)unifyResults;
-(void)setUnifyResults:(char)arg1 ;
-(char)mutableObjects;
-(void)setMutableObjects:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
@end
