/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/Font Book-Structs.h>
#import <AppKit/NSCell.h>

@class NSFont;

@interface FBGlyphMatrixCell : NSCell {

	unsigned short glyphID;
	double pointSize;
	NSFont* glyphViewFont;
	CGContextRef _context;

}

@property (assign) unsigned short glyphID; 
@property (readonly) CGFontRef cgFont; 
@property (assign) double pointSize; 
@property (retain) NSFont * glyphViewFont; 
-(void)setGlyphID:(unsigned short)arg1 ;
-(void)setGlyphViewFont:(NSFont *)arg1 ;
-(NSFont *)glyphViewFont;
-(void)_prepareGraphicsState;
-(void)_restoreGraphicsState;
-(CGFontRef)cgFont;
-(unsigned short)glyphID;
-(void)setPointSize:(double)arg1 ;
-(void)dealloc;
-(void)setState:(long long)arg1 ;
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(long long)state;
-(double)pointSize;
-(char)acceptsFirstResponder;
-(char)refusesFirstResponder;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
@end
