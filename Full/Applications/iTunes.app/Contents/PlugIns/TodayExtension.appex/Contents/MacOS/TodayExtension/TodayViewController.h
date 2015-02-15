/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iTunes.app/Contents/PlugIns/TodayExtension.appex/Contents/MacOS/TodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class TrackSlider, BackButton, NSButton, ForwardButton, NSTextField, DurationLabel, TodayCaptionView, NSLayoutConstraint, NSString, NSImage, NSTimer, iTunesSBAdaptor;

@interface TodayViewController : NSViewController {

	char _isPlayingRadio;
	char _dormant;
	int _radioSkipsLeft;
	int _playPauseButtonState;
	int _backButtonState;
	TrackSlider* _slider;
	BackButton* _backButton;
	NSButton* _playStopPauseButton;
	ForwardButton* _nextButton;
	NSButton* _leftButton;
	NSButton* _rightButton;
	NSTextField* _elapsedTimeTextField;
	DurationLabel* _remainingTimeLabel;
	TodayCaptionView* _scrollingTitle;
	TodayCaptionView* _scrollingSubTitle;
	NSLayoutConstraint* _rightButtonConstraint;
	NSString* _forwardAccessibilityString;
	NSString* _pauseAccessibilityString;
	NSString* _stopAccessibilityString;
	NSString* _playAccessibilityString;
	NSString* _skipsLeftAccessibilityString;
	NSString* _backButtonString;
	NSString* _infoAccessibilityString;
	NSString* _geniusAccessibilityString;
	NSString* _rewindAccessibilityString;
	NSImage* _nextButtonImage;
	NSImage* _prevButtonImage;
	NSImage* _stopButtonImage;
	NSImage* _pauseButtonImage;
	NSImage* _playButtonImage;
	NSImage* _geniusButtonImage;
	NSImage* _infoButtonImage;
	NSImage* _likedInfoButtonImage;
	NSImage* _likeActionMenuImage;
	NSImage* _likeActionMenuAlternateImage;
	NSImage* _banActionMenuImage;
	NSImage* _banActionMenuAlternateImage;
	NSImage* _addToWishlistImage;
	NSImage* _addToWishlistAlternateImage;
	NSImage* _removeFromWishlistImage;
	NSImage* _removeFromWishlistAlternateImage;
	NSTimer* _timer;
	double _currentTrackDuration;
	iTunesSBAdaptor* _iTunesAdaptor;

}

