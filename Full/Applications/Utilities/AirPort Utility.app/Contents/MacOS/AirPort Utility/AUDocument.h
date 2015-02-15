/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSDocument.h>
#import <AirPort Utility/AUTaskControllerDelegate.h>
#import <AirPort Utility/AUSettingsViewControllerDelegate.h>
#import <AirPort Utility/AUSelectiveImportControllerDelegate.h>
#import <AirPort Utility/AssistantCallbackUIDelegate.h>
#import <AirPort Utility/SetupUIDelegate.h>
#import <AirPort Utility/AUPasswordSheetControllerDelegate.h>
#import <AirPort Utility/NSTabViewDelegate.h>

@protocol AUDocumentDelegate;
@class NSView, NSTabView, NSProgressIndicator, TinyRoundButton, NSTextField, NSButton, AUBaseModel, AUSetupController, AUTopologyViewController, NetTopoObjectLayer, AUSummaryViewController, AUBaseStationViewController, AUInternetViewController, AUWirelessViewController, AUNetworkViewController, AUDisksViewController, AUAirPlayViewController, AUPasswordSheetController, NSMutableDictionary, NSString;

@interface AUDocument : NSDocument <AUTaskControllerDelegate, AUSettingsViewControllerDelegate, AUSelectiveImportControllerDelegate, AssistantCallbackUIDelegate, SetupUIDelegate, AUPasswordSheetControllerDelegate, NSTabViewDelegate> {

	NSView* settingsView;
	NSTabView* tabView;
	NSView* footerToolbar;
	NSProgressIndicator* lrtProgressSpinner;
	TinyRoundButton* lrtCancelButton;
	NSTextField* lrtStatusText;
	NSButton* updateButton;
	NSButton* cancelButton;
	NSButton* confirmSheetUpdateButton;
	AUBaseModel* baseModel;
	AUSetupController* setupController;
	AUTopologyViewController* topoViewController;
	NetTopoObjectLayer* topoObjectLayer;
	AUSummaryViewController* summaryViewController;
	AUBaseStationViewController* baseStationViewController;
	AUInternetViewController* internetViewController;
	AUWirelessViewController* wirelessViewController;
	AUNetworkViewController* networkViewController;
	AUDisksViewController* disksViewController;
	AUAirPlayViewController* airPlayViewController;
	AUPasswordSheetController* passwordSheetController;
	NSMutableDictionary* tabViewItemsAndControllers;
	NSView* _includeSecureSettingsAccessoryView;
	NSButton* _includeSecureSettings;
	NSTextField* _includeSecureSettingsDescription;
	char dataIsLoaded;
	char nibLoaded;
	char displayedAsASheet;
	char isRemoteOrConfigOther;
	char isUnconfigured;
	char canUpdateBaseStation;
	char showRememberPasswordUI;
	NSMutableDictionary* flatSettingsDict;
	NSView* missingBaseView;
	NSTextField* missingBasePrompt;
	NSTextField* missingBaseDescription;
	char _observingDiskPassword;
	int readWriteState;
	int settingToShow;
	unsigned problemToFix;
	char askedIfOKToEditWithOldSoftware;
	char previousCancelState;
	char previousUpdateState;
	id<AUDocumentDelegate> _delegate;
	NSString* _identifier;

}

