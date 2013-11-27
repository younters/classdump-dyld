/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSWPColumnMetrics
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) float textScaleFactor; 
@optional
-(float)textScaleFactor;

@required
-(CGSize*)adjustedInsets;
-(float)widthForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2;
-(float)gapForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2;
-(float)positionForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 outWidth:(float*)arg3 outGap:(float*)arg4;
-(id)layoutMargins;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(unsigned)columnCount;
@end
