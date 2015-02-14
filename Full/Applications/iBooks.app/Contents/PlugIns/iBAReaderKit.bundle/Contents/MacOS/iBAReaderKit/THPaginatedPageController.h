/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THPageController.h>
#import <iBAReaderKit/TSWPLayoutOwner.h>

@protocol THPageControllerDelegate;
@class THPagePositionController, THPresentationType, THModelContentNode, THPageHintController, THBodyTextWrapController, THOffscreenLayoutController, THSectionInfo, TSWPLayoutManager, THWPStorage, NSString;

@interface THPaginatedPageController : NSObject <THPageController, TSWPLayoutOwner> {

	id<THPageControllerDelegate> mDelegate;
	THModelContentNode* mContentNode;
	THPresentationType* mPresentationType;
	THPageHintController* mPageHints;
	THBodyTextWrapController* mWrapController;
	THOffscreenLayoutController* _drawablesLayoutController;
	THSectionInfo* mOffscreenSectionInfo;
	multimap<unsigned long, THPageLayout *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, THPageLayout *> > >* _pageLayoutCache;
	TSWPLayoutManager* _bodyLayoutManager;
	void* _bodyLayoutState;
	char _doingLayout;
	unsigned long long _firstPageIndexNeedingLayout;
	THWPStorage* _bodyStorage;

}

