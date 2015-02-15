/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <AppKit/NSViewController.h>
#import <Messages/FezWebViewViewDelegate.h>
#import <Messages/FezWebViewDragDelegate.h>
#import <Messages/FezWebViewQuickLookDelegate.h>
#import <Messages/FezWebViewPasteboardDelegate.h>
#import <Messages/AVAudioPlayerDelegate.h>
#import <Messages/NSAnimationDelegate.h>

@class NSMutableArray, NSMenuItem, ChatTranscriptViewDragDestinationHelper, ChatTranscriptViewBuddyPictureHelper, ChatTranscriptViewQLHelper, ChatTranscriptViewFileTransferHelper, NSMutableSet, TranscriptKeyDownHandler, NSTimer, IMTranscriptChatItem, SOChatDisplayController, Chat, ChatViewController, SOInputLine, FezWebView, TranscriptStyleController, TranscriptDOMController, BuddyCSSProvider, SOTranscriptSettings, NSMutableOrderedSet, ChatTranscriptViewScrollHelper, IMMessage, NSString, AVAudioPlayer, DOMElement, SODynamicLayoutManager, ProgressAnimation, SOTypingIndicatorView, NSLayoutConstraint, NSScrollView, ChatController;

@interface ChatTranscriptViewController : NSViewController <FezWebViewViewDelegate, FezWebViewDragDelegate, FezWebViewQuickLookDelegate, FezWebViewPasteboardDelegate, AVAudioPlayerDelegate, NSAnimationDelegate> {

	NSMutableArray* _selectedMessageMenuItems;
	NSMutableArray* _selectedUnsavedMessageMenuItems;
	NSMenuItem* _quickLookTransferMenuItem;
	ChatTranscriptViewDragDestinationHelper* _dragHelper;
	ChatTranscriptViewBuddyPictureHelper* _buddyPictureHelper;
	ChatTranscriptViewQLHelper* _qlHelper;
	ChatTranscriptViewFileTransferHelper* _fileTransferHelper;
	NSMutableSet* _highlightedItems;
	char _pinToBottomOnResize;
	char _pinToContentOnChange;
	char _needsNewLayout;
	char _isForcingRelayout;
	char _isLoading;
	char _canShowMessages;
	char _aboutBlankHandled;
	char _delayScrolling;
	char _handingKeyEvent;
	char _unreadCountChanged;
	NSMutableArray* _loadingIdentifiers;
	int _changeCount;
	int _changeCountForTranscriptStyleController;
	double _heightBeforeChange;
	CGRect _clipRectBeforeChange;
	TranscriptKeyDownHandler* _transcriptKeyDownHandler;
	NSMutableArray* _changeCallStacks;
	NSTimer* _changeTimeoutTimer;
	char _shouldAnimatePinAfterChange;
	char _hasHitBoundsLimit;
	char _isHandlingTick;
	char _isHandlingLiveScroll;
	IMTranscriptChatItem* _pinnedToChatItem;
	SOChatDisplayController* _chatDisplayController;
	Chat* _chat;
	ChatViewController* _chatViewController;
	SOInputLine* _inputLine;
	FezWebView* _webView;
	TranscriptStyleController* _transcriptStyleController;
	TranscriptDOMController* _transcriptDOMController;
	BuddyCSSProvider* _buddyCSSProvider;
	SOTranscriptSettings* _transcriptSettings;
	NSMutableOrderedSet* _selectedChatItems;
	ChatTranscriptViewScrollHelper* _scrollHelper;
	IMMessage* _lastClickedMessage;
	NSString* _lastRightClickedTransferGUID;
	IMTranscriptChatItem* _delayedChatItemSelection;
	AVAudioPlayer* _audioMessagePlayer;
	NSMutableArray* _audioMessagePlayingChatItems;
	DOMElement* _audioMessagePlayedWaveformElement;
	DOMElement* _audioMessageTimeElement;
	DOMElement* _audioMessageProgressElement;
	SODynamicLayoutManager* _dynamicLayoutManager;
	double _lastDistanceFromBottom;
	ProgressAnimation* _dynamicLayoutAnimation;
	NSMutableSet* _previousVisibleElements;
	SOTypingIndicatorView* _typingView;
	NSLayoutConstraint* _typingIndicatorXConstraint;
	NSLayoutConstraint* _typingIndicatorYConstraint;

}

