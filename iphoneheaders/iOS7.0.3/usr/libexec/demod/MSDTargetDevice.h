/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDictionary, NSDate;

@interface MSDTargetDevice : NSObject

@property (getter=udid,readonly) NSString * udid; 
@property (getter=serialNumber,readonly) NSString * serialNumber; 
@property (getter=productID,readonly) NSString * productID; 
@property (getter=stagingRootPath,readonly) NSString * stagingRootPath; 
@property (getter=destinationRootPath,readonly) NSString * destinationRootPath; 
@property (getter=mode,readonly) int mode; 
@property (getter=contentInfo,readonly) NSDictionary * contentInfo; 
@property (getter=lastRebootTime,readonly) NSDate * lastRebootTime; 
+(id)sharedInstance;
-(id)getSavedRequest;
-(id)getSavedServer;
-(id)getSavedPort;
-(BOOL)deleteOperationRequest;
-(BOOL)rebuildAppInstallationMap;
-(BOOL)switchModeImmediately:(int)arg1 ;
-(BOOL)preventSleep;
-(BOOL)expandPartitionSize;
-(void)showConfigurationApp;
-(BOOL)saveHubBonjourName:(id)arg1 ;
-(BOOL)saveOperationRequest:(id)arg1 server:(id)arg2 port:(id)arg3 ;
-(void)manualUpdateMode:(BOOL*)arg1 allowChange:(BOOL*)arg2 ;
-(BOOL)demoSetup;
-(id)readNVRam:(id)arg1 ;
-(void)backToVirgin;
-(BOOL)allowSnapshotMode;
-(void)showConfigurationApp:(BOOL)arg1 ;
-(BOOL)deleteConfigurationApp;
-(BOOL)resizePartitionSizeForSnapshot:(BOOL)arg1 ;
-(BOOL)writeNVRam:(id)arg1 withValue:(id)arg2 ;
-(void)enableSnapshotMode:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)rebootForStage:(int)arg1 ;
-(BOOL)deleteNVRam:(id)arg1 ;
-(id)pathForPreferenceFile;
-(id)contentInfo;
-(id)lastRebootTime;
-(BOOL)MIRebuildAppInstallationMap;
-(id)createSavedRequestString;
-(void)patchBackupFolder;
-(id)deviceInformation:(id)arg1 ;
-(BOOL)LSRebuildAppInstallationMap;
-(id)stagingRootPath;
-(id)destinationRootPath;
-(id)certificateHash;
-(BOOL)saveCertificateHash:(id)arg1 ;
-(id)hubBonjourName;
-(BOOL)saveDemoContentInfo:(id)arg1 ;
-(id)udid;
-(int)mode;
-(id)productID;
-(id)serialNumber;
@end
