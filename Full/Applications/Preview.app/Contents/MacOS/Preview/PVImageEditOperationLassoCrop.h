/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preview/Preview-Structs.h>
#import <Preview/PVImageEditOperation.h>

@class CIImage;

@interface PVImageEditOperationLassoCrop : PVImageEditOperation {

	CIImage* _maskImage;
	CGRect _cropRect;
	CGSize _origSize;

}

@property (retain) CIImage * maskImage;              //@synthesize maskImage=_maskImage - In the implementation block
@property (assign) CGRect cropRect;                  //@synthesize cropRect=_cropRect - In the implementation block
@property (assign) CGSize originalSize;              //@synthesize origSize=_origSize - In the implementation block
-(id)initWithCGImage:(CGImageRef)arg1 bounds:(CGRect)arg2 originalSize:(CGSize)arg3 ;
-(id)filterChainForSourceImage:(id)arg1 ;
-(void)setOriginalSize:(CGSize)arg1 ;
-(id)initWithCIImage:(id)arg1 bounds:(CGRect)arg2 originalSize:(CGSize)arg3 ;
-(void)setCropRect:(CGRect)arg1 ;
-(CGSize)originalSize;
-(CGRect)cropRect;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaskImage:(CIImage *)arg1 ;
-(CIImage *)maskImage;
@end
