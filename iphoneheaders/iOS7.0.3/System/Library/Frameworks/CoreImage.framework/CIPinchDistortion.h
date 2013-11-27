/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPinchDistortion : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputRadius:(id)arg1 ;
-(id)inputRadius;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(void)setInputScale:(id)arg1 ;
-(CGRect)computeDOD:(float)arg1 scale:(float)arg2 ;
-(id)_pinchDistortionScaleLT1;
-(id)_pinchDistortionScaleGE1;
-(id)inputScale;
@end
