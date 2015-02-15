/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MGCaptureDeviceSelectionController, NSSet, MGCaptureDeviceInputSourcePair;

@interface MGCaptureDeviceAndInputSourceSelectionController : NSObject {

	MGCaptureDeviceSelectionController* _deviceSelectionController;

}

@property (nonatomic,readonly) NSSet * availableVideoDevices; 
@property (nonatomic,retain) MGCaptureDeviceInputSourcePair * videoDevice; 
@property (nonatomic,readonly) NSSet * availableAudioDevices; 
@property (nonatomic,retain) MGCaptureDeviceInputSourcePair * audioDevice; 
-(id)initWithDeviceSelectionController:(id)arg1 ;
-(id)availableDeviceInputSourcePairsForDeviceSelectionControllerKey:(id)arg1 ;
-(MGCaptureDeviceInputSourcePair *)videoDevice;
-(MGCaptureDeviceInputSourcePair *)audioDevice;
-(NSSet *)availableVideoDevices;
-(NSSet *)availableAudioDevices;
-(void)setVideoDevice:(MGCaptureDeviceInputSourcePair *)arg1 ;
-(void)setAudioDevice:(MGCaptureDeviceInputSourcePair *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
