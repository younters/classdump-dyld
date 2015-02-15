/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/loginwindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <loginwindow/loginwindow-Structs.h>
@class NSWindow, CALayer;

@interface DTDisplay : NSObject {

	unsigned _display;
	NSWindow* _window;
	CALayer* _baseLayer;
	CALayer* _pictureLayer;
	CALayer* _bootLayer;

}

@property (readonly) unsigned displayID;                  //@synthesize display=_display - In the implementation block
@property (readonly) NSWindow * window;                   //@synthesize window=_window - In the implementation block
@property (readonly) CALayer * baseLayer;                 //@synthesize baseLayer=_baseLayer - In the implementation block
@property (readonly) CALayer * pictureLayer;              //@synthesize pictureLayer=_pictureLayer - In the implementation block
@property (readonly) CALayer * bootLayer;                 //@synthesize bootLayer=_bootLayer - In the implementation block
-(void)setTransistionWindowsToAllowLoginHooksToShow;
-(void)tearDownWithoutTransition;
-(void)showRootMacBuddyToLoginUITransition;
-(void)setTopLayerImage:(CGImageRef)arg1 ;
-(void)setWindowLevelTo:(id)arg1 ;
-(void)moveTransitionWindowToPrelaunchPosition;
-(id)initWithScreen:(id)arg1 displayID:(unsigned)arg2 grabImage:(char)arg3 ;
-(unsigned)realWindowID;
-(void)appear;
-(CALayer *)pictureLayer;
-(CALayer *)bootLayer;
-(CALayer *)baseLayer;
-(void)becomeMain;
-(void)relinquishMain;
-(void)transition;
-(unsigned)displayID;
-(void)dealloc;
-(void)updateDisplay:(unsigned)arg1 ;
-(NSWindow *)window;
@end
