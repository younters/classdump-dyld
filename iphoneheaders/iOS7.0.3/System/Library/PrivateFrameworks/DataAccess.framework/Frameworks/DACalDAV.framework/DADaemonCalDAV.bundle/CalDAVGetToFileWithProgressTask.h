/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVGetToFileTask.h>

@class MobileCalDAVAttachmentDownloader, NSString;

@interface CalDAVGetToFileWithProgressTask : CoreDAVGetToFileTask {

	MobileCalDAVAttachmentDownloader* _downloader;
	NSString* _previousETag;

}

@property (assign) MobileCalDAVAttachmentDownloader * downloader;              //@synthesize downloader=_downloader - In the implementation block
@property (retain) NSString * previousETag;                                    //@synthesize previousETag=_previousETag - In the implementation block
-(void)dealloc;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(id)previousETag;
-(id)additionalHeaderValues;
-(void)setPreviousETag:(id)arg1 ;
-(id)downloader;
-(void)setDownloader:(id)arg1 ;
@end
