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

@class NSString, CKDPDate, CKDPIdentifier, NSData, CKDPInvitationRecipient, CKDPShareIdentifier;

@interface CKDPInvitation : PBCodable <NSCopying> {

	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	CKDPDate* _createdAt;
	CKDPIdentifier* _invitationId;
	NSString* _invitationImageUrl;
	NSString* _invitationMessage;
	NSData* _payload;
	CKDPInvitationRecipient* _recipient;
	CKDPIdentifier* _senderId;
	CKDPShareIdentifier* _shareId;
	NSData* _signature;
	int _state;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) char hasInvitationId; 
@property (nonatomic,retain) CKDPIdentifier * invitationId;                        //@synthesize invitationId=_invitationId - In the implementation block
@property (nonatomic,readonly) char hasSenderId; 
@property (nonatomic,retain) CKDPIdentifier * senderId;                            //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,readonly) char hasCreatedAt; 
@property (nonatomic,retain) CKDPDate * createdAt;                                 //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) char hasState; 
@property (assign,nonatomic) int state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) char hasInvitationMessage; 
@property (nonatomic,retain) NSString * invitationMessage;                         //@synthesize invitationMessage=_invitationMessage - In the implementation block
@property (nonatomic,readonly) char hasInvitationImageUrl; 
@property (nonatomic,retain) NSString * invitationImageUrl;                        //@synthesize invitationImageUrl=_invitationImageUrl - In the implementation block
@property (nonatomic,readonly) char hasRecipient; 
@property (nonatomic,retain) CKDPInvitationRecipient * recipient;                  //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                        //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) char hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                      //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (assign,nonatomic) char hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                  //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,readonly) char hasPayload; 
@property (nonatomic,retain) NSData * payload;                                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) char hasSignature; 
@property (nonatomic,retain) NSData * signature;                                   //@synthesize signature=_signature - In the implementation block
-(char)hasSignature;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setInvitationImageUrl:(NSString *)arg1 ;
-(char)hasShareId;
-(char)hasInvitationMessage;
-(char)hasInvitationImageUrl;
-(CKDPShareIdentifier *)shareId;
-(NSString *)invitationImageUrl;
-(char)hasApplicationContainer;
-(int)applicationContainerEnvironment;
-(void)setApplicationContainerEnvironment:(int)arg1 ;
-(void)setHasApplicationContainerEnvironment:(char)arg1 ;
-(char)hasApplicationContainerEnvironment;
-(void)setInvitationId:(CKDPIdentifier *)arg1 ;
-(char)hasInvitationId;
-(CKDPIdentifier *)invitationId;
-(void)setHasState:(char)arg1 ;
-(char)hasState;
-(void)setSenderId:(CKDPIdentifier *)arg1 ;
-(void)setCreatedAt:(CKDPDate *)arg1 ;
-(char)hasSenderId;
-(char)hasCreatedAt;
-(char)hasRecipient;
-(char)hasPayload;
-(CKDPIdentifier *)senderId;
-(CKDPDate *)createdAt;
-(NSString *)invitationMessage;
-(void)setInvitationMessage:(NSString *)arg1 ;
-(NSString *)applicationContainer;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPInvitationRecipient *)recipient;
-(void)setRecipient:(CKDPInvitationRecipient *)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setState:(int)arg1 ;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
@end
