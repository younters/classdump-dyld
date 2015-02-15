/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/mds
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MDSReorderBufferDelegate;
#import <mds/mds-Structs.h>
@class MDSStoreImporterQueueToken, MDSVolumeStoreDescriptor, MDSDisk, NSNumber, NSObject, NSMutableArray, NSMutableDictionary;

@interface MDSStoreImporterQueue : NSObject {

	MDSStoreImporterQueueToken* _token;
	opaque_pthread_mutex_t _lock;
	MDSVolumeStoreDescriptor* _vsd;
	int _signature;
	int _vsdId;
	MDSDisk* _mdsDisk;
	int _importSource;
	NSNumber* _spindleNumber;
	char _hasBeenAdded;
	char _isBackupQueue;
	NSObject*<OS_dispatch_queue> _spindleWorkQueue;
	unsigned _qosLevel;
	char _hasBackupDiskImageValue;
	char _isBackupDiskImageValue;
	CFDictionaryRef _trackedStringsByOid;
	char _markedForAttach;
	NSMutableArray* _preflightArray;
	NSMutableArray* _reorderArray;
	char _blockedOnReorder;
	NSObject*<MDSReorderBufferDelegate> _reorderDelegate;
	double _timeBecameBlockedOnReorderSize;
	double _timeBlockedOnReorderSize;
	char _blockedOnReorderSize;
	int _totalTasksIssuedCount;
	int _totalWorkIssuedCount;
	unsigned long long _totalWorkSize;
	int _inWrangleCount;
	int _inFlightCount;
	int _inTaskCount;
	int _totalInTaskCount;
	int _totalWrangled;
	int _totalCreatedTaskCount;
	int _totalFinishedTaskCount;
	int _bulkPopCount;
	double _activeStartTime;
	NSMutableArray* _drainedBlockArray;
	/*^block*/id _updateBlock;
	NSMutableDictionary* _attributes;

}
-(int)popUser:(int)arg1 items:(SCD_Struct_MD33*)arg2 andVSD:(id*)arg3 ;
-(void)journalPreRetire:(int)arg1 ;
-(char)journalRetire:(int)arg1 ;
-(void)journalAndPushUser:(unsigned)arg1 group:(unsigned)arg2 oid:(long long)arg3 pid:(int)arg4 withKernelTimeStamp:(unsigned long long)arg5 ;
-(char)isBackupDiskImage;
-(void)detachForRelease;
-(void)journalAndPushUser:(unsigned)arg1 group:(unsigned)arg2 andOid:(long long)arg3 objectType:(int)arg4 importLevel:(int)arg5 flags:(int)arg6 withTimeStamp:(long long)arg7 ;
-(void)syncJournal;
-(void)setSpindleWorkQueue:(id)arg1 forQoS:(unsigned)arg2 ;
-(char)journalPlaybackError;
-(long long)journalPlaybackEndingTime;
-(int)prePop:(int)arg1 popBlock:(/*^block*/id)arg2 ;
-(void)attachToImporters;
-(void)ignoreRetirement:(int)arg1 ;
-(int)pushedCount;
-(void)setDrainedBlock:(/*^block*/id)arg1 ;
-(void)markForImporterAttach;
-(char)isMarkedForImporterAttach;
-(void)flushJournal;
-(int)playedbackCount;
-(int)prepoppedCount;
-(int)preretiredCount;
-(int)poppedCount;
-(int)queueCount;
-(int)retiredCount;
-(int)duplicatePlaybackCount;
-(int)totalTasksCreatedCount;
-(int)totalInTaskCount;
-(int)totalTasksFinishedCount;
-(int)totalTasksIssuedCount;
-(int)totalWorkIssuedCount;
-(int)bulkPopCount;
-(id)mdsDisk;
-(id)vsd;
-(unsigned)qosLevel;
-(void)setReorderDelegate:(id)arg1 ;
-(char)isBlockedOnReorder;
-(void)deltaInTaskCount:(int)arg1 ;
-(char)isBackupQueue;
-(char)itemComplete;
-(unsigned long long)totalWorkSize;
-(double)getTimeBlockedOnReorderSize;
-(void)clearImporterManagerValues;
-(void)backupItemComplete:(int)arg1 ;
-(id)reorderArray;
-(void)addTotalWorkIssued:(int)arg1 ;
-(void)deltaWorkSize:(unsigned long long)arg1 ;
-(void)removeFirstItemFromReorderArray;
-(id)spindleNumber;
-(void)deltaInWrangleCount:(int)arg1 ;
-(void)deltaInFlightCount:(int)arg1 ;
-(id)copyBackupAttributesPath:(char*)arg1 filter:(SCD_Struct_MD31*)arg2 andOid:(long long*)arg3 ;
-(id)copyTrackedOidValue:(long long)arg1 ;
-(void)addItemToReorderArray:(id)arg1 ;
-(id)spindleWorkQueue;
-(int)inWrangleCount;
-(int)inFlightCount;
-(int)inTaskCount;
-(int)vsdId;
-(void)updateBlockedOnReorderState;
-(id)initWithVSD:(id)arg1 importSource:(int)arg2 updateBlock:(/*^block*/id)arg3 isBackupQueue:(BOOL)arg4 ;
-(void)internalDetachForRelease:(char)arg1 ;
-(int)totalWrangledIncrement;
-(int)totalWrangedCount;
-(void)clearTotalWrangled;
-(double)getSecondsBusy;
-(void)resetSecondsBusy;
-(void)setBlockedOnReorderSize:(char)arg1 ;
-(char)pushBackupIndexForUser:(unsigned)arg1 group:(unsigned)arg2 path:(char*)arg3 attributes:(id)arg4 filter:(SCD_Struct_MD31)arg5 andOid:(long long)arg6 whenDone:(/*^block*/id)arg7 ;
-(void)journalAndPushTimeStamp:(long long)arg1 ;
-(void)journalAndPushTransactionId:(int)arg1 atTime:(long long)arg2 ;
-(void)journalAndPushEndMarkerAtTime:(long long)arg1 ;
-(void)journalAndPushUser:(unsigned)arg1 group:(unsigned)arg2 andOid:(long long)arg3 atTime:(long long)arg4 ;
-(void)addTrackedOid:(long long)arg1 withValue:(id)arg2 ;
-(char)didPlayback;
-(char)peekUser:(SCD_Struct_MD33*)arg1 andVSD:(id*)arg2 ;
-(char)popUser:(SCD_Struct_MD33*)arg1 andVSD:(id*)arg2 ;
-(long long)highestOidFromJournal;
-(void)waitForBackupClear:(/*^block*/id)arg1 ;
-(void)backupCancel:(int)arg1 ;
-(int)importSource;
-(void)dealloc;
-(char)isAttached;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)attributeForKey:(id)arg1 ;
-(int)signature;
-(char)isDetached;
@end
