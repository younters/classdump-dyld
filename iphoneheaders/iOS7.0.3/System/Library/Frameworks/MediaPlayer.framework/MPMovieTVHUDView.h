/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {

	unsigned _currentState;
	UIImageView* _playbackMode;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_fadeOut;
-(void)_changeState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 ;
-(void).cxx_destruct;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
