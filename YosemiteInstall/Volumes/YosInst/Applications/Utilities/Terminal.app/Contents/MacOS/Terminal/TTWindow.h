/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Terminal/Terminal-Structs.h>
#import <AppKit/NSWindow.h>

@interface TTWindow : NSWindow {

	CGRect dragFrame;
	double _terminalWindowBlur;

}

@property (assign) CGRect dragFrame; 
@property (assign,nonatomic) double terminalWindowBlur;              //@synthesize terminalWindowBlur=_terminalWindowBlur - In the implementation block
+(id)defaultAnimationForKey:(id)arg1 ;
-(void)setSelectedTabController:(id)arg1 ;
-(id)tabControllers;
-(CGRect)fullScreenFrame;
-(id)selectedTabController;
-(CGRect)dragFrame;
-(void)setDragFrame:(CGRect)arg1 ;
-(void)setTerminalWindowBlur:(double)arg1 ;
-(double)terminalWindowBlur;
-(void)_updateTerminalWindowBlur:(double)arg1 ;
-(void)selectFollowingWindow:(id)arg1 goingBackwards:(char)arg2 ;
-(id)defaultScreen;
-(id)handleDoScriptCommand:(id)arg1 ;
-(char)scriptFrontmost;
-(void)setScriptFrontmost:(char)arg1 ;
-(id)scriptPosition;
-(void)setScriptPosition:(id)arg1 ;
-(id)scriptOrigin;
-(void)setScriptOrigin:(id)arg1 ;
-(id)scriptSize;
-(void)setScriptSize:(id)arg1 ;
-(id)scriptFrame;
-(void)setScriptFrame:(id)arg1 ;
-(CGRect)defaultFrame;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)sendEvent:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(id)frameAutosaveName;
-(char)_setFrameAutosaveName:(id)arg1 changeFrame:(char)arg2 ;
-(void)setBoundsAsQDRect:(id)arg1 ;
-(char)isFullScreen;
@end
