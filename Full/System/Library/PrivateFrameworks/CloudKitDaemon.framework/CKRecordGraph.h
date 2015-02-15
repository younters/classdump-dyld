/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSArray;

@interface CKRecordGraph : NSObject {

	NSMutableSet* _nodes;
	NSArray* _sortedRecords;

}

@property (nonatomic,copy) NSMutableSet * nodes;                   //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSArray * sortedRecords;              //@synthesize sortedRecords=_sortedRecords - In the implementation block
-(void)setSortedRecords:(NSArray *)arg1 ;
-(NSArray *)sortedRecords;
-(id)recordsByTopologicalSortWithError:(id*)arg1 ;
-(void)setNodes:(NSMutableSet *)arg1 ;
-(char)addRecords:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)description;
-(NSMutableSet *)nodes;
@end
