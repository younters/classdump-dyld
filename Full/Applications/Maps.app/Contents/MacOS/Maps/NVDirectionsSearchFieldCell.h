/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Suggestions/SGTSearchFieldCell.h>

@class NSString;

@interface NVDirectionsSearchFieldCell : SGTSearchFieldCell {

	char _cancelButtonHidden;
	NSString* _labelString;
	NSString* _counterpartLabelString;
	double _cancelButtonOffset;

}

@property (retain) NSString * labelString;                         //@synthesize labelString=_labelString - In the implementation block
@property (retain) NSString * counterpartLabelString;              //@synthesize counterpartLabelString=_counterpartLabelString - In the implementation block
@property (assign) char cancelButtonHidden;                        //@synthesize cancelButtonHidden=_cancelButtonHidden - In the implementation block
@property (assign) double cancelButtonOffset;                      //@synthesize cancelButtonOffset=_cancelButtonOffset - In the implementation block
+(id)colorForCurrentLocation;
+(id)colorForDroppedPin;
-(void)setLabelString:(NSString *)arg1 ;
-(void)setCounterpartLabelString:(NSString *)arg1 ;
-(double)labelTextWidthForString:(id)arg1 ;
-(NSString *)counterpartLabelString;
-(double)cancelButtonOffset;
-(double)labelTextWidth;
-(CGRect)labelRectForBounds:(CGRect)arg1 ;
-(char)cancelButtonHidden;
-(void)setCancelButtonHidden:(char)arg1 ;
-(void)setCancelButtonOffset:(double)arg1 ;
-(NSString *)labelString;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)searchTextRectForBounds:(CGRect)arg1 ;
-(CGRect)searchButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)cancelButtonRectForBounds:(CGRect)arg1 ;
-(char)isRTL;
@end
