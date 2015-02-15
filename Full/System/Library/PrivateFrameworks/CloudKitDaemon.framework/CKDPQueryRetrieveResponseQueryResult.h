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

@class NSString, CKDPRecordIdentifier, CKDPRecord;

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {

	NSString* _etag;
	CKDPRecordIdentifier* _identifier;
	CKDPRecord* _record;
	int _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                            //@synthesize record=_record - In the implementation block
-(char)hasRecord;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasType;
-(void)setHasType:(char)arg1 ;
-(char)hasEtag;
-(char)hasIdentifier;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CKDPRecordIdentifier *)identifier;
-(void)setIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)etag;
-(CKDPRecord *)record;
@end
