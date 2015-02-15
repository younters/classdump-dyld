/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <AppKit/NSView.h>

@interface BKSidebarContainerView : NSView {

	CGSize _optimalContentSize;
	char _tiling;
	char _usesInsetColors;
	char _tuckFirstLine;

}

@property (readonly) CGSize optimalContentSize;              //@synthesize optimalContentSize=_optimalContentSize - In the implementation block
@property (assign) char usesInsetColors;                     //@synthesize usesInsetColors=_usesInsetColors - In the implementation block
@property (assign) char tuckFirstLine;                       //@synthesize tuckFirstLine=_tuckFirstLine - In the implementation block
-(char)usesInsetColors;
-(void)setUsesInsetColors:(char)arg1 ;
-(CGSize)optimalContentSize;
-(void)setTuckFirstLine:(char)arg1 ;
-(id)_enclosingScrollView;
-(char)tuckFirstLine;
-(void)_sizeToFit;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(char)isFlipped;
-(char)isOpaque;
-(void)tile;
-(void)_windowChangedKeyState;
-(char)_scrollRectToVisible:(const CGRect*)arg1 fromView:(id)arg2 ;
-(void)viewWillStartLiveResize;
-(void)_drawBackground:(CGRect)arg1 ;
@end
