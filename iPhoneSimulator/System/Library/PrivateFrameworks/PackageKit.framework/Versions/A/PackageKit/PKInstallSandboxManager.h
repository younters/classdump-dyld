/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@interface PKInstallSandboxManager : NSObject {

	dispatch_queue_sRef _repoQueue;
	dispatch_queue_sRef _sandboxRemoveQueue;

}
+(id)sharedSandboxManager;
+(char)_verboseMode;
+(id)_stagingCachePaths;
-(id)pathToSharedTemporaryDirectoryCreating:(char)arg1 ;
-(void)purgeSharedTemporaryDirectory;
-(char)hasStagedSandboxForRequest:(id)arg1 ;
-(unsigned long long)irrelevantSpaceOnVolume:(id)arg1 forInstallingRequest:(id)arg2 ;
-(unsigned long long)purgeableSpaceOnVolume:(id)arg1 appStoreOnly:(char)arg2 ;
-(void)requestFreeSpace:(unsigned long long)arg1 onVolume:(id)arg2 forInstallingRequest:(id)arg3 appStoreOnly:(char)arg4 notifyOn:(dispatch_queue_sRef)arg5 withBlock:(/*^block*/id)arg6 ;
-(void)finishSandboxRemovalWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)sandboxForRequest:(id)arg1 error:(id*)arg2 ;
-(char)saveSandboxAsStaged:(id)arg1 ;
-(void)discardSandbox:(id)arg1 ;
-(id)_currentSandboxPathsForDestination:(id)arg1 ;
-(id)_sandboxAtPath:(id)arg1 matchingRequest:(id)arg2 forUse:(char)arg3 ;
-(id)_addSandboxPathForDestination:(id)arg1 ;
-(id)_activateSandboxAtPath:(id)arg1 ;
-(id)_trashSandboxAtPath:(id)arg1 ;
-(id)_statePathForSandboxAtPath:(id)arg1 ;
-(id)_deactivateSandboxAtPath:(id)arg1 ;
-(char)_removeSandbox:(id)arg1 ;
-(id)_sandboxRepositoryForDestination:(id)arg1 create:(char)arg2 error:(id*)arg3 ;
-(id)_repositoryParentPathForRootVolume;
-(char)_canCreateDirectoryUnder:(id)arg1 ;
-(id)_inactiveSandboxesOnMountPoint:(id)arg1 forInstallingRequest:(id)arg2 appStoreOnly:(char)arg3 calculateRelevance:(char)arg4 invalidSandboxPaths:(id*)arg5 ;
-(long long)_compareSandbox:(id)arg1 toSandbox:(id)arg2 ;
-(long long)_relevanceOfSandbox:(id)arg1 forInstallingRequest:(id)arg2 ;
-(unsigned long long)purgeableSpaceOnVolume:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end
