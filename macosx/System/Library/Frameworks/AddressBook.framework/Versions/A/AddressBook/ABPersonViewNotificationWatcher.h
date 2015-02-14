/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, ABCardViewNotificationHandler;

@interface ABPersonViewNotificationWatcher : NSObject {

	NSMutableArray* _observers;
	ABCardViewNotificationHandler* _cardViewNotificationHandler;

}
-(id)initWithCardViewNotificationHandler:(id)arg1 ;
-(void)registerForNotificationsWithAddressBook:(id)arg1 ;
-(void)addressBookChangedExternally:(id)arg1 ;
-(void)removeNotificationObservers;
-(void)registerForLocalNotificationsWithAddressBook:(id)arg1 ;
-(void)registerForExternalNotifications;
-(void)managedObjectContextObjectsDidChange:(id)arg1 ;
-(void)dealloc;
@end
