/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSMutableArray, CKDPShareIdentifier;

@interface CKDPShareParticipantCreateRequest : PBRequest <NSCopying> {

	NSString* _invitationImageUrl;
	NSString* _invitationMessage;
	NSMutableArray* _participants;
	CKDPShareIdentifier* _shareId;

}

@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) char hasInvitationMessage; 
@property (nonatomic,retain) NSString * invitationMessage;               //@synthesize invitationMessage=_invitationMessage - In the implementation block
@property (nonatomic,readonly) char hasInvitationImageUrl; 
@property (nonatomic,retain) NSString * invitationImageUrl;              //@synthesize invitationImageUrl=_invitationImageUrl - In the implementation block
+(id)options;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(unsigned long long)participantsCount;
-(void)clearParticipants;
-(id)participantAtIndex:(unsigned long long)arg1 ;
-(void)setInvitationImageUrl:(NSString *)arg1 ;
-(char)hasShareId;
-(char)hasInvitationMessage;
-(char)hasInvitationImageUrl;
-(CKDPShareIdentifier *)shareId;
-(NSString *)invitationImageUrl;
-(NSString *)invitationMessage;
-(void)setInvitationMessage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(NSMutableArray *)participants;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addParticipant:(id)arg1 ;
@end
