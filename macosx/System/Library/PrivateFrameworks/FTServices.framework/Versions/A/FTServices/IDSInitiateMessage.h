/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/IDSFaceTimeMessage.h>
#import <FTServices/NSCopying.h>

@class NSData, NSNumber, NSArray, NSDictionary;

@interface IDSInitiateMessage : IDSFaceTimeMessage <NSCopying> {

	NSData* _selfBlob;
	NSData* _selfPushToken;
	NSNumber* _selfNATType;
	NSData* _selfNatIP;
	NSArray* _peers;
	NSArray* _canonicalizedPeers;
	NSDictionary* _regionInformation;

}

@property (copy) NSData * selfBlob;                             //@synthesize selfBlob=_selfBlob - In the implementation block
@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSNumber * selfNATType;                        //@synthesize selfNATType=_selfNATType - In the implementation block
@property (copy) NSData * selfNatIP;                            //@synthesize selfNatIP=_selfNatIP - In the implementation block
@property (copy) NSDictionary * regionInformation;              //@synthesize regionInformation=_regionInformation - In the implementation block
@property (copy) NSArray * peers;                               //@synthesize peers=_peers - In the implementation block
@property (copy) NSArray * canonicalizedPeers;                  //@synthesize canonicalizedPeers=_canonicalizedPeers - In the implementation block
-(id)requiredKeys;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSData *)selfPushToken;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(NSNumber *)selfNATType;
-(NSData *)selfBlob;
-(void)setSelfNATType:(NSNumber *)arg1 ;
-(void)setSelfBlob:(NSData *)arg1 ;
-(NSArray *)peers;
-(void)setPeers:(NSArray *)arg1 ;
-(NSDictionary *)regionInformation;
-(NSData *)selfNatIP;
-(void)setCanonicalizedPeers:(NSArray *)arg1 ;
-(void)setSelfNatIP:(NSData *)arg1 ;
-(NSArray *)canonicalizedPeers;
-(void)setRegionInformation:(NSDictionary *)arg1 ;
@end
