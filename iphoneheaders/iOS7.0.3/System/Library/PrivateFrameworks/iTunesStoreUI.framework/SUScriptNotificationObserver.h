/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSLock;

@interface SUScriptNotificationObserver : NSObject {

	NSLock* _lock;
	CFSetRef _receivers;

}
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addEventReceiver:(id)arg1 ;
-(void)removeEventReceiver:(id)arg1 ;
-(void)_memoryWarningNotification:(id)arg1 ;
-(void)_endObservingNotifications;
-(void)_beginObservingNotifications;
-(void)_dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(void)_dispatchEventWithDictionary:(id)arg1 forName:(id)arg2 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_audioSessionsChangedNotification:(id)arg1 ;
-(void)_purchaseRequestDidSucceedNotification:(id)arg1 ;
-(void)_softwareMapChangedNotification:(id)arg1 ;
-(void)_enumerateReceiversUsingBlock:(/*^block*/ id)arg1 ;
-(void)_accessibilityPerformScrollUp;
-(void)_accessibilityPerformScrollDown;
-(void)_accessibilityPerformScrollLeft;
-(void)_accessibilityPerformScrollRight;
-(void)_accessibilityPerformEscape;
@end
