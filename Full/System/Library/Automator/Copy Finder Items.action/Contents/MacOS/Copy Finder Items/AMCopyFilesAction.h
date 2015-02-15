/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:21:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Copy Finder Items.action/Contents/MacOS/Copy Finder Items
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@interface AMCopyFilesAction : AMBundleAction {

	double _totalBytesBeingCopied;
	double _bytesCopiedSoFar;
	char _shouldStop;

}

@property (assign) double totalBytesBeingCopied;              //@synthesize totalBytesBeingCopied=_totalBytesBeingCopied - In the implementation block
@property (assign) double bytesCopiedSoFar;                   //@synthesize bytesCopiedSoFar=_bytesCopiedSoFar - In the implementation block
@property (assign) char shouldStop;                           //@synthesize shouldStop=_shouldStop - In the implementation block
-(void)setShouldStop:(char)arg1 ;
-(void)setTotalBytesBeingCopied:(double)arg1 ;
-(double)totalBytesBeingCopied;
-(void)setBytesCopiedSoFar:(double)arg1 ;
-(double)bytesCopiedSoFar;
-(char)copyItemsAtURLs:(id)arg1 toLocationAtURL:(id)arg2 replaceExisting:(char)arg3 copiedItemURLs:(id*)arg4 error:(id*)arg5 ;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)reset;
-(char)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)shouldStop;
@end
