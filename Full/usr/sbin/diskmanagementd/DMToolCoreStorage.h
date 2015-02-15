/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/diskmanagementd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <diskmanagementd/diskmanagementd-Structs.h>
#import <diskmanagementd/DMTool.h>

@class NSString;

@interface DMToolCoreStorage : DMTool {

	NSString* _csNotificationTargetLVUUID;
	char _csNotificationHit;
	NSString* _csNotificationBSDName;

}
-(int)chosenOrChooseDPVForLVG:(id)arg1 exists:(char*)arg2 pvUUID:(id*)arg3 pvUDS:(DMUDSPrivRec*)arg4 ;
-(int)resizeLVAndUnderlyingPVOnly:(id)arg1 newLVSize:(id)arg2 whichPVToUse:(id)arg3 preserveBooterContent:(char)arg4 LMBROption:(id)arg5 newMapEntries:(id)arg6 newEntriesCreated:(id*)arg7 percentBegin:(unsigned long long)arg8 percentEnd:(unsigned long long)arg9 ;
-(int)growLVThenVolumeForLVUUID:(id)arg1 lvUDS:(DMUDSPrivRec*)arg2 newSize:(id)arg3 percentBegin:(unsigned long long)arg4 percentEnd:(unsigned long long)arg5 ;
-(int)shrinkVolumeThenLVForLVUUID:(id)arg1 lvUDS:(DMUDSPrivRec*)arg2 newSize:(id)arg3 percentBegin:(unsigned long long)arg4 percentEnd:(unsigned long long)arg5 ;
-(int)shrinkLVToClearLVGOvercommitForLVUDS:(DMUDSPrivRec*)arg1 shrinkError:(int*)arg2 percentBegin:(unsigned long long)arg3 percentEnd:(unsigned long long)arg4 ;
-(int)setPartitionTypeAndEnsureBooter:(DMUDSPrivRec*)arg1 partitionType:(id)arg2 partitionName:(id)arg3 allowErase:(char)arg4 newSlice:(int*)arg5 ;
-(void)createPVDisk_priv_cleanup_:(id)arg1 ;
-(int)resizeCSPV:(id)arg1 isGrow:(char)arg2 newSize:(id)arg3 percentBegin:(unsigned long long)arg4 percentEnd:(unsigned long long)arg5 ;
-(int)resizeCSLV:(id)arg1 isGrow:(char)arg2 newSize:(id)arg3 actualNewSize:(id*)arg4 percentBegin:(unsigned long long)arg5 percentEnd:(unsigned long long)arg6 ;
-(int)alignLVSizeRequestForPartHfsCsWithDisk:(DMUDSPrivRec*)arg1 withLVG:(id)arg2 alignFactor:(id*)arg3 roundThisDown:(id*)arg4 roundThisUp:(id*)arg5 ;
-(int)growSliceThenPVForPVUUID:(id)arg1 pvUDS:(DMUDSPrivRec*)arg2 newSize:(id)arg3 preserveBooterContent:(char)arg4 lmbrOption:(id)arg5 percentBegin:(unsigned long long)arg6 percentEnd:(unsigned long long)arg7 ;
-(int)shrinkPVThenSliceForPVUUID:(id)arg1 pvUDS:(DMUDSPrivRec*)arg2 newSize:(id)arg3 preserveBooterContent:(char)arg4 newMapEntries:(id)arg5 lmbrOption:(id)arg6 newEntriesCreated:(id*)arg7 percentBegin:(unsigned long long)arg8 percentEnd:(unsigned long long)arg9 ;
-(int)safelyAddPrivateOptionsToInfo:(id)arg1 options:(id)arg2 ;
-(int)createFDEContextWithSingleDiskPassphraseEntryOrNil:(id)arg1 passHintOrNil:(id)arg2 orRecipeOrNULL:(CFArrayRef)arg3 initConversionState:(id)arg4 fdeContext:(_CFDictionary*)arg5 kekHandle:(const _CFString*)arg6 ;
-(int)updateEFILoginGraphicsInFDEContext:(CFDictionaryRef)arg1 ;
-(CFStringRef)createLVGWhileRunningCurrentRunLoop:(CFDictionaryRef)arg1 ;
-(int)waitForAppearanceOfDiskForLV:(CFStringRef)arg1 waitForMount:(char)arg2 timeout:(unsigned long long)arg3 newDiskBSD:(id*)arg4 ;
-(int)unlockFDEContext:(CFDictionaryRef)arg1 usingOptions:(id)arg2 lvfUUID:(id)arg3 lvUDS:(DMUDSPrivRec*)arg4 kekHandle:(const _CFString*)arg5 ;
-(int)finishRevertOnlyForLVUUID:(id)arg1 ;
-(int)createPVDisk_prepare:(DMUDSPrivRec*)arg1 withName:(id)arg2 protoPVDevNode:(id*)arg3 protoPVInfo:(id*)arg4 ;
-(int)createPVDisk_add:(DMUDSPrivRec*)arg1 addToLVGProperties:(CFDictionaryRef)arg2 newPVUUID:(id*)arg3 ;
-(int)createPVDisk_commit:(id)arg1 ;
-(void)createPVDisk_reset:(id)arg1 ;
-(void)createPVDisk_finish:(id)arg1 ;
-(int)setFDEPassHint:(id)arg1 fdeContext:(CFDictionaryRef)arg2 fdeUserUUID:(id)arg3 ;
-(int)makeSparseLVGOnly:(id)arg1 percentBegin:(unsigned long long)arg2 percentEnd:(unsigned long long)arg3 ;
-(char)isValidEntryPoint:(id)arg1 ;
-(int)waitForAppearanceOfMountForBSD:(id)arg1 timeout:(unsigned long long)arg2 mountpoint:(id*)arg3 ;
-(void)resizeLV:(id)arg1 ;
-(void)resizePV:(id)arg1 ;
-(void)resizeLVAndUnderlyingPV:(id)arg1 ;
-(id)designatedPVForResizeLVAndUnderlyingPV:(id)arg1 outDict:(id)arg2 ;
-(void)convertDisk:(id)arg1 ;
-(void)revertDisk:(id)arg1 ;
-(void)finishRevertDisk:(id)arg1 ;
-(void)createLVG:(id)arg1 ;
-(void)destroyLVG:(id)arg1 ;
-(void)addPV:(id)arg1 ;
-(void)removePV:(id)arg1 ;
-(void)renameLVG:(id)arg1 ;
-(void)createLV:(id)arg1 ;
-(void)destroyLV:(id)arg1 ;
-(void)encryptLV:(id)arg1 ;
-(void)decryptLV:(id)arg1 ;
-(void)bringOnlineEncryptedLV:(id)arg1 ;
-(void)changePassphraseForEncryptedLV:(id)arg1 ;
-(void)makeSparseLVG:(id)arg1 ;
-(void)done;
-(id)init;
-(void)dealloc;
@end
