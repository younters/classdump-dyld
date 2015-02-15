/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@class SystemPowerNotifier, IORegistryObjectNotifier, IOBluetoothDeviceInquiry, BluetoothHIDDeviceController, IOBluetoothDevicePair, IOBluetoothDevice, NSMutableArray, NSTimer, NSString;

@interface IOBluetoothAutomaticDeviceSetup : NSObject {

	SystemPowerNotifier* _systemPowerNotifier;
	IORegistryObjectNotifier* _mouseNotifier;
	IORegistryObjectNotifier* _keyboardNotifier;
	OpaqueIOBluetoothNotificationRefRef _bluetoothNotificationRef;
	IOBluetoothDeviceInquiry* _inquiry;
	BluetoothHIDDeviceController* _bluetoothHIDDeviceController;
	IOBluetoothDevicePair* _bluetoothDevicePair;
	IOBluetoothDevice* _currentPairingDevice;
	int _pairingAttemptsForCurrentDevice;
	NSMutableArray* _deviceArray;
	int _pairingDeviceIndex;
	long long _startTime;
	int _preventSleepFor;
	char _userAckTimeLimit;
	int _userAckTimeRemaining;
	int _inquiryLength;
	NSTimer* _bluetoothDeviceAppearanceTimeoutTimer;
	NSTimer* _bluetoothUpdateSystemActivityTimer;
	NSTimer* _bluetoothUserAckTimer;
	char _discovering;
	char _pairing;
	NSString* _PINCodeString;
	int _numberOfPairingAttemptsPerDevice;
	unsigned _deviceServiceClassMajor;
	unsigned _deviceClassMajor;
	unsigned _deviceClassMinor;
	char _preventingSleep;
	id _textFieldTestingStatus;
	char _notifyOnKeyboard;
	char _notifyOnMouse;
	id _delegate;
	char _automaticDeviceSetupStarted;
	char _automaticDeviceSetupComplete;
	char _automaticDeviceSetupStopped;
	char _automaticDeviceSetupDiscoveringDevicesStarted;
	char _automaticDeviceSetupDiscoveringDevicesFound;
	char _automaticDeviceSetupDiscoveringDevicesUpdated;
	char _automaticDeviceSetupDiscoveringDevicesComplete;
	char _automaticDeviceSetupPairingDeviceStarted;
	char _automaticDeviceSetupPairingDeviceConnected;
	char _automaticDeviceSetupPairingDeviceSuccessful;
	char _automaticDeviceSetupPairingDeviceFailed;
	char _automaticDeviceSetupPairingDeviceUserPasskeyNotification;
	char _automaticDeviceSetupPairingDeviceKeyPressNotification;
	char _automaticDeviceSetupPairingWaitingForUserAck;
	char _automaticDeviceSetupUSBMouseConnected;
	char _automaticDeviceSetupUSBKeyboardConnected;
	char _automaticDeviceSetupBluetoothMouseConnected;
	char _automaticDeviceSetupBluetoothMouseBeingPairedConnected;
	char _automaticDeviceSetupBluetoothKeyboardConnected;

}
+(char)bluetoothIsAvailableAndPowerIsOn:(char)arg1 ;
+(id)deviceSetupWithDelegate:(id)arg1 findDevicesOfServiceClass:(unsigned)arg2 findDevicesOfMajorDeviceClass:(unsigned)arg3 findDevicesOfMinorDeviceClass:(unsigned)arg4 afterPairUserAcknowledgmentTimeLimit:(int)arg5 notifyWhenMousePluggedIn:(char)arg6 notifyWhenKeyboardPluggedIn:(char)arg7 preventSleepFor:(int)arg8 ;
-(char)systemPowerNotification:(unsigned)arg1 ;
-(void)setNotifyOnMouse:(char)arg1 ;
-(void)setNotifyOnKeyboard:(char)arg1 ;
-(void)setAfterPairUserAcknowledgementTimeLimit:(int)arg1 ;
-(void)setPreventSleepFor:(int)arg1 ;
-(void)setSearchCriteria:(unsigned)arg1 majorDeviceClass:(unsigned)arg2 minorDeviceClass:(unsigned)arg3 ;
-(void)newBluetoothHIDDevice:(id)arg1 ;
-(void)newBluetoothHIDDeviceDisconnected:(id)arg1 ;
-(int)stopAndUnPairCurrentDevice:(char)arg1 ;
-(void)unregisterForMouseNotifications;
-(void)startUpdateSystemActivityTimer;
-(void)registerForMouseNotifications;
-(void)registerForKeyboardNotifications;
-(void)unregisterForKeyboardNotifications;
-(void)registerForSystemSleepNotifications;
-(int)startInquiry;
-(void)pairWithNextDevice;
-(void)stopUpdateSystemActivityTimer;
-(void)unregisterForSystemSleepNotifications;
-(void)stopAllBluetooth:(char)arg1 clearInquiry:(char)arg2 clearCurrentDevice:(char)arg3 ;
-(void)stopInquiry;
-(void)stopUserAckTimer;
-(void)stopDeviceAppearanceTimeoutTimer;
-(void)clearCurrentDevice;
-(void)setInquiryLength:(int)arg1 ;
-(void)startDeviceAppearanceTimeoutTimer;
-(void)deviceAppearanceTimeoutTimerFired;
-(void)userAckTimerFired;
-(void)startUserAckTimer;
-(void)mouseConnectNotification:(id)arg1 ;
-(void)keyboardConnectNotification:(id)arg1 ;
-(void)updateSystemActivityTimerFired:(id)arg1 ;
-(void)setNumberOfPairingAttemptsPerDevice:(int)arg1 ;
-(void)setNonNULLPIN:(id)arg1 ;
-(void)skipCurrentDevice;
-(int)stopAndAcceptCurrentDevice;
-(id)currentPairingDevice;
-(void)bluetoothDone:(id)arg1 ;
-(void)bluetoothHCIControllerTerminated;
-(void)deviceInquiryStarted:(id)arg1 ;
-(void)deviceInquiryDeviceFound:(id)arg1 device:(id)arg2 ;
-(void)deviceInquiryUpdatingDeviceNamesStarted:(id)arg1 devicesRemaining:(unsigned)arg2 ;
-(void)deviceInquiryDeviceNameUpdated:(id)arg1 device:(id)arg2 devicesRemaining:(unsigned)arg3 ;
-(void)deviceInquiryComplete:(id)arg1 error:(int)arg2 aborted:(char)arg3 ;
-(void)devicePairingStarted:(id)arg1 ;
-(void)devicePairingConnecting:(id)arg1 ;
-(void)devicePairingPINCodeRequest:(id)arg1 ;
-(void)devicePairingFinished:(id)arg1 error:(int)arg2 ;
-(void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned)arg2 ;
-(void)devicePairingKeypressNotification:(id)arg1 type:(unsigned char)arg2 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(int)start;
@end
