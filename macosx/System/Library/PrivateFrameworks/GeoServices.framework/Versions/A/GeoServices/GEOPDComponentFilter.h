/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOPDRoadAccessInfoFilter, GEOPDAddressFilter, GEOPDAmenitiesFilter, GEOPDBoundsFilter, GEOPDEntityFilter, GEOPDETAFilter, GEOPDFlyoverFilter, GEOPDHoursFilter, GEOPDPhotoFilter, GEOPDPlaceInfoFilter, GEOPDRatingFilter, GEOPDRawAttributeFilter, GEOPDReviewFilter, GEOPDStyleAttributesFilter;

@interface GEOPDComponentFilter : PBCodable <NSCopying> {

	GEOPDRoadAccessInfoFilter* _accessInfoFilter;
	GEOPDAddressFilter* _addressFilter;
	GEOPDAmenitiesFilter* _amenitiesFilter;
	GEOPDBoundsFilter* _boundsFilter;
	GEOPDEntityFilter* _entityFilter;
	GEOPDETAFilter* _etaFilter;
	GEOPDFlyoverFilter* _flyoverFilter;
	GEOPDHoursFilter* _hoursFilter;
	GEOPDPhotoFilter* _photoFilter;
	GEOPDPlaceInfoFilter* _placeInfoFilter;
	GEOPDRatingFilter* _ratingFilter;
	GEOPDRawAttributeFilter* _rawAttributeFilter;
	GEOPDReviewFilter* _reviewFilter;
	GEOPDStyleAttributesFilter* _styleAttributesFilter;

}

@property (nonatomic,readonly) char hasEntityFilter; 
@property (nonatomic,retain) GEOPDEntityFilter * entityFilter;                                //@synthesize entityFilter=_entityFilter - In the implementation block
@property (nonatomic,readonly) char hasPlaceInfoFilter; 
@property (nonatomic,retain) GEOPDPlaceInfoFilter * placeInfoFilter;                          //@synthesize placeInfoFilter=_placeInfoFilter - In the implementation block
@property (nonatomic,readonly) char hasAccessInfoFilter; 
@property (nonatomic,retain) GEOPDRoadAccessInfoFilter * accessInfoFilter;                    //@synthesize accessInfoFilter=_accessInfoFilter - In the implementation block
@property (nonatomic,readonly) char hasBoundsFilter; 
@property (nonatomic,retain) GEOPDBoundsFilter * boundsFilter;                                //@synthesize boundsFilter=_boundsFilter - In the implementation block
@property (nonatomic,readonly) char hasAddressFilter; 
@property (nonatomic,retain) GEOPDAddressFilter * addressFilter;                              //@synthesize addressFilter=_addressFilter - In the implementation block
@property (nonatomic,readonly) char hasRatingFilter; 
@property (nonatomic,retain) GEOPDRatingFilter * ratingFilter;                                //@synthesize ratingFilter=_ratingFilter - In the implementation block
@property (nonatomic,readonly) char hasReviewFilter; 
@property (nonatomic,retain) GEOPDReviewFilter * reviewFilter;                                //@synthesize reviewFilter=_reviewFilter - In the implementation block
@property (nonatomic,readonly) char hasPhotoFilter; 
@property (nonatomic,retain) GEOPDPhotoFilter * photoFilter;                                  //@synthesize photoFilter=_photoFilter - In the implementation block
@property (nonatomic,readonly) char hasHoursFilter; 
@property (nonatomic,retain) GEOPDHoursFilter * hoursFilter;                                  //@synthesize hoursFilter=_hoursFilter - In the implementation block
@property (nonatomic,readonly) char hasEtaFilter; 
@property (nonatomic,retain) GEOPDETAFilter * etaFilter;                                      //@synthesize etaFilter=_etaFilter - In the implementation block
@property (nonatomic,readonly) char hasFlyoverFilter; 
@property (nonatomic,retain) GEOPDFlyoverFilter * flyoverFilter;                              //@synthesize flyoverFilter=_flyoverFilter - In the implementation block
@property (nonatomic,readonly) char hasRawAttributeFilter; 
@property (nonatomic,retain) GEOPDRawAttributeFilter * rawAttributeFilter;                    //@synthesize rawAttributeFilter=_rawAttributeFilter - In the implementation block
@property (nonatomic,readonly) char hasAmenitiesFilter; 
@property (nonatomic,retain) GEOPDAmenitiesFilter * amenitiesFilter;                          //@synthesize amenitiesFilter=_amenitiesFilter - In the implementation block
@property (nonatomic,readonly) char hasStyleAttributesFilter; 
@property (nonatomic,retain) GEOPDStyleAttributesFilter * styleAttributesFilter;              //@synthesize styleAttributesFilter=_styleAttributesFilter - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEntityFilter:(GEOPDEntityFilter *)arg1 ;
-(void)setPlaceInfoFilter:(GEOPDPlaceInfoFilter *)arg1 ;
-(void)setAccessInfoFilter:(GEOPDRoadAccessInfoFilter *)arg1 ;
-(void)setBoundsFilter:(GEOPDBoundsFilter *)arg1 ;
-(void)setAddressFilter:(GEOPDAddressFilter *)arg1 ;
-(void)setRatingFilter:(GEOPDRatingFilter *)arg1 ;
-(void)setReviewFilter:(GEOPDReviewFilter *)arg1 ;
-(void)setPhotoFilter:(GEOPDPhotoFilter *)arg1 ;
-(void)setHoursFilter:(GEOPDHoursFilter *)arg1 ;
-(void)setEtaFilter:(GEOPDETAFilter *)arg1 ;
-(void)setFlyoverFilter:(GEOPDFlyoverFilter *)arg1 ;
-(void)setRawAttributeFilter:(GEOPDRawAttributeFilter *)arg1 ;
-(void)setAmenitiesFilter:(GEOPDAmenitiesFilter *)arg1 ;
-(void)setStyleAttributesFilter:(GEOPDStyleAttributesFilter *)arg1 ;
-(char)hasEntityFilter;
-(char)hasPlaceInfoFilter;
-(char)hasAccessInfoFilter;
-(char)hasBoundsFilter;
-(char)hasAddressFilter;
-(char)hasRatingFilter;
-(char)hasReviewFilter;
-(char)hasPhotoFilter;
-(char)hasHoursFilter;
-(char)hasEtaFilter;
-(char)hasFlyoverFilter;
-(char)hasRawAttributeFilter;
-(char)hasAmenitiesFilter;
-(char)hasStyleAttributesFilter;
-(GEOPDEntityFilter *)entityFilter;
-(GEOPDPlaceInfoFilter *)placeInfoFilter;
-(GEOPDRoadAccessInfoFilter *)accessInfoFilter;
-(GEOPDBoundsFilter *)boundsFilter;
-(GEOPDAddressFilter *)addressFilter;
-(GEOPDRatingFilter *)ratingFilter;
-(GEOPDReviewFilter *)reviewFilter;
-(GEOPDPhotoFilter *)photoFilter;
-(GEOPDHoursFilter *)hoursFilter;
-(GEOPDETAFilter *)etaFilter;
-(GEOPDFlyoverFilter *)flyoverFilter;
-(GEOPDRawAttributeFilter *)rawAttributeFilter;
-(GEOPDAmenitiesFilter *)amenitiesFilter;
-(GEOPDStyleAttributesFilter *)styleAttributesFilter;
-(id)initEntityFilterWithSpokenNames;
-(id)initETAFilterWithTraits:(id)arg1 ;
-(id)initPhotoFilterWithTraits:(id)arg1 ;
-(id)initReviewUserPhotoFilterWithTraits:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
