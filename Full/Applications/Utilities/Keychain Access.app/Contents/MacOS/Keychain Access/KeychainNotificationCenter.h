/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:23:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Keychain Access.app/Contents/MacOS/Keychain Access
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Keychain Access/Keychain Access-Structs.h>
#import <Foundation/NSNotificationCenter.h>

@class NSHashTable;

@interface KeychainNotificationCenter : NSNotificationCenter {

	NSHashTable* nameTable;

}
+(id)defaultKeychainCenter;
+(void)initialize;
-(void)postSecKeychainEvent:(unsigned)arg1 info:(SecKeychainCallbackInfo*)arg2 context:(void*)arg3 ;
-(void)addObserverInMainThread:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)_postNotificationWithMangledName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)postNotification:(id)arg1 ;
@end
