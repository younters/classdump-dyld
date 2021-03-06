/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PVImageSizer, PVImageElement;

@interface PVImageElementResizeRep : NSObject {

	PVImageSizer* _controller;
	PVImageElement* _imageElement;
	double _originalWidth;
	double _originalHeight;
	double _originalResolution;
	double _width;
	double _height;
	double _resolution;
	long long _fileSize;
	double _widthBeforeDPIEdit;
	double _heightBeforeDPIEdit;
	double _resolutionBeforeDPIEdit;

}

@property (assign) PVImageElement * imageElement;                 //@synthesize imageElement=_imageElement - In the implementation block
@property (assign) PVImageSizer * controller;                     //@synthesize controller=_controller - In the implementation block
@property (readonly) double originalWidthInPixels;                //@synthesize originalWidth=_originalWidth - In the implementation block
@property (readonly) double originalHeightInPixels;               //@synthesize originalHeight=_originalHeight - In the implementation block
@property (readonly) double originalResolutionInDPI;              //@synthesize originalResolution=_originalResolution - In the implementation block
@property (assign,nonatomic) double widthInPixels;                //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double heightInPixels;               //@synthesize height=_height - In the implementation block
@property (assign) double resolutionInDPI;                        //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) long long fileSize;                  //@synthesize fileSize=_fileSize - In the implementation block
@property (readonly) double widthBeforeDPIEdit;                   //@synthesize widthBeforeDPIEdit=_widthBeforeDPIEdit - In the implementation block
@property (readonly) double heightBeforeDPIEdit;                  //@synthesize heightBeforeDPIEdit=_heightBeforeDPIEdit - In the implementation block
@property (readonly) double resolutionBeforeDPIEdit;              //@synthesize resolutionBeforeDPIEdit=_resolutionBeforeDPIEdit - In the implementation block
-(id)initWithController:(id)arg1 image:(id)arg2 ;
-(PVImageElement *)imageElement;
-(double)widthInPixels;
-(double)heightInPixels;
-(double)resolutionInDPI;
-(double)originalWidthInPixels;
-(void)setWidthInPixels:(double)arg1 ;
-(double)originalHeightInPixels;
-(void)setHeightInPixels:(double)arg1 ;
-(void)rememberValuesForDPIEdit;
-(double)originalResolutionInDPI;
-(void)setResolutionInDPI:(double)arg1 ;
-(double)resolutionBeforeDPIEdit;
-(double)widthBeforeDPIEdit;
-(double)heightBeforeDPIEdit;
-(void)resetSizeAndResolution;
-(void)setImageElement:(PVImageElement *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(PVImageSizer *)controller;
-(void)setController:(PVImageSizer *)arg1 ;
-(long long)fileSize;
@end

