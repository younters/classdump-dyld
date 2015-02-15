/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <IOBluetooth/NSCoding.h>

@class NSDictionary, IOBluetoothDevice, NSArray, IOBluetoothSDPUUID;

@interface IOBluetoothSDPServiceRecord : NSObject <NSCoding> {

	NSDictionary* mAttributeDictionary;
	IOBluetoothDevice* mDeviceForService;
	NSArray* sortedAttributes;

}

@property (retain) IOBluetoothDevice * device; 
@property (copy) NSDictionary * attributes; 
@property (copy) NSArray * sortedAttributes; 
@property (readonly) IOBluetoothSDPUUID * serviceUUID; 
+(id)withServiceDictionary:(id)arg1 device:(id)arg2 ;
+(id)publishedServiceRecordWithDictionary:(id)arg1 ;
+(id)withSDPServiceRecordRef:(OpaqueIOBluetoothObjectRefRef)arg1 ;
-(int)getRFCOMMChannelID:(char*)arg1 ;
-(id)getDevice;
-(char)hasServiceFromArray:(id)arg1 ;
-(id)getAttributeDataElement:(unsigned short)arg1 ;
-(int)getServiceRecordHandle:(unsigned*)arg1 ;
-(id)initWithServiceDictionary:(id)arg1 device:(id)arg2 ;
-(void)setSortedAttributes:(NSArray *)arg1 ;
-(char)matchesUUIDArray:(id)arg1 ;
-(int)getL2CAPPSM:(unsigned short*)arg1 ;
-(id)getServiceName;
-(int)removeServiceRecord;
-(OpaqueIOBluetoothObjectRefRef)getSDPServiceRecordRef;
-(id)getAttributes;
-(NSArray *)sortedAttributes;
-(char)matchesUUID16:(unsigned short)arg1 ;
-(char)matchesSearchArray:(id)arg1 ;
-(char)usesL2CAPPSM:(unsigned short)arg1 ;
-(char)usesRFCOMMChannelID:(unsigned char)arg1 ;
-(IOBluetoothSDPUUID *)serviceUUID;
-(unsigned short)handsFreeSupportedFeatures;
-(id)shortDescription;
-(oneway void)release;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(IOBluetoothDevice *)device;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setDevice:(IOBluetoothDevice *)arg1 ;
@end
