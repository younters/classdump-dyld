/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLocking.h>

@interface NSRecursiveLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(BOOL)tryLock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)isLocking;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end
