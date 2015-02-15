/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/Frameworks/DVTInstrumentsFoundation.framework/Versions/A/DVTInstrumentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DVTInstrumentsFoundation/DVTInstrumentsFoundation-Structs.h>
#import <DTXConnectionServices/DTXService.h>
#import <DVTInstrumentsFoundation/DTDeviceInfoServiceAuthorizedAPI.h>

@class NSString;

@interface DTDeviceInfoService : DTXService <DTDeviceInfoServiceAuthorizedAPI> {

	CFDictionaryRef _trackingSymbolicatorsByPid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isApplication:(id)arg1 ;
+(void)registerCapabilities:(id)arg1 ;
-(id)iconDescriptionForIconPath:(id)arg1 ;
-(int)numberOfPhysicalCpus;
-(int)numberOfCpus;
-(int)speedOfCpus;
-(int)hwCPUtype;
-(int)hwCPUsubtype;
-(int)hwCPU64BitCapable;
-(id)lookupSysctl:(const char*)arg1 ;
-(id)machTimeInfo;
-(id)nameForUID:(id)arg1 ;
-(id)nameForGID:(id)arg1 ;
-(id)pidIs64Bit:(id)arg1 ;
-(id)machKernelName;
-(void)unregisterSignatureTrackingForPid:(id)arg1 ;
-(id)directoryListingForPath:(id)arg1 ;
-(id)iconDescriptionFileForAppPath:(id)arg1 ;
-(id)networkInformation;
-(id)cpDeviceInfoAsXML;
-(id)cpDeviceName;
-(id)runningProcesses;
-(id)isRunningPid:(id)arg1 ;
-(id)symbolicatorSignatureForPid:(id)arg1 trackingSelector:(id)arg2 ;
-(id)execnameForPid:(id)arg1 ;
-(id)hardwareInformation;
-(id)cpKDebugEventsAsXML;
-(id)symbolicatorSignaturesForExpiredPids;
-(id)systemInformation;
-(void)messageReceived:(id)arg1 ;
-(id)productVersion;
-(id)initWithChannel:(id)arg1 ;
-(void)dealloc;
-(id)uniqueID;
@end
