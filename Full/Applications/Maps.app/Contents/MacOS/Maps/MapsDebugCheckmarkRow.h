/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MapsDebugTableRow.h>

@class MapsDebugCheckmarkRowsGroup;

@interface MapsDebugCheckmarkRow : MapsDebugTableRow {

	char _checked;
	/*^block*/id _get;
	id _value;
	MapsDebugCheckmarkRowsGroup* _rowsGroup;

}

@property (nonatomic,retain) id value;                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) id get;                                                 //@synthesize get=_get - In the implementation block
@property (nonatomic,retain) MapsDebugCheckmarkRowsGroup * rowsGroup;              //@synthesize rowsGroup=_rowsGroup - In the implementation block
-(void)setGet:(id)arg1 ;
-(void)configureCell:(id)arg1 ;
-(id)_radioButtonForCell:(id)arg1 ;
-(void)_radioButtonDidChangeValue:(id)arg1 ;
-(void)_configureCellForCheckedValue:(id)arg1 ;
-(MapsDebugCheckmarkRowsGroup *)rowsGroup;
-(void)setRowsGroup:(MapsDebugCheckmarkRowsGroup *)arg1 ;
-(id)reuseIdentifier;
-(id)init;
-(void)invalidate;
-(void)update;
-(void)setValue:(id)arg1 ;
-(id)nibName;
-(id)get;
-(id)value;
@end
