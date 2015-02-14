/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCRunLoopPatch.h>

@class QCBooleanPort;

@interface QCAppleRemote : QCRunLoopPatch {

	QCBooleanPort* outputAvailable;
	QCBooleanPort* outputUpSignal;
	QCBooleanPort* outputDownSignal;
	QCBooleanPort* outputPreviousSignal;
	QCBooleanPort* outputNextSignal;
	QCBooleanPort* outputPlaySignal;
	QCBooleanPort* outputMenuSignal;
	QCBooleanPort* outputSelectSignal;
	char _exclusive;
	void* _hidDeviceInterface;
	void* _queueInterface;
	CFRunLoopSourceRef _hidEventSource;
	CFDictionaryRef _cookies;
	unsigned char _buttonsState;

}
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)_cleanUp;
-(void)_setUp;
-(void)_processEvents;
-(void)setExclusiveAccess:(char)arg1 ;
-(char)exclusiveAccess;
@end
