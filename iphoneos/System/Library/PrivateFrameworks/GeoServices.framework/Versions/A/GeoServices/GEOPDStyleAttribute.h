/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDStyleAttribute : PBCodable <NSCopying> {

	unsigned _key;
	unsigned _value;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasKey; 
@property (assign,nonatomic) unsigned key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasValue; 
@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasKey:(char)arg1 ;
-(char)hasKey;
-(void)setHasValue:(char)arg1 ;
-(char)hasValue;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)value;
-(void)setKey:(unsigned)arg1 ;
@end
