/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/NSXPCListenerDelegate.h>

@class NSLock, NSMutableArray, NSString, NSArray;

@interface ISServiceDelegate : NSObject <NSXPCListenerDelegate> {

	NSLock* _clientsLock;
	NSMutableArray* _clients;
	NSString* _serviceName;

}

@property (readonly) NSArray * clients;                             //@synthesize clients=_clients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(Class)clientInterfaceClass;
-(id)initWithServiceName:(id)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)init;
-(void)client:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)client:(id)arg1 didInvalidationConnection:(id)arg2 ;
-(NSArray *)clients;
@end
