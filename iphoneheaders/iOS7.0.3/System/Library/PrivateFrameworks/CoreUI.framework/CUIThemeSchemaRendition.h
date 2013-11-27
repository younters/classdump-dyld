/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIPSDGradient;

@interface CUIThemeSchemaRendition : CUIThemeRendition {

	NSDictionary* cuiInfo;
	unsigned long _nimages;
	CGImage* _image[9];
	CGRect _layoutRects[9];
	CGSize _intrinsicSize;
	CGRect _elementRect;
	int _columnSlices;
	int _rowSlices;
	CUIPSDGradient* _gradient;

}

@property (nonatomic,readonly) unsigned long numberOfSlices; 
@property (nonatomic,readonly) CGRect* sliceRects; 
@property (nonatomic,readonly) CUIPSDGradient * gradient; 
-(void)dealloc;
-(unsigned short)size;
-(id)description;
-(unsigned short)state;
-(float)scale;
-(unsigned short)value;
-(unsigned short)direction;
-(unsigned short)identifier;
-(id).cxx_construct;
-(id)gradient;
-(unsigned long)numberOfSlices;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(int)arg3 ;
-(unsigned short)dimension1;
-(unsigned short)dimension2;
-(unsigned short)drawingLayer;
-(unsigned short)keyScale;
-(CGRect*)sliceRects;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)slices;
-(CGRect)alignmentRectangle;
-(id)coreUIOptions;
-(id)referenceImage;
-(id)defaultTemplateName;
-(int)columnSlices;
-(int)rowSlices;
-(CGPoint)renditionCoordinatesForPartFeatures:(int)arg1 ;
-(unsigned short)look;
-(unsigned short)presentationState;
@end
