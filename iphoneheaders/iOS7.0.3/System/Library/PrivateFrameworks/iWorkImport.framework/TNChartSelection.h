/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHSelection.h>

@interface TNChartSelection : TSCHSelection {

	SCD_Struct_TS269* mReference;

}

@property (nonatomic,readonly) SCD_Struct_TS274* reference; 
+(Class)archivedSelectionClass;
-(void)saveToArchive:(ChartSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 ;
-(BOOL)returnChartFrameForAutoscroll;
-(id)initWithChartInfo:(id)arg1 paths:(id)arg2 ;
-(id)initFromArchive:(const ChartSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 paths:(id)arg2 reference:(SCD_Struct_TS274*)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id).cxx_construct;
-(SCD_Struct_TS274*)reference;
-(void)setReference:(SCD_Struct_TS274*)arg1 ;
@end
