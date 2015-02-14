/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Backup/Backup-Structs.h>
@interface BU_GVInterpolator : NSObject {

	double inputValue1;
	double inputValue2;
	double inputDuration;
	double inputTension;
	unsigned long long inputRepeat;
	double outputValue;
	unsigned long long _pointCount;
	unsigned long long _pointMax;
	double* _pointTimeBuffer;
	double* _pointValueBuffer;
	GVSpline* _splineRef;
	unsigned long long _interpolationPort;
	BOOL _customInterpolationPort;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
-(BOOL)setState:(id)arg1 ;
-(double)_interpolate:(double)arg1 ;
-(double)executeTime:(double)arg1 input2:(double)arg2 ;
-(void)_finalize_QCInterpolation;
-(void)_updateSpline;
-(void)setCustomInterpolation:(BOOL)arg1 ;
-(BOOL)setControlPoint:(unsigned long long)arg1 time:(double)arg2 value:(double)arg3 ;
-(unsigned long long)addControlPointAtTime:(double)arg1 withValue:(double)arg2 ;
-(double)valueAtTime:(double)arg1 ;
-(double)execute:(double)arg1 ;
@end
