/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PAAggregatedStack <NSObject>
@required
-(void)printToStream:(_sFILE*)arg1;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
-(int)count;
-(long long)compare:(id)arg1;

@end
