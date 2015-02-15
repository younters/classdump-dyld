/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhotoPlugin2012.ilmbplugin/Contents/MacOS/iLMBiPhotoPlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBiPhotoPlugin2012/iLMBiPhotoPlugin2012-Structs.h>
#import <iLMBiPhotoPlugin2012/IP2012_RKModel.h>

@class NSString, NSNumber, ILMB_IPHOTO_2012_HgRecentChange, NSData;

@interface IP2012_RKDetectedFace : IP2012_RKModel {

	NSString* _masterUuid;
	NSString* _altMasterUuid;
	NSNumber* _faceKey;
	NSNumber* _correlatedFaceKey;
	NSString* _ownerServiceKey;
	NSNumber* _faceIndex;
	double _width;
	double _height;
	double _topLeftX;
	double _topLeftY;
	double _topRightX;
	double _topRightY;
	double _bottomLeftX;
	double _bottomLeftY;
	double _bottomRightX;
	double _bottomRightY;
	double _confidence;
	double _sharpness;
	double _exposureValue;
	NSNumber* _faceCount;
	char _rejected;
	char _ignore;
	char _hasFaceTile;
	NSNumber* _faceFlags;
	NSNumber* _tileFacePosition;
	double _faceAngle;
	double _faceDirectionAngle;
	double _faceSkinScore;
	char _skippedInUnnamedFaces;
	char _suspendRefreshForUndo;
	ILMB_IPHOTO_2012_HgRecentChange* _recentChange;
	NSData* _recogBuffer;
	NSData* _histogram64Buffer;
	CGPoint _faceFeatureLocations[11];
	double _faceFeatureConfidences[11];

}

@property (assign,nonatomic) char suspendRefreshForUndo;              //@synthesize suspendRefreshForUndo=_suspendRefreshForUndo - In the implementation block
@property (assign,nonatomic) char hasLoadedFaceFeatures; 
+(id)newFaceKey:(id)arg1 ;
+(void)prefetchRelationships:(id)arg1 forObjects:(id)arg2 ;
+(void)loadFaceFeaturesForFaces:(id)arg1 withCancel:(id)arg2 ;
+(void)loadDetectedFaceBlobsForFaces:(id)arg1 withCancel:(id)arg2 ;
+(void)loadFaceFeaturesForFaces:(id)arg1 ;
+(void)loadDetectedFaceBlobsForFaces:(id)arg1 ;
+(id)infoDictionaryPathForUuid:(id)arg1 forDatabase:(id)arg2 ;
+(void)notifyMastersOfFaceChangeForFaces:(id)arg1 ;
+(void)setFaceKey:(id)arg1 inFaces:(id)arg2 ;
-(void)setSuspendRefreshForUndo:(char)arg1 ;
-(char)suspendRefreshForUndo;
-(char)skippedInUnnamedFaces;
-(id)infoDictionaryPath;
-(double)faceDirectionAngle;
-(id)tileFacePosition;
-(char)hasFaceTile;
-(id)correlatedFaceKey;
-(void)setRecentChange:(id)arg1 ;
-(id)faceFlags;
-(double)faceSkinScore;
-(id)recentChange;
-(id)faceName;
-(id)newFaceKey;
-(id)ownerServiceKey;
-(double)exposureValue;
-(char)rejected;
-(id)initWithAddress:(id)arg1 uuid:(id)arg2 inDatabase:(id)arg3 ;
-(void)setFaceName:(id)arg1 ;
-(id)faceKey;
-(id)altMasterUuid;
-(id)masterUuid;
-(id)initWithUuid:(id)arg1 inDatabase:(id)arg2 ;
-(id)initWithModelId:(id)arg1 forEntity:(id)arg2 ;
-(void)cacheRecogBuffer:(id)arg1 ;
-(CGPoint*)faceFeatureLocations;
-(void)cacheHistogram64Buffer:(id)arg1 ;
-(id)recogBuffer;
-(void)_initFaceKeys;
-(void)setHasLoadedFaceFeatures:(char)arg1 ;
-(char)hasLoadedFaceFeatures;
-(double*)faceFeatureConfidences;
-(char)isNamed;
-(id)histogram64Buffer;
-(double)bottomRightY;
-(double)bottomLeftY;
-(double)topRightY;
-(double)topLeftY;
-(double)bottomRightX;
-(double)bottomLeftX;
-(double)topRightX;
-(double)topLeftX;
-(void)cacheFaceSkinScore:(double)arg1 ;
-(void)cacheSkippedInUnnamedFaces:(char)arg1 ;
-(void)cacheExposureValue:(double)arg1 ;
-(void)cacheHasFaceTile:(char)arg1 ;
-(void)cacheFaceDirectionAngle:(double)arg1 ;
-(void)cacheConfidence:(double)arg1 ;
-(void)cacheTileFacePosition:(id)arg1 ;
-(void)cacheFaceAngle:(double)arg1 ;
-(void)cacheBottomRightY:(double)arg1 ;
-(void)cacheBottomRightX:(double)arg1 ;
-(void)cacheBottomLeftY:(double)arg1 ;
-(void)cacheBottomLeftX:(double)arg1 ;
-(void)cacheOwnerServiceKey:(id)arg1 ;
-(void)cacheSharpness:(double)arg1 ;
-(void)cacheFaceFlags:(id)arg1 ;
-(void)cacheIgnore:(char)arg1 ;
-(void)cacheCorrelatedFaceKey:(id)arg1 ;
-(void)cacheRejected:(char)arg1 ;
-(void)cacheAltMasterUuid:(id)arg1 ;
-(void)cacheFaceCount:(id)arg1 ;
-(void)cacheMasterUuid:(id)arg1 ;
-(void)cacheTopLeftY:(double)arg1 ;
-(void)cacheTopLeftX:(double)arg1 ;
-(id)initWithModelId:(id)arg1 inDatabase:(id)arg2 ;
-(void)cacheTopRightY:(double)arg1 ;
-(void)cacheTopRightX:(double)arg1 ;
-(void)cacheFaceKey:(id)arg1 ;
-(void)cacheHeight:(double)arg1 ;
-(void)cacheFaceIndex:(id)arg1 ;
-(void)cacheWidth:(double)arg1 ;
-(char)isRawPlusJpeg;
-(char)ignore;
-(id)faceCount;
-(double)sharpness;
-(double)confidence;
-(void)dealloc;
-(id)description;
-(double)width;
-(double)height;
-(double)faceAngle;
-(id)faceIndex;
@end