@property (assign,nonatomic) id<AUDocumentDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AUBaseModel * baseModel; 
@property (nonatomic,retain) AUSetupController * setupController; 
@property (assign,nonatomic) AUTopologyViewController * topoViewController; 
@property (assign,nonatomic) NetTopoObjectLayer * topoObjectLayer; 
@property (assign,nonatomic) int settingToShow; 
@property (assign,nonatomic) unsigned problemToFix; 
@property (nonatomic,retain) AUSummaryViewController * summaryViewController; 
@property (nonatomic,retain) AUBaseStationViewController * baseStationViewController; 
@property (nonatomic,retain) AUInternetViewController * internetViewController; 
@property (nonatomic,retain) AUWirelessViewController * wirelessViewController; 
@property (nonatomic,retain) AUNetworkViewController * networkViewController; 
@property (nonatomic,retain) AUDisksViewController * disksViewController; 
@property (nonatomic,retain) AUAirPlayViewController * airPlayViewController; 
@property (nonatomic,retain) AUPasswordSheetController * passwordSheetController; 
@property (nonatomic,retain) NSMutableDictionary * tabViewItemsAndControllers; 
@property (assign,nonatomic) NSView * _includeSecureSettingsAccessoryView;                         //@synthesize includeSecureSettingsAccessoryView=_includeSecureSettingsAccessoryView - In the implementation block
@property (assign,nonatomic) NSButton * _includeSecureSettings;                                    //@synthesize includeSecureSettings=_includeSecureSettings - In the implementation block
@property (assign,nonatomic) NSTextField * _includeSecureSettingsDescription;                      //@synthesize includeSecureSettingsDescription=_includeSecureSettingsDescription - In the implementation block
@property (nonatomic,readonly) char canRestartBaseStation; 
@property (assign,nonatomic) char canUpdateBaseStation; 
@property (assign,nonatomic) char showRememberPasswordUI; 
@property (assign,nonatomic) char dataIsLoaded; 
@property (assign,nonatomic) char nibLoaded; 
@property (assign,nonatomic) char displayedAsASheet; 
@property (assign,nonatomic) char isRemoteOrConfigOther; 
@property (assign,nonatomic) char isUnconfigured; 
@property (assign,nonatomic) NSView * settingsView; 
@property (assign,nonatomic) NSTabView * tabView; 
@property (assign,nonatomic) NSView * footerToolbar; 
@property (assign,nonatomic) NSProgressIndicator * lrtProgressSpinner; 
@property (assign,nonatomic) TinyRoundButton * lrtCancelButton; 
@property (assign,nonatomic) NSTextField * lrtStatusText; 
@property (assign,nonatomic) NSButton * updateButton; 
@property (assign,nonatomic) NSButton * cancelButton; 
@property (nonatomic,retain) NSMutableDictionary * flatSettingsDict; 
@property (nonatomic,retain) NSView * missingBaseView; 
@property (nonatomic,retain) NSTextField * missingBasePrompt; 
@property (nonatomic,retain) NSTextField * missingBaseDescription; 
@property (assign,nonatomic) char askedIfOKToEditWithOldSoftware; 
@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)documentIdentifierFromBaseStation:(id)arg1 orBaseAddress:(id)arg2 ;
+(id)openDocumentWithIdentifier:(id)arg1 ;
+(char)knownACPAppleProductID:(unsigned)arg1 ;
+(id)openDocumentForBaseStation:(id)arg1 orBaseAddress:(id)arg2 ;
+(char)autosavesInPlace;
-(int)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3 ;
-(void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4 ;
-(void)saveToBase:(id)arg1 ;
-(void)restoreBaseStationToDefaults;
-(void)restartBaseStation;
-(AUBaseModel *)baseModel;
-(void)setTopoViewController:(AUTopologyViewController *)arg1 ;
-(void)saveSubviewEdits;
-(AUBaseStationViewController *)baseStationViewController;
-(void)displayErrors:(id)arg1 ;
-(id)quickDocumentValidation;
-(void)importConfigurationFile:(id)arg1 ;
-(void)exportConfigurationFile:(id)arg1 ;
-(char)canRestartBaseStation;
-(void)viewController:(id)arg1 displaySheetForErrors:(id)arg2 ;
-(NSMutableDictionary *)flatSettingsDict;
-(void)setFlatSettingsDict:(NSMutableDictionary *)arg1 ;
-(void)returnToTopo:(id)arg1 ;
-(void)callbackAskCancel;
-(void)settingsChanged:(id)arg1 status:(int)arg2 ;
-(AUTopologyViewController *)topoViewController;
-(NetTopoObjectLayer *)topoObjectLayer;
-(void)setTopoObjectLayer:(NetTopoObjectLayer *)arg1 ;
-(void)setSettingToShow:(int)arg1 ;
-(void)setProblemToFix:(unsigned)arg1 ;
-(void)setDisplayedAsASheet:(char)arg1 ;
-(void)loadDocument;
-(NSButton *)updateButton;
-(int)settingToShow;
-(unsigned)problemToFix;
-(void)setPasswordSheetController:(AUPasswordSheetController *)arg1 ;
-(void)setReadWriteState:(int)arg1 withName:(id)arg2 ;
-(AUPasswordSheetController *)passwordSheetController;
-(void)taskControllerTaskBegin:(id)arg1 ;
-(void)taskController:(id)arg1 taskComplete:(int)arg2 taskInfo:(id)arg3 ;
-(void)passwordSheetControllerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(AUNetworkViewController *)networkViewController;
-(void)selectiveImportEndedWithStatus:(int)arg1 resultDict:(id)arg2 ;
-(void)setTabViewItemsAndControllers:(NSMutableDictionary *)arg1 ;
-(void)busyStateChangeNotification:(id)arg1 ;
-(AUSummaryViewController *)summaryViewController;
-(void)setSummaryViewController:(AUSummaryViewController *)arg1 ;
-(void)setBaseStationViewController:(AUBaseStationViewController *)arg1 ;
-(AUInternetViewController *)internetViewController;
-(void)setInternetViewController:(AUInternetViewController *)arg1 ;
-(AUWirelessViewController *)wirelessViewController;
-(void)setWirelessViewController:(AUWirelessViewController *)arg1 ;
-(void)setNetworkViewController:(AUNetworkViewController *)arg1 ;
-(AUDisksViewController *)disksViewController;
-(void)setDisksViewController:(AUDisksViewController *)arg1 ;
-(AUAirPlayViewController *)airPlayViewController;
-(void)setAirPlayViewController:(AUAirPlayViewController *)arg1 ;
-(void)setBaseModel:(AUBaseModel *)arg1 ;
-(void)setMissingBaseView:(NSView *)arg1 ;
-(void)setMissingBasePrompt:(NSTextField *)arg1 ;
-(void)setMissingBaseDescription:(NSTextField *)arg1 ;
-(void)removeSummaryTab;
-(void)setDataIsLoaded:(char)arg1 ;
-(void)showOrHideTabWithIdentifer:(id)arg1 withContext:(void*)arg2 ;
-(char)dataIsLoaded;
-(void)forceEnableUpdateButton;
-(void)updateUpdateButton;
-(void)setNibLoaded:(char)arg1 ;
-(char)displayedAsASheet;
-(void)adjustTabViewLayoutWithTabViewItem:(id)arg1 ;
-(void)removeTabIfShowing:(id)arg1 ;
-(void)showControlForProblemCode:(unsigned)arg1 ;
-(void)showControlForSetting:(int)arg1 ;
-(void)unknownProductIDConfirmEditSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)dismissSheetOrCloseWindowAndCommitChanges:(char)arg1 ;
-(char)showRememberPasswordUI;
-(void)showSecuredDocPasswordSheet;
-(void)showSelectiveImport;
-(void)showImportError;
-(void)showExport;
-(void)includeSecureSettingsChanged:(id)arg1 ;
-(NSMutableDictionary *)tabViewItemsAndControllers;
-(void)considerWarningForBaseRestart;
-(void)cleanUpSetupControllerAndCommitChanges:(char)arg1 ;
-(char)isRemoteOrConfigOther;
-(void)remoteRestartSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_ignoreProblemAndContinue:(id)arg1 ;
-(id)tabIdentifierToViewController:(id)arg1 ;
-(void)updateOnCloseSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)errorSheetDidDismiss:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)displayErrors:(id)arg1 withViewController:(id)arg2 ;
-(char)shouldShowDisks:(id)arg1 ;
-(char)shouldShowAirPlay:(id)arg1 ;
-(void)addNetworkTab;
-(void)removeNetworkTab;
-(void)addAirPlayTab;
-(void)removeAirPlayTab;
-(void)addDisksTab;
-(void)removeDisksTab;
-(void)addSummaryTab;
-(void)stopLongRunningTask:(id)arg1 ;
-(void)beginRestoreBaseStationToDefaults:(id)arg1 ;
-(NSButton *)_includeSecureSettings;
-(void)set_includeSecureSettings:(NSButton *)arg1 ;
-(NSTextField *)_includeSecureSettingsDescription;
-(void)set_includeSecureSettingsDescription:(NSTextField *)arg1 ;
-(NSView *)_includeSecureSettingsAccessoryView;
-(void)set_includeSecureSettingsAccessoryView:(NSView *)arg1 ;
-(char)nibLoaded;
-(void)setIsRemoteOrConfigOther:(char)arg1 ;
-(char)canUpdateBaseStation;
-(void)setCanUpdateBaseStation:(char)arg1 ;
-(void)setShowRememberPasswordUI:(char)arg1 ;
-(void)setUpdateButton:(NSButton *)arg1 ;
-(NSProgressIndicator *)lrtProgressSpinner;
-(void)setLrtProgressSpinner:(NSProgressIndicator *)arg1 ;
-(TinyRoundButton *)lrtCancelButton;
-(void)setLrtCancelButton:(TinyRoundButton *)arg1 ;
-(NSTextField *)lrtStatusText;
-(void)setLrtStatusText:(NSTextField *)arg1 ;
-(NSView *)footerToolbar;
-(void)setFooterToolbar:(NSView *)arg1 ;
-(NSView *)missingBaseView;
-(NSTextField *)missingBasePrompt;
-(NSTextField *)missingBaseDescription;
-(char)askedIfOKToEditWithOldSoftware;
-(void)setAskedIfOKToEditWithOldSoftware:(char)arg1 ;
-(AUSetupController *)setupController;
-(void)setSetupController:(AUSetupController *)arg1 ;
-(NSView *)settingsView;
-(void)setSettingsView:(NSView *)arg1 ;
-(void)passwordSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)isUnconfigured;
-(void)setIsUnconfigured:(char)arg1 ;
-(void)errorAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(id)init;
-(void)setDelegate:(id<AUDocumentDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<AUDocumentDelegate>)delegate;
-(void)awakeFromNib;
-(char)readFromData:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)dataOfType:(id)arg1 error:(id*)arg2 ;
-(void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(id)windowNibName;
-(void)windowControllerDidLoadNib:(id)arg1 ;
-(NSButton *)cancelButton;
-(NSTabView *)tabView;
-(void)setTabView:(NSTabView *)arg1 ;
-(void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2 ;
-(void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2 ;
@end
