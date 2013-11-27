/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>

@class UIView, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl, TIKeyboardCandidateResultSet;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {

	UIView* _clippingView;
	UIView* _topBorder;
	unsigned _selectedSortIndex;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	UIKeyboardCandidateSortControl* _scrollViewSortControl;
	SCD_Struct_UI30 _visualStyling;

}

@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidateResultSet; 
@property (assign,nonatomic) unsigned selectedSortIndex;                                                              //@synthesize selectedSortIndex=_selectedSortIndex - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateSortControl * scrollViewSortControl;                                  //@synthesize scrollViewSortControl=_scrollViewSortControl - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI30 visualStyling;                                                           //@synthesize visualStyling=_visualStyling - In the implementation block
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(BOOL)hasCandidates;
-(void)setVisualStyling:(SCD_Struct_UI30)arg1 ;
-(SCD_Struct_UI30)visualStyling;
-(id)candidateResultSet;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5 ;
-(void)setRenderConfig:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showCandidate:(id)arg1 ;
-(void)showNextCandidate;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned)selectedSortIndex;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)candidateList;
-(unsigned)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(id)headerViewForCandidateSet:(id)arg1 ;
-(unsigned)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(id).cxx_construct;
-(BOOL)isTenKey;
-(void)updateCollectionViewController;
-(void)clearCollectionViewController;
-(id)scrollViewSortControl;
-(id)collectionViewController;
-(void)updateCollectionViewController:(BOOL)arg1 ;
-(void)setCollectionViewController:(id)arg1 ;
-(void)setSelectedSortIndex:(unsigned)arg1 ;
-(void)sortSelectionBarAction:(id)arg1 ;
-(void)setScrollViewSortControl:(id)arg1 ;
-(id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned)arg2 ;
@end
