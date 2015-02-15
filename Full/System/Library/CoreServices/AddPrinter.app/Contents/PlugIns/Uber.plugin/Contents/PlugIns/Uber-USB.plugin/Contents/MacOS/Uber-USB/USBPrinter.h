/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:34:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/AddPrinter.app/Contents/PlugIns/Uber.plugin/Contents/PlugIns/Uber-USB.plugin/Contents/MacOS/Uber-USB
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PMBrowser/PMBrowserPrinter.h>
#import <Uber-USB/PMBrowserPrinterDeviceProtocol.h>
#import <Uber-USB/PMBrowserPrinterScannerProtocol.h>

@class NSString, NSMutableDictionary, PrinterConfigure, NSNumber;

@interface USBPrinter : PMBrowserPrinter <PMBrowserPrinterDeviceProtocol, PMBrowserPrinterScannerProtocol> {

	id _deviceLocation;
	id _vendorID;
	id _productID;
	NSString* _deviceID;
	NSMutableDictionary* _scannerIDs;
	PrinterConfigure* _configureObject;
	NSString* _dnssdName;
	NSString* _uuid;

}

@property (retain,readonly) NSNumber * deviceLocation;              //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (retain,readonly) NSNumber * vendorID;                    //@synthesize vendorID=_vendorID - In the implementation block
@property (retain,readonly) NSNumber * productID;                   //@synthesize productID=_productID - In the implementation block
@property (copy) NSString * dnssdName;                              //@synthesize dnssdName=_dnssdName - In the implementation block
@property (copy) NSString * uuid;                                   //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * deviceID;                             //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSMutableDictionary * scannerIDs;                //@synthesize scannerIDs=_scannerIDs - In the implementation block
+(id)usbPrinterWithDeviceLocation:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 deviceID:(id)arg4 ;
-(id)airprintMatch;
-(id)ppdMatches;
-(id)browserIdentifier;
-(char)supportsPostscript;
-(char)supportsPCL;
-(char)supportsRaster;
-(char)canDetermineDriver;
-(char)supportsAutoSelect;
-(char)configure;
-(char)cancelConfigure;
-(id)printer1284DeviceID;
-(id)printerSUScanID;
-(void)PrinterConfigure:(id)arg1 messaageChanged:(id)arg2 ;
-(void)PrinterConfigure:(id)arg1 didCompleteConfigure:(int)arg2 ;
-(void)setConfigureObject:(id)arg1 ;
-(id)scannerUUID;
-(id)configureObject;
-(id)scannerModulePath;
-(id)dictionaryWithDriverSpecification:(id)arg1 ;
-(char)supportsAutoSetup:(id)arg1 ;
-(void)setDnssdName:(NSString *)arg1 ;
-(void)setScannerIDs:(NSMutableDictionary *)arg1 ;
-(id)initUSBPrinterWithDeviceLocation:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 deviceID:(id)arg4 ;
-(NSString *)dnssdName;
-(NSMutableDictionary *)scannerIDs;
-(id)deviceURIBasedOn:(id)arg1 ;
-(void)setScannerUUID:(id)arg1 modulePath:(id)arg2 ;
-(char)matchesICDevice:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSNumber *)productID;
-(NSNumber *)deviceLocation;
-(void)dealloc;
-(id)name;
-(NSString *)deviceID;
-(NSNumber *)vendorID;
-(id)location;
-(void)setDeviceID:(NSString *)arg1 ;
-(id)uri;
@end
