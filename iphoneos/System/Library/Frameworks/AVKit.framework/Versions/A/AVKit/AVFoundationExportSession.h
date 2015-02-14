/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVExportSessionHelper.h>

@protocol AVExportSessionHelperDelegate;
@class NSURL, AVAssetExportSession, AVAsset, AVVideoComposition, AVAudioMix, NSTimer, NSRunLoop, NSString;

@interface AVFoundationExportSession : NSObject <AVExportSessionHelper> {

	NSURL* _outputURL;
	AVAssetExportSession* _avSession;
	id<AVExportSessionHelperDelegate> _delegate;
	AVAsset* _sourceAsset;
	AVVideoComposition* _sourceVideoComposition;
	AVAudioMix* _sourceAudioMix;
	NSTimer* _exportProgressTimer;
	NSRunLoop* _sessionRunLoop;
	double _estimatedTimeRemaining;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canPassthroughExport:(id)arg1 ;
-(id)initWithAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 exportTimeRange:(SCD_Struct_AV4)arg4 sessionDelegate:(id)arg5 outputURL:(id)arg6 ;
-(void)createExportSessionwithPresetIdentifier:(id)arg1 exportTimeRange:(SCD_Struct_AV4)arg2 videoComposition:(id)arg3 audioMix:(id)arg4 ;
-(void)updateProgress:(id)arg1 ;
-(void)cancel;
@end
