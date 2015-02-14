/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, CIContext;

@interface BitmapFilterer : NSObject {

	NSArray* filters;
	const unsigned short* sourceBitmap;
	void* targetBitmap;
	unsigned rowCount;
	unsigned columnCount;
	unsigned sourceRowBytes;
	unsigned targetRowBytes;
	unsigned bitsPerComponent;
	unsigned samplesPerPixel;
	CIContext* context;

}
+(void)applyFilters:(id)arg1 toBitmap:(const unsigned short*)arg2 targetBitmap:(void*)arg3 rowCount:(unsigned)arg4 columnCount:(unsigned)arg5 sourceRowBytes:(unsigned)arg6 targetRowBytes:(unsigned)arg7 bitsPerComponent:(unsigned)arg8 context:(id)arg9 ;
-(id)initWithFilters:(id)arg1 sourceBitmap:(const unsigned short*)arg2 targetBitmap:(void*)arg3 rowCount:(unsigned)arg4 columnCount:(unsigned)arg5 sourceRowBytes:(unsigned)arg6 targetRowBytes:(unsigned)arg7 bitsPerComponent:(unsigned)arg8 context:(id)arg9 ;
-(void)applyFilters;
-(id)inputImage;
-(id)outputImage;
-(void)dealloc;
@end
