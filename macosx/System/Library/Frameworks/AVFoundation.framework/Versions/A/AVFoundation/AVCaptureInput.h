/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {

	AVCaptureInputInternal* _inputInternal;

}

@property (nonatomic,readonly) NSArray * ports; 
-(id)notReadyError;
-(void)graphWillStartForSession:(id)arg1 ;
-(void)graphWillStopForSession:(id)arg1 error:(id)arg2 ;
-(NSArray *)ports;
-(void)removeInputUnitsForInputPort:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)graphNodeForInputPort:(id)arg1 ;
-(int)clockProviderNodeForInputPort:(id)arg1 ;
-(char)addInputUnitsForInputPort:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(unsigned)unitOutputNumberForInputPort:(id)arg1 ;
-(void)sessionWillUseOutputDecompressionOptions:(id)arg1 forPort:(id)arg2 ;
-(OpaqueCMClockRef)inputClock;
-(id)portsForMediaType:(id)arg1 ;
-(id)defaultPortForMediaType:(id)arg1 ;
-(void)setSession:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)session;
@end

