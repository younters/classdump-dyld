/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/Versions/A/Frameworks/PhotosFormats.framework/Versions/A/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PFSlowMotionTimeRangeMapper : NSObject {

	NSMutableArray* _originalLengths;
	NSMutableArray* _scaledLengths;
	NSMutableArray* _scaledRegions;

}
-(float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3 ;
-(void)addNextRange:(float)arg1 scaledLength:(float)arg2 ;
-(float)scaledTimeForOriginalTime:(float)arg1 ;
-(float)originalTimeForScaledTime:(float)arg1 ;
-(void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5 ;
-(void)enumerateScaledRegionsUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
@end
