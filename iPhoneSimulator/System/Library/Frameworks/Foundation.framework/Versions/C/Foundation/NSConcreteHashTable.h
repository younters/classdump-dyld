/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSConcreteHashTable : NSHashTable {

	NSSlice* slice;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long options;
	unsigned long long mutations;

}
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2 ;
-(void*)getItem:(const void*)arg1 ;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(id)pointerFunctions;
-(void)_initBlock;
-(void)insertItem:(const void*)arg1 ;
-(void)raiseCountUnderflowException;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 ;
-(void)hashGrow;
-(void)rehash;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectEnumerator;
-(id)allObjects;
-(Class)classForCoder;
-(void)removeAllItems;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)removeItem:(const void*)arg1 ;
@end
