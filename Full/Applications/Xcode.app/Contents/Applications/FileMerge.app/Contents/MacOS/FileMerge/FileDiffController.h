/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/FileMerge.app/Contents/MacOS/FileMerge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FileMerge/FileMerge-Structs.h>
#import <FileMerge/NSTextViewDelegate.h>

@class DiffSet, NSMutableArray, NSMatrix, MethodPopUp, NSPopUpButton, NSString;

@interface FileDiffController : NSObject <NSTextViewDelegate> {

	id diffWindow;
	id myDiffResponder;
	id scrollView1;
	id scrollView2;
	id globalScroller;
	id mergeFileName;
	id mergeViewReal;
	id mergeViewFake;
	CGRect originalMergeViewFrame;
	id scrollViewM;
	id splitView;
	id originalBox;
	id slider;
	id fileNameA;
	id fileNameB;
	id mergeSelectMatrix;
	id numConflicts;
	id numLeft;
	id numRight;
	id numDiffs;
	DiffSet* diffSet;
	char computedDiffRects;
	char computedTextLayout;
	id glueView;
	id theFont;
	double theFontMaxHeight;
	id lineNumber;
	long long currentDiffNumber;
	NSMutableArray* selectedDiffs;
	double viewHeight;
	double mergeHeight;
	double totalScrollSize;
	double leftSideHeight;
	double rightSideHeight;
	double mergeSideHeight;
	char rtf;
	char noWrap;
	CGSize previousFrameSize;
	NSMatrix* leftRightButtons;
	char mergeViewAdjustingEnabled;
	MethodPopUp* sourceMethods1;
	MethodPopUp* sourceMethods2;
	MethodPopUp* sourceMethodsM;
	NSPopUpButton* mergeActionsButton;
	unsigned long long fileEncoding1;
	unsigned long long fileEncoding2;
	unsigned long long fileEncodingM;
	char _diffDirectionEdited;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)updateMethodsList:(id)arg1 ;
