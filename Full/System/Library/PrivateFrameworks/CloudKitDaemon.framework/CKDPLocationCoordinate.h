/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPDate;

@interface CKDPLocationCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _course;
	double _horizontalAccuracy;
	double _latitude;
	double _longitude;
	double _speed;
	double _verticalAccuracy;
	CKDPDate* _timestamp;
	SCD_Struct_CK11 _has;

}

@property (assign,nonatomic) char hasLatitude; 
@property (assign,nonatomic) double latitude;                         //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) char hasLongitude; 
@property (assign,nonatomic) double longitude;                        //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) char hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;               //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) char hasAltitude; 
@property (assign,nonatomic) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) char hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                 //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) char hasCourse; 
@property (assign,nonatomic) double course;                           //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) char hasSpeed; 
@property (assign,nonatomic) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) char hasTimestamp; 
@property (nonatomic,retain) CKDPDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(double)horizontalAccuracy;
-(double)altitude;
-(void)setTimestamp:(CKDPDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)course;
-(char)hasTimestamp;
-(void)setAltitude:(double)arg1 ;
-(void)setHasAltitude:(char)arg1 ;
-(char)hasAltitude;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setHasHorizontalAccuracy:(char)arg1 ;
-(char)hasHorizontalAccuracy;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setHasVerticalAccuracy:(char)arg1 ;
-(char)hasVerticalAccuracy;
-(void)setHasSpeed:(char)arg1 ;
-(char)hasSpeed;
-(void)setCourse:(double)arg1 ;
-(void)setHasCourse:(char)arg1 ;
-(char)hasCourse;
-(double)verticalAccuracy;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(char)hasLatitude;
-(char)hasLongitude;
-(double)latitude;
-(double)longitude;
-(void)setHasLatitude:(char)arg1 ;
-(void)setHasLongitude:(char)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPDate *)timestamp;
-(id)dictionaryRepresentation;
@end
