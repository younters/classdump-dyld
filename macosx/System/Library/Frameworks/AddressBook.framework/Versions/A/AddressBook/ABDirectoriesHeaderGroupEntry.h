/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABHeaderGroupEntry.h>
#import <AddressBook/ABContactSearching.h>

@protocol ABSearchOperationsFactory;
@class NSString;

@interface ABDirectoriesHeaderGroupEntry : ABHeaderGroupEntry <ABContactSearching> {

	id<ABSearchOperationsFactory> _operationsFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * displayName; 
-(id)selectHelperWithFactory:(id)arg1 ;
-(id)iconWithStyleProvider:(id)arg1 ;
-(id)nameWithStyleProvider:(id)arg1 ;
-(id)searchOperationsForString:(id)arg1 delegate:(id)arg2 ;
-(id)initWithName:(id)arg1 operationsFactory:(id)arg2 children:(id)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)displayName;
@end
