/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartType.h>

@interface TSCHChartTypeStackedColumn3D : TSCH3DChartType
-(id)timeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 deliveryStyle:(unsigned)arg4 ;
-(CGRect)adjustChartFrame:(CGRect)arg1 forPresetImageTarget:(int)arg2 ;
-(void)setupPresetImageChart:(id)arg1 ;
-(TSCH3DChartRotationLimit)rotation3DLimit;
-(id)defaultSeriesType:(unsigned)arg1 ;
-(id)userInterfaceName;
-(id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(float)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 ;
-(BOOL)supportsBevels;
-(id)init;
@end
