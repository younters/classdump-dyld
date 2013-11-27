/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/WDBlock.h>

@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {

	WDTableProperties* mProperties;
	NSMutableArray* mRows;

}
-(void)dealloc;
-(id)properties;
-(id)initWithText:(id)arg1 ;
-(id)addRow;
-(int)blockType;
-(unsigned)rowCount;
-(id)rowAt:(unsigned)arg1 ;
-(int)nestingLevel;
-(id)runIterator;
-(id)newRunIterator;
-(void)clearProperties;
-(id)rowIterator;
-(id)newRowIterator;
-(id)cellIterator;
-(id)newCellIterator;
-(void)clearRows;
@end
