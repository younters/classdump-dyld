/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray, NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableArray : NSMutableArray {

	int _cd_rc;
	NSMutableArray* _realArray;
	NSManagedObject* _source;
	NSPropertyDescription* _relationship;
	struct {
		unsigned _isFault : 1;
		unsigned _reserved : 31;
	}  _flags;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(void)willRead;
-(unsigned)indexOfObjectWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(unsigned)indexOfObjectAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/ id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/ id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(void)turnIntoFault;
-(id)relationship;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(unsigned)retainCount;
-(id)description;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeLastObject;
-(id)valueForKey:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)objectEnumerator;
-(id)valueForKeyPath:(id)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(id)source;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(BOOL)isFault;
-(id)descriptionWithLocale:(id)arg1 ;
@end
