/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableView.h>

@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView {

	EKUIAttachmentGadget* _controller;

}

@property (__weak) EKUIAttachmentGadget * controller;              //@synthesize controller=_controller - In the implementation block
-(EKUIAttachmentGadget *)controller;
-(id)initWithController:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)setController:(EKUIAttachmentGadget *)arg1 ;
-(char)canBecomeKeyView;
-(char)acceptsPreviewPanelControl:(id)arg1 ;
-(void)beginPreviewPanelControl:(id)arg1 ;
-(void)endPreviewPanelControl:(id)arg1 ;
@end
