/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSLock, NSMutableArray, NSObject;

@interface ACDTelemetryWatchdog : NSObject {

	NSLock* _lock;
	BOOL _fired;
	NSMutableArray* _telemetry;
	NSObject<OS_dispatch_queue>* _timerQueue;
	NSObject<OS_dispatch_source>* _timerSource;

}
-(void)dealloc;
-(void)logWithLevel:(int)arg1 format:(id)arg2 ;
-(void)_dumpTelemetryData;
-(id)initWithTimeout:(double)arg1 ;
-(void)recordCurrentState;
-(void).cxx_destruct;
@end
