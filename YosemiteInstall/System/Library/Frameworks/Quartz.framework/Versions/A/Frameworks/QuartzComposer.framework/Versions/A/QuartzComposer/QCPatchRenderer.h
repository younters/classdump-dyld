/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCStringPort, GFList, QCPatch, NSString;

@interface QCPatchRenderer : QCPatch {

	QCStringPort* inputPath;
	int _compositionMode;
	GFList* _compositionInputs;
	GFList* _compositionOutputs;
	char _hasTimebase;
	QCPatch* _compositionPatch;
	NSString* _compositionLocation;
	char _usingOpenglContext;

}
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(void)enable:(id)arg1 ;
-(void)disable:(id)arg1 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(void)updateTimebase:(int)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)_invalidateDodForSubpatches;
-(int)_checkExecutionMode;
-(unsigned long long)outputCount;
-(unsigned long long)inputCount;
-(id)_inputAtIndex:(unsigned long long)arg1 ;
-(id)compositionInputs;
-(char)_addInput:(Class)arg1 forKey:(id)arg2 ;
-(void)_removeInputForKey:(id)arg1 ;
-(id)_outputAtIndex:(unsigned long long)arg1 ;
-(id)compositionOutputs;
-(char)_addOutput:(Class)arg1 forKey:(id)arg2 ;
-(void)_removeOutputForKey:(id)arg1 ;
-(int)executionMode;
-(void)_setComposition:(id)arg1 context:(id)arg2 ;
-(void)setExecutionMode:(int)arg1 ;
-(void)setHasTimebase:(char)arg1 ;
-(void)setCompositionInputs:(id)arg1 ;
-(void)setCompositionOutputs:(id)arg1 ;
-(void)autoconfigureWithProtocol:(id)arg1 ;
-(void)autoconfigureWithPatch:(id)arg1 ;
@end
