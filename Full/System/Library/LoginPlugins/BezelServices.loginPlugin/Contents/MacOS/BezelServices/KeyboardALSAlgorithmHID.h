/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:29:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/LoginPlugins/BezelServices.loginPlugin/Contents/MacOS/BezelServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BezelServices/BezelServices-Structs.h>
#import <BezelServices/KeyboardALSAlgorithm.h>

@interface KeyboardALSAlgorithmHID : KeyboardALSAlgorithm {

	unsigned _driver;
	IONotificationPortRef _notificationPort;
	CFRunLoopRef _runLoop;
	unsigned _masterPort;
	unsigned _connectIterator;
	unsigned _disconnectIterator;
	float _lastValueSet;
	int _lastFadeSpeed;

}
-(void)deviceArrivalHandler:(unsigned)arg1 ;
-(char)setupDriver;
-(void)setHardwareBrightness:(float)arg1 UsingFadeSpeed:(int)arg2 ;
-(void)setDriverSuppressed;
-(void)sendDriverValue:(float)arg1 UsingFadeSpeed:(int)arg2 ;
-(void)deviceTerminatedHandler:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
@end