@property (nonatomic,retain) IMTranscriptChatItem * pinnedToChatItem;                            //@synthesize pinnedToChatItem=_pinnedToChatItem - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) char scrolling; 
@property (nonatomic,readonly) char isAnimatingReceipt; 
@property (assign,nonatomic) char shouldAnimatePinAfterChange;                                   //@synthesize shouldAnimatePinAfterChange=_shouldAnimatePinAfterChange - In the implementation block
@property (assign,nonatomic) double topOverlap; 
@property (assign,nonatomic) double bottomOverlap; 
@property (nonatomic,retain) SOChatDisplayController * chatDisplayController;                    //@synthesize chatDisplayController=_chatDisplayController - In the implementation block
@property (nonatomic,retain) Chat * chat;                                                        //@synthesize chat=_chat - In the implementation block
@property (assign,nonatomic,__weak) ChatViewController * chatViewController;                     //@synthesize chatViewController=_chatViewController - In the implementation block
@property (assign,nonatomic) SOInputLine * inputLine;                                            //@synthesize inputLine=_inputLine - In the implementation block
@property (nonatomic,retain) FezWebView * webView;                                               //@synthesize webView=_webView - In the implementation block
@property (readonly) NSScrollView * webViewScrollView; 
@property (nonatomic,retain) TranscriptStyleController * transcriptStyleController;              //@synthesize transcriptStyleController=_transcriptStyleController - In the implementation block
@property (nonatomic,retain) TranscriptDOMController * transcriptDOMController;                  //@synthesize transcriptDOMController=_transcriptDOMController - In the implementation block
@property (nonatomic,retain) BuddyCSSProvider * buddyCSSProvider;                                //@synthesize buddyCSSProvider=_buddyCSSProvider - In the implementation block
@property (nonatomic,readonly) char showPictures; 
@property (nonatomic,readonly) char showNames; 
@property (nonatomic,retain) SOTranscriptSettings * transcriptSettings;                          //@synthesize transcriptSettings=_transcriptSettings - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * selectedChatItems;                          //@synthesize selectedChatItems=_selectedChatItems - In the implementation block
@property (readonly) ChatController * chatController; 
@property (nonatomic,retain) ChatTranscriptViewScrollHelper * scrollHelper;                      //@synthesize scrollHelper=_scrollHelper - In the implementation block
@property (assign) char hasHitBoundsLimit;                                                       //@synthesize hasHitBoundsLimit=_hasHitBoundsLimit - In the implementation block
@property (readonly) CGRect visibleContentBounds; 
@property (nonatomic,retain) IMMessage * lastClickedMessage;                                     //@synthesize lastClickedMessage=_lastClickedMessage - In the implementation block
@property (nonatomic,retain) NSString * lastRightClickedTransferGUID;                            //@synthesize lastRightClickedTransferGUID=_lastRightClickedTransferGUID - In the implementation block
@property (nonatomic,retain) IMTranscriptChatItem * delayedChatItemSelection;                    //@synthesize delayedChatItemSelection=_delayedChatItemSelection - In the implementation block
@property (nonatomic,retain) AVAudioPlayer * audioMessagePlayer;                                 //@synthesize audioMessagePlayer=_audioMessagePlayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioMessagePlayingChatItems;                      //@synthesize audioMessagePlayingChatItems=_audioMessagePlayingChatItems - In the implementation block
@property (nonatomic,retain) DOMElement * audioMessagePlayedWaveformElement;                     //@synthesize audioMessagePlayedWaveformElement=_audioMessagePlayedWaveformElement - In the implementation block
@property (nonatomic,retain) DOMElement * audioMessageTimeElement;                               //@synthesize audioMessageTimeElement=_audioMessageTimeElement - In the implementation block
@property (nonatomic,retain) DOMElement * audioMessageProgressElement;                           //@synthesize audioMessageProgressElement=_audioMessageProgressElement - In the implementation block
@property (nonatomic,retain) SODynamicLayoutManager * dynamicLayoutManager;                      //@synthesize dynamicLayoutManager=_dynamicLayoutManager - In the implementation block
@property (assign,nonatomic) double lastDistanceFromBottom;                                      //@synthesize lastDistanceFromBottom=_lastDistanceFromBottom - In the implementation block
@property (nonatomic,retain) ProgressAnimation * dynamicLayoutAnimation;                         //@synthesize dynamicLayoutAnimation=_dynamicLayoutAnimation - In the implementation block
@property (nonatomic,retain) NSMutableSet * previousVisibleElements;                             //@synthesize previousVisibleElements=_previousVisibleElements - In the implementation block
@property (assign,nonatomic) char isHandlingTick;                                                //@synthesize isHandlingTick=_isHandlingTick - In the implementation block
@property (assign,nonatomic) char isHandlingLiveScroll;                                          //@synthesize isHandlingLiveScroll=_isHandlingLiveScroll - In the implementation block
@property (nonatomic,retain) SOTypingIndicatorView * typingView;                                 //@synthesize typingView=_typingView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * typingIndicatorXConstraint;                    //@synthesize typingIndicatorXConstraint=_typingIndicatorXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * typingIndicatorYConstraint;                    //@synthesize typingIndicatorYConstraint=_typingIndicatorYConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultViewMenu;
+(void)initialize;
-(void)highlightSearchString:(id)arg1 ;
-(void)_boundsChanged:(id)arg1 ;
-(void)_chatDisplayControllerChatDidChange:(id)arg1 ;
-(unsigned long long)maximumNumberOfMessagesVisibleForHeight:(double)arg1 ;
-(ChatController *)chatController;
-(void)setShouldAnimatePinAfterChange:(char)arg1 ;
-(void)scrollToEndSmoothly:(char)arg1 ;
-(void)restoreSavedScrollPosition:(double)arg1 ;
-(id)quicklookPreviewPanelDataSource;
-(void)setTopOverlap:(double)arg1 ;
-(void)setBottomOverlap:(double)arg1 ;
-(void)_unreadCountChanged:(id)arg1 ;
-(AVAudioPlayer *)audioMessagePlayer;
-(void)setTranscriptSettings:(SOTranscriptSettings *)arg1 ;
-(void)_chatDisplayControllerChatWillChange:(id)arg1 ;
-(void)_chatDisplayControllerDidStopDisplayingSearchResults:(id)arg1 ;
-(void)_chatDisplayControllerDisplayedSearchResultDidChange:(id)arg1 ;
-(char)isPinnedToBottom;
-(TranscriptDOMController *)transcriptDOMController;
-(NSScrollView *)webViewScrollView;
-(void)_updateBodyMarginsWithExtraTop:(double)arg1 extraBottom:(double)arg2 ;
-(void)_updateBackgroundSize;
-(void)_updateTypingIndicatorPosition;
-(void)_selectionChanged:(id)arg1 ;
-(void)_applyParticipantDisplayToTranscriptStyleController;
-(void)_fontStyleChanged:(id)arg1 ;
-(void)_commonChatTranscriptViewControllerInit;
-(double)_boundsLimitForHeight:(double)arg1 ;
-(void)_loadMoreHistory;
-(void)setPinnedToChatItem:(IMTranscriptChatItem *)arg1 ;
-(void)_loadMoreIfNeeded;
-(void)dateTimeDisplayChanged:(id)arg1 ;
-(NSMutableOrderedSet *)selectedChatItems;
-(void)forwardSelectedMessages:(id)arg1 ;
-(void)quickLookTransfer;
-(NSString *)lastRightClickedTransferGUID;
-(void)_quickLookGUID:(id)arg1 threeFingerTap:(char)arg2 ;
-(void)_selectionCleared:(id)arg1 ;
-(void)_initWebView;
-(void)_handleChatItemsChanged:(id)arg1 ;
-(void)_chatControllerDidCompleteDelete:(id)arg1 ;
-(void)_handleSearchResultsDidChange:(id)arg1 ;
-(void)clearUnreadMessageIfVisible;
-(void)_layoutIfNecessary;
-(void)setTranscriptStyleController:(TranscriptStyleController *)arg1 ;
-(void)_createTranscriptStyleController;
-(void)insertAllMessages;
-(void)scrollToBeginningSmoothly:(char)arg1 ;
-(void)_documentFrameChanged:(id)arg1 ;
-(void)_liveScrollStart:(id)arg1 ;
-(void)_liveScrollEnd:(id)arg1 ;
-(void)_userScrolled:(id)arg1 ;
-(void)setTranscriptDOMController:(TranscriptDOMController *)arg1 ;
-(void)_keepClicked:(id)arg1 ;
-(void)_videoMessageStarted:(id)arg1 ;
-(void)_videoMessagePaused:(id)arg1 ;
-(void)_videoMessageEnded:(id)arg1 ;
-(void)_videoMessageSeeked:(id)arg1 ;
-(void)_videoMessageVolumeChanged:(id)arg1 ;
-(void)_audioMessageClicked:(id)arg1 ;
-(void)_messageClicked:(id)arg1 ;
-(void)_ddResultClicked:(id)arg1 ;
-(void)_messageDBLClicked:(id)arg1 ;
-(void)_clearTextSelection:(id)arg1 ;
-(void)_setupTranscriptStyleController;
-(void)clearHighlightedItems;
-(void)_changeTimeoutFired:(id)arg1 ;
-(TranscriptStyleController *)transcriptStyleController;
-(char)scrollToChatItem:(id)arg1 ;
-(void)scrollToPosition:(double)arg1 smoothly:(char)arg2 ;
-(void)_updateDynamicElements;
-(void)_loadBaseDocument;
-(void)clearAllMessages;
-(double)savedScrollPosition;
-(void)scrollFromPosition:(double)arg1 toPosition:(double)arg2 smoothly:(char)arg3 ;
-(void)scrollToEndWithTime:(float)arg1 ;
-(char)scrollToChatItem:(id)arg1 center:(char)arg2 ;
-(CGRect)visibleContentBounds;
-(void)_checkTypingIndicator;
-(void)_reloadAttachmentsIfNeeded;
-(SOTypingIndicatorView *)typingView;
-(void)_updateFont:(id)arg1 ;
-(CGPoint)typingIndicatorPosition;
-(void)_transcriptSettingsParticipantDisplayDidChange:(id)arg1 ;
-(void)_transcriptSettingsTextSizeDisplayDidChange:(id)arg1 ;
-(void)_applyTextSizeDisplayToTranscriptController;
-(char)lastMessageIsVisible;
-(char)shouldPinToBottom;
-(double)distanceFromBottom;
-(NSRange)visibleChatItemRange;
-(double)_verticalMidPoint;
-(void)_startDynamicLayoutAnimation;
-(void)_dynamicPositionTick:(char)arg1 ;
-(char)_unsavedMessageSelected;
-(char)_errorShouldOfferRetryForMessage:(id)arg1 ;
-(id)_localizedErrorMessageForIMMessage:(id)arg1 ;
-(void)_augmentDDContext:(id)arg1 withChatItem:(id)arg2 ;
-(NSMutableArray *)audioMessagePlayingChatItems;
-(void)stopPlayingAudio;
-(void)setAudioMessagePlayingChatItems:(NSMutableArray *)arg1 ;
-(void)startPlayingAudioForChatItem:(id)arg1 ;
-(void)setDelayedChatItemSelection:(IMTranscriptChatItem *)arg1 ;
-(void)_clearDelayedSelectionForVideo;
-(void)setLastClickedMessage:(IMMessage *)arg1 ;
-(void)_showMessageErrorDialogForSavedChat;
-(void)_showMessageErrorDialogForMessage:(id)arg1 ;
-(void)_setUpResponderChain;
-(IMTranscriptChatItem *)delayedChatItemSelection;
-(void)highlightChatItem:(id)arg1 ;
-(void)_increaseResourceLoadCountForURL:(id)arg1 ;
-(void)_decreaseResourceLoadCountForURL:(id)arg1 ;
-(void)finishLoad;
-(void)setLastRightClickedTransferGUID:(NSString *)arg1 ;
-(void)setupFileTransferContextualMenuItems;
-(void)setupSelectedMessageContextualMenuItems;
-(void)setupSelectedUnsavedMessageContextualMenuItems;
-(char)_shouldShowSendAsSMS;
-(void)downgradeMessage:(id)arg1 ;
-(void)setAudioMessagePlayer:(AVAudioPlayer *)arg1 ;
-(void)setAudioMessagePlayedWaveformElement:(DOMElement *)arg1 ;
-(void)setAudioMessageTimeElement:(DOMElement *)arg1 ;
-(void)setAudioMessageProgressElement:(DOMElement *)arg1 ;
-(void)updateAudioMessageTime;
-(void)updatePlayProgress;
-(DOMElement *)audioMessageTimeElement;
-(DOMElement *)audioMessageProgressElement;
-(DOMElement *)audioMessagePlayedWaveformElement;
-(void)didFinishPlayingAudio;
-(void)_watchMessageAddressingDidChange:(id)arg1 ;
-(void)fezWebView:(id)arg1 setFrameSize:(CGSize)arg2 ;
-(void)fezWebViewWillStartLiveResize:(id)arg1 ;
-(void)fezWebViewDidEndLiveResize:(id)arg1 ;
-(void)fezWebViewShouldRegisterForDraggedTypes:(id)arg1 ;
-(unsigned long long)fezWebView:(id)arg1 draggingEntered:(id)arg2 ;
-(unsigned long long)fezWebView:(id)arg1 draggingUpdated:(id)arg2 ;
-(void)fezWebView:(id)arg1 draggingExited:(id)arg2 ;
-(char)fezWebView:(id)arg1 prepareForDragOperation:(id)arg2 ;
-(char)fezWebView:(id)arg1 performDragOperation:(id)arg2 ;
-(void)fezWebView:(id)arg1 concludeDragOperation:(id)arg2 ;
-(char)fezWebView:(id)arg1 quickLookWithEvent:(id)arg2 ;
-(char)hasSelectedMessages;
-(void)insertTextFromSelectedMessageToPasteboard:(id)arg1 ;
-(double)topOverlap;
-(double)bottomOverlap;
-(id)lastVisibleChatItem;
-(void)scrollHelperDidFinishScrolling;
-(id)visibleDOMElements;
-(id)chatItemRects;
-(id)visibleChatItems;
-(void)addSampleChatItem:(id)arg1 ;
-(void)showErrorSheetForExpiredFileTransfer;
-(IMTranscriptChatItem *)pinnedToChatItem;
-(char)shouldAnimatePinAfterChange;
-(ChatTranscriptViewScrollHelper *)scrollHelper;
-(void)setScrollHelper:(ChatTranscriptViewScrollHelper *)arg1 ;
-(IMMessage *)lastClickedMessage;
-(SODynamicLayoutManager *)dynamicLayoutManager;
-(void)setDynamicLayoutManager:(SODynamicLayoutManager *)arg1 ;
-(double)lastDistanceFromBottom;
-(void)setLastDistanceFromBottom:(double)arg1 ;
-(ProgressAnimation *)dynamicLayoutAnimation;
-(void)setDynamicLayoutAnimation:(ProgressAnimation *)arg1 ;
-(NSMutableSet *)previousVisibleElements;
-(void)setPreviousVisibleElements:(NSMutableSet *)arg1 ;
-(char)isHandlingTick;
-(void)setIsHandlingTick:(char)arg1 ;
-(char)isHandlingLiveScroll;
-(void)setIsHandlingLiveScroll:(char)arg1 ;
-(void)setTypingView:(SOTypingIndicatorView *)arg1 ;
-(NSLayoutConstraint *)typingIndicatorXConstraint;
-(void)setTypingIndicatorXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)typingIndicatorYConstraint;
-(void)setTypingIndicatorYConstraint:(NSLayoutConstraint *)arg1 ;
-(FezWebView *)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)beginChanges;
-(void)endChanges;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(char)arg2 ;
-(void)setWebView:(FezWebView *)arg1 ;
-(id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(SOChatDisplayController *)chatDisplayController;
-(Chat *)chat;
-(void)setChatDisplayController:(SOChatDisplayController *)arg1 ;
-(void)setChatViewController:(ChatViewController *)arg1 ;
-(void)copySelectionToFindPboard:(id)arg1 ;
-(void)makeTextLarger:(id)arg1 ;
-(void)makeTextSmaller:(id)arg1 ;
-(void)makeTextStandardSize:(id)arg1 ;
-(SOInputLine *)inputLine;
-(void)setInputLine:(SOInputLine *)arg1 ;
-(SOTranscriptSettings *)transcriptSettings;
-(void)_nameStyleChanged:(id)arg1 ;
-(void)setChat:(Chat *)arg1 ;
-(char)hasHitBoundsLimit;
-(void)setHasHitBoundsLimit:(char)arg1 ;
-(ChatViewController *)chatViewController;
-(char)showPictures;
-(void)setBuddyCSSProvider:(BuddyCSSProvider *)arg1 ;
-(BuddyCSSProvider *)buddyCSSProvider;
-(void)selectChatItem:(id)arg1 ;
-(void)deselectChatItem:(id)arg1 ;
-(char)showNames;
-(char)isAnimatingReceipt;
-(void)setTranscriptStyleFromMenuItem:(id)arg1 ;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(void)animation:(id)arg1 didReachProgressMark:(float)arg2 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)viewDidLayout;
-(void)delete:(id)arg1 ;
-(void)deleteMessages:(id)arg1 ;
-(char)webView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
-(void)webView:(id)arg1 willPerformDragSourceAction:(unsigned long long)arg2 fromPoint:(CGPoint)arg3 withPasteboard:(id)arg4 ;
-(void)webView:(id)arg1 didLayout:(unsigned long long)arg2 ;
-(id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 ;
-(char)webView:(id)arg1 validateUserInterfaceItem:(id)arg2 defaultValidation:(char)arg3 ;
-(char)canMakeTextLarger;
-(char)canMakeTextSmaller;
-(char)canMakeTextStandardSize;
-(void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(char)isScrolling;
@end
