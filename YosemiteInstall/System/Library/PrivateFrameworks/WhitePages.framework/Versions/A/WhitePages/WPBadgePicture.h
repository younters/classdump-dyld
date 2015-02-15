/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WhitePages/WhitePages-Structs.h>
@class NSImage, NSColor;

@interface WPBadgePicture : NSObject {

	NSImage* originalImage;
	NSImage* badgeImage;
	CGSize targetSize;
	double blurRadius;
	double shadowAlpha;
	double shadowOffsetX;
	double shadowOffsetY;
	double scalingRatio;
	NSColor* backgroundColor;

}
+(id)badgePictureWithImageNamed:(id)arg1 size:(CGSize)arg2 ;
+(id)badgePictureWithImage:(id)arg1 size:(CGSize)arg2 ;
-(void)setOriginalImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithImageNamed:(id)arg1 size:(CGSize)arg2 ;
-(id)imageWithSize:(CGSize)arg1 toFitSize:(CGSize)arg2 ;
-(id)badgeImageWithSize:(CGSize)arg1 ;
-(double)blurRadius;
-(void)setBlurRadius:(double)arg1 ;
-(double)shadowOffsetX;
-(void)setShadowOffsetX:(double)arg1 ;
-(double)shadowOffsetY;
-(void)setShadowOffsetY:(double)arg1 ;
-(double)scalingRatio;
-(void)setScalingRatio:(double)arg1 ;
-(id)originalImage;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setBadgeImage:(id)arg1 ;
-(id)badgeImage;
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
@end
