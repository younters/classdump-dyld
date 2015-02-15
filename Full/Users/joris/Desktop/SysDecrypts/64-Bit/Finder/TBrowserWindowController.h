/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TBaseBrowserWindowController.h>
#import <Finder/NSWindowDelegate.h>
#import <Finder/NSDraggingDestination.h>
#import <Finder/BrowserContainerTargeting.h>
#import <Finder/BrowserContainerSearching.h>
#import <Finder/BrowserContainerDelegate.h>
#import <Finder/TValidatorClientProtocol.h>

@class TStatusBarController, NSTimer, TBrowserContainerController, TNodeViewSettings, NSString;

@interface TBrowserWindowController : TBaseBrowserWindowController <NSWindowDelegate, NSDraggingDestination, BrowserContainerTargeting, BrowserContainerSearching, BrowserContainerDelegate, TValidatorClientProtocol> {

	TNSRef<TTabViewController *> _tabViewController;
	TNSRef<TSingleLineTabViewController *> _singleLineTabViewController;
	shared_ptr<ISpawnOrigin>* _spawnOrigin;
	BOOL _windowIsClosing;
	TNSRef<NSButton *> _closeButton;
	TNSRef<TToolbarController *> _toolbarController;
	TStatusBarController* _statusBarController;
	NSTimer* _springToFrontTimer;
	CGRect _springAnchorRect;
	OpaqueCoreDragHandlerRef _springTrackingHandler;
	CGRect _springRememberedFrame;
	long long _springRememberedWindowWeWereBehind;
	TNSRef<TTabViewItem *> _springRememberedTab;
	BOOL _springCloseWhenDragLeavesWindow;
	BOOL _initingWindow;
	BOOL _isZooming;
	BOOL _windowStateSavePending;
	BOOL _animatingTabMerge;
	CGRect _nonFullScreenWindowFrame;
	CGRect _fullScreenWindowFrame;
	TNSRef<NSWindow *> _coverWindow;
	TFullScreenAnimationInfo* _fullScreenAnimationInfo;
	double _nonFullScreenSplitterPosition;
	/*^block*/id _fullScreenExitCallback;
	TBrowserContainerController* _activeContainer;

}

