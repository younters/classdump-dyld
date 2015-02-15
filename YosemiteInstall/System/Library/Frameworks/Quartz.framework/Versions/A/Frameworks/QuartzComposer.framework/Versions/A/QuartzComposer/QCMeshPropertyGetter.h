/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCMeshPort, QCIndexPort, QCStructurePort;

@interface QCMeshPropertyGetter : QCPatch {

	QCMeshPort* inputMesh;
	QCIndexPort* _inputProperty;
	QCStructurePort* outputValue;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_forwardRenderingFlag;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end
