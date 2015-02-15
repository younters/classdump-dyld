/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}

@property (copy) NSString * name; 
@property (assign) id<NSCacheDelegate> delegate; 
@property (assign) unsigned long long totalCostLimit; 
@property (assign) unsigned long long countLimit; 
@property (assign) char evictsObjectsWithDiscardedContent; 
-(id)CALobjectForKey:(id)arg1 calculatedWithBlock:(/*^block*/id)arg2 ;
-(char)evictsObjectsWithDiscardedContent;
-(unsigned long long)totalCostLimit;
-(unsigned long long)countLimit;
-(void)setEvictsObjectsWithDiscardedContent:(char)arg1 ;
-(id)init;
-(void)setDelegate:(id<NSCacheDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allObjects;
-(void)removeAllObjects;
-(id<NSCacheDelegate>)delegate;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setCountLimit:(unsigned long long)arg1 ;
@end
