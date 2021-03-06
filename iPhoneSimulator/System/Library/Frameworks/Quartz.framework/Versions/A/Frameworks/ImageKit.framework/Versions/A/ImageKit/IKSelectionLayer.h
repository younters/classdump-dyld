/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class IKComposer;

@interface IKSelectionLayer : CALayer {

	IKComposer* _composer;

}
+(char)registerLayerWithView:(id)arg1 ;
+(double)fadeDuration;
+(id)addSelectionLayer:(id)arg1 ;
-(void)setSelectionRect:(CGRect)arg1 ;
-(void)ikMouseDown:(id)arg1 ;
-(void)selectLayer:(id)arg1 extendSelection:(char)arg2 ;
-(void)mouseDownOutsideSelection:(id)arg1 ;
-(void)addCursorRects;
-(void)drawInContext:(CGContextRef)arg1 drawSelection:(char)arg2 ;
-(char)ikKeyDown:(id)arg1 ;
-(void)willBeRemovedFromSuperlayer;
-(void)toolmodeWillChangeFrom:(long long)arg1 to:(long long)arg2 ;
-(void)doAddSelection:(id)arg1 select:(char)arg2 ;
-(void)doRemoveSelection:(id)arg1 ;
-(void)clearSelection;
-(void)createSelectionWithEvent:(id)arg1 ;
-(CGImageRef)createNewMaskedImage:(CGImageRef)arg1 ;
-(void)selectAll;
-(CGRect)selectionRect;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)setup:(id)arg1 ;
@end

