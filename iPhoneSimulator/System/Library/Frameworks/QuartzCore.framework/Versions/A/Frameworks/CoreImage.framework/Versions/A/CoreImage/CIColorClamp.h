/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorClamp : CIFilter {

	CIImage* inputImage;
	CIVector* inputMinComponents;
	CIVector* inputMaxComponents;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputMinComponents; 
@property (nonatomic,retain) CIVector * inputMaxComponents; 
-(CGRect)clampROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CIVector *)inputMinComponents;
-(void)setInputMinComponents:(CIVector *)arg1 ;
-(CIVector *)inputMaxComponents;
-(void)setInputMaxComponents:(CIVector *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(id)customAttributes;
@end
