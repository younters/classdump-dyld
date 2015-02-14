/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/TSWPEditingController.h>
#import <iBAReaderKit/NSSpeechSynthesizerDelegate.h>
#import <iBAReaderKit/BKPlatformPopoverDelegate.h>
#import <iBAReaderKit/BKMacSelectionPopoverViewControllerDelegate.h>

@class BKMacSelectionPopover, TSWPSelection, NSEvent, IMActivityController, BKPlatformPopover, NSString;

@interface THWPEditingController : TSWPEditingController <NSSpeechSynthesizerDelegate, BKPlatformPopoverDelegate, BKMacSelectionPopoverViewControllerDelegate> {

	char mStartingInitialSelectionDrag;
	char mCreatedFromAnnotationHUD;
	char _didLookUp;
	char _pendingLookUp;
	char _selectedMultipleWords;
	BKMacSelectionPopover* _highlightPopover;
	TSWPSelection* _pendingSelection;
	NSEvent* _highlightPopoverEvent;
	IMActivityController* _activityController;
	BKPlatformPopover* _definitionPopover;

}

@property (assign,nonatomic) char startingInitialSelectionDrag; 
@property (assign,nonatomic) char createdFromAnnotationHUD; 
@property (nonatomic,retain) BKMacSelectionPopover * highlightPopover;               //@synthesize highlightPopover=_highlightPopover - In the implementation block
@property (nonatomic,copy) TSWPSelection * pendingSelection;                         //@synthesize pendingSelection=_pendingSelection - In the implementation block
@property (nonatomic,retain) NSEvent * highlightPopoverEvent;                        //@synthesize highlightPopoverEvent=_highlightPopoverEvent - In the implementation block
@property (assign,nonatomic) char didLookUp;                                         //@synthesize didLookUp=_didLookUp - In the implementation block
@property (assign,nonatomic) char pendingLookUp;                                     //@synthesize pendingLookUp=_pendingLookUp - In the implementation block
@property (assign,nonatomic) char selectedMultipleWords;                             //@synthesize selectedMultipleWords=_selectedMultipleWords - In the implementation block
@property (nonatomic,retain) IMActivityController * activityController;              //@synthesize activityController=_activityController - In the implementation block
@property (nonatomic,retain) BKPlatformPopover * definitionPopover;                  //@synthesize definitionPopover=_definitionPopover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)selectionPopoverViewControllerCanHighlight:(id)arg1 ;
-(double)selectionPopoverViewControllerContentScale;
-(int)selectionPopoverViewControllerCurrentNoteStyle;
-(char)selectionPopoverViewControllerCurrentNoteStyleIsUnderline;
-(char)selectionPopoverViewControllerCanRemoveNote:(id)arg1 ;
-(char)selectionPopoverViewControllerCanAddNote:(id)arg1 ;
-(char)selectionPopoverViewControllerCanRemoveHighlight:(id)arg1 ;
-(char)selectionPopoverViewControllerCanCopy:(id)arg1 ;
-(char)selectionPopoverViewControllerCanShowGlossary:(id)arg1 ;
-(void)p_showGlossary:(id)arg1 ;
-(id)selectionPopoverViewControllerLookUpText;
-(char)selectionPopoverViewControllerCanDefine:(id)arg1 ;
-(char)selectionPopoverViewControllerCanSearchBook:(id)arg1 ;
-(char)selectionPopoverViewControllerCanSearch:(id)arg1 ;
-(id)selectionPopoverViewControllerSharingServices;
-(char)selectionPopoverViewControllerCanStartSpeaking:(id)arg1 ;
-(char)selectionPopoverViewControllerCanStopSpeaking:(id)arg1 ;
-(void)selectionPopoverViewControllerHighlightWithStyle:(int)arg1 ;
-(void)selectionPopoverViewControllerShareWithService:(id)arg1 ;
-(void)selectionPopoverViewControllerAddNote:(id)arg1 ;
-(void)selectionPopoverViewControllerRemoveNote:(id)arg1 ;
-(void)selectionPopoverViewControllerRemoveHighlight:(id)arg1 ;
-(void)selectionPopoverViewControllerCopy:(id)arg1 ;
-(void)selectionPopoverViewControllerShowGlossary:(id)arg1 ;
-(void)selectionPopoverViewControllerDefine:(id)arg1 ;
-(void)selectionPopoverViewControllerSearch:(id)arg1 ;
-(void)selectionPopoverViewControllerSearchWeb:(id)arg1 ;
-(void)selectionPopoverViewControllerSearchWikipedia:(id)arg1 ;
-(void)selectionPopoverViewControllerStartSpeaking:(id)arg1 ;
-(void)selectionPopoverViewControllerStopSpeaking:(id)arg1 ;
-(void)bkPopoverDidClose:(id)arg1 ;
-(void)setActivityController:(IMActivityController *)arg1 ;
-(IMActivityController *)activityController;
-(char)p_selectionHasNote:(id)arg1 ;
-(char)p_selectionHasHighlight:(id)arg1 ;
-(char)p_selectionIsStrictSubrangeOfHighlight:(id)arg1 ;
-(char)p_selection:(id)arg1 highlightMatchesStyle:(int)arg2 ;
-(void)setStartingInitialSelectionDrag:(char)arg1 ;
-(char)wantsKeyboard;
-(char)selectedMultipleWords;
-(void)p_cancelPendingPopovers;
-(void)p_canvasWillScroll:(id)arg1 ;
-(void)p_removeNote;
-(char)p_canAddNote;
-(void)shareSelection:(id)arg1 ;
-(char)p_canEditNote;
-(void)menuCopy:(id)arg1 ;
-(char)p_canHighlight;
-(void)showDictionary:(id)arg1 ;
-(char)didLookUp;
-(void)p_addNote;
-(void)setDidLookUp:(char)arg1 ;
-(void)lookUp:(id)arg1 ;
-(void)tappedOnKnob:(id)arg1 ;
-(char)p_selectionIsExactRangeOfHighlight:(id)arg1 ;
-(char)p_selectionContainsSomeUnhighlightedText:(id)arg1 ;
-(void)setPendingLookUp:(char)arg1 ;
-(char)pendingLookUp;
-(void)addNote:(id)arg1 ;
-(char)p_canShareSelection:(id)arg1 ;
-(void)didBecomeTextInputEditor;
-(char)createdFromAnnotationHUD;
-(TSWPSelection *)pendingSelection;
-(void)setHighlightPopoverEvent:(NSEvent *)arg1 ;
-(char)p_canModifyAnnotations;
-(BKPlatformPopover *)definitionPopover;
-(id)p_annotationForSelection:(id)arg1 ;
-(void)willResignTextInputEditor;
-(void)p_canvasDidScroll:(id)arg1 ;
-(void)p_closePopoversNotification:(id)arg1 ;
-(char)p_canAutoscrollInDirection:(int)arg1 ;
-(void)setDefinitionPopover:(BKPlatformPopover *)arg1 ;
-(char)startingInitialSelectionDrag;
-(char)p_canCopySelection:(id)arg1 ;
-(id)repForStorage:(id)arg1 range:(NSRange)arg2 ;
-(char)canHandleGesture:(id)arg1 ;
-(char)p_canStopSpeakingSelection;
-(void)highlightWithStyle:(int)arg1 ;
-(void)p_showGlossaryForSelection:(id)arg1 ;
-(int)p_currentNoteStyle;
-(void)setSelectedMultipleWords:(char)arg1 ;
-(BKMacSelectionPopover *)highlightPopover;
-(id)p_repsForStorage:(id)arg1 range:(NSRange)arg2 ;
-(id)p_annotationController;
-(void)searchSelection:(id)arg1 ;
-(void)p_startSpeakingString:(id)arg1 ;
-(void)p_addHighlightForSelection:(id)arg1 ;
-(int)currentAnnotationStyle;
-(void)p_showDictionaryForSelection:(id)arg1 ;
-(char)p_canStartSpeakingSelection:(id)arg1 ;
-(unsigned)knobTrackingTapCount;
-(void)setPendingSelection:(TSWPSelection *)arg1 ;
-(NSEvent *)highlightPopoverEvent;
-(id)p_selectionOrAnnotation;
-(id)editingReps;
-(char)p_canShowGlossaryForSelection:(id)arg1 ;
-(char)p_canSearchSelection:(id)arg1 ;
-(void)setHighlightPopover:(BKMacSelectionPopover *)arg1 ;
-(void)p_dismissPopovers;
-(void)setCreatedFromAnnotationHUD:(char)arg1 ;
-(void)layerHostContainerFocusDidChange;
-(id)initWithStorage:(id)arg1 interactiveCanvasController:(id)arg2 ;
-(void)p_presentSelectionPopoverWithSelection:(id)arg1 ;
-(void)p_windowDidResignMainNotification:(id)arg1 ;
-(void)selectionChangedWithFlags:(unsigned long long)arg1 wpFlags:(unsigned long long)arg2 ;
-(void)p_showGlossaryOrDictionary:(int)arg1 forSelection:(id)arg2 ;
-(id)p_pageRepForStorage:(id)arg1 withSelection:(id)arg2 ;
-(id)p_activityItemProviderWithCurrentSelection;
-(char)addDefinitionLookupToMenuItemsToArray:(id)arg1 ;
-(id)p_selectionOrAnnotationFromSelection:(id)arg1 ;
-(char)p_canShowDictionaryForSelection:(id)arg1 ;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)addContextualMenuItemsToMenu:(id)arg1 clickAtPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(char)autoscrollWithDirection:(int)arg1 proposedContentOffset:(CGPoint)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)handleContextMenuClickAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2 ;
-(char)shouldShowSelectedTextAsFocused;
-(char)handleGesture:(id)arg1 ;
-(void)dealloc;
-(void)startSpeaking:(id)arg1 ;
-(void)stopSpeaking:(id)arg1 ;
-(void)highlight:(id)arg1 ;
@end
