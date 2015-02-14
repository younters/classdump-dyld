/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIVignetteEffect : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputIntensity;
	NSNumber* inputFalloff;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
@property (nonatomic,retain) NSNumber * inputFalloff; 
-(CIVector *)inputCenter;
-(NSNumber *)inputRadius;
-(NSNumber *)inputIntensity;
-(NSNumber *)inputFalloff;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(void)setInputCenter:(CIVector *)arg1 ;
-(void)setInputFalloff:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(id)customAttributes;
-(char)_isIdentity;
@end
