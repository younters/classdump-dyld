/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THWZoomableCanvasControllerDelegate <NSObject>
@optional
-(void)zoomableCanvasControllerCustomizeLayerHost:(id)arg1;
-(void)zoomableCanvasController:(id)arg1 didEndZoomingAtScale:(double)arg2;
-(char)zoomableCanvasControllerIsRelatedCanvasScrolling:(id)arg1;

@required
-(double)zoomableCanvasControllerContentsScale:(id)arg1;
-(id)zoomableCanvasController:(id)arg1 infosToDisplayForViewport:(CGRect)arg2;
-(CGSize*)sizeOfCanvasForZoomableCanvasController:(id)arg1;
-(id)zoomableCanvasController:(id)arg1 geometryProviderForLayout:(id)arg2;
-(CGRect*)zoomableCanvasController:(id)arg1 expandBoundsForHitTesting:(CGRect)arg2;
-(id)zoomableCanvasController:(id)arg1 primaryTargetForGesture:(id)arg2;
-(char)zoomableCanvasController:(id)arg1 allowsEditMenuForRep:(id)arg2;

@end
