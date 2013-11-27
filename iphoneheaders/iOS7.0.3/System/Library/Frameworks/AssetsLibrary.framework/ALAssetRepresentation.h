/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : NSObject {

	id _internal;
	BOOL _ignoreRead;

}

@property (nonatomic,retain) ALAssetRepresentationPrivate * internal;              //@synthesize internal=_internal - In the implementation block
@property (assign) BOOL ignoreRead;                                                //@synthesize ignoreRead=_ignoreRead - In the implementation block
+(void)_enableImageDataUsesMap;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(BOOL)ignoreRead;
-(id)_imageData;
-(CGImageRef)CGImageWithOptions:(id)arg1 format:(int)arg2 bakeInOrientation:(int)arg3 ;
-(CGImageRef)CGImageWithOptions:(id)arg1 ;
-(CGImageRef)_largeDisplayableImageForFormat:(int)arg1 ;
-(void)setIgnoreRead:(BOOL)arg1 ;
-(void)setInternal:(id)arg1 ;
-(id)internal;
-(void)dealloc;
-(long long)size;
-(id)description;
-(int)orientation;
-(float)scale;
-(BOOL)isValid;
-(id)url;
-(id)UTI;
-(CGSize)dimensions;
-(CGImageRef)fullResolutionImage;
-(unsigned)getBytes:(char*)arg1 fromOffset:(long long)arg2 length:(unsigned)arg3 error:(id*)arg4 ;
-(CGImageRef)fullScreenImage;
-(id)filename;
-(int)_fileDescriptor;
-(id)metadata;
-(CGImageRef)zoomableDisplayImage;
@end
