/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOVLaneConnection : PBCodable <NSCopying> {

	unsigned _firstLaneIndex;
	unsigned _firstRoadIndex;
	unsigned _secondLaneIndex;
	unsigned _secondRoadIndex;

}

@property (assign,nonatomic) unsigned firstRoadIndex;               //@synthesize firstRoadIndex=_firstRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned firstLaneIndex;               //@synthesize firstLaneIndex=_firstLaneIndex - In the implementation block
@property (assign,nonatomic) unsigned secondRoadIndex;              //@synthesize secondRoadIndex=_secondRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned secondLaneIndex;              //@synthesize secondLaneIndex=_secondLaneIndex - In the implementation block
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)firstRoadIndex;
-(void)setFirstRoadIndex:(unsigned)arg1 ;
-(unsigned)firstLaneIndex;
-(void)setFirstLaneIndex:(unsigned)arg1 ;
-(unsigned)secondRoadIndex;
-(void)setSecondRoadIndex:(unsigned)arg1 ;
-(unsigned)secondLaneIndex;
-(void)setSecondLaneIndex:(unsigned)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