-(void)setMergeView:(id)arg1 ;
-(id)copyMenuItemText;
-(id)doDiffForFileSet:(id)arg1 ;
-(id)fileSetSansSemiPath;
-(id)computeLineRange;
-(char)selectLineOrDiffRange:(id)arg1 wantLines:(char)arg2 ;
-(char)findText:(id)arg1 ignoreCase:(char)arg2 wrap:(char)arg3 backwards:(char)arg4 ;
-(void)enterFindSelection:(id)arg1 ;
-(void)updateGlueView;
-(void)computeBolds;
-(void)computeAllLayout;
-(id)fileNameA;
-(id)fileNameB;
-(id)fileNameM;
-(id)diffAt:(long long)arg1 ;
-(long long)computeMergeLineNumberFor:(id)arg1 ;
-(VerticalRangePair)rangeForLine:(long long)arg1 delta:(long long)arg2 andLine:(long long)arg3 delta:(long long)arg4 ;
-(VerticalRangePair)rangeForLine:(long long)arg1 delta:(long long)arg2 andLine:(long long)arg3 delta:(long long)arg4 withUpFudge:(double)arg5 andDownFudge:(double)arg6 inMergeView:(char)arg7 ;
-(id)textForView:(long long)arg1 :(long long)arg2 :(long long)arg3 ;
-(char)isSelected:(long long)arg1 ;
-(id)fileSet;
-(void)redoDiff:(id)arg1 ;
-(void)copySelectedItems:(id)arg1 ;
-(void)reflectAutoScroll:(id)arg1 ;
-(void)highlightRect:(CGRect)arg1 inTextView:(id)arg2 doShading:(char)arg3 doOutline:(char)arg4 ;
-(void)prevDiff:(id)arg1 ;
-(void)nextDiff:(id)arg1 ;
-(void)mergeDiffDirection:(int)arg1 ;
-(void)replacedText:(id)arg1 withText:(id)arg2 atCP:(long long)arg3 ;
-(void)computeDiffRectsAndScroller;
-(void)scrollToCurrentDiff;
-(void)updateDocumentEdited:(id)arg1 ;
-(char)diffDirectionEdited;
-(char)isDocumentManuallyEdited;
-(void)setDiffDirectionEdited:(char)arg1 ;
-(double)startOfLine:(long long)arg1 forText:(id)arg2 ;
-(CGRect)rectForDiff:(long long)arg1 :(long long)arg2 ;
-(long long)sideFromTxt:(id)arg1 ;
-(long long)firstDiffToConsider:(const CGRect*)arg1 :(long long)arg2 ;
-(char)showShadingForDiff:(long long)arg1 forMergeView:(char)arg2 ;
-(char)showOutlineForDiff:(long long)arg1 forMergeView:(char)arg2 ;
-(id)lineColorForConflictState:(char)arg1 ;
-(void)setupText:(id)arg1 withFont:(id)arg2 delegate:(id)arg3 ;
-(void)setupScrollView:(id)arg1 withText:(id)arg2 ;
-(void)notifyScrollAction:(id)arg1 ;
-(double)getTargetPositionFromLeft:(double)arg1 ;
-(void)notifyScroll:(double)arg1 ;
-(void)moveToDiffPosition:(long long)arg1 scrollIfNecessary:(char)arg2 ;
-(char)mergeViewIsDisplayed;
-(double)getKludgeFactor;
-(double)mergeViewYPositionForTarget:(double)arg1 ;
-(void)notifySelectDiffNumber:(long long)arg1 extendSelection:(char)arg2 scrollIfNecessary:(char)arg3 ;
-(void)nextState:(int)arg1 includeConflict:(char)arg2 ;
-(void)prevState:(int)arg1 includeConflict:(char)arg2 ;
-(void)positionBasedOnText:(id)arg1 ;
-(long long)scrollViewToUseAsDefault;
-(double)getTargetPositionFromRight:(double)arg1 ;
-(double)getTargetPercentageFromMerge:(double)arg1 ;
-(double)getTargetPositionFromSide:(long long)arg1 ;
-(void)positionBasedOn:(long long)arg1 ;
-(char)setStartEndFromString:(id)arg1 :(long long*)arg2 :(long long*)arg3 ;
-(id)getFirstTextObject;
-(id)stringAsRepresentedFilename:(id)arg1 ;
-(void)computeDiffRects;
-(void)computeTotalScrollSize;
-(void)setBoldsInTextStorage:(id)arg1 from:(long long)arg2 to:(long long)arg3 usingBoldsList:(id)arg4 ;
-(void)modifyMergeForDiff:(id)arg1 toState:(int)arg2 ;
-(unsigned long long)readFile:(id)arg1 intoTextObject:(id)arg2 ;
-(void)computeLeftRightStats;
-(void)computeStreams;
-(void)updateMergeToReflectDiffList;
-(void)saveMerge:(id)arg1 ;
-(char)verifyCanLooseMergeChanges:(id)arg1 message:(id)arg2 ;
-(void)setupDiffList;
-(void)clearDocumentEdited;
-(void)setupFileNameDisplaysForLeft:(id)arg1 right:(id)arg2 merge:(id)arg3 ;
-(void)updateDiffMarks;
-(VerticalRangePair)rangeForDiffItem:(id)arg1 ;
-(void)shiftRange:(VerticalRangePair*)arg1 delta:(double)arg2 delta:(double)arg3 ;
-(long long)lineNumberForPosition:(double)arg1 forText:(id)arg2 ;
-(void)setGlobalScrollPosition:(double)arg1 :(double*)arg2 :(double*)arg3 :(double*)arg4 ;
-(id)textFor:(long long)arg1 lines:(long long)arg2 in:(id)arg3 ;
-(id)stringForDiffItem:(id)arg1 withState:(int)arg2 ;
-(void)setMergeForDiff:(long long)arg1 toState:(int)arg2 ;
-(void)saveMergeAsName:(id)arg1 ;
-(void)saveMergeAs:(id)arg1 ;
-(void)removeDelegatesFromScrollView:(id)arg1 ;
-(void)closeInternals;
-(void)installFakeMergeView:(CGRect)arg1 superView:(id)arg2 ;
-(void)installRealMergeView:(CGRect)arg1 superView:(id)arg2 ;
-(void)draw:(id)arg1 ;
-(id)imageForCellWithState:(long long)arg1 size:(CGSize)arg2 ;
-(void)addNewlines:(long long)arg1 startLine:(long long)arg2 ;
-(void)_delayedComputeDiffs;
-(double)spanForLinesFrom:(long long)arg1 to:(long long)arg2 forText:(id)arg3 ;
-(void)setDiffWindow:(id)arg1 ;
-(void)setScrollView1:(id)arg1 ;
-(void)setScrollView2:(id)arg1 ;
-(void)setScrollViewM:(id)arg1 ;
-(void)setGlobalScroller:(id)arg1 ;
-(void)setMarkView:(id)arg1 ;
-(long long)diffNumberForPosition:(CGPoint)arg1 txtObj:(id)arg2 ;
-(void)nextLeft:(id)arg1 ;
-(void)prevLeft:(id)arg1 ;
-(void)nextRight:(id)arg1 ;
-(void)prevRight:(id)arg1 ;
-(void)nextConflict:(id)arg1 ;
-(void)prevConflict:(id)arg1 ;
-(void)chooseSourcePopUp1:(id)arg1 ;
-(void)chooseSourcePopUp2:(id)arg1 ;
-(void)chooseSourcePopUpM:(id)arg1 ;
-(void)clearText:(id)arg1 ;
-(void)setMergeSelectMatrix:(id)arg1 ;
-(void)updateScrollView;
-(void)notifyMarkViewMoved:(double)arg1 ;
-(void)notifyMouseUp:(id)arg1 ;
-(void)mergeDiff:(id)arg1 ;
-(double)getMaximumPositionForMarkView;
-(double)getMinimumPositionForMarkView;
-(double)mergeViewHeight;
-(void)setLeftRightButtons:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)window;
-(char)validateMenuItem:(id)arg1 ;
-(void)close;
-(double)lineWidth;
-(char)isOpaque;
-(void)selectAll:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(CGSize)windowWillResize:(id)arg1 toSize:(CGSize)arg2 ;
-(NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(char)isDocumentEdited;
-(void)mouseMoved:(id)arg1 ;
-(char)windowShouldClose:(id)arg1 ;
-(void)windowDidResize:(id)arg1 ;
-(void)windowDidBecomeMain:(id)arg1 ;
-(void)windowDidResignMain:(id)arg1 ;
-(void)splitViewWillResizeSubviews:(id)arg1 ;
-(void)splitViewDidResizeSubviews:(id)arg1 ;
-(void)setSplitView:(id)arg1 ;
-(void)jumpToSelection:(id)arg1 ;
@end
