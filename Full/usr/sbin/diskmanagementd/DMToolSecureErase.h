/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/diskmanagementd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <diskmanagementd/diskmanagementd-Structs.h>
#import <diskmanagementd/DMTool.h>

@class DMToolProcess;

@interface DMToolSecureErase : DMTool {

	DMToolProcess* _proc;
	char _isBusy;
	DMUDSPrivRec _busyDisk;
	char _userCanceled;
	unsigned long long _callerDesiredPercentBegin;
	unsigned long long _callerDesiredPercentEnd;

}
-(void)scrubDisk:(id)arg1 dmError:(int*)arg2 tlError:(int*)arg3 ;
-(char)deleteFile1:(id)arg1 andFile2:(id)arg2 ;
-(void)createSparseDiskImageFile:(id)arg1 withUID:(unsigned)arg2 restoreUID:(unsigned)arg3 newDisk:(DMUDSPrivRec*)arg4 error:(int*)arg5 ;
-(void)createFileThatFillsRemainingVolumeFreespace:(id)arg1 file:(id)arg2 withUID:(unsigned)arg3 restoreUID:(unsigned)arg4 error:(int*)arg5 ;
-(int)remountDiskNoFixup:(DMUDSPrivRec*)arg1 ;
-(void)secureEraseDiskWorker:(id)arg1 ;
-(void)secureEraseFreeSpaceWorker:(id)arg1 ;
-(int)securelyEraseDiskAsync:(DMUDSPrivRec*)arg1 level:(int)arg2 count:(int)arg3 force:(char)arg4 ;
-(int)securelyEraseFreespaceAsync:(DMUDSPrivRec*)arg1 level:(int)arg2 ;
-(int)zeroDisk:(DMUDSPrivRec*)arg1 start:(id)arg2 length:(id)arg3 percentBegin:(unsigned long long)arg4 percentEnd:(unsigned long long)arg5 ;
-(void)cancelCurrentOperation;
-(void)done;
-(id)init;
-(void)dealloc;
@end
