/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAddressBook, ABAccount, ABDictionaryImporter, NSOperationQueue, NSURL, NSMutableArray, NSString, ABSimilarRecordMerger;

@interface ABImportsAddressBookData : NSObject {

	ABAddressBook* _addressBook;
	ABAccount* _sourceAccount;
	ABAccount* _destinationAccount;
	ABDictionaryImporter* _importer;
	NSOperationQueue* _imageMover;
	NSURL* _sourceImagesFolder;
	NSURL* _destinationImagesFolder;
	NSMutableArray* _newRecords;
	NSString* _meCardIdentifier;
	ABSimilarRecordMerger* _merger;
	char _deleteOriginalRecords;

}
+(void)importRecordsFromAccount:(id)arg1 intoAccount:(id)arg2 addressBook:(id)arg3 options:(int)arg4 ;
+(id)importerWithAddressBook:(id)arg1 sourceAccount:(id)arg2 destinationAccount:(id)arg3 options:(int)arg4 ;
-(void)importData;
-(id)initWithAddressBook:(id)arg1 sourceAccount:(id)arg2 destinationAccount:(id)arg3 options:(int)arg4 ;
-(id)newMergerWithExistingRecords;
-(void)makeSureDestinationImagesFolderExists;
-(void)moveRecordsIntoDestinationStore;
-(void)setTheMeCard;
-(void)mergeNewRecordsWithPreexistingData;
-(void)assignNewRecordsToGroups;
-(void)waitForImagesToTransfer;
-(id)recordsToImport;
-(void)importRecord:(id)arg1 ;
-(void)removeOriginalRecords:(id)arg1 ;
-(id)peopleToImport;
-(id)groupsToImport;
-(void)moveImageWithSourceIdentifier:(id)arg1 toImageWithDestinationIdentifier:(id)arg2 extension:(id)arg3 ;
-(id)imageURLWithFolder:(id)arg1 identifier:(id)arg2 extension:(id)arg3 ;
-(void)dealloc;
@end

