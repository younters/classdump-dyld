/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObject;
@class NSMutableDictionary;

@interface BRContainerCache : NSObject {

	NSMutableDictionary* _containersByID;
	char _didFetchAllContainers;
	id<NSObject> _containerStatusObserver;

}
+(id)containerCache;
-(id)allContainers;
-(id)containerByID:(id)arg1 forURL:(id)arg2 ;
-(id)allContainersByID;
-(id)documentContainers;
-(void)subscribeToContainerStatusUpdate;
-(void)containerListDidChange;
-(void)unsubscribeToContainerStatusUpdate;
-(id)_allContainersByIDUnsafe;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end
