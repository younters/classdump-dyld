/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:33:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Graphics/Quartz Composer Patches/FaceEffects.plugin/Contents/MacOS/FaceEffects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceEffects/FaceEffects-Structs.h>
@interface FFXFace : NSObject {

	CGPoint _normalizedFaceCenter;
	double _normalizedFaceRadius;
	CGPoint _normalizedLeftEyeCenter;
	CGPoint _normalizedRightEyeCenter;
	CGPoint _normalizedMouthCenter;
	long long _trackingID;
	long long _frameCount;
	double _angle;

}

@property (readonly) CGPoint normalizedFaceCenter;                  //@synthesize normalizedFaceCenter=_normalizedFaceCenter - In the implementation block
@property (readonly) double normalizedFaceRadius;                   //@synthesize normalizedFaceRadius=_normalizedFaceRadius - In the implementation block
@property (readonly) CGPoint normalizedLeftEyeCenter;               //@synthesize normalizedLeftEyeCenter=_normalizedLeftEyeCenter - In the implementation block
@property (readonly) CGPoint normalizedRightEyeCenter;              //@synthesize normalizedRightEyeCenter=_normalizedRightEyeCenter - In the implementation block
@property (readonly) CGPoint normalizedMouthCenter;                 //@synthesize normalizedMouthCenter=_normalizedMouthCenter - In the implementation block
@property (readonly) long long trackingID;                          //@synthesize trackingID=_trackingID - In the implementation block
+(id)faceWithRepresentation:(id)arg1 imageSize:(CGSize)arg2 ;
-(double)normalizedFaceRadius;
-(CGPoint)normalizedLeftEyeCenter;
-(CGPoint)normalizedFaceCenter;
-(CGPoint)normalizedRightEyeCenter;
-(id)initWithRepresentation:(id)arg1 imageSize:(CGSize)arg2 ;
-(CGPoint)normalizedMouthCenter;
-(id)dictionaryRepresentation;
-(long long)trackingID;
@end
