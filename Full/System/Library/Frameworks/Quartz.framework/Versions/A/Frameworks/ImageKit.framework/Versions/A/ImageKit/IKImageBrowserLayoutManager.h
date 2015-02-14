/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKImageBrowserLayoutManagerDelegate;
#import <ImageKit/ImageKit-Structs.h>
@class NSMutableArray, NSArray, NSMutableIndexSet, NSLock, IKImageBrowserView;

@interface IKImageBrowserLayoutManager : NSObject {

	IKImageBrowserLayoutParameter _layoutParameters;
	id _subManagerClass;
	NSMutableArray* _subManagers;
	NSArray* _groups;
	unsigned long long _groupToSpaceOutDownwards;
	unsigned long long _subManagerToSpaceOutDownwards;
	char _subManagerListDirty;
	char _hasiOSGroup;
	char _iOSGroupOpened;
	unsigned long long _iOSGroupMasterCellIndex;
	unsigned long long _iOSGroupWrapCount;
	NSMutableIndexSet* _iOSGroupCollapsedIndexes;
	NSLock* _lock;
	NSMutableIndexSet* _indexInRectCache;
	SCD_Struct_IK11 _rectCache;
	char _layoutIsUpToDate;
	char _gridFramesAreUpToDate;
	char _hasCoverflowSubLayout;
	IKImageBrowserView* _parent;
	id<IKImageBrowserLayoutManagerDelegate> _delegate;
	double _verticalOffset;

}

