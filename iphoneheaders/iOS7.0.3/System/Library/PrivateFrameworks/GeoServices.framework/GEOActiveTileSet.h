/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOActiveTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE69* _availableTiles;
	unsigned _availableTilesCount;
	unsigned _availableTilesSpace;
	NSString* _baseURL;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	int _scale;
	NSMutableArray* _sentinelTiles;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	unsigned _timeToLiveSeconds;
	unsigned _version;
	BOOL _multiTileURLUsesStatusCodes;
	SCD_Struct_GE55 _has;

}

@property (nonatomic,readonly) BOOL hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL;                               //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiTileURL; 
@property (nonatomic,retain) NSString * multiTileURL;                          //@synthesize multiTileURL=_multiTileURL - In the implementation block
@property (assign,nonatomic) int style;                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int scale;                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned version;                                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds;                       //@synthesize timeToLiveSeconds=_timeToLiveSeconds - In the implementation block
@property (nonatomic,readonly) unsigned availableTilesCount; 
@property (nonatomic,readonly) SCD_Struct_GE69* availableTiles; 
@property (nonatomic,retain) NSMutableArray * sentinelTiles;                   //@synthesize sentinelTiles=_sentinelTiles - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL;                       //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) BOOL hasMultiTileURLUsesStatusCodes; 
@property (assign,nonatomic) BOOL multiTileURLUsesStatusCodes;                 //@synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes - In the implementation block
-(void)dealloc;
-(int)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setStyle:(int)arg1 ;
-(int)scale;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)style;
-(void)setSize:(int)arg1 ;
-(void)setScale:(int)arg1 ;
-(id)dictionaryRepresentation;
-(id)baseURL;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setBaseURL:(id)arg1 ;
-(void)setMultiTileURL:(id)arg1 ;
-(void)setLocalizationURL:(id)arg1 ;
-(void)setSupportedLanguages:(id)arg1 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(BOOL)hasBaseURL;
-(BOOL)hasMultiTileURL;
-(id)multiTileURL;
-(BOOL)hasLocalizationURL;
-(id)localizationURL;
-(unsigned)supportedLanguagesCount;
-(void)clearSupportedLanguages;
-(id)supportedLanguageAtIndex:(unsigned)arg1 ;
-(BOOL)hasMultiTileURLUsesStatusCodes;
-(BOOL)multiTileURLUsesStatusCodes;
-(void)setMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(id)supportedLanguages;
-(void)clearAvailableTiles;
-(unsigned)availableTilesCount;
-(SCD_Struct_GE69)availableTilesAtIndex:(unsigned)arg1 ;
-(void)addAvailableTiles:(SCD_Struct_GE69)arg1 ;
-(BOOL)hasTimeToLiveSeconds;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(SCD_Struct_GE69*)availableTiles;
-(void)setAvailableTiles:(SCD_Struct_GE69*)arg1 count:(unsigned)arg2 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)bestLanguage;
-(void)_resetBestLanguage;
-(id)sentinelTiles;
-(void)addSentinelTile:(id)arg1 ;
-(void)setSentinelTiles:(id)arg1 ;
-(unsigned)sentinelTilesCount;
-(void)clearSentinelTiles;
-(id)sentinelTileAtIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dataForGenericTileType:(int)arg1 ;
-(unsigned)minimumZoomLevelInRect:(SCD_Struct_GE48)arg1 ;
-(unsigned)maximumZoomLevelInRect:(SCD_Struct_GE48)arg1 ;
-(unsigned)timeToLiveSeconds;
-(unsigned)largestZoomLevelLEQ:(unsigned)arg1 inRect:(SCD_Struct_GE48)arg2 ;
@end
