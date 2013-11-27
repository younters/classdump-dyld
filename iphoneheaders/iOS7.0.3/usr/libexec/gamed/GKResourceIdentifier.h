/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/gamed-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol OS_dispatch_semaphore;
@class NSArray, NSObject;

@interface GKResourceIdentifier : NSObject <NSCopying> {

	NSArray* _keys;
	NSObject<OS_dispatch_semaphore>* _semaphore;

}

@property (nonatomic,readonly) NSArray * keys;                                           //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_semaphore> * semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(id)resourceIdentifiersForBagKeys:(id)arg1 ;
+(id)resourceIdentifierForKeys:(id)arg1 ;
+(id)resourceIdentifierForBagKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 ;
-(BOOL)wait:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)keys;
-(void)signal;
-(id)semaphore;
@end
