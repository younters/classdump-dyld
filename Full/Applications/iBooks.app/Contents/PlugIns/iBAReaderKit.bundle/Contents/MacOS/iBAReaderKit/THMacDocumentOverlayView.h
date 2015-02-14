/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <AppKit/NSView.h>

@protocol THMacDocumentOverlayViewDelegate;
@interface THMacDocumentOverlayView : NSView {

	id<THMacDocumentOverlayViewDelegate> _delegate;

}

@property (assign,nonatomic) id<THMacDocumentOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 overlayDelegate:(id)arg2 ;
-(void)setDelegate:(id<THMacDocumentOverlayViewDelegate>)arg1 ;
-(id<THMacDocumentOverlayViewDelegate>)delegate;
-(void)mouseDown:(id)arg1 ;
@end
