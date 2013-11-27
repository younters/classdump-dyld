/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLSlideshowPlugin.h>
#import <PhotoLibrary/PLImageLoadingQueueDelegate.h>

@class PLImageCache, PLImageLoadingQueue, PLImageSource, PLManagedAsset, PLCachedImage, PLCroppedImageView;

@interface PLPictureFramePlugin : PLSlideshowPlugin <PLImageLoadingQueueDelegate> {

	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	PLImageSource* _imageSource;
	CFArrayRef _imageIndexes;
	unsigned _currentIndex;
	PLManagedAsset* _requestedImage;
	PLCachedImage* _nextImage;
	PLCroppedImageView* _currentImageView;
	PLCroppedImageView* _nextImageView;
	unsigned _didLoadFirstImage : 1;
	unsigned _slideshowTimerDidFire : 1;
	unsigned _slideshowTimerIsScheduled : 1;
	unsigned _paused : 1;

}
-(void)dealloc;
-(id)init;
-(void)slideshowViewDidDisappear;
-(void)stopSlideshow;
-(id)newSlideshowView;
-(void)slideshowViewWillAppear;
-(void)slideshowViewDidAppear;
-(void)pauseSlideshow;
-(void)setAlbumAssets:(id)arg1 ;
-(void)resumeSlideshow;
-(void)_requestNextImageSynchronously:(BOOL)arg1 ;
-(CGRect)_contentBounds;
-(void)_scheduleSlideshowTimer;
-(void)_slideshowTimerFired;
-(long)_albumImageIndexForSlideIndex:(long)arg1 ;
-(id)_nextImage;
-(void)_didLoadImage:(id)arg1 ;
-(void)_displayFirstImage;
-(void)_transitionToNextImage;
-(void)_crossFadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4 ;
@end
