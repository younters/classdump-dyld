/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/class-dump
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <class-dump/class-dump-Structs.h>
#import <class-dump/NSCopying.h>

@class NSString, NSArray;

@interface CDOCMethod : NSObject <NSCopying> {

	NSString* _name;
	NSString* _typeString;
	unsigned long long _address;
	char _hasParsedType;
	NSArray* _parsedMethodTypes;

}

@property (readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (readonly) NSString * typeString;                 //@synthesize typeString=_typeString - In the implementation block
@property (assign) unsigned long long address;              //@synthesize address=_address - In the implementation block
-(void)appendToString:(id)arg1 typeController:(id)arg2 ;
-(long long)ascendingCompareByName:(id)arg1 ;
-(id)initWithName:(id)arg1 typeString:(id)arg2 address:(unsigned long long)arg3 ;
-(id)initWithName:(id)arg1 typeString:(id)arg2 ;
-(id)parsedMethodTypes;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)typeString;
-(unsigned long long)address;
-(void)setAddress:(unsigned long long)arg1 ;
@end
