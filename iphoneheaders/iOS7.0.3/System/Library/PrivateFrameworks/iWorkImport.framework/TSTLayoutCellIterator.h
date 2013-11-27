/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellIterator.h>

@class TSTMasterLayout, TSTCell, TSTTableModel;

@interface TSTLayoutCellIterator : TSTCellIterator {

	TSTMasterLayout* mMasterLayout;
	SCD_Struct_TS496 mLayoutRange;
	SCD_Struct_TS266 mLayoutCellID;
	TSTCell* mLayoutCell;
	SCD_Struct_TS501* mModelIteratorData;
	BOOL mQueriedModel;
	BOOL mModelIteratorHasCell;
	unsigned short mNumberOfLayoutColumns;
	unsigned short mNumberOfColumns;
	unsigned short mNumberOfRows;

}

@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
-(id)tableModel;
-(id)masterLayout;
-(id)initWithLayout:(id)arg1 ;
-(id)initWithLayout:(id)arg1 range:(SCD_Struct_TS497)arg2 flags:(unsigned long)arg3 ;
-(id)initWithMasterLayout:(id)arg1 ;
-(id)initWithMasterLayout:(id)arg1 range:(SCD_Struct_TS497)arg2 ;
-(id)initWithMasterLayout:(id)arg1 range:(SCD_Struct_TS497)arg2 flags:(unsigned long)arg3 ;
-(id)initWithLayout:(id)arg1 range:(SCD_Struct_TS497)arg2 ;
-(void)dealloc;
-(id).cxx_construct;
@end
