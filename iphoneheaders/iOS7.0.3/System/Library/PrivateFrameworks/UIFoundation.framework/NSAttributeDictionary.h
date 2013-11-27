/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSAttributeDictionary : NSDictionary {

	unsigned numElements;
	NSAttributeDictionaryElement elements[1];

}
+(id)newWithDictionary:(id)arg1 ;
+(id)emptyAttributeDictionary;
+(void)initialize;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(id)newWithKey:(id)arg1 object:(id)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
@end
