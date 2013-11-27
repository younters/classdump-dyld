/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray {

	int _cd_rc;
	unsigned _editCount;
	unsigned _offset;
	unsigned _limit;
	_PFArray* _originalArray;
	NSMutableArray* _updatedObjectsArray;
	CFArrayRef _indicesVeneer;

}
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)initWithPFArray:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_rehash;
-(id)initWithPFArray:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(unsigned)retainCount;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(unsigned)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)managedObjectIDAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)finalize;
@end
