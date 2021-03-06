/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface MecabraDatabaseCacheIdentifierController : NSObject {

	unsigned long long _counter;
	NSMutableArray* _recycledIdentifiers;

}

@property (assign,nonatomic) unsigned long long counter;                        //@synthesize counter=_counter - In the implementation block
@property (nonatomic,retain) NSMutableArray * recycledIdentifiers;              //@synthesize recycledIdentifiers=_recycledIdentifiers - In the implementation block
-(void)setCounter:(unsigned long long)arg1 ;
-(void)setRecycledIdentifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recycledIdentifiers;
-(unsigned long long)counter;
-(unsigned long long)newIdentifier;
-(void)recycleIdentifier:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
@end

