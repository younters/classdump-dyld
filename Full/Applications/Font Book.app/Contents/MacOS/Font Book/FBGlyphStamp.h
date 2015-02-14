/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/Font Book-Structs.h>
#import <Font Book/FBReportStamp.h>

@class NSFont;

@interface FBGlyphStamp : FBReportStamp {

	NSFont* _font;
	CFDictionaryRef _fontAttributes;
	CTFontRef _titleFont;
	CFDictionaryRef _titleFontAttributes;
	long long _numGlyphs;
	long long _glyphCellSize;
	long long _rowsPerPage;
	long long _numberOfColumns;
	CTFontRef _smallLabelFont;
	CFDictionaryRef _smallLabelAttributes;
	NSRange _glyphRange;

}
+(void)setShowCodepoint:(char)arg1 ;
+(void)setShowGlyphName:(char)arg1 ;
+(void)setPointSize:(long long)arg1 ;
-(CTFontRef)_ctFont;
-(id)initWithFrame:(CGRect)arg1 previewController:(id)arg2 delegate:(id)arg3 ;
-(void)_setupFonts;
-(char)addFont:(id)arg1 info:(long long*)arg2 ;
-(void)_drawWithStartY:(long long)arg1 context:(CGContextRef)arg2 ;
-(void)_calcMetricsWithFrame:(CGRect)arg1 ;
-(void)setPaddingFactor:(double)arg1 withFrame:(CGRect)arg2 ;
-(void)drawInView:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