@property (assign) IKImageBrowserView * parent; 
@property (assign) id<IKImageBrowserLayoutManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double verticalOffset;                                         //@synthesize verticalOffset=_verticalOffset - In the implementation block
-(CGSize)margin;
-(void)setMargin:(CGSize)arg1 ;
-(id)groups;
-(id)cellIndexesInRect:(SCD_Struct_IK11)arg1 ;
-(void)setContentResizingMask:(unsigned long long)arg1 ;
-(char)automaticallyMinimizeRowMargin;
-(void)prepareRenderingOrderingWithIndexes:(id)arg1 ;
-(unsigned long long)indexToRenderForNonOrderedIndex:(unsigned long long)arg1 ;
-(char)cellAtIndexOverlapsAnotherCell:(unsigned long long)arg1 ;
-(SCD_Struct_IK11)cellFrameAtIndex:(unsigned long long)arg1 ;
-(int)_contentColumnCount;
-(CGSize)cellMargin;
-(char)cellsHaveACommonHeightOfInfoSpace;
-(int)rowAtIndex:(int)arg1 ;
-(int)columnAtIndex:(int)arg1 ;
-(double)xAtColumn:(int)arg1 ;
-(unsigned long long)clientIndexToGridIndex:(unsigned long long)arg1 ;
-(double)yAtRow:(int)arg1 ;
-(int)rowAtY:(double)arg1 ;
-(int)columnAtX:(double)arg1 ;
-(id)gridIndexesToClientIndexes:(id)arg1 ;
-(long long)gridIndexToClientIndex:(unsigned long long)arg1 ;
-(void)collapsedStateChanged:(id)arg1 ;
-(int)rowsCount;
-(id)cellIndexesAtLocation:(CGSize)arg1 ;
-(int)cellIndexAtColumn:(int)arg1 andRow:(int)arg2 ;
-(long long)nearestCellOfPosition:(CGSize)arg1 ;
-(int)screenColumnAtIndex:(unsigned long long)arg1 ;
-(void)contentDidChangeAtIndexes:(id)arg1 ;
-(void)setCellsHaveACommonHeightOfInfoSpace:(char)arg1 ;
-(CGSize)freeFormScaleFactor;
-(void)setGroups:(id)arg1 ;
-(void)adjustGroupsHorizontalOffsetIfNeeded;
-(unsigned long long)contentResizingMask;
-(SCD_Struct_IK11)rectOfGroupHeader:(id)arg1 ;
-(double)spaceOutGroupsHeight;
-(id)subManagers;
-(SCD_Struct_IK11)rectOfGroupTail:(id)arg1 ;
-(SCD_Struct_IK11)rectOfGroup:(id)arg1 ;
-(void)moveIndexOnTop:(long long)arg1 ;
-(int)heightOfInfoSpaceAtRow:(int)arg1 ;
-(void)setCellMargin:(CGSize)arg1 ;
-(_IKImageBrowserLayoutParameter*)layoutParameters;
-(void)setPosition:(CGPoint)arg1 atIndex:(long long)arg2 ;
-(void)setScaleFactor:(double)arg1 atIndex:(long long)arg2 ;
-(void)zSortWithZValues:(double*)arg1 ;
-(unsigned long long)bottomIndex;
-(unsigned long long)rightIndex;
-(unsigned long long)leftIndex;
-(unsigned long long)topIndex;
-(void)translateAllBy:(CGSize)arg1 ;
-(CGPoint)topLeftItemPosition;
-(CGSize)freeFormDocumentTranslation;
-(void)setAnchorPointTranslation:(CGPoint)arg1 ;
-(void)setFreeFormDocumentOffset:(CGPoint)arg1 ;
-(void)setFreeFormScaleFactor:(CGSize)arg1 ;
-(CGSize)freeFormTotalDocumentOffset;
-(CGPoint)positionAtIndex:(long long)arg1 ;
-(void)setFreeFormLayoutMode:(char)arg1 ;
-(double)zAtIndex:(unsigned long long)arg1 ;
-(void)spaceOutGroup:(unsigned long long)arg1 usingAnimationManager:(id)arg2 animate:(char)arg3 ;
-(void)spaceOutCellsForDropAtIndex:(unsigned long long)arg1 atPos:(CGSize)arg2 nearestCell:(unsigned long long)arg3 isMoreThanHalfwayAcrossCell:(char)arg4 ;
-(double)verticalOffset;
-(char)hasCoverflowSubLayout;
-(void)layoutDidChange;
-(long long)_gridIndexToClientIndex:(unsigned long long)arg1 ;
-(long long)_clientIndexToGridIndex:(unsigned long long)arg1 ;
-(id)clientIndexesToGridIndexes:(id)arg1 ;
-(CGSize)sizeOfGrid:(id)arg1 ;
-(void)_animateHeaderAndFooterOffsetFrom:(double)arg1 startingWithGroupIndex:(unsigned long long)arg2 usingAnimationManager:(id)arg3 ;
-(char)_shouldForceAlignLeft;
-(void)addGroup:(id)arg1 inGroupList:(id)arg2 ;
-(id)_newGridWithClass:(Class)arg1 pool:(id)arg2 ;
-(void)_wrapCellsForiOSGroups;
-(void)createGrids;
-(char)computeColumnCount;
-(void)computeMargin;
-(void)updateGridFrames;
-(int)rowsCountForGrid:(id)arg1 ;
-(double)_yAtRow:(int)arg1 ;
-(id)subManagerForCellAtIndex:(unsigned long long)arg1 ;
-(double)scaleFactorAtIndex:(long long)arg1 ;
-(CGPoint)normalizedPositionAtIndex:(long long)arg1 ;
-(void)invalidateBSP;
-(void)setAutomaticallyMinimizeRowMargin:(char)arg1 ;
-(void)setVerticalOffset:(double)arg1 ;
-(char)alignLeftForSingleRow;
-(void)setAlignLeftForSingleRow:(char)arg1 ;
-(int)flavor;
-(int)cellIndexAtLocation:(CGSize)arg1 ;
-(void)resetGroupsOffset;
-(id)init;
-(void)setDelegate:(id<IKImageBrowserLayoutManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setContent:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(id<IKImageBrowserLayoutManagerDelegate>)delegate;
-(char)update;
-(id)content;
-(void)setAlignment:(int)arg1 ;
-(CGSize)cellSize;
-(int)alignment;
-(CGSize)contentSize;
-(void)setCellSize:(CGSize)arg1 ;
-(void)setContainerSize:(CGSize)arg1 ;
-(IKImageBrowserView *)parent;
-(void)setParent:(IKImageBrowserView *)arg1 ;
-(CGSize)containerSize;
-(void)updateIfNeeded;
-(int)columnCount;
@end
