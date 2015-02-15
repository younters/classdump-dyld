/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTMovieMediaHelper.h>

@class NSThread, NSURL, QTMovieFigVisualContextRenderHelper, NSMapTable, QTMovie, QTWeakReference;

@interface QTMovie_FigMedia : QTMovieMediaHelper {

	NSThread* _initializingThread;
	OpaqueFigPlayerRef _figPlayer;
	OpaqueFigPlaybackItemRef _playbackItem;
	OpaqueFigVisualContextRef _visualContext;
	OpaqueFigSemaphoreRef _readyForPlaybackSemaphore;
	NSURL* _url;
	long long _loadState;
	int _loadStateErrorCode;
	QTMovieFigVisualContextRenderHelper* _renderHelper;
	NSMapTable* _trackHelpers;
	char _attachedToMainThread;
	char _willMigrateToMainThread;
	char _isActive;
	char _looping;
	char _loopingBackAndForth;
	float _playWhenReadyRate;
	float _volumeAtMuting;
	char _isMuted;
	char _containsProtectedMedia;
	char _containsStreamingSource;
	char _playWhenReady;
	char _postsClosedCaptionChangeNotifications;
	char _postsNonForcedSubtitleChangeNotifications;
	char _playbackRangeActive;
	SCD_Struct_QT16 _playbackRange;
	QTMovie* _sessionClonedMovie;
	id _chapterObserver;
	unsigned long long _mostRecentlySetChapterIndex;
	QTWeakReference* _weakReference;

}
+(id)movieFileTypes:(int)arg1 ;
+(char)canInitWithFile:(id)arg1 fileTypes:(int)arg2 error:(id*)arg3 ;
+(char)canInitWithURL:(id)arg1 fileTypes:(int)arg2 error:(id*)arg3 ;
+(char)canInitWithDataReference:(id)arg1 fileTypes:(int)arg2 error:(id*)arg3 ;
+(id)validationAttributesForURL:(id)arg1 fileTypes:(int)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
+(id)validationAttributesForDataReference:(id)arg1 fileTypes:(int)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
+(id)movieMIMETypesWithOptions:(int)arg1 ;
+(id)sitesInDownloadCache;
+(void)clearDownloadCacheForSite:(id)arg1 ;
+(void)clearDownloadCache;
+(void)initialize;
-(void)step:(int)arg1 ;
-(id)artist;
-(id)genre;
-(id)album;
-(int)trackCount;
-(id)creationTime;
-(unsigned long long)dataSize;
-(id)modificationTime;
-(float)preferredRate;
-(long long)timeScale;
-(int)dataRate;
-(char)canCut;
-(char)canPaste;
-(char)canCopy;
-(id)commonMetadata;
-(void)setApertureMode:(id)arg1 ;
-(CGSize)naturalSize;
-(void)setMuted:(char)arg1 ;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)apertureMode;
-(char)isMuted;
-(void)_setURL:(id)arg1 ;
-(OpaqueFigVisualContextRef)_visualContext;
-(char)hasVideo;
-(char)hasAudio;
-(CGSize)currentSize;
-(id)trackEnumerator;
-(id)initWithAttributes:(id)arg1 error:(id*)arg2 forParent:(id)arg3 ;
-(void)getDefaultDataLocatorAttributeKey:(id*)arg1 andValue:(id*)arg2 ;
-(id)diagnosticString;
-(char)usesFigMedia;
-(char)usesQuickTime;
-(id)copyWithZone:(NSZone*)arg1 forParent:(id)arg2 ;
-(void)setCurrentTime:(SCD_Struct_QT12)arg1 inRange:(SCD_Struct_QT16)arg2 ;
-(id)tracksOfMediaType:(id)arg1 ;
-(void*)frameImageAtTime:(SCD_Struct_QT12)arg1 withAttributes:(id)arg2 error:(id*)arg3 ;
-(void)autoplay;
-(void)autoplay:(float)arg1 ;
-(void)gotoEnd;
-(void)gotoPosterTime;
-(void)stepForward;
-(void)stepBackward;
-(id)initialDataReference;
-(id)trackAtIndex:(int)arg1 ;
-(id)trackByIndexAndType:(long long)arg1 type:(unsigned)arg2 flags:(long long)arg3 ;
-(id)trackByID:(long long)arg1 ;
-(id)tracksWithCharacteristic:(id)arg1 ;
-(void)setPostsClosedCaptionDidChangeNotifications:(char)arg1 ;
-(void)setPostsNonForcedSubtitleDidChangeNotifications:(char)arg1 ;
-(char)postsNonForcedSubtitleDidChangeNotifications;
-(void)setChapterTrack:(id)arg1 ;
-(SCD_Struct_QT12)maxTimeLoaded;
-(char)isInteractive;
-(char)isLinear;
-(char)isSteppable;
-(char)hasQuartzComposer;
-(char)isStreaming;
-(char)loopsBackAndForth;
-(float)staticFrameRate;
-(id)author;
-(id)metaDataDescription;
-(id)controllerType;
-(id)annotationsWithCommonKeys;
-(id)annotationsExtended;
-(long long)loadState;
-(id)loadStateError;
-(id)availableRanges;
-(id)loadedRanges;
-(id)albumArtworkMovie;
-(id)albumArtworkAttributes;
-(unsigned)movieType;
-(MatrixRecord)originalMovieMatrix;
-(void)setLoopsBackAndForth:(char)arg1 ;
-(char)usesHardwareVideoDecoder;
-(char)useHardwareVideoDecoderIfAvailable;
-(void)setUseHardwareVideoDecoderIfAvailable:(char)arg1 ;
-(char)isVRMovie;
-(char)isFlashMovie;
-(char)attachToCurrentThread;
-(char)detachFromCurrentThread;
-(SCD_Struct_QT12)keyframeStartTime:(SCD_Struct_QT12)arg1 ;
-(void)setAudioDevice:(id)arg1 error:(id*)arg2 ;
-(AudioChannelLayout*)audioChannelLayout;
-(void)setAudioChannelLayout:(AudioChannelLayout*)arg1 error:(id*)arg2 ;
-(char)usesVisualContext;
-(char)wouldUseVisualContext;
-(unsigned long long)droppedVideoFrameCount;
-(char)hasChapters;
-(long long)chapterCount;
-(id)chapters;
-(SCD_Struct_QT12)startTimeOfChapter:(long long)arg1 ;
-(long long)chapterIndexForTime:(SCD_Struct_QT12)arg1 ;
-(id)chapterTrack;
-(unsigned)currentChapterIndex;
-(void)setCurrentChapterIndex:(unsigned)arg1 ;
-(id)currentChapterName;
-(int)chapterMode;
-(char)isDRMProtected;
-(char)isDRMAuthorized;
-(char)hasFrameRate;
-(double)dynamicFrameRate;
-(SCD_Struct_QT16)playbackRange;
-(void)setPlaybackRange:(SCD_Struct_QT16)arg1 ;
-(id)sourceString;
-(char)hasSubtitles;
-(char)hasClosedCaptions;
-(char)limitReadAhead;
-(void)setLimitReadAhead:(char)arg1 ;
-(char)validateMetadata:(id)arg1 forFormat:(id)arg2 error:(id*)arg3 ;
-(char)setMetadata:(id)arg1 forFormat:(id)arg2 ;
-(OpaqueCMTimebaseRef)_timebase;
-(void)_createRenderHelperIfNecessary;
-(void)_registerForPropertyChanges;
-(void)_initializingThreadWillExit:(id)arg1 ;
-(void)_checkForChapterChanges;
-(void)_unregisterForPropertyChanges;
-(void)_clearCachedImageData;
-(void)_setVisualContext:(OpaqueFigVisualContextRef)arg1 ;
-(void)_setLoadStateErrorCode:(int)arg1 ;
-(void)_setLoadState:(long long)arg1 ;
-(id)enabledTracks;
-(id)_enabledTracksOfMediaType:(id)arg1 ;
-(id)_enabledTracksWithCharacteristic:(id)arg1 ;
-(id)_initializingThread;
-(void)_handleLoopEndpoint;
-(void)_setPlayWhenReady:(char)arg1 ;
-(void)_setPlayWhenReadyRate:(float)arg1 ;
-(void)addImageConsumerNoNotify:(id)arg1 ;
-(char)_playbackItemLoaded;
-(void)setFigVolume:(float)arg1 ;
-(char)_attachedToMainThread;
-(char)_playWhenReady;
-(float)_playWhenReadyRate;
-(void)_postLoadStateChangedNotificationAndAutoplay:(id)arg1 ;
-(int)_loadStateErrorCode;
-(id)_metaDataStringOfType:(id)arg1 ;
-(char)_hasEnabledTrackOfType:(unsigned)arg1 ;
-(id)chaptersDeep;
-(void)copyStateFromMediaHelper:(id)arg1 ;
-(OpaqueFigPlayerRef)figPlayer;
-(OpaqueFigPlaybackItemRef)figPlaybackItem;
-(void)_postClosedCaptionDidChangeNotification:(id)arg1 ;
-(void)_postSubtitleDidChangeNotification:(id)arg1 ;
-(void)_handleMovieDidPlayToTheEnd;
-(id)_renderHelper;
-(void)_setPlayWhenReadyToYES;
-(char)_hasTrackOfType:(unsigned)arg1 ;
-(id)_trackHelpers;
-(void)_signalReadyForPlaybackSemaphore;
-(char)hasDuration;
-(id)annotations;
-(char)editable;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(SCD_Struct_QT12)duration;
-(void)invalidate;
-(id)URL;
-(char)isActive;
-(void)play;
-(char)canUndo;
-(void)setActive:(char)arg1 ;
-(id)displayName;
-(id)fileName;
-(char)isPlaying;
-(void)gotoBeginning;
-(void)setVolume:(float)arg1 ;
-(SCD_Struct_QT12)currentTime;
-(void)setCurrentTime:(SCD_Struct_QT12)arg1 ;
-(float)volume;
-(void)setLoops:(char)arg1 ;
-(char)loops;
-(id)tracks;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(id)copyright;
-(id)fullName;
-(char)_isAtEnd;
-(id)format;
-(id)dataReference;
@end
