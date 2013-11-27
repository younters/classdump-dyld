/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SetupUIDelegate
@optional
-(void)setupTaskResponseWithResult:(long)arg1 responseDict:(id)arg2 forController:(id)arg3;
-(void)setupRPCResponseWithResult:(long)arg1 rpcSelector:(int)arg2 responseDict:(id)arg3 forController:(id)arg4;
-(void)setupMonitoringMessage:(long)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupMonitoredSettingChanged:(long)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupProgressUpdated:(int)arg1 status:(long)arg2 paramDict:(id)arg3 forController:(id)arg4;
-(void)setupCompleteWithResult:(long)arg1 baseStationInfo:(id)arg2 forController:(id)arg3;
@end
