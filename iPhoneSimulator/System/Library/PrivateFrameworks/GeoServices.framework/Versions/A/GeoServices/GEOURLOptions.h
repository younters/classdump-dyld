/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/GEOURLSerializable.h>
#import <GeoServices/NSCopying.h>

@class GEOURLCamera, GEOURLCenterSpan, NSString, GEOURLRouteHandle;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {

	GEOURLCamera* _camera;
	GEOURLCenterSpan* _centerSpan;
	int _mapType;
	NSString* _referralIdentifier;
	GEOURLRouteHandle* _routeHandle;
	int _transportType;
	int _userTrackingMode;
	char _enableTraffic;
	SCD_Struct_GE53 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasEnableTraffic; 
@property (assign,nonatomic) char enableTraffic;                           //@synthesize enableTraffic=_enableTraffic - In the implementation block
@property (assign,nonatomic) char hasMapType; 
@property (assign,nonatomic) int mapType;                                  //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                            //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) char hasCenterSpan; 
@property (nonatomic,retain) GEOURLCenterSpan * centerSpan;                //@synthesize centerSpan=_centerSpan - In the implementation block
@property (nonatomic,readonly) char hasCamera; 
@property (nonatomic,retain) GEOURLCamera * camera;                        //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) char hasReferralIdentifier; 
@property (nonatomic,retain) NSString * referralIdentifier;                //@synthesize referralIdentifier=_referralIdentifier - In the implementation block
@property (assign,nonatomic) char hasUserTrackingMode; 
@property (assign,nonatomic) int userTrackingMode;                         //@synthesize userTrackingMode=_userTrackingMode - In the implementation block
@property (nonatomic,readonly) char hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle;              //@synthesize routeHandle=_routeHandle - In the implementation block
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(GEOURLCamera *)camera;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(char)hasRouteHandle;
-(GEOURLRouteHandle *)routeHandle;
-(char)hasCamera;
-(char)hasCenterSpan;
-(void)setCenterSpan:(GEOURLCenterSpan *)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(char)hasTransportType;
-(char)hasReferralIdentifier;
-(void)setReferralIdentifier:(NSString *)arg1 ;
-(void)setHasTransportType:(char)arg1 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(void)setEnableTraffic:(char)arg1 ;
-(char)hasEnableTraffic;
-(char)hasMapType;
-(GEOURLCenterSpan *)centerSpan;
-(char)enableTraffic;
-(NSString *)referralIdentifier;
-(id)urlRepresentation;
-(void)setHasMapType:(char)arg1 ;
-(void)setHasEnableTraffic:(char)arg1 ;
-(void)setUserTrackingMode:(int)arg1 ;
-(void)setHasUserTrackingMode:(char)arg1 ;
-(char)hasUserTrackingMode;
-(int)userTrackingMode;
-(void)dealloc;
-(NSString *)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
