/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface VMUBacktrace : NSObject <NSCopying> {

	int _flavor;
	SCD_Struct_VM8* _callstack;

}
-(void)dealloc;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(unsigned)thread;
-(id)initWithSamplingContext:(sampling_context_tRef)arg1 thread:(unsigned)arg2 ;
-(id)initWithTask:(unsigned)arg1 thread:(unsigned)arg2 is64Bit:(BOOL)arg3 taskMemoryCache:(id)arg4 ;
-(unsigned)backtraceLength;
-(unsigned long long*)backtrace;
-(void)fixupStackWithTask:(unsigned)arg1 symbolicator:(CSTypeRef)arg2 taskMemoryCache:(id)arg3 ;
-(void)fixupStackWithSamplingContext:(sampling_context_tRef)arg1 symbolicator:(CSTypeRef)arg2 ;
-(CSTypeRef)_symbolicator;
-(id)initWithTask:(unsigned)arg1 thread:(unsigned)arg2 is64Bit:(BOOL)arg3 ;
-(BOOL)hasSameCallstack:(id)arg1 ;
-(unsigned long long)topmostFrame;
-(void)removeTopmostFrame;
-(void)setLengthTime:(double)arg1 ;
-(void)setThreadState:(int)arg1 ;
-(int)threadState;
-(unsigned long long)dispatchQueueSerialNumber;
@end
