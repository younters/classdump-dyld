/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TSWPColumn, TSWPShapeLayout;

@interface TSWPInteriorCookie : NSObject {

	TSWPColumn* _column;
	TSWPShapeLayout* _shapeLayout;

}

@property (assign,nonatomic) TSWPColumn * column;                   //@synthesize column=_column - In the implementation block
@property (assign,nonatomic) TSWPShapeLayout * layout;              //@synthesize shapeLayout=_shapeLayout - In the implementation block
-(id)layout;
-(void)setLayout:(id)arg1 ;
-(id)column;
-(void)setColumn:(id)arg1 ;
@end
