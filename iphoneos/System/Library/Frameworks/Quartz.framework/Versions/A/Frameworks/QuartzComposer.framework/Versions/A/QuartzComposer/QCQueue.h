/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCVirtualPort, QCIndexPort, QCBooleanPort, QCStructurePort, NSMutableArray;

@interface QCQueue : QCPatch {

	QCVirtualPort* inputValue;
	QCIndexPort* inputSize;
	QCBooleanPort* inputFilling;
	QCBooleanPort* inputResetSignal;
	QCStructurePort* outputQueue;
	char _continuous;
	NSMutableArray* _queue;
	char _lastResetSignal;

}
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setContinuous:(char)arg1 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(void)_forwardRenderingFlag;
-(void)updateTimebase:(int)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end
