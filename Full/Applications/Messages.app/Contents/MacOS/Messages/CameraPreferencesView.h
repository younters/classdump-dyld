/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <Messages/OpenGLLayerView.h>

@class OpenGLVideoConferenceLayer, NSString;

@interface CameraPreferencesView : OpenGLLayerView {

	OpenGLVideoConferenceLayer* _videoLayer;
	CGRect _oldTrackingRect;
	char _videoCapable;
	char _abortedVideo;
	char _videoIsStarted;
	NSString* _videoErrorMessage;
	char _registeredForNotifications;
	char _videoCapabilityIsKnown;

}
-(void)stopVideo;
-(void)clearKnownVideoState;
-(char)canStartVideo;
-(id)videoErrorMessage;
-(void)startVideo;
-(void)restartVideo;
-(void)abortVideo;
-(id)layerName;
-(void)setCameraOnState:(char)arg1 ;
-(void)setVideoErrorMessage:(id)arg1 ;
-(void)_irisStateNotification:(id)arg1 ;
-(void)_cameraChangedNotification:(id)arg1 ;
-(void)_removeCameraPrefsNotifications;
-(char)videoIsStarted;
-(void)layer:(id)arg1 videoSizeChangedFrom:(CGSize)arg2 to:(CGSize)arg3 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)prepareOpenGL;
-(void)_createLayer;
@end
