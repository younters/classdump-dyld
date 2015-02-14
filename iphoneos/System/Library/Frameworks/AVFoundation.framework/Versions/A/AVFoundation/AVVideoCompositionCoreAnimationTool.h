/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {

	AVVideoCompositionCoreAnimationToolInternal* _videoCompositionTool;

}
+(id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2 ;
+(id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2 ;
+(id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2 ;
-(char)_hasLayerAsAuxiliaryTrack;
-(id)_auxiliaryTrackLayer;
-(char)_hasPostProcessingLayers;
-(id)_postProcessingRootLayer;
-(int)_auxiliaryTrackID;
-(id)_postProcessingVideoLayers;
-(id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3 ;
-(void)finalize;
-(void)dealloc;
@end
