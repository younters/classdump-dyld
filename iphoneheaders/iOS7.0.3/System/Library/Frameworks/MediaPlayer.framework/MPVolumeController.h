/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MPVolumeControllerDelegate;
@class MPAVController, NSString, UIImage, ;

@interface MPVolumeController : NSObject {

	MPAVController* _player;
	NSString* _volumeAudioCategory;
	BOOL _volumeWarningBlinking;
	UIImage* _volumeWarningTrackImage;
	BOOL _debugVolumeWarning;
	BOOL _volumeWarningEnabled;
	<MPVolumeControllerDelegate>* _delegate;
	float _volumeValue;
	int _volumeWarningState;
	float _EUVolumeLimit;

}

@property (assign,nonatomic,__weak) <MPVolumeControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float volumeValue;                                         //@synthesize volumeValue=_volumeValue - In the implementation block
@property (assign,nonatomic) BOOL muted; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,copy) NSString * volumeAudioCategory; 
@property (nonatomic,readonly) BOOL volumeWarningEnabled;                                 //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) int volumeWarningState;                                    //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (nonatomic,readonly) float EUVolumeLimit;                                       //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(BOOL)muted;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(float)setVolumeValue:(float)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)volumeWarningEnabled;
-(int)volumeWarningState;
-(void)updateVolumeWarningState;
-(void)updateVolumeValue;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(id)volumeAudioCategory;
-(void)setVolumeAudioCategory:(id)arg1 ;
-(float)EUVolumeLimit;
-(void)_systemVolumeDidChange:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)_setupNotifications;
-(float)_volumeFromAVController;
-(void)_setVolumeWarningState:(int)arg1 ;
-(void)_tearDownNotifications;
-(float)volumeValue;
-(void)_internalSetVolumeValue:(float)arg1 ;
-(BOOL)_isPlayerInValidState;
-(void)_systemMuteDidChange:(id)arg1 ;
-(void)_EUVolumeLimitDidChange:(id)arg1 ;
-(void)_EUVolumeLimitEnforcedDidChange:(id)arg1 ;
-(void)_volumeDidChange:(id)arg1 ;
-(void)_forcefullySetVolumeValue:(float)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
