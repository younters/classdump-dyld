/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preview/Preview-Structs.h>
#import <AppKit/NSView.h>

@class PDFAnnotationPopup, NSTrackingArea, PVPDFPopupTextView, PVPDFPopupManager, PVPDFView;

@interface PVPDFPopupView : NSView {

	PDFAnnotationPopup* _annotation;
	NSTrackingArea* _trackingArea;
	long long _tooltipTag;
	id _delegate;
	char _editing;
	PVPDFPopupTextView* _textview;
	PVPDFPopupManager* _manager;
	PVPDFView* _pdfView;
	CGPoint bendPoint;

}

@property (readonly) PVPDFPopupTextView * textview;              //@synthesize textview=_textview - In the implementation block
@property (assign) PVPDFPopupManager * manager;                  //@synthesize manager=_manager - In the implementation block
@property (assign) CGPoint bendPoint; 
-(id)initWithAnnotation:(id)arg1 inView:(id)arg2 ;
-(PVPDFPopupTextView *)textview;
-(CGPoint)bendPoint;
-(void)setBendPoint:(CGPoint)arg1 ;
-(void)setManager:(PVPDFPopupManager *)arg1 ;
-(char)editing;
-(id)annotation;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)delegate;
-(char)isOpaque;
-(void)mouseDown:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(PVPDFPopupManager *)manager;
-(void)mouseMoved:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)setEditing:(char)arg1 ;
-(void)removeTooltip;
-(void)addTooltip;
-(void)selfDidResize:(id)arg1 ;
-(void)trackCloseHit;
-(long long)compareFrameCenters:(id)arg1 ;
@end
