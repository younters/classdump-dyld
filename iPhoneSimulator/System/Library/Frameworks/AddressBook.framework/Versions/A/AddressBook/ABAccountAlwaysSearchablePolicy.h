/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABAccountSearchPolicy.h>

@class NSString;

@interface ABAccountAlwaysSearchablePolicy : NSObject <ABAccountSearchPolicy> {

	Class _searchOperationClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isSearchable;
-(Class)searchOperationClass;
-(id)initWithSearchOperationClass:(Class)arg1 ;
-(id)makeSearchOperation;
-(void)dealloc;
@end
