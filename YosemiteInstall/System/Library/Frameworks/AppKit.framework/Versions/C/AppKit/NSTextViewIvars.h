/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSLayoutManager, NSTextStorage, NSTextViewSharedData, NSMutableArray, NSTextDragInfo, NSViewWindowBackingStoreBuffer, NSTrackingArea, NSEvent, NSTextContainer;

@interface NSTextViewIvars : NSObject {

	CGSize textContainerInset;
	CGPoint textContainerOrigin;
	NSLayoutManager* layoutManager;
	NSTextStorage* textStorage;
	CGSize maxBoundsSize;
	CGSize minBoundsSize;
	struct {
		unsigned horizontallyResizable : 1;
		unsigned verticallyResizable : 1;
		unsigned viewOwnsTextStorage : 1;
		unsigned displayWithoutLayout : 1;
		unsigned settingMarkedRange : 1;
		unsigned containerOriginInvalid : 1;
		unsigned registeredForDragging : 1;
		unsigned superviewIsClipView : 1;
		unsigned forceRulerUpdate : 1;
		unsigned typingText : 1;
		unsigned wasPostingFrameNotifications : 1;
		unsigned wasRotatedOrScaledFromBase : 1;
		unsigned settingNeedsDisplay : 1;
		unsigned mouseInside : 1;
		unsigned verticalLayout : 2;
		unsigned diagonallyRotatedOrScaled : 1;
		unsigned hasScaledBacking : 1;
		unsigned shouldCloseQL : 1;
		unsigned dragUpdateRequstOwner : 1;
		unsigned genericDragRemoveSource : 1;
		unsigned isAttributedPlaceholder : 1;
		unsigned isDDAction : 1;
		unsigned showingFindIndicator : 1;
		unsigned _pad : 7;
	}  tvFlags;
	NSTextViewSharedData* sharedData;
	NSMutableArray* eventList;
	NSTextDragInfo* dragInfo;
	CGRect dirtyRectForDisplayWithoutLayout;
	CGRect _insertionPointRect;
	NSViewWindowBackingStoreBuffer* _insertionPointRectCache;
	NSTrackingArea* _trackingArea;
	NSEvent* _lastFirstMouseEvent;
	NSTextContainer* textContainer;
	id _placeholderString;

}
@end
