/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SDCompanionPublisherProtocol <NSObject>
@optional
-(void)manager:(id)arg1 connectedToService:(id)arg2 withFileHandle:(id)arg3 acceptHandler:(/*^block*/id)arg4;
-(void)publisher:(id)arg1 didConnectToService:(id)arg2 withStreamHandler:(id)arg3;
-(void)publisher:(id)arg1 companionStreamForService:(id)arg2 streamHandler:(id)arg3;

@end
