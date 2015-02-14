/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKBookshelfCommonCore.framework/Versions/A/BKBookshelfCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKAsset;
@class NSString, NSNumber, NSMutableArray;

@interface BKLibraryAssetUpdate : NSObject {

	char _canRedownload;
	char _canMakeAssetsLocal;
	short _rank;
	id<BKAsset> _asset;
	NSString* _dataSourceIdentifier;
	NSString* _seriesID;
	NSNumber* _seriesSortKey;
	NSString* _sequenceDisplayName;
	NSNumber* _seriesIsHidden;
	NSNumber* _seriesIsCloudOnly;
	NSMutableArray* _purchaseDates_hack;

}

@property (nonatomic,retain) id<BKAsset> asset;                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSString * dataSourceIdentifier;                    //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (assign,nonatomic) short rank;                                       //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) char canRedownload;                               //@synthesize canRedownload=_canRedownload - In the implementation block
@property (assign,nonatomic) char canMakeAssetsLocal;                          //@synthesize canMakeAssetsLocal=_canMakeAssetsLocal - In the implementation block
@property (nonatomic,readonly) NSString * seriesID;                            //@synthesize seriesID=_seriesID - In the implementation block
@property (nonatomic,readonly) NSNumber * seriesSortKey;                       //@synthesize seriesSortKey=_seriesSortKey - In the implementation block
@property (nonatomic,readonly) NSString * sequenceDisplayName;                 //@synthesize sequenceDisplayName=_sequenceDisplayName - In the implementation block
@property (nonatomic,readonly) NSNumber * seriesIsHidden;                      //@synthesize seriesIsHidden=_seriesIsHidden - In the implementation block
@property (nonatomic,readonly) NSNumber * seriesIsCloudOnly;                   //@synthesize seriesIsCloudOnly=_seriesIsCloudOnly - In the implementation block
@property (nonatomic,retain) NSMutableArray * purchaseDates_hack;              //@synthesize purchaseDates_hack=_purchaseDates_hack - In the implementation block
-(NSString *)seriesID;
-(NSString *)dataSourceIdentifier;
-(NSNumber *)seriesIsHidden;
-(NSNumber *)seriesIsCloudOnly;
-(NSString *)sequenceDisplayName;
-(NSNumber *)seriesSortKey;
-(void)setDataSourceIdentifier:(NSString *)arg1 ;
-(id)initWithAsset:(id)arg1 dataSource:(id)arg2 ;
-(void)propagateDataWithAsset:(id)arg1 ;
-(char)canRedownload;
-(void)setCanRedownload:(char)arg1 ;
-(char)canMakeAssetsLocal;
-(NSMutableArray *)purchaseDates_hack;
-(void)setCanMakeAssetsLocal:(char)arg1 ;
-(void)setPurchaseDates_hack:(NSMutableArray *)arg1 ;
-(void)setAsset:(id<BKAsset>)arg1 ;
-(id<BKAsset>)asset;
-(id)init;
-(short)rank;
-(void)setRank:(short)arg1 ;
@end
