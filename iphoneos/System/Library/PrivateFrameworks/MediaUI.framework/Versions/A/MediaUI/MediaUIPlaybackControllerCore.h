/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaUI/MediaUI-Structs.h>
@class MediaUIPlaybackModel, MediaUIKeyValueObserver, NSArray, MediaUIValueTiming, NSError, NSLocale;

@interface MediaUIPlaybackControllerCore : NSObject {

	MediaUIPlaybackModel* _playbackModel;
	MediaUIKeyValueObserver* _playbackModelObserver;
	dispatch_queue_sRef _playbackModelQueue;
	int _signaled;
	/*^block*/id _block;
	unsigned long long _seekCount;
	unsigned long long _rateCount;
	unsigned long long _volumeCount;
	unsigned long long _audioLocaleCount;
	unsigned long long _subtitleLocaleCount;
	unsigned long long _displaysSubtitlesCount;
	unsigned long long _displaysClosedCaptionsCount;
	double _accumulatedMinimumSeekTime;
	double _accumulatedMaximumSeekTime;
	unsigned long long _seekGeneration;
	unsigned _playing : 1;
	double _rate;
	SCD_Struct_Me5 _activeProperties;
	SCD_Struct_Me5 _modelProperties;

}

@property (retain,readonly) MediaUIPlaybackModel * playbackModel; 
@property (getter=isSeeking,readonly) char seeking; 
@property (assign) double rate; 
@property (getter=isPlaying,readonly) char playing; 
@property (assign) double volume; 
@property (readonly) CGSize contentDimensions; 
@property (readonly) double contentDuration; 
@property (readonly) NSArray * contentChapters; 
@property (readonly) double contentFrameRate; 
@property (readonly) MediaUIValueTiming * timing; 
@property (readonly) NSError * playbackError; 
@property (readonly) double minimumPlaybackRate; 
@property (readonly) double maximumPlaybackRate; 
@property (readonly) double minimumSeekableTime; 
@property (readonly) double maximumSeekableTime; 
@property (copy) NSLocale * audioLocale; 
@property (copy) NSLocale * subtitleLocale; 
@property (readonly) NSArray * contentAudioLocales; 
@property (readonly) NSArray * contentSubtitleLocales; 
@property (assign) char displaysClosedCaptions; 
@property (assign) char displaysSubtitles; 
@property (readonly) char contentHasClosedCaptions; 
+(id)coreForPlaybackModel:(id)arg1 ;
+(char)automaticallyNotifiesObserversOfTiming;
+(char)automaticallyNotifiesObserversOfDisplaysSubtitles;
+(char)automaticallyNotifiesObserversOfDisplaysClosedCaptions;
+(char)automaticallyNotifiesObserversOfAudioLocale;
+(char)automaticallyNotifiesObserversOfSubtitleLocale;
+(char)automaticallyNotifiesObserversOfHasClosedCaptions;
+(char)automaticallyNotifiesObserversOfPlaybackError;
+(char)automaticallyNotifiesObserversOfContentDimensions;
+(char)automaticallyNotifiesObserversOfContentDuration;
+(char)automaticallyNotifiesObserversOfContentChapters;
+(char)automaticallyNotifiesObserversOfContentFrameRate;
+(char)automaticallyNotifiesObserversOfMinimumPlaybackRate;
+(char)automaticallyNotifiesObserversOfMaximumPlaybackRate;
+(char)automaticallyNotifiesObserversOfMinimumSeekableTime;
+(char)automaticallyNotifiesObserversOfMaximumSeekableTime;
+(char)automaticallyNotifiesObserversOfContentAudioLocales;
+(char)automaticallyNotifiesObserversOfContentSubtitleLocales;
+(char)automaticallyNotifiesObserversOfRate;
+(char)automaticallyNotifiesObserversOfVolume;
-(CGSize)contentDimensions;
-(double)contentDuration;
-(char)isSeeking;
-(NSArray *)contentChapters;
-(MediaUIValueTiming *)timing;
-(MediaUIPlaybackModel *)playbackModel;
-(void)beginSeeking;
-(void)finishSeeking;
-(char)displaysClosedCaptions;
-(void)setDisplaysClosedCaptions:(char)arg1 ;
-(char)displaysSubtitles;
-(void)setDisplaysSubtitles:(char)arg1 ;
-(char)contentHasClosedCaptions;
-(NSLocale *)audioLocale;
-(void)setAudioLocale:(NSLocale *)arg1 ;
-(NSLocale *)subtitleLocale;
-(void)setSubtitleLocale:(NSLocale *)arg1 ;
-(NSArray *)contentAudioLocales;
-(NSArray *)contentSubtitleLocales;
-(double)minimumPlaybackRate;
-(double)maximumPlaybackRate;
-(double)contentFrameRate;
-(double)maximumSeekableTime;
-(double)minimumSeekableTime;
-(void)beginGroupingValueChanges;
-(void)finishGroupingValueChanges;
-(NSError *)playbackError;
-(id)initWithPlaybackModel:(id)arg1 ;
-(void)updateContentDurationFromModel;
-(void)updateContentChaptersFromModel;
-(void)updateContentDimensionsFromModel;
-(void)updateContentFrameRateFromModel;
-(void)updatePlaybackTimingFromModel;
-(void)updatePlaybackErrorFromModel;
-(void)updatePlaybackVolumeFromModel;
-(void)updateMinimumPlaybackRateFromModel;
-(void)updateMaximumPlaybackRateFromModel;
-(void)updateMinimumSeekableTimeFromModel;
-(void)updateMaximumSeekableTimeFromModel;
-(void)updateAudioLocaleFromModel;
-(void)updateSubtitleLocaleFromModel;
-(void)updateContentAudioLocalesFromModel;
-(void)updateContentSubtitleLocalesFromModel;
-(void)updateContentHasClosedCaptionsFromModel;
-(void)_setContentDuration:(double)arg1 ;
-(void)_setContentChapters:(id)arg1 ;
-(void)_setContentDimensions:(CGSize)arg1 ;
-(void)_setContentFrameRate:(double)arg1 ;
-(void)_setTiming:(id)arg1 ;
-(void)_setPlaybackError:(id)arg1 ;
-(void)_setMinimumPlaybackRate:(double)arg1 ;
-(void)_setMaximumPlaybackRate:(double)arg1 ;
-(void)_setMinimumSeekableTime:(double)arg1 ;
-(void)_setMaximumSeekableTime:(double)arg1 ;
-(void)_setContentAudioLocale:(id)arg1 ;
-(void)_setContentSubtitleLocale:(id)arg1 ;
-(void)_setContentAudioLocales:(id)arg1 ;
-(void)_setContentSubtitleLocales:(id)arg1 ;
-(void)beginSettingRate;
-(void)finishSettingRate;
-(void)beginSettingVolume;
-(void)finishSettingVolume;
-(void)beginSettingDisplaysSubtitles;
-(void)_setDisplaysSubtitles:(char)arg1 ;
-(void)finishSettingDisplaysSubtitles;
-(void)beginSettingDisplaysClosedCaptions;
-(void)_setDisplaysClosedCaptions:(char)arg1 ;
-(void)finishSettingDisplaysClosedCaptions;
-(void)beginSettingAudioLocale;
-(void)finishSettingAudioLocale;
-(void)beginSettingSubtitleLocale;
-(void)finishSettingSubtitleLocale;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(char)isPlaying;
-(void)setVolume:(double)arg1 ;
-(double)volume;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)_setRate:(double)arg1 ;
-(void)_setVolume:(double)arg1 ;
@end
