/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSClipView.h>

@interface BKSidebarClipView : NSClipView {

	id _delegate;
	char _usesInsetColors;

}

@property (assign) id delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign) char usesInsetColors;              //@synthesize usesInsetColors=_usesInsetColors - In the implementation block
-(char)usesInsetColors;
-(void)setUsesInsetColors:(char)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)backgroundColor;
-(id)menuForEvent:(id)arg1 ;
@end
