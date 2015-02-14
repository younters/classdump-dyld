/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class NSString;

@interface CPFont : NSObject <CPDisposable> {

	CGPDFFontRef cgPDFFont;
	CGFontRef cgFont;
	NSString* fontName;
	char exactMatch;
	SCD_Struct_CP20 descriptor;
	CFDictionaryRef kernDictionary;
	double kernUnitsPerEm;
	char isHorizontal;
	double defaultWidth;
	char disposed;

}
-(void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long*)arg2 toArray:(unsigned short*)arg3 maxChars:(unsigned)arg4 ;
-(CGPDFFontRef)cgPDFFont;
-(id)matchingFontName;
-(void)getFontName;
-(void)loadExternalFontInfoFor:(id)arg1 ;
-(void)loadEmbeddedFontInfo;
-(CGFontRef)cgFont;
-(id)initWith:(CGPDFDictionaryRef)arg1 ;
-(char)isSameFontAs:(id)arg1 ;
-(CGRect)fontBBox;
-(double)ascent;
-(double)descent;
-(double)stemV;
-(double)stemH;
-(double)avgWidth;
-(double)missingWidth;
-(double)spaceWidth;
-(double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2 ;
-(char)getGlyphs:(unsigned short*)arg1 forCodes:(const unsigned short*)arg2 count:(unsigned)arg3 ;
-(double)capHeight;
-(double)fontStretch;
-(double)fontWeight;
-(void)finalize;
-(void)dealloc;
-(double)leading;
-(id)fontName;
-(double)maxWidth;
-(void)dispose;
-(char)isHorizontal;
-(double)underlineThickness;
-(double)underlinePosition;
-(double)italicAngle;
-(double)xHeight;
-(unsigned)flags;
@end
