/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PVMediaContainerBase, NSMutableArray, NSSortDescriptor, NSArray, NSString;

@interface PVSearchResultGroup : NSObject {

	PVMediaContainerBase* _container;
	NSMutableArray* _items;
	unsigned long long _sortOrder;
	NSSortDescriptor* _itemsSortDesc;
	double _maxRelevanceScore;
	NSArray* _pdfOutlineNodes;
	NSString* _title;

}

@property (assign) unsigned long long sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (retain) PVMediaContainerBase * container;                              //@synthesize container=_container - In the implementation block
@property (readonly) NSArray * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSSortDescriptor * itemsSortDescriptor;              //@synthesize itemsSortDesc=_itemsSortDesc - In the implementation block
@property (assign) double maxRelevanceScore;                                      //@synthesize maxRelevanceScore=_maxRelevanceScore - In the implementation block
@property (retain) NSArray * pdfOutlineNodes;                                     //@synthesize pdfOutlineNodes=_pdfOutlineNodes - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
-(void)setPdfOutlineNodes:(NSArray *)arg1 ;
-(double)maxRelevanceScore;
-(void)setMaxRelevanceScore:(double)arg1 ;
-(unsigned long long)indexOfItem:(id)arg1 useSortOrder:(char)arg2 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(void)setItemsSortDescriptor:(NSSortDescriptor *)arg1 ;
-(NSSortDescriptor *)itemsSortDescriptor;
-(NSArray *)pdfOutlineNodes;
-(void)setSortOrder:(unsigned long long)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(unsigned long long)addItem:(id)arg1 ;
-(id)initWithContainer:(id)arg1 ;
-(unsigned long long)sortOrder;
-(PVMediaContainerBase *)container;
-(void)setContainer:(PVMediaContainerBase *)arg1 ;
@end
