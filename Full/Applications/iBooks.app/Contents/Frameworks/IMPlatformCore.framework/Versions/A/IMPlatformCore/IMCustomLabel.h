/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMPlatformCore/IMPlatformCore-Structs.h>
#import <AppKit/NSView.h>

@class NSShadow, NSTextFieldCell, NSString, NSFont, NSColor;

@interface IMCustomLabel : NSView {

	NSShadow* _shadow;
	NSTextFieldCell* _cell;
	char _needsUpdate;
	char _dummyString;
	char _enabled;
	NSString* _text;
	NSFont* _font;
	NSColor* _color;
	NSColor* _disabledColor;
	unsigned long long _alignment;
	unsigned long long _underlineStyle;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSFont * font;                                  //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) NSColor * color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSColor * disabledColor;                        //@synthesize disabledColor=_disabledColor - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) unsigned long long underlineStyle;              //@synthesize underlineStyle=_underlineStyle - In the implementation block
-(CGRect)alignRect:(CGRect)arg1 inBounds:(CGRect)arg2 withHorizontalAlignment:(unsigned long long)arg3 ;
-(void)setDisabledColor:(NSColor *)arg1 ;
-(void)setUnderlineStyle:(unsigned long long)arg1 ;
-(void)setShadow:(id)arg1 offset:(CGSize)arg2 blur:(double)arg3 ;
-(NSColor *)disabledColor;
-(unsigned long long)underlineStyle;
-(void)setText:(NSString *)arg1 ;
-(void)commonInit;
-(void)setNeedsUpdate;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(char)isFlipped;
-(void)setAlignment:(unsigned long long)arg1 ;
-(unsigned long long)alignment;
-(NSEdgeInsets)alignmentRectInsets;
-(double)baselineOffsetFromBottom;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(NSString *)text;
-(void)updateIfNeeded;
@end
