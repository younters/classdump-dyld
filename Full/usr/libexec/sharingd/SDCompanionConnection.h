/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/NSStreamDelegate.h>
#import <sharingd/NSXPCListenerDelegate.h>
#import <sharingd/NSXPCConnectionDelegate.h>
#import <sharingd/SDStreamHandlerDelegate.h>
#import <sharingd/SFCompanionConnectionManagerProtocol.h>

@protocol SDCompanionConnectionDelegate, SFCompanionConnectionManagerClient;
@class SFCompanionService, NSXPCListener, NSXPCConnection, SDStreamHandler, NSString;

@interface SDCompanionConnection : NSObject <NSStreamDelegate, NSXPCListenerDelegate, NSXPCConnectionDelegate, SDStreamHandlerDelegate, SFCompanionConnectionManagerProtocol> {

	char _initiator;
	char _justAccepted;
	char _initiated;
	id<SDCompanionConnectionDelegate> _delegate;
	SFCompanionService* _companionService;
	id<SFCompanionConnectionManagerClient> _clientProxy;
	NSXPCListener* _listener;
	NSXPCConnection* _xpcConnection;
	SDStreamHandler* _streamHandler;

}

@property (getter=isInitiator,readonly) char initiator;                               //@synthesize initiator=_initiator - In the implementation block
@property (__weak) id<SDCompanionConnectionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SFCompanionService * companionService;                   //@synthesize companionService=_companionService - In the implementation block
@property (readonly) id<SFCompanionConnectionManagerClient> clientProxy;              //@synthesize clientProxy=_clientProxy - In the implementation block
@property (assign) char justAccepted;                                                 //@synthesize justAccepted=_justAccepted - In the implementation block
@property (retain) NSXPCListener * listener;                                          //@synthesize listener=_listener - In the implementation block
@property (getter=isInitiated) char initiated;                                        //@synthesize initiated=_initiated - In the implementation block
@property (retain) NSXPCConnection * xpcConnection;                                   //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) SDStreamHandler * streamHandler;                                   //@synthesize streamHandler=_streamHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SFCompanionConnectionManagerClient>)clientProxy;
-(void)streamHandler:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)streamHandlerDidClose:(id)arg1 ;
-(SDStreamHandler *)streamHandler;
-(void)setStreamHandler:(SDStreamHandler *)arg1 ;
-(void)sendDiscoverRequest;
-(void)setJustAccepted:(char)arg1 ;
-(char)justAccepted;
-(void)sendDiscoverResponse;
-(void)handleNSXPCConnectionData:(id)arg1 ;
-(void)handleConnectResponse:(id)arg1 ;
-(id)initWithConnectionProxy:(id)arg1 streamHandler:(id)arg2 initiator:(char)arg3 ;
-(void)setCompanionService:(SFCompanionService *)arg1 ;
-(char)addValidationRecordToRequest:(id)arg1 ;
-(char)handleNSXPCMessageData:(id)arg1 ;
-(SFCompanionService *)companionService;
-(char)isInitiated;
-(void)setInitiated:(char)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)isInitiator;
-(void)endpointForService:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)remoteInvalidateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)sendMessage:(id)arg1 ;
-(void)setDelegate:(id<SDCompanionConnectionDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)invalidate;
-(id<SDCompanionConnectionDelegate>)delegate;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
@end
