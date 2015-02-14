/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <AppKit/NSBox.h>

@class CALayer, NSColor;

@interface BKPlatformHairlineView : NSBox {

	char _attachLeft;
	char _attachTop;
	char _isVertical;
	char _isHorizontal;
	CALayer* _coloredLayer;
	NSColor* _nonRetinaColor;
	NSColor* _retinaColor;

}

@property (assign,nonatomic) char attachLeft;                       //@synthesize attachLeft=_attachLeft - In the implementation block
@property (assign,nonatomic) char attachTop;                        //@synthesize attachTop=_attachTop - In the implementation block
@property (nonatomic,retain) CALayer * coloredLayer;                //@synthesize coloredLayer=_coloredLayer - In the implementation block
@property (nonatomic,retain) NSColor * nonRetinaColor;              //@synthesize nonRetinaColor=_nonRetinaColor - In the implementation block
@property (nonatomic,retain) NSColor * retinaColor;                 //@synthesize retinaColor=_retinaColor - In the implementation block
@property (assign,nonatomic) char isVertical;                       //@synthesize isVertical=_isVertical - In the implementation block
@property (assign,nonatomic) char isHorizontal;                     //@synthesize isHorizontal=_isHorizontal - In the implementation block
-(void)setIsVertical:(char)arg1 ;
-(void)setIsHorizontal:(char)arg1 ;
-(NSColor *)nonRetinaColor;
-(void)setColoredLayer:(CALayer *)arg1 ;
-(void)p_windowBackingPropertiesDidChange:(id)arg1 ;
-(void)p_updateForScale:(double)arg1 ;
-(void)setNonRetinaColor:(NSColor *)arg1 ;
-(void)setRetinaColor:(NSColor *)arg1 ;
-(CALayer *)coloredLayer;
-(id)p_backgroundColorForScale:(double)arg1 ;
-(char)attachLeft;
-(char)attachTop;
-(NSColor *)retinaColor;
-(void)setAttachLeft:(char)arg1 ;
-(void)setAttachTop:(char)arg1 ;
-(void)dealloc;
-(char)isVertical;
-(void)setBorderColor:(id)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)awakeFromNib;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(char)isHorizontal;
@end
