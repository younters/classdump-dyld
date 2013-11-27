/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol _MKWiFiObserverDelegate;
#import <MapKit/MapKit-Structs.h>
@class ;

@interface _MKWiFiObserver : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _wifiEnabled;
	<_MKWiFiObserverDelegate>* _delegate;

}

@property (getter=isWifiEnabled,nonatomic,readonly) BOOL wifiEnabled;              //@synthesize wifiEnabled=_wifiEnabled - In the implementation block
@property (assign,nonatomic) <_MKWiFiObserverDelegate> * delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isWifiEnabled;
-(void)_updateWiFiState:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
@end
