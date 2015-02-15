/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/webinspectord
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TCPServerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface TCPServer : NSObject {

	id<TCPServerDelegate> _delegate;
	int _listenSocket;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject*<OS_dispatch_source> _serverSource;
	NSMutableArray* _connections;

}

@property (nonatomic,readonly) id<TCPServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)connectionClosed:(id)arg1 ;
-(id)_initWithDelegate:(id)arg1 ;
-(char)_listenOnPort:(unsigned short)arg1 ;
-(char)_createListenDispatchSource;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(id)initWithLaunchdSocketName:(const char*)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(id<TCPServerDelegate>)delegate;
@end
