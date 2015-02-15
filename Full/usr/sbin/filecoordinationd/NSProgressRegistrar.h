/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/filecoordinationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <filecoordinationd/NSXPCListenerDelegate.h>
#import <filecoordinationd/NSProgressRegistrar.h>

@protocol NSProgressRegistrar
@required
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(char)arg4;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5;
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4;
-(oneway void)removeSubscriberForID:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSFileAccessNode, NSMutableSet, NSString;

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _publishersByID;
	NSMutableDictionary* _subscribersByID;
	NSFileAccessNode* _rootFileAccessNode;
	NSMutableSet* _pendingFileSubscriberIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2 ;
-(void)_getRemoteProcessWithIdentifier:(int)arg1 canReadItemAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(char)arg4 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 ;
-(oneway void)removeSubscriberForID:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
@end
