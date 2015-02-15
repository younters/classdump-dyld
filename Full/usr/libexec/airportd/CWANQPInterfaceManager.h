/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/airportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CWANQPCache, NSMutableArray, NSObject;

@interface CWANQPInterfaceManager : NSObject {

	CWANQPCache* _cache;
	NSMutableArray* _interfaceList;
	NSObject*<OS_dispatch_queue> _interfaceListMutex;

}
-(id)interfaceList;
-(id)interfaceWithName:(id)arg1 ;
-(void)dealloc;
-(id)initWithCache:(id)arg1 ;
@end
