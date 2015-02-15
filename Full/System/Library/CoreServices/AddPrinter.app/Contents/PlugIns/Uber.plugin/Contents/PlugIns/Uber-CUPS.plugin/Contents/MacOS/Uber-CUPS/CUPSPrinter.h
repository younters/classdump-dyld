/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:34:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/AddPrinter.app/Contents/PlugIns/Uber.plugin/Contents/PlugIns/Uber-CUPS.plugin/Contents/MacOS/Uber-CUPS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PMBrowser/PMBrowserPrinter.h>
#import <Uber-CUPS/PMBrowserPrinterDeviceProtocol.h>

@class NSMutableDictionary, PrinterConfigure, NSString;

@interface CUPSPrinter : PMBrowserPrinter <PMBrowserPrinterDeviceProtocol> {

	NSMutableDictionary* _device;
	PrinterConfigure* _configureObject;
	NSString* _deviceKind;
	unsigned long long _updateIndex;

}
+(id)CUPSPrinterWithDevice:(id)arg1 deviceKind:(id)arg2 ;
-(id)ppdMatches;
-(id)browserIdentifier;
-(char)supportsPostscript;
-(char)supportsPCL;
-(char)supportsRaster;
-(char)supportsAutoSelect;
-(char)configure;
-(char)cancelConfigure;
-(id)printer1284DeviceID;
-(id)printerSUScanID;
-(id)make;
-(void)PrinterConfigure:(id)arg1 messaageChanged:(id)arg2 ;
-(void)PrinterConfigure:(id)arg1 didCompleteConfigure:(int)arg2 ;
-(void)setConfigureObject:(id)arg1 ;
-(id)configureObject;
-(id)dictionaryWithDriverSpecification:(id)arg1 ;
-(char)supportsAutoSetup:(id)arg1 ;
-(void)setUpdateIndex:(unsigned long long)arg1 ;
-(id)deviceKind;
-(unsigned long long)updateIndex;
-(void)setDeviceKind:(id)arg1 ;
-(id)initCUPSPrinterWithDevice:(id)arg1 deviceKind:(id)arg2 ;
-(id)info;
-(void)dealloc;
-(id)name;
-(id)device;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(id)uri;
-(void)setDevice:(id)arg1 ;
@end
