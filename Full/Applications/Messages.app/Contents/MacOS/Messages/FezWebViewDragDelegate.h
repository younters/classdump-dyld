/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FezWebViewDragDelegate
@optional
-(void)fezWebViewShouldRegisterForDraggedTypes:(id)arg1;
-(unsigned long long)fezWebView:(id)arg1 draggingEntered:(id)arg2;
-(unsigned long long)fezWebView:(id)arg1 draggingUpdated:(id)arg2;
-(void)fezWebView:(id)arg1 draggingExited:(id)arg2;
-(char)fezWebView:(id)arg1 prepareForDragOperation:(id)arg2;
-(char)fezWebView:(id)arg1 performDragOperation:(id)arg2;
-(void)fezWebView:(id)arg1 concludeDragOperation:(id)arg2;
-(char)fezWebViewWantsPeriodicDraggingUpdates:(id)arg1;

@end
