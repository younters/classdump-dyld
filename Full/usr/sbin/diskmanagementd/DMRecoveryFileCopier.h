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

@interface DMRecoveryFileCopier : DMTool {

	NSString* _OSXImageFile;
	NSString* _DIAGSImageFile;
	NSString* _OSXChunkListFile;
	NSString* _DIAGSChunkListFile;
	char _badDIAGSIsSoftErr;
	char _doingImageVerifies;
	char _existsPlatformSupportPlist;
	char _existsDIAGSImageInfoPList;
	char _weDidOSXAttach;
	char _weDidDIAGSAttach;
	DMUDSPrivRec _attachedOSXWholeDisk;
	DMUDSPrivRec _attachedDIAGSWholeDisk;
	NSString* _attachedOSXMountpoint;
	NSString* _attachedDIAGSMountpoint;
	DMUDSPrivRec _statusReportingDisk;

}
-(int)setOSXImageFile:(id)arg1 DIAGSImageFile:(id)arg2 OSXChunkListFile:(id)arg3 DIAGSChunkListFile:(id)arg4 doVerifyImages:(char)arg5 badDIAGSIsSoftError:(char)arg6 statusReportingDisk:(DMUDSPrivRec*)arg7 ;
-(int)attachAndMountAtPercentBegin:(unsigned long long)arg1 percentEnd:(unsigned long long)arg2 ;
-(int)calculateFilesSizeAtPercentBegin:(unsigned long long)arg1 percentEnd:(unsigned long long)arg2 filesSize:(unsigned long long*)arg3 ;
-(int)copyFilesToPath:(id)arg1 atPercentBegin:(unsigned long long)arg2 percentEnd:(unsigned long long)arg3 ;
-(int)recoverySystemUserVisibleVersion:(id*)arg1 ;
-(int)unmountAndDetachAtPercentBegin:(unsigned long long)arg1 percentEnd:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
@end
