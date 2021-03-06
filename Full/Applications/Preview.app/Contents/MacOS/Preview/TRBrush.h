/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preview/Preview-Structs.h>
@class NSImage;

@interface TRBrush : NSObject {

	double _width;
	double _smoothness;
	char* _alpha;
	CGSize _size;
	NSImage* _cachedBrushImage;
	double _cachedBrushImageWidth;
	double _cachedBrushImageSmoothness;
	NSImage* _cachedBrushImageWhite;
	double _cachedBrushImageWidthWhite;
	double _cachedBrushImageSmoothnessWhite;
	NSImage* _cachedCursorImage;
	double _cachedCursorImageWidth;
	double _cachedCursorImageSmoothness;

}

@property (assign) double width;                                //@synthesize width=_width - In the implementation block
@property (assign) double smoothness;                           //@synthesize smoothness=_smoothness - In the implementation block
@property (readonly) NSImage * brushImage; 
@property (readonly) CGImageRef brushCGImageWhite; 
@property (readonly) CGImageRef brushCGImage; 
@property (readonly) NSImage * cursorImage; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)setSmoothness:(double)arg1 ;
-(id)brushImageWhite;
-(NSImage *)brushImage;
-(id)initWithAlpha:(char*)arg1 size:(CGSize)arg2 ;
-(CGImageRef)brushCGImageWhite;
-(CGImageRef)brushCGImage;
-(NSImage *)cursorImage;
-(double)smoothness;
-(void)dealloc;
-(void)setWidth:(double)arg1 ;
-(double)width;
@end

