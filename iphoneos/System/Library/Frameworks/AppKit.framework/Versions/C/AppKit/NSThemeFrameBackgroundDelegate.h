/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSView;

@interface NSThemeFrameBackgroundDelegate : NSObject {

	NSView* _view;

}

@property (assign) NSView * view;              //@synthesize view=_view - In the implementation block
-(NSView *)view;
-(void)setView:(NSView *)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end
