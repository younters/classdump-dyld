/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSNotificationCenter.h>

@interface NSDistributedNotificationCenter : NSNotificationCenter

@property (assign) char suspended; 
+(id)notificationCenterForType:(id)arg1 ;
+(id)defaultCenter;
-(id)addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 queue:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 options:(unsigned long long)arg4 ;
-(id)init;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)suspended;
-(void)setSuspended:(char)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(char)arg4 ;
-(void)postNotification:(id)arg1 ;
@end

