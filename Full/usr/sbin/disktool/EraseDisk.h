/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/disktool
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <disktool/disktool-Structs.h>
#import <disktool/DMAsyncDelegate.h>

@class DMManager, DMEraseDisk;

@interface EraseDisk : NSObject <DMAsyncDelegate> {

	DMManager* _dmManager;
	DMEraseDisk* _dmEraseDisk;
	char _lowLevelFormatting;
	char _erasingOptical;

}
-(void)eraseDisk:(id)arg1 ;
-(void)eraseVolume:(id)arg1 ;
-(void)reformat:(id)arg1 ;
-(void)eraseOptical:(id)arg1 ;
-(void)zeroDisk:(id)arg1 ;
-(void)randomDisk:(id)arg1 ;
-(void)secureEraseDisk:(id)arg1 ;
-(DADiskRef)getDiskFromArgumentString:(id)arg1 ;
-(void)diskHelp;
-(void)volumeHelp;
-(void)reformatHelp;
-(void)opticalHelp;
-(void)zeroHelp;
-(void)randomHelp;
-(void)secureHelp;
-(void)dmAsyncStartedForDisk:(DADiskRef)arg1 ;
-(void)dmAsyncProgressForDisk:(DADiskRef)arg1 barberPole:(char)arg2 percent:(float)arg3 ;
-(void)dmAsyncMessageForDisk:(DADiskRef)arg1 string:(id)arg2 dictionary:(id)arg3 ;
-(void)dmAsyncFinishedForDisk:(DADiskRef)arg1 mainError:(int)arg2 detailError:(int)arg3 dictionary:(id)arg4 ;
-(void)dmInterruptibilityChanged:(char)arg1 ;
@end