@property (assign,nonatomic) BOOL windowStateSavePending;                                //@synthesize windowStateSavePending=_windowStateSavePending - In the implementation block
@property (assign,nonatomic) BOOL initingWindow;                                         //@synthesize initingWindow=_initingWindow - In the implementation block
@property (assign,nonatomic) BOOL isZooming;                                             //@synthesize isZooming=_isZooming - In the implementation block
@property (assign,nonatomic) BOOL animatingTabMerge;                                     //@synthesize animatingTabMerge=_animatingTabMerge - In the implementation block
@property (nonatomic,readonly) TStatusBarController * statusBarController;               //@synthesize statusBarController=_statusBarController - In the implementation block
@property (nonatomic,retain) TNodeViewSettings * viewSettings; 
@property (nonatomic,retain) TBrowserContainerController * activeContainer;              //@synthesize activeContainer=_activeContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)windowStaggerOffset;
+(id)defaultWindowStateForNode:(const TFENode*)arg1 ;
+(id)windowStateForNode:(const TFENode*)arg1 forceContainer:(BOOL)arg2 ;
+(BOOL)shouldShowStatusBar;
+(BOOL)shouldShowTabView;
+(void)springImmediately;
+(void)springNowWithNoSpringController;
+(BOOL)shouldForwardSelectorToContainer:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)refreshToolbarForSyncExtensionChange;
-(id)activeBaseBrowserViewController;
-(void)getTabRectsForContainers:(const vector<TBrowserContainerController *, std::__1::allocator<TBrowserContainerController *> >*)arg1 proposedRects:(vector<CGRect, std::__1::allocator<CGRect> >Ref)arg2 ;
-(void)setIsMergingTabs;
-(void)setAnimatingTabMerge:(BOOL)arg1 ;
-(void)addContainers:(id)arg1 ;
-(void)finishAnimatingTabMerge;
-(void)closeWithoutAnimation;
-(unsigned)finderScriptingModelKind;
-(BOOL)toolbarIsVisible;
-(BOOL)statusBarIsVisible;
-(void)cmdToggleStatusBar:(id)arg1 ;
-(void)showOrHideScrollbars:(BOOL)arg1 ;
-(BOOL)validateTargetForMenuItem:(id)arg1 ;
-(BOOL)validatePerformClose:(id)arg1 ;
-(BOOL)validateToggleToolbar:(id)arg1 ;
-(void)cmdToggleToolbar:(id)arg1 ;
-(BOOL)fullScreenAnimationInProgress;
-(void)setIsZooming:(BOOL)arg1 ;
-(void)setWindowStateSavePending:(BOOL)arg1 ;
-(id)initWithTargetPath:(const TFENodeVector*)arg1 forceContainer:(BOOL)arg2 spawnOrigin:(shared_ptr<ISpawnOrigin>*)arg3 desiredLocation:(CGPoint)arg4 ;
-(id)initWithTargetPath:(const TFENodeVector*)arg1 forceContainer:(BOOL)arg2 spawnOrigin:(shared_ptr<ISpawnOrigin>*)arg3 desiredLocation:(CGPoint)arg4 creationState:(id)arg5 ;
-(id)browserWindow;
-(void)selectTabForContainer:(id)arg1 ;
-(void)makeTabWithTarget:(const TFENode*)arg1 makeActive:(BOOL)arg2 addAfterActiveTab:(BOOL)arg3 ;
-(id)firstContainerWithTarget:(const TFENode*)arg1 ;
-(void)makeKeyAndOrderFront;
-(BOOL)tabViewIsVisible;
-(void)selectOrCreateTabWithTarget:(const TFENode*)arg1 windowOptions:(id)arg2 addAfterActiveTab:(BOOL)arg3 ;
-(void)closeActiveTab;
-(void)closeOrRetargetWindowForTarget:(const TFENode*)arg1 toPath:(const TFENodeVector*)arg2 originatingBrowser:(long long)arg3 ;
-(void)setCloseWhenDragLeavesWindow;
-(void)closeTrashTabs;
-(void)cmdNewTab:(id)arg1 ;
-(BOOL)validateNewTab:(id)arg1 ;
-(BOOL)canSetFocusToSearchField;
-(BOOL)windowIsSpringing;
-(BOOL)windowStateSavePending;
-(void)saveWindowState;
-(id)initWithState:(id)arg1 targetPath:(const TFENodeVector*)arg2 spawnOrigin:(shared_ptr<ISpawnOrigin>*)arg3 ;
-(TFENode*)fetchWindowProxyNode;
-(BOOL)shouldEnablePathMenuItem:(id)arg1 forNode:(const TFENode*)arg2 ;
-(void)pathPopupSelectedWithNode:(const TFENode*)arg1 ;
-(CGRect)finderScriptingContentRectForFrameRect:(const CGRect*)arg1 ;
-(CGRect)finderScriptingFrameRectForContentRect:(const CGRect*)arg1 ;
-(void)addTabInfoToAlias:(const TFENode*)arg1 ;
-(void)viewSwitcherAction:(id)arg1 ;
-(void)addingSearchToolbarItem:(id)arg1 ;
-(void)cmdCloseTab:(id)arg1 ;
-(BOOL)validateCloseTab:(id)arg1 ;
-(void)setInitingWindow:(BOOL)arg1 ;
-(BOOL)windowStateIsValid:(id)arg1 ;
-(void)configureWindowWithState:(id)arg1 targetPath:(const TFENodeVector*)arg2 ;
-(void)springInstallDragTrackingHandler;
-(void)setMinimumSizeForWindowContent;
-(void)configureWindowForBackup;
-(id)restorableWindowState;
-(BOOL)initingWindow;
-(long long)tabCount;
-(id)containerStateForAllTabs;
-(id)windowStateWithContainer:(id)arg1 forFinderWindowRestore:(BOOL)arg2 ;
-(void)configureWindowForFullScreen:(BOOL)arg1 ;
-(CGRect)forceFrameToMainScreen:(CGRect)arg1 ;
-(CGRect)pinWindowFrame:(CGRect)arg1 toScreenContainingPoint:(CGPoint)arg2 includingMouse:(BOOL)arg3 ;
-(BOOL)shouldStaggerWindowPositionsForWindowState:(id)arg1 ;
-(void)configureWindowCloseButton;
-(void)handleCloseButton;
-(void)configureWindowForMode:(BOOL)arg1 ;
-(void)setDefaultTabVisibility;
-(void)configureTabView:(int)arg1 constrainResize:(BOOL)arg2 ;
-(void)configureAndPlaceWindowWithState:(id)arg1 ;
-(void)showOnOpen:(BOOL)arg1 ;
-(void)configureAccessoryViews;
-(void)springRemoveDragTrackingHandler;
-(void)setWindowFrame:(CGRect)arg1 animate:(BOOL)arg2 ;
-(void)createShadowImage:(CGImage*)arg1 andFrame:(CGRect*)arg2 andContentFrame:(CGRect*)arg3 forWindow:(id)arg4 ;
-(void)toggleStatusBarVisibility:(BOOL)arg1 animate:(BOOL)arg2 mode:(BOOL)arg3 ;
-(void)createImage:(CGImage*)arg1 andFrame:(CGRect*)arg2 forChildrenOfView:(id)arg3 ;
-(void)getContainerModeAnimationInfo:(TBrowseModeAnimationInfo*)arg1 ;
-(void)getBrowseModeAnimationInfo:(TBrowseModeAnimationInfo*)arg1 ;
-(void)configureForBrowseMode:(BOOL)arg1 ;
-(void)animateToBrowseMode:(BOOL)arg1 ;
-(void)springWindowFromTimer:(id)arg1 ;
-(void)springUpdateAnchorRect:(OpaqueCoreDrag*)arg1 ;
-(void)stopSpringToFrontTimer;
-(void)springNow;
-(BOOL)animatingTabMerge;
-(void)setTabVisibility:(int)arg1 ;
-(void)configureForFullScreen:(BOOL)arg1 ;
-(void)resizeWindowWithSize:(CGSize)arg1 animate:(BOOL)arg2 ;
-(void)updateICloudTabs;
-(void)closeTab:(id)arg1 ;
-(void)newTab;
-(void)closeOtherTabs:(id)arg1 ;
-(double)statusBarHeightDeltaForVisibility:(BOOL)arg1 mode:(BOOL)arg2 ;
-(void)configureStatusBar:(BOOL)arg1 mode:(BOOL)arg2 ;
-(void)configureWindowFrameForStatusBarVisible:(BOOL)arg1 mode:(BOOL)arg2 ;
-(void)resizeForStatusBarChange:(CGSize)arg1 animate:(BOOL)arg2 browseMode:(BOOL)arg3 ;
-(void)configureWindowForTargetChange;
-(BOOL)useDefaultFullScreenAnimation;
-(void)setSidebarForFullScreen:(BOOL)arg1 ;
-(id)prepareWindowsToAnimateToFullScreen:(BOOL)arg1 forWindow:(id)arg2 ;
-(void)prepareToAnimateToFullScreen:(BOOL)arg1 ;
-(void)animateToOrFromFullScreenWithDuration:(double)arg1 ;
-(void)requestSaveWindowState;
-(void)setShowsTitleBarViews:(BOOL)arg1 ;
-(double)lastVisibleToolbarItemWidth;
-(CGRect)titleBarRect;
-(void)prepareNonFullScreenAnimationInfo:(TFullScreenAnimationInfo*)arg1 ;
-(void)prepareFullScreenAnimationInfo:(TFullScreenAnimationInfo*)arg1 ;
-(void)prepareAnimateFromInfo:(TFullScreenAnimationInfo*)arg1 ;
-(void)prepareAnimateToInfo:(TFullScreenAnimationInfo*)arg1 ;
-(void)prepareCoverWindowLayersAndAnimationInfo;
-(void)destroyContainerControllers;
-(id)initForBackupWithState:(id)arg1 targetPath:(const TFENodeVector*)arg2 ;
-(void)createWindowImage:(CGImage*)arg1 includeShadow:(BOOL)arg2 ;
-(void)springDragEnterWindow:(OpaqueCoreDrag*)arg1 ;
-(void)springDragLeaveWindow:(OpaqueCoreDrag*)arg1 ;
-(void)springDragInsideWindow:(OpaqueCoreDrag*)arg1 ;
-(CGRect)frameForContainer;
-(void)tabDidBecomeActive:(id)arg1 ;
-(BOOL)validateToggleTabView:(id)arg1 ;
-(void)cmdToggleTabView:(id)arg1 ;
-(void)showTabViewForBackup;
-(void)hideTabViewForBackup;
-(BOOL)validateCloseOtherTabs:(id)arg1 ;
-(void)cmdCloseOtherTabs:(id)arg1 ;
-(void)cmdSelectTab:(id)arg1 ;
-(BOOL)validateSelectPreviousTab:(id)arg1 ;
-(void)cmdSelectPreviousTab:(id)arg1 ;
-(BOOL)validateSelectNextTab:(id)arg1 ;
-(void)cmdSelectNextTab:(id)arg1 ;
-(BOOL)validateMoveTabToNewWindow:(id)arg1 ;
-(void)cmdMoveTabToNewWindow:(id)arg1 ;
-(BOOL)validateRunToolbarCustomizationPalette:(id)arg1 ;
-(BOOL)validateToggleStatusBar:(id)arg1 ;
-(void)setExitFullScreenCallback:(/*^block*/id)arg1 ;
-(TStatusBarController *)statusBarController;
-(void)windowDidEndMove:(id)arg1 ;
-(void)cmdClose:(id)arg1 ;
-(void)cmdSearchFromToolbar:(id)arg1 ;
-(TNodeViewSettings *)viewSettings;
-(void)adjustWindowProxyNode:(TFENode*)arg1 ;
-(BOOL)nodeIsAnICloudRoot:(const TFENode*)arg1 ;
-(TString*)titleForICloudContainer:(const TFENode*)arg1 ;
-(void)popupPathForNode:(const TFENode*)arg1 outPath:(TFENodeVector*)arg2 ;
-(void)setInBrowseMode:(BOOL)arg1 ;
-(void)searchWasChanged;
-(BOOL)inBrowseMode;
-(BOOL)isDesktop;
-(void)setViewSettings:(TNodeViewSettings *)arg1 ;
-(void)setActiveContainer:(TBrowserContainerController *)arg1 ;
-(void)searchFieldCancel;
-(id)activeBrowserViewController;
-(Class)browserContainerClass;
-(TBrowserContainerController *)activeContainer;
-(id)containerWindowState:(id)arg1 ;
-(void)configureWindowForContentChange;
-(void)containerViewStyleChanged:(id)arg1 ;
-(void)containerTargetWillChange:(id)arg1 ;
-(void)containerTargetDidChange:(id)arg1 ;
-(void)container:(id)arg1 adjustProposedTargetPath:(TFENodeVector*)arg2 ;
-(void)containerForgetSpringState:(id)arg1 ;
-(id)containerQuerySearchUTIs:(id)arg1 ;
-(BOOL)toolbarSearchFieldIsVisible;
-(id)toolbarSearchField;
-(BOOL)toolbarMakeSearchFieldFirstResponder;
-(id)toolbarHistorySearchTemplate;
-(void)toolbarUpdateForSplitterChange;
-(id)containerWindow:(id)arg1 ;
-(id)containerParentView:(id)arg1 ;
-(BOOL)containerInBrowseMode:(id)arg1 ;
-(void)containerSelectionChanged:(id)arg1 ;
-(void)containerContentChanged:(id)arg1 ;
-(void)containerWindowDidChange:(id)arg1 ;
-(void)container:(id)arg1 updateWindowFrame:(CGRect)arg2 ;
-(void)container:(id)arg1 updateWindowSize:(CGSize)arg2 ;
-(void)containerCloseContainer:(id)arg1 ;
-(BOOL)containerValidateToolbarItem:(id)arg1 ;
-(void)copySearchFieldFromOther:(id)arg1 ;
-(void)windowDidChange;
-(id)allContainers;
-(void)updateViewLayout:(BOOL)arg1 ;
-(void)searchFieldTextChanged;
-(void)configurePersistentViewsWithState:(id)arg1 ;
-(CGSize)minimumContentSize;
-(void)createImage:(CGImage*)arg1 andFrame:(CGRect*)arg2 forView:(id)arg3 ;
-(void)tearDownPersistentViews;
-(id)backupDelegate;
-(void)drawCompletelyIntoBackBuffer;
-(int)cloudFolderTypeForNode:(const TFENode*)arg1 ;
-(TString*)pathPrettyStringForNode:(TFENode*)arg1 ;
-(void)unlockOverlayScrollerStateOnMainThread;
-(CGRect)rememberSpringState;
-(void)forgetSpringState;
-(void)revertToPreviousSpringState;
-(BOOL)isSprungAwayFromOriginalTarget;
-(id)splitViewForToolbarAlignment;
-(CGSize)idealContentSize;
-(void)updateViewLayout;
-(void)setSidebarWidth:(double)arg1 snapToOptimalWidth:(BOOL)arg2 ;
-(BOOL)isZooming;
-(id)initWithState:(id)arg1 ;
-(void)ubiquityIdentityChanged:(id)arg1 ;
-(id)windowState;
-(id)windowContentView;
-(id)init;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(long long)windowNumber;
-(id)toolbar;
-(TFENode*)target;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)close;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(id)windowNibName;
-(void)concludeDragOperation:(id)arg1 ;
-(void)runToolbarCustomizationPalette:(id)arg1 ;
-(char)windowShouldClose:(id)arg1 ;
-(CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(CGRect)arg2 ;
-(char)window:(id)arg1 shouldDragDocumentWithEvent:(id)arg2 from:(CGPoint)arg3 withPasteboard:(id)arg4 ;
-(CGSize)window:(id)arg1 willUseFullScreenContentSize:(CGSize)arg2 ;
-(unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2 ;
-(id)customWindowsToEnterFullScreenForWindow:(id)arg1 ;
-(void)window:(id)arg1 startCustomAnimationToEnterFullScreenWithDuration:(double)arg2 ;
-(id)customWindowsToExitFullScreenForWindow:(id)arg1 ;
-(void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2 ;
-(void)window:(id)arg1 willEncodeRestorableState:(id)arg2 ;
-(void)windowDidResize:(id)arg1 ;
-(void)windowDidMove:(id)arg1 ;
-(void)windowDidBecomeMain:(id)arg1 ;
-(void)windowDidResignMain:(id)arg1 ;
-(void)windowDidMiniaturize:(id)arg1 ;
-(void)windowWillStartLiveResize:(id)arg1 ;
-(void)windowDidEndLiveResize:(id)arg1 ;
-(void)windowWillEnterFullScreen:(id)arg1 ;
-(void)windowWillExitFullScreen:(id)arg1 ;
-(void)windowDidExitFullScreen:(id)arg1 ;
-(void)windowDidLoad;
-(char)shouldCascadeWindows;
-(char)validateToolbarItem:(id)arg1 ;
-(double)sidebarWidth;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)viewStyle;
@end
