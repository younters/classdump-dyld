/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAddressBook, NSString, NSArray;

@interface ABFindsPreferredLinkedPerson : NSObject {

	ABAddressBook* _addressBook;
	NSString* _linkId;
	NSArray* _sortDescriptors;

}
+(id)preferredNameFinderWithAddressBook:(id)arg1 linkId:(id)arg2 ;
+(id)preferredPhotoFinderWithAddressBook:(id)arg1 linkId:(id)arg2 ;
-(id)findPerson;
-(id)initWithAddressBook:(id)arg1 linkId:(id)arg2 tieBreakers:(id)arg3 ;
-(id)getLinkedPeople;
-(id)sortPeople:(id)arg1 ;
-(void)dealloc;
@end
