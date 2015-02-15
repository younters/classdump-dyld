/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <RemoteViewServices/RemoteViewServices-Structs.h>
@interface NSRemoteServiceEndpoint : NSObject {

	xpc_connection_sRef _connection;
	/*^block*/id _errorHandler;
	/*^block*/id _connectionHandler;
	char _isAcceptingConnections;

}
-(void)setConnectionHandler:(/*^block*/id)arg1 ;
-(void)_connectionDidReceiveEvent:(void*)arg1 ;
-(void)setErrorHandler:(/*^block*/id)arg1 ;
-(void*)endpoint;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
@end
