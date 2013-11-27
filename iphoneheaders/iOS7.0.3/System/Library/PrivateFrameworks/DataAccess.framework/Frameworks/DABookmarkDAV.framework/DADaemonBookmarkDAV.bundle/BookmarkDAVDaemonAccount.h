/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DABookmarkDAV/BookmarkDAVAccount.h>
#import <DADaemonBookmarkDAV/DADataclassLockWatcher.h>
#import <DADaemonBookmarkDAV/DABabysittable.h>

@class BookmarkDAVSyncDriver, NSString, NSDictionary;

@interface BookmarkDAVDaemonAccount : BookmarkDAVAccount <DADataclassLockWatcher, DABabysittable> {

	BookmarkDAVSyncDriver* _syncDriver;

}

@property (readonly) NSString * pushKey; 
@property (readonly) NSDictionary * pushTransport; 
-(id)pushKey;
-(void)dealloc;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(id)waiterID;
-(void)getRootFolderWithConsumer:(id)arg1 ;
-(void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2 ;
-(id)pushTransport;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
@end
