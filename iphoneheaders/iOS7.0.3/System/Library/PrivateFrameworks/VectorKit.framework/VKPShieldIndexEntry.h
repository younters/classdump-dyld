/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface VKPShieldIndexEntry : PBCodable {

	SCD_Struct_VK125* _shieldTypes;
	NSString* _artworkIdentifier;

}

@property (nonatomic,readonly) BOOL hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned shieldTypesCount; 
@property (nonatomic,readonly) int* shieldTypes; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)shieldTypesCount;
-(int*)shieldTypes;
-(id)artworkIdentifier;
-(void)setArtworkIdentifier:(id)arg1 ;
-(BOOL)hasArtworkIdentifier;
-(void)clearShieldTypes;
-(int)shieldTypesAtIndex:(unsigned)arg1 ;
-(void)addShieldTypes:(int)arg1 ;
-(void)setShieldTypes:(int*)arg1 count:(unsigned)arg2 ;
@end
