/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preview/Preview-Structs.h>
#import <AppKit/NSView.h>

@class PVPDFSelectionRect;

@interface PVSelectionOverlayView : NSView {

	PVPDFSelectionRect* _selectionRect;

}

@property (assign) PVPDFSelectionRect * selectionRect;              //@synthesize selectionRect=_selectionRect - In the implementation block
-(void)setSelectionRect:(PVPDFSelectionRect *)arg1 ;
-(PVPDFSelectionRect *)selectionRect;
-(void)drawRect:(CGRect)arg1 ;
@end
