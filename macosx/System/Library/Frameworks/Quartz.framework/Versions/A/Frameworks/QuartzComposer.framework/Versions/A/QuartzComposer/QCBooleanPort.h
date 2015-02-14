/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPort.h>

@interface QCBooleanPort : QCPort {

	char _value;
	void** _unused3[4];

}
+(Class)baseClass;
-(char)booleanValue;
-(char)setValue:(id)arg1 ;
-(id)value;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(id)tooltipString;
-(char)takeValue:(id)arg1 fromPort:(id)arg2 ;
-(id)stateValue;
-(char)setStateValue:(id)arg1 ;
-(char)acceptValuesOfClass:(Class)arg1 ;
-(Class)valueClass;
-(void)setBooleanValue:(char)arg1 ;
-(id)setupParameterView;
-(void)resetParameterView:(id)arg1 ;
-(void)editValueWithEvent:(id)arg1 inView:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)_setTrue:(id)arg1 ;
-(void)_setFalse:(id)arg1 ;
-(SCD_Struct_QC4)md5WithTime:(double)arg1 arguments:(id)arg2 ;
@end
