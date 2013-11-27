/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSNumber, NSString;

@interface iAP2SupportedEAProtocol : NSObject {

	NSNumber* protocolID;
	NSString* protocolName;
	int matchAction;
	NSNumber* nativeTransportComponentID;
	unsigned paramCountArr[4];

}

@property (retain) NSNumber * protocolID; 
@property (retain) NSString * protocolName; 
@property (assign) int matchAction; 
@property (retain) NSNumber * nativeTransportComponentID; 
-(void)setProtocolName:(id)arg1 ;
-(void)setProtocolID:(id)arg1 ;
-(void)setNativeTransportComponentID:(id)arg1 ;
-(id)nativeTransportComponentID;
-(unsigned)paramCount:(int)arg1 ;
-(id)protocolName;
-(id)protocolID;
-(int)matchAction;
-(void)incrementParamCount:(int)arg1 ;
-(void)setMatchAction:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end
