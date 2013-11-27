/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WDTableRow, WDTableCellProperties, WDText;

@interface WDTableCell : NSObject {

	unsigned mIndex;
	WDTableRow* mRow;
	WDTableCellProperties* mProperties;
	WDText* mText;
	BOOL mUseTrackedProperties;

}
-(void)dealloc;
-(id)row;
-(id)text;
-(unsigned)index;
-(id)properties;
-(double)cellWidth;
-(void)clearProperties;
-(id)initWithRow:(id)arg1 at:(unsigned)arg2 ;
-(BOOL)useTrackedProperties;
-(void)setUseTrackedProperties:(BOOL)arg1 ;
-(int)compareIndex:(id)arg1 ;
@end
