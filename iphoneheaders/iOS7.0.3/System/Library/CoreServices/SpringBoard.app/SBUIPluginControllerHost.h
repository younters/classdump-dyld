/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBUIPluginControllerHost <NSObject>
@required
-(BOOL)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3;
-(void)uiPlugin:(id)arg1 isNowRunning:(BOOL)arg2;
-(BOOL)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/ id)arg3;
-(BOOL)uiPlugin:(id)arg1 openURL:(id)arg2;
-(void)uiPluginUserEventOccurred:(id)arg1;
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
-(void)uiPluginWantsDismissal:(id)arg1 withAnimation:(BOOL)arg2;
-(BOOL)uiPluginExpectsFaceContact:(id)arg1;
-(void)uiPlugin:(id)arg1 setExpectsFaceContact:(BOOL)arg2;
@end
