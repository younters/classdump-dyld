/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CIDetector, NSMutableDictionary, AVCaptureSession, NSString;

@interface FaceDetector : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {

	unsigned long long _numberOfFaces;
	NSObject*<OS_dispatch_queue> _captureQueue;
	CIDetector* _detector;
	NSMutableDictionary* _trackingIDToLastFeature;
	AVCaptureSession* _captureSession;
	unsigned long long _frameCount;
	CGSize _aspectRatio;

}

@property (assign,nonatomic) unsigned long long numberOfFaces;                           //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (assign,nonatomic) CGSize aspectRatio;                                         //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> captureQueue;                  //@synthesize captureQueue=_captureQueue - In the implementation block
@property (nonatomic,retain) CIDetector * detector;                                      //@synthesize detector=_detector - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * trackingIDToLastFeature;              //@synthesize trackingIDToLastFeature=_trackingIDToLastFeature - In the implementation block
@property (nonatomic,retain) AVCaptureSession * captureSession;                          //@synthesize captureSession=_captureSession - In the implementation block
@property (assign,nonatomic) unsigned long long frameCount;                              //@synthesize frameCount=_frameCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfFaces;
-(void)setNumberOfFaces:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)captureQueue;
-(void)setCaptureQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDetector:(CIDetector *)arg1 ;
-(NSMutableDictionary *)trackingIDToLastFeature;
-(void)setTrackingIDToLastFeature:(NSMutableDictionary *)arg1 ;
-(unsigned long long)frameCount;
-(CIDetector *)detector;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(AVCaptureSession *)captureSession;
-(void)setCaptureSession:(AVCaptureSession *)arg1 ;
-(void)setFrameCount:(unsigned long long)arg1 ;
-(void)startRunning;
-(void)stopRunning;
-(id)init;
-(void)setAspectRatio:(CGSize)arg1 ;
-(CGSize)aspectRatio;
@end
