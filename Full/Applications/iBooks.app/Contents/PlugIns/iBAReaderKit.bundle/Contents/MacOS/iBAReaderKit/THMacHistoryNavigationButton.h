/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <AppKit/NSView.h>

@class CAShapeLayer, CATextLayer, NSString, NSTrackingArea;

@interface THMacHistoryNavigationButton : NSView {

	char mMouseIsDown;
	char mInFrame;
	CAShapeLayer* mShapeLayer;
	CATextLayer* mTextLayer;
	NSString* mTitle;
	SEL mAction;
	id mTarget;
	NSTrackingArea* _trackingArea;
	CGSize _titleSize;

}

@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) SEL action; 
@property (retain) id target; 
@property (nonatomic,retain) NSTrackingArea * trackingArea;              //@synthesize trackingArea=_trackingArea - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeLayer; 
@property (nonatomic,retain) CATextLayer * textLayer; 
@property (assign,nonatomic) char mouseIsDown; 
@property (assign,nonatomic) char inFrame; 
@property (assign,nonatomic) CGSize titleSize;                           //@synthesize titleSize=_titleSize - In the implementation block
-(void)p_windowBackingPropertiesDidChange:(id)arg1 ;
-(void)p_updateForScale:(double)arg1 ;
-(void)setTextLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)textLayer;
-(CGSize)titleSize;
-(char)inFrame;
-(void)setInFrame:(char)arg1 ;
-(void)setTitleSize:(CGSize)arg1 ;
-(void)p_createTrackingAreas;
-(id)initWithFrame:(CGRect)arg1 next:(char)arg2 standAlone:(char)arg3 ;
-(void)p_removeTrackingAreas;
-(void)p_addTrackingAreas;
-(CGRect)calcFrameRectWithNext:(char)arg1 standAlone:(char)arg2 ;
-(void)rebuildShapeWithRect:(CGRect)arg1 next:(char)arg2 standAlone:(char)arg3 ;
-(void)p_handleNewMousePosition:(id)arg1 forceNormal:(char)arg2 ;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)shapeLayer;
-(char)mouseIsDown;
-(void)setMouseIsDown:(char)arg1 ;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)target;
-(SEL)action;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSTrackingArea *)trackingArea;
-(void)mouseDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)updateTrackingAreas;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
@end
