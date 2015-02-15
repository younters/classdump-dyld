/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUDirectedGraph : NSObject {

	unsigned _nodeCount;
	unsigned _edgeCount;
	unsigned _nextNodeName;
	unsigned _nextEdgeName;
	VMUDirectedGraphNode* _nodes;
	VMUDirectedGraphEdge* _edges;
	unsigned* _nodeNameMap;
	unsigned _edgeCapacity;
	char _needsAdjacencyUpdate;

}

@property (nonatomic,readonly) unsigned nodeCount;                      //@synthesize nodeCount=_nodeCount - In the implementation block
@property (nonatomic,readonly) unsigned edgeCount;                      //@synthesize edgeCount=_edgeCount - In the implementation block
@property (nonatomic,readonly) unsigned nodeNamespaceSize;              //@synthesize nextNodeName=_nextNodeName - In the implementation block
@property (nonatomic,readonly) unsigned edgeNamespaceSize;              //@synthesize nextEdgeName=_nextEdgeName - In the implementation block
+(void)initialize;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)_adjustAdjacencyMap;
-(void)_dfsCore:(unsigned)arg1 colors:(unsigned char*)arg2 nodeBlock:(/*^block*/id)arg3 edgeBlock:(/*^block*/id)arg4 ;
-(void)_searchMainLoop:(unsigned)arg1 action:(/*^block*/id)arg2 ;
-(void)_bfsCore:(unsigned)arg1 colors:(unsigned char*)arg2 nodeBlock:(/*^block*/id)arg3 edgeBlock:(/*^block*/id)arg4 ;
-(unsigned)addEdgeFromNode:(unsigned)arg1 toNode:(unsigned)arg2 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesOfNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)subgraphWithMarkedNodes:(void*)arg1 edges:(void*)arg2 ;
-(id)invertedGraph;
-(void)withNodeMarkingMap:(/*^block*/id)arg1 ;
-(void)withEdgeMarkingMap:(/*^block*/id)arg1 ;
-(void)depthFirstSearch:(unsigned)arg1 nodeVisitBlock:(/*^block*/id)arg2 edgeVisitBlock:(/*^block*/id)arg3 ;
-(void)breadthFirstSearch:(unsigned)arg1 nodeVisitBlock:(/*^block*/id)arg2 edgeVisitBlock:(/*^block*/id)arg3 ;
-(void)_dumpAdjacencyList;
-(void)invertEdges;
-(unsigned)edgeCount;
-(unsigned)nodeNamespaceSize;
-(unsigned)edgeNamespaceSize;
-(id)initWithNodes:(unsigned)arg1 ;
-(unsigned)nodeCount;
-(void)dealloc;
@end
