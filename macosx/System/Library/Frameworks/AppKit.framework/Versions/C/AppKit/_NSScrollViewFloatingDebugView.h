/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface _NSScrollViewFloatingDebugView : NSView {

	NSColor* _debugColor;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateLayer;
-(id)hitTest:(CGPoint)arg1 ;
-(char)wantsUpdateLayer;
-(void)_setDebugColor:(id)arg1 ;
@end
