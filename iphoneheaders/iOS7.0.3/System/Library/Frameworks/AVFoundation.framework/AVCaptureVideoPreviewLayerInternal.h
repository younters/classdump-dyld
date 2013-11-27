/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSession, AVCaptureConnection, CALayer, NSString;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {

	AVCaptureSession* session;
	AVCaptureConnection* connection;
	CALayer* sublayer;
	CGSize sensorSize;
	NSString* sensorToPreviewVTScalingMode;
	CGSize previewSize;
	float previewRotationDegrees;
	NSString* gravity;
	BOOL disableActions;
	int orientation;
	BOOL automaticallyAdjustsMirroring;
	BOOL mirrored;
	BOOL isPresentationLayer;
	BOOL visible;
	BOOL isPaused;
	BOOL chromaNoiseReductionEnabled;
	int changeSeed;
	CGAffineTransform captureDeviceTransform;
	float rollAdjustment;

}
@end
