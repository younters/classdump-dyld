/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate.h>

@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {

	long long _terminalStatus;
	char _didRequestMediaDataOnce;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_sRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)isReadyForMoreMediaData;
-(char)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(char)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(char)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM5)arg2 ;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1 ;
-(char)mediaDataRequesterShouldRequestMediaData:(id)arg1 ;
-(long long)status;
@end
