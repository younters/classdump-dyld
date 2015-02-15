/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhoto9Plugin.ilmbplugin/Contents/MacOS/iLMBiPhoto9Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBiPhoto9Plugin/ILMB_IPHOTO_HgEntity.h>

@class ILMB_IPHOTO_HgKPreparedSql, NSLock, NSMutableDictionary, ILMB_IPHOTO_HgCharIndexEntity;

@interface ILMB_IPHOTO_HgUniqueStringEntity : ILMB_IPHOTO_HgEntity {

	ILMB_IPHOTO_HgKPreparedSql* _createStringSql;
	NSLock* _stringCacheLock;
	NSMutableDictionary* _stringsById;
	NSMutableDictionary* _stringIdByString;
	char _allStringsCached;
	ILMB_IPHOTO_HgCharIndexEntity* _charIndexEntity;

}

@property (nonatomic,retain) ILMB_IPHOTO_HgCharIndexEntity * charIndexEntity;              //@synthesize charIndexEntity=_charIndexEntity - In the implementation block
@property (nonatomic,readonly) char allStringsCached;                                      //@synthesize allStringsCached=_allStringsCached - In the implementation block
-(id)stringForStringId:(id)arg1 ;
-(void)uncacheAllStrings;
-(void)cacheStringsForStringIds:(id)arg1 ;
-(id)initWithTableName:(id)arg1 forDatabaseManager:(id)arg2 forDatabase:(id)arg3 ;
-(void)addCharIndexForString:(id)arg1 withStringId:(id)arg2 ;
-(void)deleteStringsForIds:(id)arg1 ;
-(void)setCharIndexEntity:(ILMB_IPHOTO_HgCharIndexEntity *)arg1 ;
-(id)initWithTableName:(id)arg1 charIndexTableName:(id)arg2 forDatabaseManager:(id)arg3 forDatabase:(id)arg4 ;
-(void)copyRecordsToEntity:(id)arg1 withCanceler:(id)arg2 where:(id)arg3 args:(id)arg4 ;
-(id)searchStringForString:(id)arg1 ;
-(id)possibleStringIdsForString:(id)arg1 usingCharIndexes:(int)arg2 ;
-(void)cacheAllStrings;
-(void)reindexStringsForStringIds:(id)arg1 ;
-(id)possibleStringIdsForString:(id)arg1 ;
-(char)allStringsCached;
-(void)addStringProperties:(id)arg1 ;
-(id)addStringProperty:(id)arg1 ;
-(ILMB_IPHOTO_HgCharIndexEntity *)charIndexEntity;
-(id)initialStringProperty:(id)arg1 ;
-(void)cacheStringsForStrings:(id)arg1 ;
-(id)cachedStringIdForString:(id)arg1 ;
-(id)cacheString:(id)arg1 byId:(id)arg2 ;
-(id)stringIdForString:(id)arg1 ;
-(void)uncacheStringsForIds:(id)arg1 ;
-(void)uncacheString:(id)arg1 byId:(id)arg2 ;
-(id)cachedStringForId:(id)arg1 ;
-(id)createStringSql;
-(char)createTableIfMissing;
-(void)waitForOutstandingWrites;
-(void)saveIndexes;
-(void)dealloc;
@end
