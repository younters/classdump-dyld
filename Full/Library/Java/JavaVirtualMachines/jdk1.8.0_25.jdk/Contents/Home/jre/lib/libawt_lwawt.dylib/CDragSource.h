/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk/Contents/Home/jre/lib/libawt_lwawt.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CDragSourceHolder;
#import <libawt_lwawt.dylib/libawt_lwawt.dylib-Structs.h>
@class NSView, NSImage;

@interface CDragSource : NSObject {

	NSView*<CDragSourceHolder> fView;
	jobjectRef fComponent;
	jobjectRef fDragSourceContextPeer;
	jobjectRef fTransferable;
	jobjectRef fTriggerEvent;
	long long fTriggerEventTimeStamp;
	CGPoint fDragPos;
	int fClickCount;
	int fModifiers;
	NSImage* fDragImage;
	CGPoint fDragImageOffset;
	int fSourceActions;
	jobjectRef fFormats;
	jobjectRef fFormatMap;
	int fDragKeyModifiers;
	int fDragMouseModifiers;

}
-(void)draggingOperationChanged:(unsigned long long)arg1 ;
-(void)doDrag;
-(void)postDragEnter;
-(CGPoint)mapNSScreenPointToJavaWithOffset:(CGPoint)arg1 ;
-(void)validateDragImage;
-(id)nsDragEvent:(char)arg1 ;
-(char)declareTypesToPasteboard:(id)arg1 withEnv:(const JNINativeInterface_*)arg2 ;
-(id)getFileList:(char*)arg1 dataLength:(int)arg2 ;
-(jobjectRef)convertData:(long long)arg1 ;
-(jobjectRef)dataTransferer:(const JNINativeInterface_*)arg1 ;
-(void)postDragExit;
-(void)removeFromView:(const JNINativeInterface_*)arg1 ;
-(id)init:(jobjectRef)arg1 component:(jobjectRef)arg2 control:(id)arg3 transferable:(jobjectRef)arg4 triggerEvent:(jobjectRef)arg5 dragPosX:(int)arg6 dragPosY:(int)arg7 modifiers:(int)arg8 clickCount:(int)arg9 timeStamp:(long long)arg10 dragImage:(jobjectRef)arg11 dragImageOffsetX:(int)arg12 dragImageOffsetY:(int)arg13 sourceActions:(int)arg14 formats:(jobjectRef)arg15 formatMap:(jobjectRef)arg16 ;
-(void)drag;
-(void)dealloc;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 beganAt:(CGPoint)arg2 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysWhileDragging;
-(void)draggedImage:(id)arg1 movedTo:(CGPoint)arg2 ;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
@end
