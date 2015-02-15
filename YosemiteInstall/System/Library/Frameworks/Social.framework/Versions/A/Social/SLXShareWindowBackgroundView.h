/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <AppKit/NSView.h>

@class NSTextView, NSTextField;

@interface SLXShareWindowBackgroundView : NSView {

	NSTextView* _messageTextView;
	NSTextField* _charactersCountTextField;
	int _textureStyle;

}

@property (assign) int textureStyle;              //@synthesize textureStyle=_textureStyle - In the implementation block
-(int)textureStyle;
-(void)drawSeparationLineAtHeight:(double)arg1 ;
-(void)setTextureStyle:(int)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end
