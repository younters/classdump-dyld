/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {

	NSMutableArray* _batchPlaceResults;
	NSMutableArray* _clusters;
	int _statusCode;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,retain) NSDictionary * httpHeaders; 
@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                  //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * clusters;                       //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,retain) NSMutableArray * batchPlaceResults;              //@synthesize batchPlaceResults=_batchPlaceResults - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(id)httpHeaders;
-(void)setHttpHeaders:(id)arg1 ;
-(unsigned)batchPlaceResultsCount;
-(BOOL)hasStatusCode;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(void)setClusters:(id)arg1 ;
-(void)setBatchPlaceResults:(id)arg1 ;
-(void)addCluster:(id)arg1 ;
-(void)addBatchPlaceResult:(id)arg1 ;
-(unsigned)clustersCount;
-(void)clearClusters;
-(id)clusterAtIndex:(unsigned)arg1 ;
-(void)clearBatchPlaceResults;
-(id)batchPlaceResultAtIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)batchPlaceResults;
-(id)clusters;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
