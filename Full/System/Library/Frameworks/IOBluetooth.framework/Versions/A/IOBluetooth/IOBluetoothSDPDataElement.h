/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <IOBluetooth/NSCoding.h>

@class NSObject;

@interface IOBluetoothSDPDataElement : NSObject <NSCoding> {

	unsigned char mTypeDescriptor;
	unsigned char mSizeDescriptor;
	unsigned mSize;
	NSObject* mValue;
	void* _mReserved;

}
+(id)withElementValue:(id)arg1 ;
+(id)withType:(unsigned char)arg1 sizeDescriptor:(unsigned char)arg2 size:(unsigned)arg3 value:(id)arg4 ;
+(id)withSDPDataElementRef:(OpaqueIOBluetoothObjectRefRef)arg1 ;
+(id)withBytes:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)getNumberValue;
-(id)getDataValue;
-(id)getArrayValue;
-(id)getUUIDValue;
-(id)initWithElementValue:(id)arg1 ;
-(id)initWithType:(unsigned char)arg1 sizeDescriptor:(unsigned char)arg2 size:(unsigned)arg3 value:(id)arg4 ;
-(void)updateVariableSizeDescriptor;
-(char)updateFromArrayValue:(id)arg1 ;
-(void)updateFixedSizeDescriptor;
-(id)getValue;
-(id)promoteUUID:(id)arg1 length:(unsigned char)arg2 ;
-(unsigned char)getTypeDescriptor;
-(unsigned)getSize;
-(OpaqueIOBluetoothObjectRefRef)getSDPDataElementRef;
-(unsigned char)getSizeDescriptor;
-(char)containsDataElement:(id)arg1 ;
-(id)initWithBytes:(char*)arg1 maxLength:(unsigned)arg2 ;
-(unsigned char)readHeaderData:(char*)arg1 maxLength:(unsigned)arg2 ;
-(unsigned)getEncodedSize;
-(unsigned char)getHeaderSize;
-(char)encodeDataElement:(char*)arg1 ;
-(void)replaceValue:(id)arg1 ;
-(char)containsValue:(id)arg1 ;
-(id)getStringValue;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
@end
