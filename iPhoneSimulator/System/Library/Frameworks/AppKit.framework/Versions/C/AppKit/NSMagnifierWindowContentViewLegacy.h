/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <AppKit/NSMagnifierWindowContentView.h>

@class NSBitmapImageRep, NSBezierPath, NSImage, NSColor, NSString;

@interface NSMagnifierWindowContentViewLegacy : NSView <NSMagnifierWindowContentView> {

	NSBitmapImageRep* _contentImageRep;
	NSBezierPath* _clipPath;
	NSImage* _magGlassImage;
	NSColor* _cachedColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSBitmapImageRep * contentImageRep;              //@synthesize contentImageRep=_contentImageRep - In the implementation block
+(CGSize)magnifierViewSize;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(id)color;
-(CGPoint)magnifyingGlassCenterPosition;
-(double)magnifyingGlassRadius;
-(double)magnifiedPointsPerPixel;
-(void)setNextMode;
-(NSBitmapImageRep *)contentImageRep;
-(void)setContentImageRep:(NSBitmapImageRep *)arg1 ;
@end
