/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPProblem, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {

	GEOPDAnalyticMetadata* _analyticMetadata;
	GEOPDClientMetadata* _clientMetadata;
	GEORPProblem* _problem;
	GEORPUserCredentials* _userCredentials;

}

@property (nonatomic,readonly) char hasProblem; 
@property (nonatomic,retain) GEORPProblem * problem;                                //@synthesize problem=_problem - In the implementation block
@property (nonatomic,readonly) char hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;                //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) char hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;              //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) char hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;                  //@synthesize clientMetadata=_clientMetadata - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(char)hasAnalyticMetadata;
-(char)hasClientMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(GEOPDClientMetadata *)clientMetadata;
-(id)initWithProblem:(id)arg1 traits:(id)arg2 ;
-(void)setProblem:(GEORPProblem *)arg1 ;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(char)hasProblem;
-(char)hasUserCredentials;
-(GEORPProblem *)problem;
-(GEORPUserCredentials *)userCredentials;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
