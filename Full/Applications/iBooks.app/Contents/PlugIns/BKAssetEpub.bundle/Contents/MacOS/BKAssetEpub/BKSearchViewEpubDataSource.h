/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKSearchDataSource.h>

@protocol BKPageNumberDelegate;
@class NSMutableArray, NSMutableDictionary, BKSearchController, NSString;

@interface BKSearchViewEpubDataSource : NSObject <BKSearchDataSource> {

	NSMutableArray* _data;
	NSMutableDictionary* _headerIndices;
	NSMutableDictionary* _noResultsIndices;
	char _pageNumbersValidated;
	BKSearchController* _searchController;
	id<BKPageNumberDelegate> _pageNumberDelegate;

}

@property (__weak) BKSearchController * searchController;                                           //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic,__weak) id<BKPageNumberDelegate> pageNumberDelegate;                    //@synthesize pageNumberDelegate=_pageNumberDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=arePageNumbersValidated,nonatomic) char pageNumbersValidated;              //@synthesize pageNumbersValidated=_pageNumbersValidated - In the implementation block
+(id)searchGroupPresentationOrder;
-(unsigned long long)indexOfNextSearchResultForIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfPreviousSearchResultForIndex:(unsigned long long)arg1 ;
-(id)tokenForRow:(unsigned long long)arg1 ;
-(void)clearData;
-(id)headerIndices;
-(unsigned long long)searchRowCount;
-(id<BKPageNumberDelegate>)pageNumberDelegate;
-(void)refetchSearchData;
-(id)noResultsIndices;
-(id)headerDataForGroup:(id)arg1 resultsCount:(unsigned long long)arg2 ;
-(void)addHeaderToData:(id)arg1 group:(id)arg2 ;
-(void)addResultDataForResults:(id)arg1 group:(id)arg2 textSearchGroup:(id)arg3 ;
-(void)insertNoResultsDataForGroup:(id)arg1 ;
-(id)noResultsDataForGroup:(id)arg1 ;
-(void)insertNoResultsDataForGroups;
-(id)updateHeaderData;
-(void)insertResultDataForResults:(id)arg1 group:(id)arg2 textSearchGroup:(id)arg3 atIndexes:(id)arg4 ;
-(id)resultDataForResult:(id)arg1 group:(id)arg2 textSearchGroup:(id)arg3 ;
-(id)searchDataForRow:(unsigned long long)arg1 ;
-(unsigned long long)recentSearchCount;
-(id)recentSearchDataForRow:(unsigned long long)arg1 ;
-(char)arePageNumbersValidated;
-(void)setPageNumbersValidated:(char)arg1 ;
-(id)updateSearchDataForSearchState;
-(id)updateSearchDataByAddingSearchResults:(id)arg1 forGroup:(id)arg2 insertedIndices:(id)arg3 ;
-(void)setPageNumberDelegate:(id<BKPageNumberDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
-(BKSearchController *)searchController;
-(void)setSearchController:(BKSearchController *)arg1 ;
@end
