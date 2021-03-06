/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/KNAnimationEffect.h>
#import <iBAReaderKit/KNFrameAnimator.h>
#import <iBAReaderKit/KNAnimationPluginArchiving.h>

@class TSDGLMotionBlurEffect, TSDGLShader, TSDGLDataBuffer, NSArray, NSString;

@interface KNTransitionPageFlip : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving> {

	TSDGLMotionBlurEffect* _motionBlurEffect;
	TSDGLShader* _colorShader;
	TSDGLDataBuffer* _colorDataBuffer;
	TSDGLShader* _velocityShader;
	TSDGLDataBuffer* _velocityDataBuffer;
	NSArray* _colorBufferAttributes;
	NSArray* _velocityBufferAttributes;
	unsigned long long _colorPositionAttributeIndex;
	unsigned long long _colorTexCoordAttributeIndex;
	unsigned long long _colorNormalAttributeIndex;
	unsigned long long _velocityPositionAttributeIndex;
	unsigned long long _velocityPrevPositionAttributeIndex;
	TSDGLShader* _quadShader;
	TSDGLDataBuffer* _quadDataBuffer;
	long long _numPoints;
	char _shouldDrawMotionBlur;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(double)thumbnailImageDurationFractionForType:(int)arg1 ;
+(id)animationFilter;
+(unsigned long long)directionType;
+(int)animationCategory;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(id)supportedTypes;
+(id)animationName;
-(void)p_teardown;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)createArrays:(id)arg1 ;
-(void)p_drawFlipWithVelocity:(char)arg1 percent:(double)arg2 texture:(id)arg3 ;
-(void)update:(id)arg1 withPercent:(double)arg2 direction:(unsigned long long)arg3 ;
-(void)dealloc;
@end

