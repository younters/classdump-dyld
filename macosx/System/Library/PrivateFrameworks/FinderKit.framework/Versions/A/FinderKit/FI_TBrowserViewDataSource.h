/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/NSOutlineViewDataSource.h>

@class FI_TBrowserViewController, NSString;

@interface FI_TBrowserViewDataSource : NSObject <NSOutlineViewDataSource> {

	FI_TBrowserViewController* _controller;
	TNodeToChildrenMap* _nodeChildrenMap;
	TGroupClientNodes* _nodeGroups;
	BOOL _groupsNeedSorting;
	map<TFENode, TNSRef<FI_TContainerExtraData *>, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<FI_TContainerExtraData *> > > >* _extraDataForContainer;

}

@property (assign,nonatomic) FI_TBrowserViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moreNode;
+(id)newDocumentButtonNode;
-(const TFENodeVector*)childrenOfNode:(const TFENode*)arg1 ;
-(void)updateExtraData:(const TFENodeVector*)arg1 forContainer:(const TFENode*)arg2 ;
-(BOOL)addNodes:(const TFENodeVector*)arg1 forContainer:(const TFENode*)arg2 withComparator:(TBaseNodeComparator*)arg3 ;
-(id)extraDataForContainer:(const TFENode*)arg1 ;
-(void)removeAllNodesInContainer:(const TFENode*)arg1 ;
-(void)sortAllChildrenOf:(const TFENode*)arg1 withCollator:(const SortCollator*)arg2 grouping:(BOOL)arg3 ;
-(BOOL)addNodes:(const TFENodeVector*)arg1 forContainer:(const TFENode*)arg2 ;
-(TFENode*)clientNodeForGroup:(TGroup*)arg1 forContainer:(const TFENode*)arg2 ;
-(TFENode*)groupNodeOfNode:(const TFENode*)arg1 ;
-(BOOL)removeNodes:(const TFENodeVector*)arg1 forContainer:(const TFENode*)arg2 ;
-(BOOL)removeNodes:(const TFENodeVector*)arg1 fromGroup:(const TFENode*)arg2 forContainer:(const TFENode*)arg3 ;
-(void)sortGroups:(const TFENode*)arg1 ascending:(BOOL)arg2 ;
-(BOOL)addNodes:(const TFENodeVector*)arg1 toGroup:(TGroup*)arg2 forContainer:(const TFENode*)arg3 updatedGroups:(set<TFENode, std::__1::less<TFENode>, std::__1::allocator<TFENode> >*)arg4 ;
-(void)sortGroupsIfNeeded:(const TFENode*)arg1 ascending:(BOOL)arg2 ;
-(BOOL)removeNodesInGroups:(const TFENodeVector*)arg1 forContainer:(const TFENode*)arg2 exceptInGroup:(const TFENode*)arg3 groupsChanged:(set<TFENode, std::__1::less<TFENode>, std::__1::allocator<TFENode> >*)arg4 ;
-(id)newDataSourceWithClonedChildren;
-(void)swapChildren:(id)arg1 ;
-(void)swapChildren:(id)arg1 ofSubContainer:(const TFENode*)arg2 ;
-(unsigned)generationCountForSubContainer:(const TFENode*)arg1 ;
-(TFENode*)childOfNode:(const TFENode*)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexForChild:(const TFENode*)arg1 inParent:(const TFENode*)arg2 ;
-(void)replaceChildrenOf:(const TFENode*)arg1 with:(const TFENodeVector*)arg2 ;
-(void)sortWithCollator:(const SortCollator*)arg1 ;
-(void)sortGroupsAccordingToNodes:(const TFENode*)arg1 withCollator:(const SortCollator*)arg2 ;
-(unsigned long long)groupedChildrenCountOfNode:(const TFENode*)arg1 countGroups:(BOOL)arg2 ;
-(BOOL)isGroupRow:(long long)arg1 inContainer:(const TFENode*)arg2 ;
-(TFENode*)groupedChildOfNode:(const TFENode*)arg1 atIndex:(unsigned long long)arg2 countGroups:(BOOL)arg3 ;
-(unsigned long long)indexForGroupedChild:(const TFENode*)arg1 inParent:(const TFENode*)arg2 countGroups:(BOOL)arg3 ;
-(TGroup*)groupOfNode:(const TFENode*)arg1 ;
-(TGroup*)groupForClientNode:(const TFENode*)arg1 ;
-(BOOL)addNodesInGroups:(const TGroupedNodes*)arg1 forContainer:(const TFENode*)arg2 removeAll:(BOOL)arg3 groupChanges:(TGroupChanges*)arg4 sortGroupsAscending:(BOOL)arg5 ;
-(BOOL)removeNodesInGroups:(const TFENodeVector*)arg1 forContainer:(const TFENode*)arg2 groupChanges:(TGroupChanges*)arg3 sortGroupsAscending:(BOOL)arg4 ;
-(BOOL)updateNodesGroup:(const TGroupedNodes*)arg1 forContainer:(const TFENode*)arg2 groupChanges:(TGroupChanges*)arg3 sortGroupsAscending:(BOOL)arg4 ;
-(unsigned)generationCount;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(FI_TBrowserViewController *)controller;
-(void)setController:(FI_TBrowserViewController *)arg1 ;
@end
