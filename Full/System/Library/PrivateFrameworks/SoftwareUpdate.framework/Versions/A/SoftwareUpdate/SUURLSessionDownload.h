/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <SoftwareUpdate/NSURLSessionDelegate.h>
#import <SoftwareUpdate/NSURLSessionDownloadDelegate.h>

@protocol SUURLSessionDownloadDelegate;
@class NSURLSession, NSOperationQueue, NSMutableArray, NSArray, NSString;

@interface SUURLSessionDownload : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {

	NSURLSession* _session;
	NSOperationQueue* _operationQueue;
	dispatch_queue_sRef _taskQueue;
	NSMutableArray* _dates;
	NSMutableArray* _lengthNumbers;
	NSMutableArray* _activeTaskIdentifiers;
	NSArray* _packageIdentifiersToInstall;
	long long _downloadSize;
	long long _numCLTimeouts;
	dispatch_queue_sRef _progressQueue;
	dispatch_queue_sRef _processPackagesQueue;
	char _canRetry;
	char _waitingOnTasks;
	/*^block*/id _replyBlock;
	NSString* _sessionIdentifier;
	id<SUURLSessionDownloadDelegate> _delegate;
	char _backgroundSession;
	char _isCancelled;
	long long _totalBytesWritten;
	NSString* _productKey;

}

@property (readonly) char backgroundSession;                        //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (readonly) long long totalBytesWritten;                   //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
@property (assign) char isCancelled;                                //@synthesize isCancelled=_isCancelled - In the implementation block
@property (readonly) NSString * productKey;                         //@synthesize productKey=_productKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)productKey;
-(id)initWithIdentifier:(id)arg1 productKey:(id)arg2 downloadSize:(long long)arg3 forBackgroundTasks:(char)arg4 delegate:(id)arg5 replyWhenFinished:(/*^block*/id)arg6 ;
-(void)startDownloadingPackagesWithIdentifiers:(id)arg1 ;
-(long long)totalBytesWritten;
-(float)averageBytesPerSecond;
-(id)_backgroundConfiguration;
-(void)cancelAndSaveResumeData:(char)arg1 ;
-(char)_contentLocatorURLForOriginalURL:(id)arg1 outModifiedURL:(id*)arg2 ;
-(void)_retryDownloadForPackageIdentifier:(id)arg1 withPackageRef:(id)arg2 originalIdentifier:(unsigned long long)arg3 forNetworkRetry:(char)arg4 resumable:(char)arg5 ;
-(void)_processDownloadedFileAtPath:(id)arg1 withPackageInfo:(id)arg2 replyWhenDone:(/*^block*/id)arg3 ;
-(void)_updateProgressData;
-(char)backgroundSession;
-(void)dealloc;
-(NSString *)description;
-(void)cancel;
-(char)isCancelled;
-(id)error;
-(void)setIsCancelled:(char)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
@end

