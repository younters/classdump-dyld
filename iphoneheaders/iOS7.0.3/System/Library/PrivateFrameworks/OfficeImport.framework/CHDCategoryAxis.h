/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDCategoryAxis : CHDAxis {

	bool mAutomatic;
	bool mNoMultipleLevelLabel;
	int mLabelAlignment;
	long mLabelFrequency;

}
-(id)initWithResources:(id)arg1 ;
-(void)setLabelFrequency:(long)arg1 ;
-(void)setLabelAlignment:(int)arg1 ;
-(long)labelFrequency;
-(void)adjustAxisPositionForHorizontalChart;
-(bool)isAutomatic;
-(void)setAutomatic:(bool)arg1 ;
-(bool)isNoMultipleLabellevel;
-(void)setNoMultipleLevelLabel:(bool)arg1 ;
-(int)labelAlignment;
@end
