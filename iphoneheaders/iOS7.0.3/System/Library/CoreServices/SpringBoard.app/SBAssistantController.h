/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBUIPluginHost.h>

@protocol SBUIPluginViewControllerInterface;
@class SBOperationQueue, NSString, SBAssistantWindow, SBPasscodeLockDisableAssertion, NSMutableSet, NSHashTable, UIViewController;

@interface SBAssistantController : SBUIPluginHost {

	SBOperationQueue* _operationQueue;
	NSString* _appDisplayIDBeingHosted;
	SBAssistantWindow* _assistantWindow;
	BOOL _unlockedDevice;
	BOOL _launchedInStark;
	BOOL _isHidingOtherWindows;
	int _activationEvent;
	SBPasscodeLockDisableAssertion* _disableAssertion;
	NSMutableSet* _dismissingReasons;
	int _pendingDismissViewType;
	NSHashTable* _observers;
	UIViewController<SBUIPluginViewControllerInterface>* _mainScreenViewController;

}

@property (assign,nonatomic) BOOL unlockedDevice;              //@synthesize unlockedDevice=_unlockedDevice - In the implementation block
+(BOOL)isAssistantViewVisible:(int)arg1 ;
+(BOOL)isAssistantRunningHidden;
+(BOOL)isAssistantVisible;
+(BOOL)shouldEnterAssistant;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(BOOL)supportedAndEnabled;
-(BOOL)pluginWantsActivationEvent:(int)arg1 interval:(double*)arg2 ;
-(void)addActivationFlagsToDisplay:(id)arg1 ;
-(void)dismissAssistantForAlertActivation:(id)arg1 ;
-(BOOL)isAssistantViewVisible:(int)arg1 ;
-(BOOL)_runActivateAssistantTest:(id)arg1 ;
-(void)preparePluginForActivationEvent:(int)arg1 afterInterval:(double)arg2 ;
-(id)_activationFlags;
-(void)dismissAssistantViewIfNecessaryWithFade:(int)arg1 ofDuration:(double)arg2 ;
-(void)dismissAssistantViewIfNecessaryWithFade:(int)arg1 ofDuration:(double)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)pluginWantsInterfaceOrientation:(int*)arg1 ;
-(BOOL)pluginSuppressesNotifications;
-(BOOL)pluginWantsScreenDimInterval:(double*)arg1 ;
-(BOOL)_isPluginLoaded;
-(void)_activateSiriForPPT;
-(void)_starkSiriWillAppear:(id)arg1 ;
-(void)_starkSiriDidAppear:(id)arg1 ;
-(void)_starkSiriWillDisappear:(id)arg1 ;
-(void)_starkSiriDidDisappear:(id)arg1 ;
-(void)_loadPlugin;
-(void)_notePluginVisibilityDidChange;
-(void)setUnlockedDevice:(BOOL)arg1 ;
-(void)dismissPluginForEvent:(int)arg1 ;
-(double)_defaultAnimatedDismissDurationForMainScreen;
-(void)_dismissForMainScreenAnimated:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)_isDismissingAllViews;
-(void)_cleanupContextHosting;
-(void)_notifyObserversViewWillAppear:(int)arg1 ;
-(void)_bioAuthenticated:(id)arg1 ;
-(void)_notifyObserversViewDidAppear:(int)arg1 ;
-(void)_notifyObserversViewWillDisappear:(int)arg1 ;
-(void)_notifyObserversViewDidDisappear:(int)arg1 ;
-(void)_viewWillAppearOnMainScreen;
-(void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 setShowsStatusBar:(BOOL)arg2 ;
-(id)_fakeStatusBarForOrientation:(int)arg1 ;
-(void)_viewDidAppearOnMainScreen;
-(void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2 ;
-(void)_viewWillDisappearOnMainScreen;
-(void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2 ;
-(void)_viewDidDisappearOnMainScreen;
-(void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2 ;
-(void)_presentForMainScreenAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3 ;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 ;
-(void)uiPlugin:(id)arg1 isNowRunning:(BOOL)arg2 ;
-(void)dismissAssistantViewIfNecessaryWithFade:(int)arg1 ;
-(id)mainScreenView;
-(id)transferOwnershipOfPasscodeLockDisableAssertion;
-(void)_dismissUIPlugin:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)uiPlugin:(id)arg1 openURL:(id)arg2 ;
-(void)uiPluginUserEventOccurred:(id)arg1 ;
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(BOOL)arg3 ;
-(BOOL)unlockedDevice;
-(void)dismissAssistantViewIfNecessary:(int)arg1 ;
-(BOOL)activateIgnoringTouches;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)shouldShowLockStatusBarTime;
@end
