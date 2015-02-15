/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storedownloadd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <storedownloadd/ISURLOperationDelegate.h>
#import <storedownloadd/ISOperationDelegate.h>

@protocol DownloadQueueSourceDelegate;
@class NSLock, NSMutableArray, NSData, DownloadQueue, NSArray, NSString;

@interface DownloadQueueSource : NSObject <ISURLOperationDelegate, ISOperationDelegate> {

	id<DownloadQueueSourceDelegate> _delegate;
	NSLock* _queueLock;
	NSMutableArray* _downloads;
	NSData* _keybag;
	DownloadQueue* _downloadQueue;

}

@property (__weak) DownloadQueue * downloadQueue;                                          //@synthesize downloadQueue=_downloadQueue - In the implementation block
@property (assign,nonatomic,__weak) id<DownloadQueueSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * downloads; 
@property (retain) NSData * keybag;                                                        //@synthesize keybag=_keybag - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDownloadQueue:(DownloadQueue *)arg1 ;
-(void)mergeInFullQueueResponse:(id)arg1 pauseNewDownloads:(char)arg2 ;
-(id)firstReadyDownload;
-(NSData *)keybag;
-(void)setKeybag:(NSData *)arg1 ;
-(char)canHandleDownload:(id)arg1 ;
-(char)checkQueue;
-(id)initWithDownloadQueue:(id)arg1 ;
-(id)downloadForIdentifier:(unsigned long long)arg1 ;
-(char)addDownloads:(id)arg1 ;
-(char)replaceDownload:(id)arg1 withDownloads:(id)arg2 ;
-(void)resetFailedDownloads;
-(char)removeDownloadsAtIndexes:(id)arg1 ;
-(char)removeDownload:(id)arg1 ;
-(char)_replaceDownloadAtIndex:(unsigned long long)arg1 withDownload:(id)arg2 ;
-(id)_copyNewDownloadsFromDownloads:(id)arg1 ignoringDownload:(id)arg2 ;
-(char)_copyMergedDownloads:(id*)arg1 newDownloads:(id*)arg2 downloadsToCancel:(id*)arg3 fromDownloads:(id)arg4 existingDownloads:(id)arg5 pauseNewDownloads:(char)arg6 ;
-(char)_download:(id)arg1 isInArray:(id)arg2 ignoringDownload:(id)arg3 ;
-(id)_download:(id)arg1 inArray:(id)arg2 ignoringDownload:(id)arg3 ;
-(char)cancelDownload:(id)arg1 ;
-(DownloadQueue *)downloadQueue;
-(id)init;
-(void)setDelegate:(id<DownloadQueueSourceDelegate>)arg1 ;
-(void)dealloc;
-(char)isActive;
-(id<DownloadQueueSourceDelegate>)delegate;
-(void)operationFinished:(id)arg1 ;
-(NSArray *)downloads;
-(void)setDownloads:(NSArray *)arg1 ;
@end
