/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKBookshelfCommonCore.framework/Versions/A/BKBookshelfCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, NSSet, BKLibraryManagedObjectContext;

@interface BKLibraryAsset : NSManagedObject {

	char isDecompressing;

}

@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * sortAuthor; 
@property (nonatomic,retain) NSString * sortTitle; 
@property (nonatomic,retain) NSNumber * sortKey; 
@property (nonatomic,retain) NSString * genre; 
@property (nonatomic,retain) NSString * path; 
@property (nonatomic,retain) NSString * assetID; 
@property (nonatomic,retain) NSString * storeID; 
@property (nonatomic,retain) NSString * dataSourceIdentifier; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * lastOpenDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSDate * purchaseDate; 
@property (nonatomic,retain) NSDate * releaseDate; 
@property (nonatomic,retain) NSString * collectionID; 
@property (nonatomic,retain) NSString * coverURL; 
@property (assign,nonatomic) short contentType; 
@property (assign,nonatomic) short state; 
@property (assign,nonatomic) long long generation; 
@property (assign,nonatomic) long long fileSize; 
@property (nonatomic,retain) NSNumber * isExplicit; 
@property (assign,nonatomic) char isNew; 
@property (assign,nonatomic) char isProof; 
@property (assign,nonatomic) char isSample; 
@property (assign,nonatomic) char isHidden; 
@property (assign,nonatomic) char isLocked; 
@property (assign,nonatomic) char isDevelopment; 
@property (assign,nonatomic) char canRedownload; 
@property (assign,nonatomic) long long metadataMigrationVersion; 
@property (assign,nonatomic) long long pageCount; 
@property (assign,nonatomic) long long rating; 
@property (nonatomic,retain) NSDate * updateDate; 
@property (nonatomic,retain) NSNumber * versionNumber; 
@property (nonatomic,retain) NSString * bookDescription; 
@property (nonatomic,retain) NSString * comments; 
@property (nonatomic,retain) NSString * kind; 
@property (nonatomic,retain) NSString * year; 
@property (nonatomic,retain) NSString * grouping; 
@property (assign,nonatomic) char computedRating; 
@property (nonatomic,retain) NSString * seriesID; 
@property (nonatomic,retain) NSString * sequenceDisplayName; 
@property (nonatomic,retain) NSNumber * seriesSortKey; 
@property (nonatomic,retain) NSNumber * seriesIsHidden; 
@property (nonatomic,retain) NSNumber * seriesIsCloudOnly; 
@property (assign,nonatomic) char seriesNextFlag; 
@property (nonatomic,retain) NSDate * bookmarksServerMaxModificationDate; 
@property (nonatomic,retain) NSString * bookmarksServerVersion; 
@property (nonatomic,retain) NSDate * locationServerMaxModificationDate; 
@property (nonatomic,retain) NSString * locationServerVersion; 
@property (nonatomic,retain) NSString * accountID; 
@property (assign,nonatomic) char isDecompressing; 
@property (assign,nonatomic) short desktopSupportLevel; 
@property (assign,nonatomic) char didWarnAboutDesktopSupport; 
@property (nonatomic,retain) NSNumber * bookHighWaterMarkProgress; 
@property (nonatomic,readonly) char isStore; 
@property (nonatomic,readonly) char isDownloading; 
@property (nonatomic,readonly) char isLocal; 
@property (nonatomic,readonly) char isCloud; 
@property (nonatomic,readonly) char isSeriesItem; 
@property (nonatomic,readonly) char isSeriesContainer; 
@property (nonatomic,readonly) char isImporting; 
@property (nonatomic,readonly) char canEditMetadata; 
@property (nonatomic,retain) NSSet * localOnlySeriesItems; 
@property (nonatomic,retain) BKLibraryAsset * purchasedAndLocalParent; 
@property (nonatomic,retain) NSSet * purchasedAndLocalSeriesItems; 
@property (nonatomic,retain) BKLibraryAsset * localOnlySeriesItemsParent; 
@property (nonatomic,readonly) BKLibraryManagedObjectContext * managedObjectContext; 
+(id)predicateForLibraryAssetsWithAssetIDsContainedInList:(id)arg1 ;
+(id)libraryAssetsWithAssetIDsContainedInList:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)predicateForLibraryAssetsNotMarkedAsOld;
+(id)predicateForLocalLibraryAssets;
+(id)predicateForLocalOrImportingLibraryAssets;
+(id)predicateForSeriesContainerWithSeriesID:(id)arg1 ;
+(id)predicateForLibraryAssetsWithSeriesID:(id)arg1 ;
+(id)predicateForLibraryAssetsMarkedAsNew;
+(id)predicateForBooksThatCanHaveHigherWaterMarks;
+(id)predicateToExcludeSeriesBooksYouDontOwn;
+(id)predicateForNextSeriesItems;
+(id)excludeHiddenAssetsPredicate;
+(id)predicateForNonCloudLibraryAssets;
+(id)predicateForSeriesContainers;
+(id)predicateForLibraryAssetsRecentlyOpened;
+(id)_predicateForBooksShownInAllBooksShowingPurchases:(char)arg1 ;
+(id)predicateToExcludeLibraryAssetsWithExplicitContent;
+(id)predicateToExcludeContainerContentTypes;
+(id)insertNewLibraryAssetWithIdentifier:(id)arg1 assetID:(id)arg2 type:(short)arg3 inManagedObjectContext:(id)arg4 ;
+(id)hiddenAssetsPredicate;
+(id)predicateForLibraryAssetWithCollectionIDsInList:(id)arg1 ;
+(id)predicateForDownloadableLibraryAssets;
+(id)predicateForLibraryAssetsFromStore;
+(id)predicateForLibraryAssetsInCloud;
+(id)predicateForLocalOrDownloadingOrImportingLibraryAssets;
+(id)predicateForNonCloudLibraryAssetsAndContainers;
+(id)predicateForLibraryAssetsWithAuthor:(id)arg1 ;
+(id)predicateForLibraryAssetsWithGenre:(id)arg1 ;
+(id)predicateForLibraryAssetsMatchingSearchString:(id)arg1 ;
+(id)predicateForLibraryAssetsWithDataSourceIdentifier:(id)arg1 ;
+(id)predicateToExcludeHiddenSeriesAssets;
+(id)predicateForBooksShownInAllBooks;
+(id)predicateForBooksShownInAllBooksWithPurchasesDisabled;
+(id)predicateForSeriesItemsInTheStore;
+(unsigned long long)numberOfLibraryAssetsInManagdObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingIsDownloading;
+(id)keyPathsForValuesAffectingIsLocal;
+(id)keyPathsForValuesAffectingIsImporting;
+(id)unknownAuthor;
+(id)unknownTitle;
+(id)libraryAssetWithAssetID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)predicateForLibraryAssetsWithoutCoverURL;
+(id)predicateForLibraryAssetsMissingExplicitContentFlag;
+(id)predicateForLibraryAssetsOpenedSince:(id)arg1 ;
+(id)predicateForLibraryAssetsThatWarnedAboutDesktopSupport;
-(char)isSeriesContainer;
-(char)isCloud;
-(void)setCreationDateToNow;
-(id)newestSeriesBookWithBasePredicate:(id)arg1 ;
-(id)mostRecentlyOpenedSeriesBookWithBasePredicate:(id)arg1 ;
-(id)adjacentSeriesBooksWithMaxCount:(unsigned long long)arg1 withSmallerSeriesSortKeys:(char)arg2 basePredicate:(id)arg3 ;
-(char)isSeriesItem;
-(char)canEditMetadata;
-(id)seriesStackBooksMaximumCount:(unsigned long long)arg1 basePredicate:(id)arg2 ;
-(void)setModificationDateToNow;
-(long long)compareSortKey:(id)arg1 ;
-(long long)inverseCompareSortKey:(id)arg1 ;
-(char)isDecompressing;
-(void)setIsDecompressing:(char)arg1 ;
-(void)setLastOpenDateToNow;
-(char)isImporting;
-(char)isDownloading;
-(char)isStore;
-(BKLibraryManagedObjectContext *)managedObjectContext;
-(char)save:(id*)arg1 ;
-(char)isLocal;
@end
