/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhoto9Plugin.ilmbplugin/Contents/MacOS/iLMBiPhoto9Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IP9_RKDatabase, IP9_RKMainRatingIndex, ILMB_IPHOTO_HgBoolRidIndex;

@interface IP9_RKRatingIndex : NSObject {

	int _spinlock;
	IP9_RKDatabase* _database;
	IP9_RKMainRatingIndex* _mainRatingIndex;
	ILMB_IPHOTO_HgBoolRidIndex* _blankMasterVersionIds;

}
+(id)allStreamVersionIds:(id)arg1 ;
-(void)invalidateRatingIndexes;
-(void)repairRatingIndexes;
-(void)copyIndexSubset:(id)arg1 toDatabase:(id)arg2 ;
-(void)addVersionsToIndex:(id)arg1 ;
-(id)blankMasterVersionIds;
-(id)indexForRatingOrMore:(long long)arg1 ;
-(char)setMainRating:(long long)arg1 forVersionId:(unsigned long long)arg2 ;
-(void)addVersionId:(unsigned long long)arg1 withMainRating:(long long)arg2 ;
-(void)addVersionToIndex:(id)arg1 ;
-(void)dropVersionId:(unsigned long long)arg1 ;
-(void)dropVersionIds:(id)arg1 ;
-(void)loadIndexes;
-(id)allVersionIds;
-(void)saveIndexes;
-(id)database;
-(id)initWithDatabase:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
