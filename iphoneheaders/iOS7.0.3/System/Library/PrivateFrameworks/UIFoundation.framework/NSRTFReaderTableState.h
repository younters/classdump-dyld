/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSTextTable, NSMutableArray;

@interface NSRTFReaderTableState : NSObject {

	NSTextTable* _currentTable;
	NSTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;

}
-(void)dealloc;
@end
