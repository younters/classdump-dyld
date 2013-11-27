/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MSCarDisplayServiceProvider;
@class UIWindow, MSBrowserViewController, UIViewController, NSArray, MPAVController, ;

@interface MSRootController : NSObject {

	UIWindow* _carDisplayWindow;
	MSBrowserViewController* _browserViewController;
	UIViewController* _dummyFlipViewController;
	NSArray* _tabs;
	MPAVController* _player;
	<MSCarDisplayServiceProvider>* _serviceProvider;

}

@property (nonatomic,retain) MPAVController * player;                                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) <MSCarDisplayServiceProvider> * serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
-(void)dealloc;
-(id)initWithTabs:(id)arg1 ;
-(void)setServiceProvider:(id)arg1 ;
-(id)serviceProvider;
-(id)initWithScreen:(id)arg1 tabs:(id)arg2 ;
-(void)_tabsDidChange:(id)arg1 ;
-(void)showNowPlaying;
-(void).cxx_destruct;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
