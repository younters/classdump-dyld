/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCThreadPatch.h>

@class QCStringPort, QCBooleanPort, QCStructurePort;

@interface QCDirectoryScanner : QCThreadPatch {

	QCStringPort* inputPath;
	QCBooleanPort* inputSignal;
	QCStructurePort* outputFiles;
	QCBooleanPort* outputSignal;
	int _fileMode;
	char _recursive;
	char _keylessStructures;
	char _lastSignal;
	char _rerun;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(char)canInstantiateWithFile:(id)arg1 ;
+(id)instantiateWithFile:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)_folderThread:(id)arg1 ;
-(void)setFileMode:(int)arg1 ;
-(int)fileMode;
-(void)setRecursive:(char)arg1 ;
-(char)recursive;
@end

