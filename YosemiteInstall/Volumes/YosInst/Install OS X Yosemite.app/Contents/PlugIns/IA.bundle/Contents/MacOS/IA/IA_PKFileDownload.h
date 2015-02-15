/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IA/IA_PKDownload.h>

@class NSString, NSThread;

@interface IA_PKFileDownload : IA_PKDownload {

	NSString* _srcPath;
	int _readFileDescriptor;
	int _writeFileDescriptor;
	long long _bytesDownloaded;
	char _isResume;
	char _runFileReadThread;
	NSThread* _fileReadThread;

}
+(char)canDownloadURL:(id)arg1 ;
+(char)canDownloadWithResumeData:(id)arg1 ;
-(void)setDestination:(id)arg1 allowOverwrite:(char)arg2 ;
-(id)sourceURL;
-(id)initWithResumeData:(id)arg1 destination:(id)arg2 delegate:(id)arg3 ;
-(int)_fileCopyThread:(id)arg1 ;
-(void)_currentThreadCallback:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)cancel;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)resumeData;
-(id)sourcePath;
@end
