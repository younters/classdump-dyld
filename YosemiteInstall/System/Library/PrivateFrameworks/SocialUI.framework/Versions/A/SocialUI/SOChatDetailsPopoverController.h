/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <SocialUI/NSPopoverDelegate.h>

@class NSPopover, SOChatDisplayController, SOChatDetailsPageViewController, NSView, NSString;

@interface SOChatDetailsPopoverController : NSObject <NSPopoverDelegate> {

	char _detachable;
	char _clearsOnClose;
	NSPopover* _popover;
	SOChatDisplayController* _chatDisplayController;
	SOChatDetailsPageViewController* _detailsPageViewController;
	NSView* _positioningView;

}

@property (retain) NSPopover * popover;                                                      //@synthesize popover=_popover - In the implementation block
@property (getter=isDetachable) char detachable;                                             //@synthesize detachable=_detachable - In the implementation block
@property (assign) char clearsOnClose;                                                       //@synthesize clearsOnClose=_clearsOnClose - In the implementation block
@property (nonatomic,retain) SOChatDisplayController * chatDisplayController;                //@synthesize chatDisplayController=_chatDisplayController - In the implementation block
@property (retain) SOChatDetailsPageViewController * detailsPageViewController;              //@synthesize detailsPageViewController=_detailsPageViewController - In the implementation block
@property (__weak) NSView * positioningView;                                                 //@synthesize positioningView=_positioningView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SOChatDisplayController *)chatDisplayController;
-(void)setDetachable:(char)arg1 ;
-(void)setChatDisplayController:(SOChatDisplayController *)arg1 ;
-(SOChatDetailsPageViewController *)detailsPageViewController;
-(char)isDetachable;
-(void)_updatePopoverMaxHeight;
-(void)_popoverWindowDidChangeScreen:(id)arg1 ;
-(char)clearsOnClose;
-(void)setClearsOnClose:(char)arg1 ;
-(void)setDetailsPageViewController:(SOChatDetailsPageViewController *)arg1 ;
-(void)showRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(char)popoverShouldDetach:(id)arg1 ;
-(void)popoverWillShow:(id)arg1 ;
-(void)popoverDidShow:(id)arg1 ;
-(void)popoverWillClose:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
-(void)setPositioningView:(NSView *)arg1 ;
-(NSView *)positioningView;
-(char)popoverShouldClose:(id)arg1 withReason:(long long)arg2 ;
-(NSPopover *)popover;
-(void)setPopover:(NSPopover *)arg1 ;
@end
