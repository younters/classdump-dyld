/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBAReaderKit/iBAReaderKit-Structs.h>
@class KPFSession, TSURetainedPointerKeyDictionary, KPFMovie, NSString, NSMutableArray, KPFTransitionRenderer, KPFGLBuildRenderer, NSDictionary, NSArray, NSMutableDictionary, CALayer;

@interface KPFGingerEffect : NSObject {

	KPFSession* mKPFSession;
	TSURetainedPointerKeyDictionary* mAnimationDict;
	unsigned long long mAnimationsStarted;
	/*^block*/id mAnimationEndHandler;
	char mRequiresPerspectiveTransform;
	KPFMovie* mMovie;
	NSString* mTextureName;
	NSMutableArray* mTextures;
	KPFTransitionRenderer* mRenderer;
	KPFGLBuildRenderer* mBuildRenderer;
	NSDictionary* mEffectDict;
	NSDictionary* mBaseLayerDict;
	NSString* mName;
	NSString* mType;
	double mBeginTime;
	double mDuration;
	NSArray* mChildrenArray;
	NSMutableDictionary* mSwappableLayersDict;
	NSDictionary* mMovieDict;
	NSMutableArray* mChildren;
	NSString* mObjectID;
	CALayer* _layer;
	CALayer* _baseLayer;
	NSString* _textureToBeAnimated;

}

@property (nonatomic,readonly) NSDictionary * baseLayerDict; 
@property (nonatomic,readonly) NSMutableArray * children; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * objectID; 
@property (nonatomic,readonly) NSMutableArray * textures; 
@property (nonatomic,readonly) CALayer * layer;                             //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CALayer * baseLayer;                         //@synthesize baseLayer=_baseLayer - In the implementation block
@property (nonatomic,readonly) NSString * textureToBeAnimated;              //@synthesize textureToBeAnimated=_textureToBeAnimated - In the implementation block
-(void)p_movieEndCallback;
-(CGAffineTransform)p_affineTransformFromArray:(id)arg1 ;
-(CATransform3D)p_transformFromArray:(id)arg1 ;
-(void)stopMoviePlayback;
-(id)p_fillModefromDictionary:(id)arg1 ;
-(void)animateWithSession:(id)arg1 ;
-(CGColorRef)p_colorFromArray:(id)arg1 ;
-(void)p_createSubEffectsFromDict:(id)arg1 ;
-(void)p_subAnimationEnded;
-(id)p_newLayerFromDict:(id)arg1 ;
-(void)p_animateSubEffect:(id)arg1 ;
-(void)pauseMoviePlayback;
-(CGRect)p_rectFromDictionary:(id)arg1 ;
-(CGPathRef)p_newPathFromArray:(id)arg1 ;
-(char)isMoviePlaying;
-(NSDictionary *)baseLayerDict;
-(char)containsMovie;
-(void)animationDidEnd;
-(CALayer *)baseLayer;
-(id)initWithEffectDict:(id)arg1 ;
-(void)setAnimationEndHandler:(/*^block*/id)arg1 ;
-(void)p_glAnimationEndCallback;
-(NSString *)textureToBeAnimated;
-(void)resumeMoviePlayback;
-(id)p_propertyValueFromDictionary:(id)arg1 forLayer:(id)arg2 forAction:(id)arg3 ;
-(id)p_timingFunctionFromString:(id)arg1 forActionDictionary:(id)arg2 ;
-(id)p_keyframeAnimationFromAnimationDict:(id)arg1 forLayer:(id)arg2 ;
-(id)p_basicAnimationFromAnimationDict:(id)arg1 forLayer:(id)arg2 ;
-(void)p_setupAndAnimateGLAnimationsFromAttributesDict:(id)arg1 ;
-(id)p_groupedlLayerAnimationsFromAnimationDictionary:(id)arg1 forLayer:(id)arg2 ;
-(void)renderEffectWithSession:(id)arg1 withSwappableLayersDict:(id)arg2 ;
-(NSMutableArray *)textures;
-(void)dealloc;
-(CALayer *)layer;
-(NSString *)name;
-(NSString *)type;
-(NSString *)objectID;
-(NSMutableArray *)children;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)tearDown;
@end
