/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GKBluetoothSupport : NSObject
+(void)initialize;
+(void)cleanup;
+(int)_determineBluetoothStatus;
+(void)_btPowerStateChanged:(id)arg1 ;
+(Class)_bluetoothManagerClass;
+(int)bluetoothStatus;
+(void)turnBluetoothOn;
+(int)_directBTStatus;
@end
