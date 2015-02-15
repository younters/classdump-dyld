/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOBusinessOptions : PBCodable <NSCopying> {

	NSMutableArray* _attributeKeys;
	int _maxBusinessResults;
	NSMutableArray* _photoOptions;
	char _includeBusinessHours;
	char _includeCenter;
	SCD_Struct_GE64 _has;

}

@property (nonatomic,retain) NSMutableArray * photoOptions;               //@synthesize photoOptions=_photoOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeKeys;              //@synthesize attributeKeys=_attributeKeys - In the implementation block
@property (assign,nonatomic) char hasIncludeBusinessHours; 
@property (assign,nonatomic) char includeBusinessHours;                   //@synthesize includeBusinessHours=_includeBusinessHours - In the implementation block
@property (assign,nonatomic) char hasMaxBusinessResults; 
@property (assign,nonatomic) int maxBusinessResults;                      //@synthesize maxBusinessResults=_maxBusinessResults - In the implementation block
@property (assign,nonatomic) char hasIncludeCenter; 
@property (assign,nonatomic) char includeCenter;                          //@synthesize includeCenter=_includeCenter - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)attributeKeys;
-(void)setIncludeBusinessHours:(char)arg1 ;
-(void)addAttributeKey:(id)arg1 ;
-(void)addPhotoOptions:(id)arg1 ;
-(void)setPhotoOptions:(NSMutableArray *)arg1 ;
-(void)setAttributeKeys:(NSMutableArray *)arg1 ;
-(unsigned long long)photoOptionsCount;
-(void)clearPhotoOptions;
-(id)photoOptionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributeKeysCount;
-(void)clearAttributeKeys;
-(id)attributeKeyAtIndex:(unsigned long long)arg1 ;
-(void)setHasIncludeBusinessHours:(char)arg1 ;
-(char)hasIncludeBusinessHours;
-(int)maxBusinessResults;
-(void)setMaxBusinessResults:(int)arg1 ;
-(void)setHasMaxBusinessResults:(char)arg1 ;
-(char)hasMaxBusinessResults;
-(void)setIncludeCenter:(char)arg1 ;
-(void)setHasIncludeCenter:(char)arg1 ;
-(char)hasIncludeCenter;
-(NSMutableArray *)photoOptions;
-(char)includeBusinessHours;
-(char)includeCenter;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
