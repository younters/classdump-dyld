/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBService, CBUUID, NSData, NSArray, CBPeripheral, NSNumber;

@interface CBCharacteristic : NSObject {

	CBService* _service;
	CBUUID* _UUID;
	long long _properties;
	NSData* _value;
	NSArray* _descriptors;
	char _isBroadcasted;
	char _isNotifying;
	CBPeripheral* _peripheral;
	NSNumber* _handle;
	NSNumber* _valueHandle;

}

@property (assign,nonatomic,__weak) CBService * service;               //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) CBUUID * UUID;                          //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) long long properties;                   //@synthesize properties=_properties - In the implementation block
@property (retain) NSData * value;                                     //@synthesize value=_value - In the implementation block
@property (retain) NSArray * descriptors;                              //@synthesize descriptors=_descriptors - In the implementation block
@property (readonly) char isBroadcasted;                               //@synthesize isBroadcasted=_isBroadcasted - In the implementation block
@property (assign) char isNotifying;                                   //@synthesize isNotifying=_isNotifying - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                      //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSNumber * valueHandle;                 //@synthesize valueHandle=_valueHandle - In the implementation block
-(CBUUID *)UUID;
-(NSNumber *)handle;
-(CBService *)service;
-(void)setService:(CBService *)arg1 ;
-(CBPeripheral *)peripheral;
-(void)setDescriptors:(NSArray *)arg1 ;
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(id)handleValueBroadcasted:(id)arg1 ;
-(id)handleValueNotifying:(id)arg1 ;
-(id)handleDescriptorsDiscovered:(id)arg1 ;
-(NSArray *)descriptors;
-(char)isBroadcasted;
-(char)isNotifying;
-(void)setIsNotifying:(char)arg1 ;
-(NSNumber *)valueHandle;
-(void)dealloc;
-(void)invalidate;
-(void)setValue:(NSData *)arg1 ;
-(long long)properties;
-(NSData *)value;
@end

