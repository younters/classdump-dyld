/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef
-(void)dealloc;
-(id)image;
-(id)gradient;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(CGImageRef)createCGImage;
-(id)imageIsZeroSizeImage:(BOOL*)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 isEmptyImage:(BOOL*)arg2 ;
-(id)patternFromSlice:(unsigned)arg1 ;
-(id)patternFromSlice:(unsigned)arg1 isZeroSizeImage:(BOOL*)arg2 ;
-(id)maskFromSlice:(unsigned)arg1 ;
-(id)fillSample;
@end
