/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SUNetworkObserver <NSObject>
@optional
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
-(void)cellularRoamingStatusChanged:(BOOL)arg1;
-(void)carrierBundleChanged;
-(void)operatorBundleChanged;
@end
