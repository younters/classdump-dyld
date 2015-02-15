/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Image Capture/Support/Image Capture Extension.app/Contents/MacOS/Image Capture Extension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, NSMutableDictionary, NSMutableIndexSet, NSMutableArray, NSDictionary;

@interface ICBonjourService : NSObject {

	id _delegate;
	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSObject*<OS_dispatch_queue> _callbackQ;
	NSObject*<OS_dispatch_queue> _privateQ;
	NSObject*<OS_dispatch_source> _resolveSrc;
	NSObject*<OS_dispatch_source> _txtRecordMonitoringSrc;
	NSMutableDictionary* _txtRecordsDictionary;
	NSMutableIndexSet* _interfaceIndexes;
	unsigned short _port;
	NSString* _hosttarget;
	NSMutableArray* _addresses;

}

@property (assign) id delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * serviceName;                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (copy) NSString * serviceType;                                 //@synthesize serviceType=_serviceType - In the implementation block
@property (copy) NSString * serviceDomain;                               //@synthesize serviceDomain=_serviceDomain - In the implementation block
@property (readonly) NSMutableIndexSet * interfaceIndexes;               //@synthesize interfaceIndexes=_interfaceIndexes - In the implementation block
@property (readonly) NSString * fullname; 
@property (copy) NSDictionary * txtRecordsDictionary;                    //@synthesize txtRecordsDictionary=_txtRecordsDictionary - In the implementation block
@property (readonly) NSDictionary * txtRecordsDictionaryV2; 
@property (readonly) unsigned short port;                                //@synthesize port=_port - In the implementation block
@property (readonly) NSString * hosttarget;                              //@synthesize hosttarget=_hosttarget - In the implementation block
@property (readonly) NSMutableArray * addresses;                         //@synthesize addresses=_addresses - In the implementation block
+(id)serviceWithServiceName:(id)arg1 serviceType:(id)arg2 serviceDomain:(id)arg3 interfaceIndex:(unsigned)arg4 callbackOn:(id)arg5 ;
-(char)startMonitoringTXTRecords;
-(void)stopMonitoringTXTRecords;
-(NSDictionary *)txtRecordsDictionary;
-(NSString *)hosttarget;
-(void)stopResolve;
-(NSDictionary *)txtRecordsDictionaryV2;
-(void)setServiceDomain:(NSString *)arg1 ;
-(NSMutableIndexSet *)interfaceIndexes;
-(id)initWithServiceName:(id)arg1 serviceType:(id)arg2 serviceDomain:(id)arg3 interfaceIndex:(unsigned)arg4 callbackOn:(id)arg5 ;
-(id)txtRecDictFromData:(const void*)arg1 len:(unsigned short)arg2 ;
-(void)setTxtRecordsDictionary:(NSDictionary *)arg1 ;
-(void)handleFlags:(unsigned)arg1 interfaceIndex:(unsigned)arg2 errorCode:(int)arg3 fullname:(const char*)arg4 rrtype:(unsigned short)arg5 rrclass:(unsigned short)arg6 rdlen:(unsigned short)arg7 rdata:(const void*)arg8 ttl:(unsigned)arg9 ;
-(void)handleFlags:(unsigned)arg1 interfaceIndex:(unsigned)arg2 errorCode:(int)arg3 fullname:(const char*)arg4 hosttarget:(const char*)arg5 port:(unsigned short)arg6 txtLen:(unsigned short)arg7 txtRecord:(const char*)arg8 ;
-(char)resolveWithTimeout:(double)arg1 ;
-(NSString *)serviceName;
-(NSString *)serviceDomain;
-(NSString *)fullname;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(void)setServiceName:(NSString *)arg1 ;
-(char)resolve;
-(unsigned short)port;
-(NSMutableArray *)addresses;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
@end
