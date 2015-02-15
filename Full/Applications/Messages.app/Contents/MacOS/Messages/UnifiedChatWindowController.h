/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <Messages/ChatWindowController.h>
#import <Messages/NSSplitViewDelegate.h>
#import <Messages/NSUserNotificationCenterDelegate.h>
#import <Messages/NSMenuDelegate.h>
#import <Messages/IMSystemMonitorListener.h>

@class UnifiedChatListViewController, NSString, ChatWindowSplitViewController, PlacardView, SONewChatDisplayController, NSMapTable, NSAlert;

@interface UnifiedChatWindowController : ChatWindowController <NSSplitViewDelegate, NSUserNotificationCenterDelegate, NSMenuDelegate, IMSystemMonitorListener> {

	char _searchCancelledViaButton;
	UnifiedChatListViewController* _unifiedChatListViewController;
	NSString* _deferredSelectedGUID;
	ChatWindowSplitViewController* _splitViewController;
	PlacardView* _noMessageSelectedPlacard;
	SONewChatDisplayController* _zeroChatDisplayController;
	id _queuedChatDisplayControllerObserver;
	NSMapTable* _displayCompletionBlockMap;
	NSAlert* _deliveryFailureAlert;
	id _undoObserver;
	id _selectItemObserver;

}

@property (nonatomic,retain) UnifiedChatListViewController * unifiedChatListViewController;              //@synthesize unifiedChatListViewController=_unifiedChatListViewController - In the implementation block
@property (assign,nonatomic) char chatListHidden; 
@property (nonatomic,copy) NSString * deferredSelectedGUID;                                              //@synthesize deferredSelectedGUID=_deferredSelectedGUID - In the implementation block
@property (nonatomic,retain) ChatWindowSplitViewController * splitViewController;                        //@synthesize splitViewController=_splitViewController - In the implementation block
@property (nonatomic,retain) PlacardView * noMessageSelectedPlacard;                                     //@synthesize noMessageSelectedPlacard=_noMessageSelectedPlacard - In the implementation block
@property (nonatomic,retain) SONewChatDisplayController * zeroChatDisplayController;                     //@synthesize zeroChatDisplayController=_zeroChatDisplayController - In the implementation block
@property (nonatomic,retain) id queuedChatDisplayControllerObserver;                                     //@synthesize queuedChatDisplayControllerObserver=_queuedChatDisplayControllerObserver - In the implementation block
@property (nonatomic,retain) NSMapTable * displayCompletionBlockMap;                                     //@synthesize displayCompletionBlockMap=_displayCompletionBlockMap - In the implementation block
@property (nonatomic,retain) NSAlert * deliveryFailureAlert;                                             //@synthesize deliveryFailureAlert=_deliveryFailureAlert - In the implementation block
@property (nonatomic,retain) id undoObserver;                                                            //@synthesize undoObserver=_undoObserver - In the implementation block
@property (nonatomic,retain) id selectItemObserver;                                                      //@synthesize selectItemObserver=_selectItemObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)saveUnifiedChatWindow;
+(void)encodeSharedWindowRestorableContentStateWithCoder:(id)arg1 ;
+(void)restoreUnifiedChatWindowFrame;
+(void)restoreUnifiedChatWindowGeometry;
+(void)restoreUnifiedChatWindowContents;
+(id)_allUnifiedChatWindowControllers;
+(id)sharedController;
-(void)requestValidation:(id)arg1 ;
-(void)showInBuddyList:(id)arg1 ;
-(void)inviteToAudioChat:(id)arg1 ;
-(void)inviteToVideoChat:(id)arg1 ;
-(void)inviteToARDAsClient:(id)arg1 ;
-(void)inviteToARDAsServer:(id)arg1 ;
-(void)searchInSpotlight:(id)arg1 ;
-(void)block:(id)arg1 ;
-(void)showInAddressBook:(id)arg1 ;
-(void)showSelectedBuddyInfo:(id)arg1 ;
-(void)showSelectedBuddyProfile:(id)arg1 ;
-(void)addABuddy:(id)arg1 ;
-(void)addAndDisplayChatDisplayControllerForNewChatWithHandles:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addLoadAndDisplayChatDisplayControllerForChatWithHandles:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)existingChatDisplayControllerForChat:(id)arg1 ;
-(void)replaceChatDisplayController:(id)arg1 withChatDisplayController:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)closeChatDisplayController:(id)arg1 ;
-(void)displayChatDisplayController:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(UnifiedChatListViewController *)unifiedChatListViewController;
-(unsigned long long)unsentMessageCount;
-(void)saveDateAndSummaries;
-(void)deleteSelectedConversation:(id)arg1 ;
-(void)closeSelectedConversation:(id)arg1 ;
-(id)alertTextForWindowClosingSheet;
-(id)informativeTextForUnsentMessageCount:(unsigned long long)arg1 ;
-(void)showUnsentMessages;
-(void)_closeConversation:(id)arg1 ;
-(char)containsConversation:(id)arg1 ;
-(void)tryToCloseChatDisplayController:(id)arg1 ;
-(void)restoreContentStateWithCoder:(id)arg1 ;
-(void)tryToCloseChatDisplayControllers:(id)arg1 ;
-(void)setChatListHidden:(char)arg1 ;
-(void)displayChatDisplayControllerAtIndex:(unsigned long long)arg1 ;
-(void)selectDeferredChat;
-(char)chatListHidden;
-(void)setChatListHidden:(char)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)displayChatWithChatGUID:(id)arg1 ;
-(void)highlightChatItem:(id)arg1 inChat:(id)arg2 ;
-(void)gotoPreviousChat:(id)arg1 ;
-(void)gotoNextChat:(id)arg1 ;
-(ChatWindowSplitViewController *)splitViewController;
-(void)_updateUIForChatListHiddenState;
-(void)encodeRestorableContentStateWithCoder:(id)arg1 ;
-(void)_finishTALRestore;
-(void)_loadWindow;
-(double)chatListWidth;
-(void)setChatListWidth:(double)arg1 ;
-(NSMapTable *)displayCompletionBlockMap;
-(void)setDisplayCompletionBlockMap:(NSMapTable *)arg1 ;
-(PlacardView *)noMessageSelectedPlacard;
-(void)_systemBecameActive:(id)arg1 ;
-(void)_messageDeliveryFailure:(id)arg1 ;
-(void)setUnifiedChatListViewController:(UnifiedChatListViewController *)arg1 ;
-(void)_unifiedChatListContentsControllerSelectionDidChange:(id)arg1 ;
-(void)setZeroChatDisplayController:(SONewChatDisplayController *)arg1 ;
-(void)_setupZeroChatViewMode;
-(void)_makeInputLineFirstResponder;
-(SONewChatDisplayController *)zeroChatDisplayController;
-(void)setQueuedChatDisplayControllerObserver:(id)arg1 ;
-(void)_removeUndoObserver;
-(void)restoreChatWithInfo:(id)arg1 ;
-(void)_closeAndSaveChatDisplayControllers:(id)arg1 ;
-(void)_setChatDisplayCompletionBlock:(/*^block*/id)arg1 forChatDisplayController:(id)arg2 ;
-(void)displayChatWithChatGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setDeferredSelectedGUID:(NSString *)arg1 ;
-(NSString *)deferredSelectedGUID;
-(void)openStandaloneWindowForChatController:(id)arg1 ;
-(void)deleteChatDisplayController:(id)arg1 ;
-(void)openStandaloneChatWindow:(id)arg1 ;
-(void)deleteSelectedConversationNoPrompt:(id)arg1 ;
-(void)_clearUnreadIfNeeded;
-(void)choosePerson:(id)arg1 ;
-(void)contextCloseOtherTabs:(id)arg1 ;
-(void)clickFadeView:(id)arg1 ;
-(void)setSplitViewController:(ChatWindowSplitViewController *)arg1 ;
-(void)setNoMessageSelectedPlacard:(PlacardView *)arg1 ;
-(id)queuedChatDisplayControllerObserver;
-(NSAlert *)deliveryFailureAlert;
-(void)setDeliveryFailureAlert:(NSAlert *)arg1 ;
-(id)undoObserver;
-(void)setUndoObserver:(id)arg1 ;
-(id)selectItemObserver;
-(void)setSelectItemObserver:(id)arg1 ;
-(void)find:(id)arg1 ;
-(void)findNext:(id)arg1 ;
-(void)findPrevious:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2 ;
-(char)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2 ;
-(void)sendFile:(id)arg1 ;
-(void)addToAddressBook:(id)arg1 ;
-(void)screenSaverDidStop;
-(void)screenUnlocked;
-(unsigned long long)unreadMessageCount;
-(void)chatDisplayControllerWillChange:(id)arg1 ;
-(void)chatDisplayControllerDidChange;
-(void)_chatDisplayControllerRecipientsDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidateRestorableState;
-(char)validateMenuItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(id)windowWillReturnUndoManager:(id)arg1 ;
-(void)window:(id)arg1 willEncodeRestorableState:(id)arg2 ;
-(void)windowDidResignKey:(id)arg1 ;
-(void)windowDidBecomeMain:(id)arg1 ;
-(void)windowDidEnterFullScreen:(id)arg1 ;
-(void)windowWillExitFullScreen:(id)arg1 ;
-(void)windowDidLoad;
-(id)windowTitle;
-(void)swipeWithEvent:(id)arg1 ;
@end
