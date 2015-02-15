/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/tmutil
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <tmutil/StorageBase.h>

@class MachineDirectory, NSDate;

@interface Snapshot : StorageBase {

	MachineDirectory* _machineDirectory;
	NSDate* _completionDate;

}
+(id)snapshotWithURL:(id)arg1 ;
+(char)URLIsStagingSnapshotContainer:(id)arg1 ;
+(char)URLResemblesSnapshot:(id)arg1 ;
+(char)URLIsValidSnapshot:(id)arg1 ;
+(id)snapshotWithPath:(id)arg1 ;
-(id)snapshotVolumes;
-(id)machineDirectory;
-(id)snapshotVolumeForUUID:(id)arg1 ;
-(id)sortedSnapshotVolumes;
-(id)laterSnapshot:(id)arg1 ;
-(char)remove:(id*)arg1 bytesDeleted:(unsigned long long*)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)completionDate;
@end
