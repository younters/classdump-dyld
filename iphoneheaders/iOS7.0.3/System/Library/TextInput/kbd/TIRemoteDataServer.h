/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject;

@interface TIRemoteDataServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject<OS_dispatch_queue>* _dispatchQueue;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)sharedRemoteDataServer;
-(id)dispatchQueue;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
