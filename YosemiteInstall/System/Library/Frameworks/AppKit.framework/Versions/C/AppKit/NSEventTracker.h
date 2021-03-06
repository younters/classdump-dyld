/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSEvent;

@interface NSEventTracker : NSObject {

	char _wantsEventCoalescing;
	char _wantsPeriodicCallbacks;
	char _wantsKeyboardEvents;
	char _reserved4;
	char _reserved5;
	char _reserved6;
	char _reserved7;
	char _reserved8;
	unsigned long long _deviceID;
	unsigned long long _modifierFlags;
	unsigned long long _phase;
	NSEvent* _currentEvent;

}

@property (assign) char wantsEventCoalescing;                     //@synthesize wantsEventCoalescing=_wantsEventCoalescing - In the implementation block
@property (assign) char wantsPeriodicCallbacks;                   //@synthesize wantsPeriodicCallbacks=_wantsPeriodicCallbacks - In the implementation block
@property (assign) char wantsKeyboardEvents;                      //@synthesize wantsKeyboardEvents=_wantsKeyboardEvents - In the implementation block
@property (retain) NSEvent * currentEvent;                        //@synthesize currentEvent=_currentEvent - In the implementation block
@property (assign) unsigned long long deviceID;                   //@synthesize deviceID=_deviceID - In the implementation block
@property (assign) unsigned long long phase;                      //@synthesize phase=_phase - In the implementation block
@property (assign) unsigned long long modifierFlags;              //@synthesize modifierFlags=_modifierFlags - In the implementation block
-(void)dealloc;
-(NSEvent *)currentEvent;
-(unsigned long long)modifierFlags;
-(unsigned long long)phase;
-(void)setWantsPeriodicCallbacks:(char)arg1 ;
-(void)setWantsEventCoalescing:(char)arg1 ;
-(void)trackEvent:(id)arg1 usingHandler:(/*^block*/id)arg2 ;
-(unsigned long long)deviceID;
-(char)wantsEventCoalescing;
-(char)wantsPeriodicCallbacks;
-(char)wantsKeyboardEvents;
-(void)setWantsKeyboardEvents:(char)arg1 ;
-(void)setCurrentEvent:(NSEvent *)arg1 ;
-(void)setDeviceID:(unsigned long long)arg1 ;
-(void)setPhase:(unsigned long long)arg1 ;
-(void)setModifierFlags:(unsigned long long)arg1 ;
@end

