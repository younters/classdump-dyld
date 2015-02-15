/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/disktool
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <disktool/disktool-Structs.h>
@interface DiskInformation : NSObject
-(void)list:(id)arg1 ;
-(void)information:(id)arg1 ;
-(void)listFilesystems:(id)arg1 ;
-(void)informationHelp;
-(void)listHelp;
-(char)printDetailedInformationForDisk:(DADiskRef)arg1 asPList:(char)arg2 dmManager:(id)arg3 dmCoreStorage:(id)arg4 ;
-(unsigned long long)displayWidthForCharacter:(int)arg1 ;
-(id)limitedListOfPVsStringForLV:(id)arg1 forDMCS:(id)arg2 ;
-(id)limitString:(id)arg1 maxLength:(int)arg2 leftJustPaddingSpaces:(long long*)arg3 ;
-(void)printInfoLineForCoreStorageLV:(id)arg1 forDM:(id)arg2 forDMCS:(id)arg3 ;
-(void)printPartitionMapForWholeDisk:(DADiskRef)arg1 ;
-(void)printInfoLinesForAllOfflineCoreStorageLVsForDM:(id)arg1 forDMCS:(id)arg2 ;
-(id)buildDeviceOrMediaNameStringForDisk:(DADiskRef)arg1 ;
-(id)buildWorldWideNameString:(id)arg1 ;
-(void)listFilesystemsHelp;
-(char)notableFilesystemSpecCensor:(id)arg1 ;
-(id)notableFilesystemSpecAlias:(id)arg1 ;
@end
