/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <Dock/ECTextLayer.h>

@interface ECShadowTextLayer : ECTextLayer {

	id _textShadowColor;
	CGSize _textShadowOffset;
	char _textShadowHidden;
	double _cachedHeight;
	double _textShadowBlur;

}

@property (nonatomic,retain) id textShadowColor;                   //@synthesize textShadowColor=_textShadowColor - In the implementation block
@property (assign,nonatomic) CGSize textShadowOffset;              //@synthesize textShadowOffset=_textShadowOffset - In the implementation block
@property (assign,nonatomic) double textShadowBlur;                //@synthesize textShadowBlur=_textShadowBlur - In the implementation block
@property (assign,nonatomic) char textShadowHidden;                //@synthesize textShadowHidden=_textShadowHidden - In the implementation block
+(char)needsDisplayForKey:(id)arg1 ;
-(void)setTextShadowHidden:(char)arg1 ;
-(id)textShadowColor;
-(void)setTextShadowColor:(id)arg1 ;
-(CGSize)textShadowOffset;
-(void)setTextShadowOffset:(CGSize)arg1 ;
-(double)textShadowBlur;
-(void)setTextShadowBlur:(double)arg1 ;
-(char)textShadowHidden;
-(CGSize)preferredFrameSize;
-(id)init;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setFont:(void*)arg1 ;
-(void)setFontSize:(double)arg1 ;
@end
