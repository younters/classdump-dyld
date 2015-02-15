/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/webinspectord
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <webinspectord/DebuggerConnection.h>

@protocol OS_xpc_object;
@class NSObject;

@interface DebuggerXPCConnection : DebuggerConnection {

	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(id)connectionFromXPCConnection:(id)arg1 delegate:(id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 delegate:(id)arg2 ;
-(void)_handleXPCEvent:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)dealloc;
-(void)close;
-(void)startListening;
@end
