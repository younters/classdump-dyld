/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCMeshPort, QCNumberPort;

@interface QCMeshTransform : QCPatch {

	QCMeshPort* inputMesh;
	QCNumberPort* inputTransform_OriginX;
	QCNumberPort* inputTransform_OriginY;
	QCNumberPort* inputTransform_OriginZ;
	QCNumberPort* inputTransform_ScaleX;
	QCNumberPort* inputTransform_ScaleY;
	QCNumberPort* inputTransform_ScaleZ;
	QCNumberPort* inputTransform_RotateX;
	QCNumberPort* inputTransform_RotateY;
	QCNumberPort* inputTransform_RotateZ;
	QCNumberPort* inputTransform_TranslateX;
	QCNumberPort* inputTransform_TranslateY;
	QCNumberPort* inputTransform_TranslateZ;
	QCMeshPort* outputMesh;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_forwardRenderingFlag;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end
