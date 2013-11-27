/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartCompileAnimationData.h>

@class TSCH3DChartAnimationDataGeometryResource;

@interface TSCH3DChartCompileGeometryResourceAnimationData : TSCH3DChartCompileAnimationData {

	TSCH3DChartAnimationDataGeometryResource* mCurrentData;

}
+(void)submitToProcessor:(id)arg1 portion:(int)arg2 scene:(id)arg3 seriesIndex:(unsigned)arg4 ;
+(id)geometryResourceAnimationDataForScene:(id)arg1 seriesIndex:(unsigned)arg2 ;
-(BOOL)transformBuffers;
-(void)processElementArrays;
-(id)compiledGeometry;
-(BOOL)compileEntireBuffer;
-(void)didProcessElementArraysForElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 compiler:(id)arg4 ;
-(void)addAreaGeometryCapAttributes;
-(id)p_makeWholeBufferWithClass:(Class)arg1 ;
-(GeometryArrays)p_cullBackfaces;
-(void)dealloc;
@end
