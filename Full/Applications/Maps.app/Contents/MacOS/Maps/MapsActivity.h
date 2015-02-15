/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Maps/NSCopying.h>

@class DirectionsPlan, GEOURLOptions, MSPDroppedPin, GEOMapItemStorage, NSMutableArray, NSString;

@interface MapsActivity : PBCodable <NSCopying> {

	unsigned long long _selectedPlaceIndex;
	int _collectionsMode;
	DirectionsPlan* _directionsPlan;
	GEOURLOptions* _displayOptions;
	MSPDroppedPin* _droppedPin;
	GEOMapItemStorage* _presentedMapItem;
	NSMutableArray* _searchPlaces;
	NSString* _searchString;
	char _isDroppedPinPresented;
	char _isDroppedPinSelected;
	char _isPresentingSelectedPlace;
	SCD_Struct_Di1 _has;

}

@property (nonatomic,readonly) char hasDisplayOptions; 
@property (nonatomic,retain) GEOURLOptions * displayOptions;                     //@synthesize displayOptions=_displayOptions - In the implementation block
@property (assign,nonatomic) char hasCollectionsMode; 
@property (assign,nonatomic) int collectionsMode;                                //@synthesize collectionsMode=_collectionsMode - In the implementation block
@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                            //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchPlaces;                      //@synthesize searchPlaces=_searchPlaces - In the implementation block
@property (assign,nonatomic) char hasSelectedPlaceIndex; 
@property (assign,nonatomic) unsigned long long selectedPlaceIndex;              //@synthesize selectedPlaceIndex=_selectedPlaceIndex - In the implementation block
@property (assign,nonatomic) char hasIsPresentingSelectedPlace; 
@property (assign,nonatomic) char isPresentingSelectedPlace;                     //@synthesize isPresentingSelectedPlace=_isPresentingSelectedPlace - In the implementation block
@property (nonatomic,readonly) char hasDirectionsPlan; 
@property (nonatomic,retain) DirectionsPlan * directionsPlan;                    //@synthesize directionsPlan=_directionsPlan - In the implementation block
@property (nonatomic,readonly) char hasDroppedPin; 
@property (nonatomic,retain) MSPDroppedPin * droppedPin;                         //@synthesize droppedPin=_droppedPin - In the implementation block
@property (assign,nonatomic) char hasIsDroppedPinSelected; 
@property (assign,nonatomic) char isDroppedPinSelected;                          //@synthesize isDroppedPinSelected=_isDroppedPinSelected - In the implementation block
@property (assign,nonatomic) char hasIsDroppedPinPresented; 
@property (assign,nonatomic) char isDroppedPinPresented;                         //@synthesize isDroppedPinPresented=_isDroppedPinPresented - In the implementation block
@property (nonatomic,readonly) char hasPresentedMapItem; 
@property (nonatomic,retain) GEOMapItemStorage * presentedMapItem;               //@synthesize presentedMapItem=_presentedMapItem - In the implementation block
-(id)initWithBzip2CompressedData:(id)arg1 ;
-(id)bzip2CompressedData;
-(void)addSearchPlaces:(id)arg1 ;
-(unsigned long long)searchPlacesCount;
-(void)clearSearchPlaces;
-(id)searchPlacesAtIndex:(unsigned long long)arg1 ;
-(void)setDirectionsPlan:(DirectionsPlan *)arg1 ;
-(void)setPresentedMapItem:(GEOMapItemStorage *)arg1 ;
-(char)hasDisplayOptions;
-(void)setCollectionsMode:(int)arg1 ;
-(void)setHasCollectionsMode:(char)arg1 ;
-(char)hasCollectionsMode;
-(void)setSelectedPlaceIndex:(unsigned long long)arg1 ;
-(void)setHasSelectedPlaceIndex:(char)arg1 ;
-(char)hasSelectedPlaceIndex;
-(void)setIsPresentingSelectedPlace:(char)arg1 ;
-(void)setHasIsPresentingSelectedPlace:(char)arg1 ;
-(char)hasIsPresentingSelectedPlace;
-(char)hasDirectionsPlan;
-(void)setIsDroppedPinSelected:(char)arg1 ;
-(void)setHasIsDroppedPinSelected:(char)arg1 ;
-(char)hasIsDroppedPinSelected;
-(void)setIsDroppedPinPresented:(char)arg1 ;
-(void)setHasIsDroppedPinPresented:(char)arg1 ;
-(char)hasIsDroppedPinPresented;
-(char)hasPresentedMapItem;
-(int)collectionsMode;
-(NSMutableArray *)searchPlaces;
-(void)setSearchPlaces:(NSMutableArray *)arg1 ;
-(unsigned long long)selectedPlaceIndex;
-(char)isPresentingSelectedPlace;
-(DirectionsPlan *)directionsPlan;
-(char)isDroppedPinSelected;
-(char)isDroppedPinPresented;
-(GEOMapItemStorage *)presentedMapItem;
-(void)setDroppedPin:(MSPDroppedPin *)arg1 ;
-(char)hasDroppedPin;
-(MSPDroppedPin *)droppedPin;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOURLOptions *)displayOptions;
-(void)setDisplayOptions:(GEOURLOptions *)arg1 ;
-(char)hasSearchString;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
@end
