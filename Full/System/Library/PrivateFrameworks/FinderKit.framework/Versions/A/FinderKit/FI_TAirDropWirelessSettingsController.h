/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/SFWirelessSettingsControllerDelegate.h>

@class NSString;

@interface FI_TAirDropWirelessSettingsController : NSObject <SFWirelessSettingsControllerDelegate> {

	TNSRef<SFWirelessSettingsController *> _settingsController;
	BOOL _isBluetoothEnabled;
	BOOL _isWifiEnabled;
	BOOL _deviceSupportsWAPI;

}

@property (assign,getter=isBluetoothEnabled,nonatomic) BOOL bluetoothEnabled;              //@synthesize isBluetoothEnabled=_isBluetoothEnabled - In the implementation block
@property (assign,getter=isWifiEnabled,nonatomic) BOOL wifiEnabled;                        //@synthesize isWifiEnabled=_isWifiEnabled - In the implementation block
@property (readonly) BOOL deviceSupportsWAPI;                                              //@synthesize deviceSupportsWAPI=_deviceSupportsWAPI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controller;
-(BOOL)isBluetoothEnabled;
-(void)_setBluetoothEnabled:(BOOL)arg1 withKVONotification:(BOOL)arg2 ;
-(BOOL)isWifiEnabled;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(BOOL)deviceSupportsWAPI;
-(void)wirelessSettingsDidChange:(id)arg1 ;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(void)updateState;
-(id)init;
-(void)dealloc;
-(id)_init;
@end
