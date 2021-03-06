/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzFilters/QFilterCell.h>

@class NSBox, NSSlider, NSTextField, QFilterConvolutionRadiusView;

@interface QFilterCellImageConvolutionRadius : QFilterCell {

	NSBox* ConvolutionRadiusBox;
	NSSlider* ConvolutionRadiusSlider;
	NSTextField* ConvolutionRadiusText;
	NSTextField* ConvolutionRadiusMaxText;
	NSTextField* ConvolutionRadiusMinText;
	QFilterConvolutionRadiusView* ConvolutionRadiusView;

}
+(char)needsToRemainInViewHierarchy;
-(void)instantiateView;
-(void)ConvolutionRadiusSliderAction:(id)arg1 ;
-(void)awakeFromNib;
-(void)updateUI;
@end

