/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:45:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Photo Booth.app/Contents/MacOS/Photo Booth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photo Booth/Photo Booth-Structs.h>
#import <Photo Booth/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <Photo Booth/AVCaptureAudioDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue;
@class PBCaptureSession, AVCaptureAudioDataOutput, AVCaptureDeviceFormat, FPS, NSMenu, NSObject, AVCaptureDevice, AVCaptureSession, NSString;

@interface CameraController : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {

	PBCaptureSession* _captureSession;
	AVCaptureAudioDataOutput* _audioDataOutput;
	int _cameraStatus;
	CGSize _captureSize;
	AVCaptureDeviceFormat* _captureFormat;
	char _videoPaused;
	FPS* _droppedFps;
	NSMenu* _cameraMenu;
	id _delegate;
	char _performedInitialAddAnyDevice;
	NSObject*<OS_dispatch_queue> _videoCaptureQueue;
	NSObject*<OS_dispatch_queue> _audioCaptureQueue;

}

@property (assign) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) AVCaptureDevice * userDevice; 
@property (retain) AVCaptureDevice * captureDevice; 
@property (readonly) AVCaptureSession * captureSession;              //@synthesize captureSession=_captureSession - In the implementation block
@property (assign) char videoPaused;                                 //@synthesize videoPaused=_videoPaused - In the implementation block
@property (assign) char videoRunning; 
@property (assign) char audioEnabled; 
@property (assign) int cameraStatus;                                 //@synthesize cameraStatus=_cameraStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCameraController;
-(char)videoRunning;
-(char)videoPaused;
-(int)cameraStatus;
-(void)setCameraStatus:(int)arg1 ;
-(void)setVideoRunning:(char)arg1 ;
-(void)_updateVideoCapture;
-(void)addAnyCaptureDeviceForLaunch;
-(void)avCaptureRuntimeError:(id)arg1 ;
-(void)_captureDeviceNotification:(id)arg1 ;
-(void)_addAnyCaptureDevice;
-(AVCaptureDevice *)userDevice;
-(void)setCaptureDevice:(AVCaptureDevice *)arg1 ;
-(CGSize)captureSize;
-(void)_updateCaptureQualityForDevice:(id)arg1 ;
-(void)_addAudioDeviceToRecordingSession;
-(char)audioEnabled;
-(void)_setMaxFPS:(unsigned long long)arg1 ;
-(id)worstDimensionsForCameraInputDevice:(id)arg1 ;
-(id)bestDimensionsForCameraInputDevice:(id)arg1 ;
-(void)setupCaptureSizeWithFormat:(id)arg1 ;
-(void)_setupOutputWithFormat:(id)arg1 ;
-(char)_isValidFramerate:(unsigned long long)arg1 forRange:(id)arg2 withBuffer:(double)arg3 ;
-(SCD_Struct_Ca10)_validDurationForFramerate:(unsigned long long)arg1 ;
-(void)_captureDeviceWasDisconnected:(id)arg1 ;
-(void)_captureDeviceWasConnected:(id)arg1 ;
-(void)_captureDeviceNotificationMainThread:(id)arg1 ;
-(id)captureFormat;
-(void)setUserDevice:(AVCaptureDevice *)arg1 ;
-(void)updateCaptureQuality;
-(void)_repositionCameraMenu;
-(void)_menuCameraSelected:(id)arg1 ;
-(void)setAudioEnabled:(char)arg1 ;
-(AVCaptureDevice *)captureDevice;
-(void)updateFramerate;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(AVCaptureSession *)captureSession;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(char)validateMenuItem:(id)arg1 ;
-(void)awakeFromNib;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)menuWillOpen:(id)arg1 ;
-(void)menuDidClose:(id)arg1 ;
-(void)menu:(id)arg1 willHighlightItem:(id)arg2 ;
-(void)setVideoPaused:(char)arg1 ;
@end
