/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenSharing/ScreenSharing-Structs.h>
@interface DNSResolver : NSObject
+(id)sharedResolver;
+(void)initialize;
-(void)resolveCore:(CFHostRef)arg1 withObserver:(id)arg2 withUserInfo:(id)arg3 withHostInfoType:(int)arg4 ;
-(void)resolveHostname:(id)arg1 observer:(id)arg2 userInfo:(id)arg3 ;
-(void)resolveAddress:(in6_addr)arg1 observer:(id)arg2 userInfo:(id)arg3 ;
@end
