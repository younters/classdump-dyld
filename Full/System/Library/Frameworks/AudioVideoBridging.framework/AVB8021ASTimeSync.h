/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
@class NSMutableArray, AVBInterface, NSString, NSArray;

@interface AVB8021ASTimeSync : NSObject {

	unsigned _service;
	unsigned _connection;
	IONotificationPortRef _notificationPort;
	dispatch_queue_sRef _notificationsQueue;
	NSMutableArray* _clients;
	AVBInterface* interface;
	NSString* _interfaceName;

}

@property (assign) AVBInterface * interface; 
@property (copy) NSString * interfaceName;                                    //@synthesize interfaceName=_interfaceName - In the implementation block
@property (getter=isClockMaster,readonly) char clockMaster; 
@property (getter=isClockFreeRunning,readonly) char freeRunning; 
@property (readonly) long long clockLockState; 
@property (readonly) unsigned long long currentGrandmasterID; 
@property (readonly) unsigned propagationDelay; 
@property (copy,readonly) NSArray * asPath; 
@property (readonly) unsigned long long clockIdentity; 
@property (readonly) unsigned long long remoteClockIdentity; 
@property (readonly) unsigned short remotePortNumber; 
@property (readonly) char isASCapable; 
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 ;
+(id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)arg1 ;
+(unsigned long long)_mach_absolute_time;
-(char)setClockClass:(unsigned char)arg1 ;
-(char)setClockAccuracy:(unsigned char)arg1 ;
-(unsigned long long)clockIdentity;
-(char)isASCapable;
-(unsigned long long)currentGrandmasterID;
-(unsigned long long)remoteClockIdentity;
-(unsigned)propagationDelay;
-(NSArray *)asPath;
-(char)registerAsyncCallback;
-(char)deregisterAsyncDCLCallback;
-(void)_handleNotification:(int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(char)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(char)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(char)isClockMaster;
-(char)isClockFreeRunning;
-(long long)clockLockState;
-(void)registryPropertyChanged;
-(char)sendSignalToTargetClockIdentity:(unsigned long long)arg1 port:(unsigned short)arg2 linkDelayInterval:(char)arg3 timeSyncInterval:(char)arg4 announceInterval:(char)arg5 ;
-(unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned)arg1 withFlags:(unsigned*)arg2 ;
-(char)convertFrom32BitASTime:(unsigned*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(char)setClockPriority1:(unsigned char)arg1 ;
-(char)setClockPriority2:(unsigned char)arg1 ;
-(id)commonInit;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(unsigned short)remotePortNumber;
-(void)addClient:(id)arg1 ;
-(AVBInterface *)interface;
-(void)setInterface:(AVBInterface *)arg1 ;
-(id)initWithInterface:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)removeClient:(id)arg1 ;
@end
