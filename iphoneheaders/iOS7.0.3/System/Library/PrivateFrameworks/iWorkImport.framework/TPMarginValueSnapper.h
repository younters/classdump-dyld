/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSKRulerUnits;

@interface TPMarginValueSnapper : NSObject {

	TSKRulerUnits* _rulerUnits;
	float _visiblePageWidth;
	float _screenScale;

}
-(id)initWithRulerUnits:(id)arg1 visiblePageSize:(CGSize)arg2 screenScale:(float)arg3 ;
-(float)snapMarginValue:(float)arg1 ;
-(void)dealloc;
@end
