/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject {

	NSMutableDictionary* _weakObjectCache;
	opaque_pthread_mutex_t _tableLock;

}
+(id)sharedInstance;
-(id)copyOrSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 key:(id)arg2 ;
-(id)copyObjectForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
@end
