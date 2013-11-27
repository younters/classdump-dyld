/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOUser, NSString;

@interface GEOReview : PBCodable <NSCopying> {

	double _reviewTime;
	double _score;
	GEOUser* _reviewer;
	NSString* _snippet;
	NSString* _uid;
	SCD_Struct_GE55 _has;

}

@property (nonatomic,readonly) BOOL hasSnippet; 
@property (nonatomic,retain) NSString * snippet;              //@synthesize snippet=_snippet - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                    //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasReviewTime; 
@property (assign,nonatomic) double reviewTime;               //@synthesize reviewTime=_reviewTime - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewer; 
@property (nonatomic,retain) GEOUser * reviewer;              //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) BOOL hasUid; 
@property (nonatomic,retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
-(double)score;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(id)uid;
-(void)setSnippet:(id)arg1 ;
-(void)setReviewer:(id)arg1 ;
-(BOOL)hasSnippet;
-(id)snippet;
-(BOOL)hasReviewTime;
-(double)reviewTime;
-(void)setReviewTime:(double)arg1 ;
-(BOOL)hasReviewer;
-(id)reviewer;
-(BOOL)hasUid;
-(void)setHasReviewTime:(BOOL)arg1 ;
-(void)setUid:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasScore;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
@end
