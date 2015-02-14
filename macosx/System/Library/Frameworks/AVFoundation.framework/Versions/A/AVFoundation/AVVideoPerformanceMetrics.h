/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject {

	AVVideoPerformanceMetricsInternal* _performanceMetricsInternal;

}

@property (nonatomic,readonly) unsigned long long totalNumberOfVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfDroppedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfCorruptedVideoFrames; 
@property (nonatomic,readonly) double totalFrameDelay; 
-(unsigned long long)totalNumberOfVideoFrames;
-(unsigned long long)numberOfDroppedVideoFrames;
-(unsigned long long)numberOfCorruptedVideoFrames;
-(double)totalFrameDelay;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
@end
