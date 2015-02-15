/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewItem;
#import <QuickLookUI/QuickLookUI-Structs.h>
@class QLSeamlessOpener, QLPreviewPanel, QLPreviewBubble;

@interface QLSeamlessItemOpener : NSObject {

	id<QLPreviewItem> _item;
	QLSeamlessOpener* _opener;
	QLSeamlessOpeningRequestRef _request;
	QLPreviewPanel* _previewPanel;
	QLPreviewBubble* _bubble;

}

@property (retain) id<QLPreviewItem> item;                               //@synthesize item=_item - In the implementation block
@property (retain) QLSeamlessOpener * opener;                            //@synthesize opener=_opener - In the implementation block
@property (readonly) id<QLSeamlessOpenerDelegate> delegate; 
+(id)itemOpenerForPreviewItem:(id)arg1 fromOpener:(id)arg2 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(int)openWithOptions:(int)arg1 fromPreviewPanel:(id)arg2 minWindowLevel:(long long)arg3 ;
-(void)bindToPID:(int)arg1 ;
-(void)setOpener:(QLSeamlessOpener *)arg1 ;
-(id)_displayStateFromViewDisplayState:(id)arg1 fullscreen:(char)arg2 screenFrame:(CGRect)arg3 ;
-(int)_supportWithMaxSupport:(int)arg1 ;
-(void)_displayLegacyOpeningAnimationWithSourceImage:(id)arg1 frame:(CGRect)arg2 fromPreviewPanel:(id)arg3 ;
-(void)_invalidateWithSuccess:(char)arg1 ;
-(id)_viewDisplayStateFromDisplayState:(id)arg1 ;
-(QLSeamlessOpener *)opener;
-(void)dealloc;
-(id)description;
-(id<QLSeamlessOpenerDelegate>)delegate;
-(id<QLPreviewItem>)item;
-(void)setItem:(id<QLPreviewItem>)arg1 ;
-(void)discard;
@end
