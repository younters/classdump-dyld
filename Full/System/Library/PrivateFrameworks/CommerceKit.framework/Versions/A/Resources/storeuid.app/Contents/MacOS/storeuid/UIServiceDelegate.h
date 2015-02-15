/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeuid.app/Contents/MacOS/storeuid
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISServiceDelegate.h>

@class NSMutableDictionary;

@interface UIServiceDelegate : ISServiceDelegate {

	NSMutableDictionary* _registeredClients;

}
+(Class)clientInterfaceClass;
-(void)registerUIHost:(id)arg1 forStoreClient:(id)arg2 ;
-(void)unregisterUIHost:(id)arg1 forStoreClient:(id)arg2 ;
-(id)uiHostForStoreClient:(id)arg1 ;
-(id)init;
-(id)exportedObjectProtocol;
@end
