/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iTunes.app/Contents/Frameworks/iPodUpdater.framework/iPodUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iPodUpdater/iPodUpdater-Structs.h>
@class NSString, BuildVersion, NSArray;

@interface Firmware : NSObject {

	NSString* _path;
	NSString* _bootloaderPath;
	NSString* _sysConfigPath;
	BuildVersion* _buildVersion;
	NSArray* _firmwareComponents;
	NSString* _firmwareComponentsRootPath;
	NSString* _firmwareType;
	int _fdFirmware;
	int _fdBootloader;
	int _fdSysCfg;
	opaque_pthread_mutex_t _diskReadLock;

}
+(id)stringForFirmwareType:(int)arg1 ;
-(id)initWithManifestAtPath:(id)arg1 ;
-(id)firmwareComponentsPath;
-(char)isSigmatelShuffle:(id)arg1 ;
-(id)bootloaderPath;
-(id)sysConfigPath;
-(char)hasFirmware;
-(char)hasBootloader;
-(char)hasSysCfg;
-(char)hasFirmwareType:(int)arg1 ;
-(int)fileDescriptorForType:(int)arg1 ;
-(id)pathForType:(int)arg1 ;
-(void)ensureFileOpen:(int)arg1 ;
-(id)initWithPath:(id)arg1 buildVersion:(id)arg2 ;
-(char)hasFirmwareComponents;
-(id)firmwareComponents;
-(unsigned long long)firmwareSize:(int)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 type:(int)arg3 ;
-(id)buildVersion;
-(void)dealloc;
-(id)path;
@end
