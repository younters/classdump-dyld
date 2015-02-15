/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindow.h>

@class QLFullscreenController;

@interface QLFullscreenWindow : NSWindow {

	QLFullscreenController* _fullscreenController;

}

@property (assign) QLFullscreenController * fullscreenController;              //@synthesize fullscreenController=_fullscreenController - In the implementation block
-(id)_qlControllerCandidateForPreviewPanel:(id)arg1 ;
-(char)_qlIgnoreWindowForPreviewPanel:(id)arg1 ;
-(QLFullscreenController *)fullscreenController;
-(void)setFullscreenController:(QLFullscreenController *)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(char)worksWhenModal;
-(void)scrollWheel:(id)arg1 ;
-(char)canBecomeKeyWindow;
-(void)magnifyWithEvent:(id)arg1 ;
-(char)wantsForwardedScrollEventsForAxis:(long long)arg1 ;
-(char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
@end