@property (__weak) TrackSlider * slider;                                              //@synthesize slider=_slider - In the implementation block
@property (__weak) BackButton * backButton;                                           //@synthesize backButton=_backButton - In the implementation block
@property (__weak) NSButton * playStopPauseButton;                                    //@synthesize playStopPauseButton=_playStopPauseButton - In the implementation block
@property (__weak) ForwardButton * nextButton;                                        //@synthesize nextButton=_nextButton - In the implementation block
@property (__weak) NSButton * leftButton;                                             //@synthesize leftButton=_leftButton - In the implementation block
@property (__weak) NSButton * rightButton;                                            //@synthesize rightButton=_rightButton - In the implementation block
@property (__weak) NSTextField * elapsedTimeTextField;                                //@synthesize elapsedTimeTextField=_elapsedTimeTextField - In the implementation block
@property (__weak) DurationLabel * remainingTimeLabel;                                //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (__weak) TodayCaptionView * scrollingTitle;                                 //@synthesize scrollingTitle=_scrollingTitle - In the implementation block
@property (__weak) TodayCaptionView * scrollingSubTitle;                              //@synthesize scrollingSubTitle=_scrollingSubTitle - In the implementation block
@property (retain) NSLayoutConstraint * rightButtonConstraint;                        //@synthesize rightButtonConstraint=_rightButtonConstraint - In the implementation block
@property (retain) NSString * forwardAccessibilityString;                             //@synthesize forwardAccessibilityString=_forwardAccessibilityString - In the implementation block
@property (retain) NSString * pauseAccessibilityString;                               //@synthesize pauseAccessibilityString=_pauseAccessibilityString - In the implementation block
@property (retain) NSString * stopAccessibilityString;                                //@synthesize stopAccessibilityString=_stopAccessibilityString - In the implementation block
@property (retain) NSString * playAccessibilityString;                                //@synthesize playAccessibilityString=_playAccessibilityString - In the implementation block
@property (retain) NSString * skipsLeftAccessibilityString;                           //@synthesize skipsLeftAccessibilityString=_skipsLeftAccessibilityString - In the implementation block
@property (retain) NSString * backButtonString;                                       //@synthesize backButtonString=_backButtonString - In the implementation block
@property (retain) NSString * infoAccessibilityString;                                //@synthesize infoAccessibilityString=_infoAccessibilityString - In the implementation block
@property (retain) NSString * geniusAccessibilityString;                              //@synthesize geniusAccessibilityString=_geniusAccessibilityString - In the implementation block
@property (retain) NSString * rewindAccessibilityString;                              //@synthesize rewindAccessibilityString=_rewindAccessibilityString - In the implementation block
@property (assign) char isPlayingRadio;                                               //@synthesize isPlayingRadio=_isPlayingRadio - In the implementation block
@property (assign) int radioSkipsLeft;                                                //@synthesize radioSkipsLeft=_radioSkipsLeft - In the implementation block
@property (assign) char dormant;                                                      //@synthesize dormant=_dormant - In the implementation block
@property (nonatomic,retain) NSImage * nextButtonImage;                               //@synthesize nextButtonImage=_nextButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * prevButtonImage;                               //@synthesize prevButtonImage=_prevButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * stopButtonImage;                               //@synthesize stopButtonImage=_stopButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * pauseButtonImage;                              //@synthesize pauseButtonImage=_pauseButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * playButtonImage;                               //@synthesize playButtonImage=_playButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * geniusButtonImage;                             //@synthesize geniusButtonImage=_geniusButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * infoButtonImage;                               //@synthesize infoButtonImage=_infoButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * likedInfoButtonImage;                          //@synthesize likedInfoButtonImage=_likedInfoButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * likeActionMenuImage;                           //@synthesize likeActionMenuImage=_likeActionMenuImage - In the implementation block
@property (nonatomic,retain) NSImage * likeActionMenuAlternateImage;                  //@synthesize likeActionMenuAlternateImage=_likeActionMenuAlternateImage - In the implementation block
@property (nonatomic,retain) NSImage * banActionMenuImage;                            //@synthesize banActionMenuImage=_banActionMenuImage - In the implementation block
@property (nonatomic,retain) NSImage * banActionMenuAlternateImage;                   //@synthesize banActionMenuAlternateImage=_banActionMenuAlternateImage - In the implementation block
@property (nonatomic,retain) NSImage * addToWishlistImage;                            //@synthesize addToWishlistImage=_addToWishlistImage - In the implementation block
@property (nonatomic,retain) NSImage * addToWishlistAlternateImage;                   //@synthesize addToWishlistAlternateImage=_addToWishlistAlternateImage - In the implementation block
@property (nonatomic,retain) NSImage * removeFromWishlistImage;                       //@synthesize removeFromWishlistImage=_removeFromWishlistImage - In the implementation block
@property (nonatomic,retain) NSImage * removeFromWishlistAlternateImage;              //@synthesize removeFromWishlistAlternateImage=_removeFromWishlistAlternateImage - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                         //@synthesize timer=_timer - In the implementation block
@property (assign) double currentTrackDuration;                                       //@synthesize currentTrackDuration=_currentTrackDuration - In the implementation block
@property (retain) iTunesSBAdaptor * iTunesAdaptor;                                   //@synthesize iTunesAdaptor=_iTunesAdaptor - In the implementation block
@property (assign) int playPauseButtonState;                                          //@synthesize playPauseButtonState=_playPauseButtonState - In the implementation block
@property (assign) int backButtonState;                                               //@synthesize backButtonState=_backButtonState - In the implementation block
-(NSButton *)playStopPauseButton;
-(id)imageForPlayerState:(int)arg1 ;
-(void)setupBackButton:(id)arg1 ;
-(NSImage *)nextButtonImage;
-(iTunesSBAdaptor *)iTunesAdaptor;
-(void)setPinnedWidthsOnTimeLabels:(id)arg1 ;
-(void)setButtonTextLeft:(id)arg1 andRight:(id)arg2 ;
-(void)setStateOfTransportButtons:(unsigned)arg1 fromTimer:(char)arg2 ;
-(void)setControlsToDormantState;
-(void)setNextButtonImage:(NSImage *)arg1 ;
-(void)setPrevButtonImage:(NSImage *)arg1 ;
-(void)setPauseButtonImage:(NSImage *)arg1 ;
-(void)setGeniusButtonImage:(NSImage *)arg1 ;
-(void)setInfoButtonImage:(NSImage *)arg1 ;
-(void)setLikedInfoButtonImage:(NSImage *)arg1 ;
-(void)setLikeActionMenuImage:(NSImage *)arg1 ;
-(void)setLikeActionMenuAlternateImage:(NSImage *)arg1 ;
-(void)setBanActionMenuImage:(NSImage *)arg1 ;
-(void)setBanActionMenuAlternateImage:(NSImage *)arg1 ;
-(void)setAddToWishlistImage:(NSImage *)arg1 ;
-(void)setAddToWishlistAlternateImage:(NSImage *)arg1 ;
-(void)setRemoveFromWishlistImage:(NSImage *)arg1 ;
-(void)setRemoveFromWishlistAlternateImage:(NSImage *)arg1 ;
-(NSImage *)pauseButtonImage;
-(NSImage *)prevButtonImage;
-(NSImage *)geniusButtonImage;
-(NSImage *)likedInfoButtonImage;
-(NSImage *)infoButtonImage;
-(int)backButtonStateFromString:(id)arg1 ;
-(int)backButtonState;
-(id)imageForBackButtonState:(int)arg1 isLiked:(char)arg2 ;
-(void)popupActionMenu:(id)arg1 ;
-(void)backward:(id)arg1 ;
-(void)setITunesAdaptor:(iTunesSBAdaptor *)arg1 ;
-(void)handleTimer:(id)arg1 ;
-(void)toggleTimeDisplayMode;
-(void)playMore:(id)arg1 ;
-(NSImage *)likeActionMenuAlternateImage;
-(void)neverPlay:(id)arg1 ;
-(NSImage *)banActionMenuAlternateImage;
-(void)addToWishlist:(id)arg1 ;
-(NSImage *)addToWishlistAlternateImage;
-(void)removeFromWishlist:(id)arg1 ;
-(NSImage *)removeFromWishlistAlternateImage;
-(id)menuForInfoButton;
-(void)handleTrackChanged:(id)arg1 ;
-(void)forward:(id)arg1 ;
-(void)playpause:(id)arg1 ;
-(void)slide:(id)arg1 ;
-(double)fastRewind;
-(void)leftButton:(id)arg1 ;
-(void)rightButton:(id)arg1 ;
-(char)isLikedForLikedStatusString:(id)arg1 ;
-(id)getRewindOperationAccessibilityString;
-(id)getForwardOperationAccessibilityString;
-(id)getPlayPauseOperationAccessibilityString;
-(void)setPlayStopPauseButton:(NSButton *)arg1 ;
-(NSButton *)leftButton;
-(void)setLeftButton:(NSButton *)arg1 ;
-(void)setRightButton:(NSButton *)arg1 ;
-(NSTextField *)elapsedTimeTextField;
-(void)setElapsedTimeTextField:(NSTextField *)arg1 ;
-(DurationLabel *)remainingTimeLabel;
-(void)setRemainingTimeLabel:(DurationLabel *)arg1 ;
-(TodayCaptionView *)scrollingTitle;
-(void)setScrollingTitle:(TodayCaptionView *)arg1 ;
-(TodayCaptionView *)scrollingSubTitle;
-(void)setScrollingSubTitle:(TodayCaptionView *)arg1 ;
-(NSLayoutConstraint *)rightButtonConstraint;
-(void)setRightButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)forwardAccessibilityString;
-(void)setForwardAccessibilityString:(NSString *)arg1 ;
-(NSString *)pauseAccessibilityString;
-(void)setPauseAccessibilityString:(NSString *)arg1 ;
-(NSString *)stopAccessibilityString;
-(void)setStopAccessibilityString:(NSString *)arg1 ;
-(NSString *)playAccessibilityString;
-(void)setPlayAccessibilityString:(NSString *)arg1 ;
-(NSString *)skipsLeftAccessibilityString;
-(void)setSkipsLeftAccessibilityString:(NSString *)arg1 ;
-(NSString *)backButtonString;
-(void)setBackButtonString:(NSString *)arg1 ;
-(NSString *)infoAccessibilityString;
-(void)setInfoAccessibilityString:(NSString *)arg1 ;
-(NSString *)geniusAccessibilityString;
-(void)setGeniusAccessibilityString:(NSString *)arg1 ;
-(NSString *)rewindAccessibilityString;
-(void)setRewindAccessibilityString:(NSString *)arg1 ;
-(char)isPlayingRadio;
-(void)setIsPlayingRadio:(char)arg1 ;
-(int)radioSkipsLeft;
-(void)setRadioSkipsLeft:(int)arg1 ;
-(char)dormant;
-(void)setDormant:(char)arg1 ;
-(NSImage *)likeActionMenuImage;
-(NSImage *)banActionMenuImage;
-(NSImage *)addToWishlistImage;
-(NSImage *)removeFromWishlistImage;
-(double)currentTrackDuration;
-(void)setCurrentTrackDuration:(double)arg1 ;
-(int)playPauseButtonState;
-(void)setPlayPauseButtonState:(int)arg1 ;
-(void)setBackButtonState:(int)arg1 ;
-(void)setNextButton:(ForwardButton *)arg1 ;
-(void)setPlayerPosition:(double)arg1 ;
-(double)fastForward;
-(BackButton *)backButton;
-(void)setBackButton:(BackButton *)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)stopObserving;
-(void)setSlider:(TrackSlider *)arg1 ;
-(NSImage *)playButtonImage;
-(NSImage *)stopButtonImage;
-(void)setPlayButtonImage:(NSImage *)arg1 ;
-(void)setStopButtonImage:(NSImage *)arg1 ;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startObserving;
-(TrackSlider *)slider;
-(ForwardButton *)nextButton;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)stopTimer;
-(NSButton *)rightButton;
-(void)startTimer;
-(void)loadImages;
-(void)refresh:(char)arg1 ;
@end
