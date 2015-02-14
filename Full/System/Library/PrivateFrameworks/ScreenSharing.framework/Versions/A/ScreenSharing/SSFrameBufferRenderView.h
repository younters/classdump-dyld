/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <AppKit/NSView.h>

@class SSFrameBuffer, CALayer, SSScreenInfo;

@interface SSFrameBufferRenderView : NSView {

	unsigned long long mScreenIdentifier;
	SSFrameBuffer* mFrameBuffer;
	CALayer* mCachedImageLayer;
	char useCachedImage;

}

@property (readonly) SSScreenInfo * screen; 
@property (assign) unsigned long long screenIdentifier; 
@property (retain) SSFrameBuffer * frameBuffer; 
@property (assign) char useCachedImage; 
-(SSFrameBuffer *)frameBuffer;
-(void)setFrameBuffer:(SSFrameBuffer *)arg1 ;
-(void)setUseCachedImage:(char)arg1 ;
-(char)useCachedImage;
-(void)setScreenIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)screenIdentifier;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(SSScreenInfo *)screen;
-(void)rightMouseDown:(id)arg1 ;
-(char)isOpaque;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
@end
