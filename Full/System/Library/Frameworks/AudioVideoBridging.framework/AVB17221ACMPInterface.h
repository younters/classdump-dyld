/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB1722ControlInterface.h>

@protocol AVB17221ACMPClient;
@class NSMutableDictionary, AVBMACAddress, NSMutableArray;

@interface AVB17221ACMPInterface : AVB1722ControlInterface {

	NSMutableDictionary* commandHandlers;
	unsigned short nextSequenceID;
	AVBMACAddress* multicastDestinationAddress;
	char _monitorMode;
	id<AVB17221ACMPClient> _monitorModeDelegate;
	NSMutableArray* pendingResponses;

}

@property (copy) AVBMACAddress * multicastDestinationAddress; 
+(id)IOClassName;
+(char)addToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
+(char)removeFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
+(id)ACMPInterfaceWithInterface:(id)arg1 ;
+(id)ACMPInterfaceWithInterfaceNamed:(id)arg1 ;
-(void)serviceTerminated;
-(id)initWithService:(unsigned)arg1 onInterfaceNamed:(id)arg2 ;
-(void)receivedControlFrameWithInfo:(SCD_Struct_AV2*)arg1 andPayload:(char*)arg2 ofLength:(unsigned long long)arg3 ;
-(void)setMulticastDestinationAddress:(AVBMACAddress *)arg1 ;
-(char)setHandler:(id)arg1 forEntityID:(unsigned long long)arg2 ;
-(void)removeHandlerForEntityID:(unsigned long long)arg1 ;
-(AVBMACAddress *)multicastDestinationAddress;
-(char)sendACMPMessage:(id)arg1 error:(id*)arg2 ;
-(char)sendACMPSyncCommandMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)setHandler:(id)arg1 forGUID:(unsigned long long)arg2 ;
-(void)removeHandlerForGUID:(unsigned long long)arg1 ;
-(void)_enableMonitorModeWithDelegate:(id)arg1 ;
-(void)_disableMonitorMode;
-(char)sendACMPResponseMessage:(id)arg1 error:(id*)arg2 ;
-(char)sendACMPCommandMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
