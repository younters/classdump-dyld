/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:49:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ThermalMonitor/BaseCCRadio.h>

@class CameraTS;

@interface tm1ef1f0079257f0da124d5a89bde110e3 : BaseCCRadio {

	CameraTS* camSensor;

}
-(bool)useTcalAdjust:(int)arg1 ;
-(int)totalSensors;
-(id)initProduct:(id)arg1 ;
-(void)createConnectionToCT:(long)arg1 ;
-(unsigned long long)getPotentialForcedThermalLevel:(unsigned long long)arg1 ;
-(void)updateDecayStatus;
-(void)updateAllThermalLoad;
-(void)dealloc;
@end
