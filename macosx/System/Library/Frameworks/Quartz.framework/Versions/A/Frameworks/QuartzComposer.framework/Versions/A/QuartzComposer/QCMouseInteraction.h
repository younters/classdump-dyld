/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>
#import <QuartzComposer/QCInteractionPatch.h>

@class QCInteractionPort, QCBooleanPort, QCIndexPort, QCNumberPort, QCArray, NSEvent;

@interface QCMouseInteraction : QCPatch <QCInteractionPatch> {

	QCInteractionPort* outputInteraction;
	QCBooleanPort* outputMouseDown;
	QCBooleanPort* outputMouseOver;
	QCIndexPort* outputClickCount;
	QCNumberPort* _outputXLocal;
	QCNumberPort* _outputYLocal;
	QCNumberPort* _inputInitialXDrag;
	QCNumberPort* _inputInitialYDrag;
	QCNumberPort* _inputInitialRotateValue;
	QCNumberPort* _inputInitialMagnifyValue;
	QCNumberPort* _outputXDrag;
	QCNumberPort* _outputYDrag;
	QCBooleanPort* _outputRotate;
	QCNumberPort* _outputRotateValue;
	QCBooleanPort* _outputMagnify;
	QCNumberPort* _outputMagnifyValue;
	QCNumberPort* _outputSwipeX;
	QCNumberPort* _outputSwipeY;
	QCArray* _input;
	char _needRedraw;
	char _multitouch;
	char _useFeedback;
	CFArrayRef _interactionManagers;
	NSEvent* _lastEvent;

}
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(id)nodeActorForView:(id)arg1 ;
-(void)disable:(id)arg1 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)setMultitouch:(char)arg1 ;
-(void)setRenderingPatch:(id)arg1 iteration:(unsigned long long)arg2 ;
-(char)multitouch;
@end
