/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface MKImageView : NSView

@property (nonatomic,retain) NSImage * image; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)sizeToFit;
-(id)initWithImage:(id)arg1 ;
@end
