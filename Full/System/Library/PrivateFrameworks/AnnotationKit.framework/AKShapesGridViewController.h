/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AKGridViewController.h>

@class NSArray;

@interface AKShapesGridViewController : AKGridViewController {

	unsigned long long _numberColumns;
	long long _orientation;
	NSArray* _shapes;
	NSArray* _optionalImages;

}

@property (readonly) NSArray * shapes;                      //@synthesize shapes=_shapes - In the implementation block
@property (readonly) NSArray * optionalImages;              //@synthesize optionalImages=_optionalImages - In the implementation block
+(id)_toolTipForTag:(long long)arg1 ;
+(id)_filledShapeImageForTag:(long long)arg1 ;
+(id)_filledShapeImageForAnnotation:(id)arg1 ;
+(id)_imageForPath:(id)arg1 ;
-(id)initWithController:(id)arg1 toolTags:(id)arg2 optionalImages:(id)arg3 columns:(unsigned long long)arg4 orientation:(long long)arg5 ;
-(id)_shapesGridViewItems;
-(void)_validateShapesItems:(id)arg1 ;
-(id)_gridViewItemWithImage:(id)arg1 forTag:(long long)arg2 ;
-(NSArray *)shapes;
-(NSArray *)optionalImages;
-(id)initWithController:(id)arg1 ;
-(void)viewDidLoad;
-(void)keyUp:(id)arg1 ;
@end
