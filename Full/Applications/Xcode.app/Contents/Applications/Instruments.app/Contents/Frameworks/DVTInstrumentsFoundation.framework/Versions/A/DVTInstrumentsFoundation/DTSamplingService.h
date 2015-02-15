/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/Frameworks/DVTInstrumentsFoundation.framework/Versions/A/DVTInstrumentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DVTInstrumentsFoundation/DVTInstrumentsFoundation-Structs.h>
#import <DTXConnectionServices/DTXService.h>
#import <DVTInstrumentsFoundation/DTSamplingServiceAuthorizedAPI.h>

@class NSString;

@interface DTSamplingService : DTXService <DTSamplingServiceAuthorizedAPI> {

	char _doCollectData;
	unsigned long long _samplingRate;
	unsigned long long _outputRate;
	unsigned long long _outputRateDelta;
	unsigned long long* _backtraceBuffer;
	unsigned long long _backtraceBufferSize;
	unsigned long long _backtraceBufferUsedSize;
	unsigned _task;
	char _targetIs64Bit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerCapabilities:(id)arg1 ;
-(void)collectData;
-(void)_allocateBuffer;
-(void)addSampleWithTimeInfo:(CFDictionaryRef)arg1 useZeroDelta:(char)arg2 ;
-(void)_outputData;
-(void)setOutputRate:(id)arg1 ;
-(void)setTargetPid:(id)arg1 ;
-(void)startSampling;
-(void)setSamplingRate:(id)arg1 ;
-(void)stopSampling;
-(id)initWithChannel:(id)arg1 ;
-(void)dealloc;
@end
