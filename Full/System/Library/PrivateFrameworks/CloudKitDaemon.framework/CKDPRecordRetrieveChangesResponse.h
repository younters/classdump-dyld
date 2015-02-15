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

@class NSMutableArray, NSData;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {

	NSMutableArray* _changedRecords;
	NSData* _clientChangeToken;
	int _status;
	NSData* _syncContinuationToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * changedRecords;              //@synthesize changedRecords=_changedRecords - In the implementation block
@property (nonatomic,readonly) char hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;               //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (nonatomic,readonly) char hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                   //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
-(char)hasClientChangeToken;
-(void)addChangedRecord:(id)arg1 ;
-(unsigned long long)changedRecordsCount;
-(void)clearChangedRecords;
-(id)changedRecordAtIndex:(unsigned long long)arg1 ;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(char)hasSyncContinuationToken;
-(NSMutableArray *)changedRecords;
-(void)setChangedRecords:(NSMutableArray *)arg1 ;
-(NSData *)syncContinuationToken;
-(NSData *)clientChangeToken;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end