@property (assign,nonatomic) id<THPageControllerDelegate> delegate; 
@property (nonatomic,retain) THPageHintController * pageHints; 
@property (nonatomic,retain) THPresentationType * presentationType; 
@property (nonatomic,retain) THBodyTextWrapController * wrapController; 
@property (nonatomic,retain) THWPStorage * bodyStorage;                                               //@synthesize bodyStorage=_bodyStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) THPagePositionController * pagePositionController; 
@property (nonatomic,retain) THModelContentNode * contentNode; 
@property (nonatomic,readonly) unsigned long long pageCount; 
-(void)i_registerPageLayout:(id)arg1 ;
-(char)p_isLayoutComplete;
-(void)i_setPageHintSize:(CGSize)arg1 forRelativePageIndex:(unsigned long long)arg2 ;
-(id)i_columnAfterPageIndex:(unsigned long long)arg1 ;
-(id)p_lastValidPageHint;
-(unsigned long long)p_layoutEndCharIndex;
-(char)p_generateHintForPageIndex:(unsigned long long)arg1 ;
-(void)p_setNeedsLayoutOnPageIndex:(unsigned long long)arg1 ;
-(CGRect)i_rectForSectionLayout;
-(void)p_removePageLayoutFromCache:(id)arg1 ;
-(THPresentationType *)presentationType;
-(NSRange)p_layoutEndAnchoredRange;
-(unsigned long long)p_relativePageIndexForCharIndex:(unsigned long long)arg1 scanBackwardsFromPageIndex:(unsigned long long)arg2 ;
-(unsigned long long)p_relativePageIndexForCharIndex:(unsigned long long)arg1 scanForwardsFromPageIndex:(unsigned long long)arg2 ;
-(void)i_unregisterPageLayout:(id)arg1 ;
-(void)layoutThroughRelativePageIndex:(unsigned long long)arg1 ;
-(id)i_pageHintForPageIndex:(unsigned long long)arg1 ;
-(id)i_columnPriorToPageIndex:(unsigned long long)arg1 ;
-(void)p_bodyLayoutDidLayout:(id)arg1 ;
-(SCD_Struct_TH22)p_stubHintAtRelativePageIndex:(unsigned long long)arg1 ;
-(void)setPresentationType:(THPresentationType *)arg1 ;
-(NSRange)p_layoutEndRange;
-(void)p_insertPageLayoutIntoCache:(id)arg1 ;
-(void)setWrapController:(THBodyTextWrapController *)arg1 ;
-(id)pageInfoForRelativePageIndex:(unsigned long long)arg1 ;
-(id)i_firstChildHintAfterPageIndex:(unsigned long long)arg1 ;
-(void)setBodyStorage:(THWPStorage *)arg1 ;
-(void)setContentNode:(THModelContentNode *)arg1 ;
-(id)p_layoutManager;
-(THPageHintController *)pageHints;
-(void)setPageHints:(THPageHintController *)arg1 ;
-(THBodyTextWrapController *)wrapController;
-(void)p_didLayout;
-(THWPStorage *)bodyStorage;
-(id)textWrapper;
-(void)p_clearOffscreenLayouts;
-(void)p_destroyBodyLayoutState;
-(THPagePositionController *)pagePositionController;
-(void)i_inflateColumnsInBodyLayout:(id)arg1 ;
-(const TSWPTopicNumberHints*)i_topicHintsPriorToPageIndex:(unsigned long long)arg1 ;
-(const TSWPTopicNumberHints*)i_topicHintsAfterPageIndex:(unsigned long long)arg1 ;
-(THModelContentNode *)contentNode;
-(unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1 ;
-(void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2 ;
-(unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4 ;
-(void)p_layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(char)arg3 ;
-(unsigned long long)p_relativePageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(char)arg2 searchAfterLayoutPoint:(char)arg3 ;
-(unsigned long long)p_relativePageIndexForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2 forceLayout:(char)arg3 searchAfterLayoutPoint:(char)arg4 ;
-(id)p_pageInfoForPageAtRelativeIndex:(unsigned long long)arg1 ;
-(unsigned long long)relativePageIndexForCharIndex:(unsigned long long)arg1 forceLayout:(char)arg2 ;
-(id)p_pageHintForRelativePageIndex:(unsigned long long)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(unsigned long long)relativePageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(char)arg2 ;
-(void)p_performBlock:(/*^block*/id)arg1 withPageLayoutAtRelativeIndex:(unsigned long long)arg2 preferredLayoutController:(id)arg3 ;
-(void)p_performBlock:(/*^block*/id)arg1 withPageLayoutAtRelativeIndex:(unsigned long long)arg2 ;
-(NSRange)p_bodyRangeForRelativePageIndex:(unsigned long long)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(NSRange)p_anchoredRangeForRelativePageIndex:(unsigned long long)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(unsigned long long)p_nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)p_previousRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 ;
-(void)p_invalidateBodyLayoutOnPageIndex:(unsigned long long)arg1 ;
-(id)p_cachedPageLayoutForPageIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 ;
-(void)p_removeOrphanedLayoutsFromCache;
-(unsigned long long)p_lastPageIndexWithBodyAfterPageIndex:(unsigned long long)arg1 ;
-(void)p_processWidowsAndInflationForLayoutController:(id)arg1 ;
-(void)p_layoutNextPageForLayoutController:(id)arg1 ;
-(id)p_updateHintAtIndex:(unsigned long long)arg1 withBodyTargets:(id)arg2 ;
-(void)p_layoutWithPageLayout:(id)arg1 outDidSync:(char*)arg2 ;
-(unsigned long long)p_relativePageIndexPrecedingRelativePageIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_relativePageIndexFollowingRelativePageIndex:(unsigned long long)arg1 ;
-(void)i_trimPageAtIndex:(unsigned long long)arg1 toCharIndex:(unsigned long long)arg2 inTarget:(id)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(unsigned long long)firstBodyCharacterIndexOverlappingPageRect:(CGRect)arg1 forRelativePageIndex:(unsigned long long)arg2 ;
-(id)bodyInfoForCharIndex:(unsigned long long)arg1 forceLayout:(char)arg2 ;
-(CGSize)desiredPageSizeForRelativePageIndex:(unsigned long long)arg1 ;
-(CGPoint)originOfCharacterIndex:(unsigned long long)arg1 forRelativePageIndex:(unsigned long long)arg2 ;
-(id)bodyInfoForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(char)arg2 ;
-(id)initWithDelegate:(id)arg1 contentNode:(id)arg2 presentationType:(id)arg3 ;
-(char)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(id)lineHintsForTarget:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3 ;
-(void)teardown;
-(void)setDelegate:(id<THPageControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<THPageControllerDelegate>)delegate;
-(unsigned long long)pageCount;
@end
