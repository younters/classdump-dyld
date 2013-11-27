/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackBoardServices/BKSXPCServerClient.h>

@protocol OS_xpc_object;
@class NSObject;

@interface BKSBasicServerClient : NSObject <BKSXPCServerClient> {

	NSObject<OS_xpc_object>* _connection;

}

@property (nonatomic,retain) NSObject<OS_xpc_object> * connection;              //@synthesize connection=_connection - In the implementation block
+(id)wrapperWithConnection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
-(void)setConnection:(id)arg1 ;
@end
