/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Sound.prefPane/Contents/MacOS/Sound
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sound/Sound-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, AppleSound_InputDevice, AppleSound_AudioDeviceMgr, NSTimer;

@interface LevelMeterView : NSView {

	NSImage* _offImage;
	NSImage* _onImage;
	CGPoint _positions[15];
	AppleSound_InputDevice* _meterDevice;
	AppleSound_AudioDeviceMgr* _audioDeviceManager;
	/*function pointer*/void* _procID;
	dispatch_queue_sRef _queue;
	NSTimer* _updateTimer;
	int _ioLock;
	long long _level;
	long long _peak;
	long long _peakCounter;
	char _needsUpdate;
	char _meterActive;
	char _watchingDevice;

}
-(void)startMeter;
-(void)updateMeter:(id)arg1 ;
-(void)stopMeter;
-(void)inputDeviceChanged:(id)arg1 ;
-(void)startMeterDelayed:(id)arg1 ;
-(void)activateMeter:(char)arg1 ;
-(void)attachToDevice:(id)arg1 ;
-(void)didSelect;
-(void)didUnselect;
-(void)finalize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end
