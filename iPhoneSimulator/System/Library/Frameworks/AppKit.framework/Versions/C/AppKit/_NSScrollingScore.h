/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NSScrollingScore : NSObject {

	double _averageFrameRateInFPS;
	double _meanFrameDurationInMs;
	double _normalizedFrameDurationStdDev;
	double _holdRate;
	double _slipRate;
	double _scrollDurationInSec;
	double _scrollDelayInMs;
	long long _holdCount;
	long long _slipCount;

}

@property (readonly) double frameRate;                             //@synthesize averageFrameRateInFPS=_averageFrameRateInFPS - In the implementation block
@property (readonly) double normalizedFrameVariation;              //@synthesize normalizedFrameDurationStdDev=_normalizedFrameDurationStdDev - In the implementation block
@property (assign) double holdRate;                                //@synthesize holdRate=_holdRate - In the implementation block
@property (assign) double slipRate;                                //@synthesize slipRate=_slipRate - In the implementation block
@property (assign) long long holdCount;                            //@synthesize holdCount=_holdCount - In the implementation block
@property (assign) long long slipCount;                            //@synthesize slipCount=_slipCount - In the implementation block
@property (readonly) double scrollDurationInSec;                   //@synthesize scrollDurationInSec=_scrollDurationInSec - In the implementation block
@property (assign) double scrollDelayInMs;                         //@synthesize scrollDelayInMs=_scrollDelayInMs - In the implementation block
-(double)frameRate;
-(double)holdRate;
-(double)slipRate;
-(id)initWithScrollingResults:(id)arg1 ;
-(id)scoreString;
-(long long)comparedToScore:(id)arg1 ;
-(double)normalizedFrameVariation;
-(void)setHoldRate:(double)arg1 ;
-(void)setSlipRate:(double)arg1 ;
-(long long)holdCount;
-(void)setHoldCount:(long long)arg1 ;
-(long long)slipCount;
-(void)setSlipCount:(long long)arg1 ;
-(double)scrollDurationInSec;
-(double)scrollDelayInMs;
-(void)setScrollDelayInMs:(double)arg1 ;
@end
