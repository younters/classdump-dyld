/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMPluginHeaderViewController.h>

@class AMPathPopUpButton, NSPopUpButton, NSTextField, NSButton;

@interface AMServicePluginHeaderViewController : AMPluginHeaderViewController {

	AMPathPopUpButton* serviceAppPopUpButton;
	NSPopUpButton* serviceInputPopUpButton;
	NSTextField* serviceReceivesLabel;
	NSTextField* serviceInLabel;
	NSTextField* serviceInputProcessingLabel;
	NSPopUpButton* serviceInputProcessingPopUpButton;
	NSButton* serviceReplacesButton;
	char _stateOfOuptutCheckboxWhenLastEnabled;

}

@property (assign) char stateOfOutputCheckboxWhenLastEnabled;              //@synthesize stateOfOuptutCheckboxWhenLastEnabled=_stateOfOuptutCheckboxWhenLastEnabled - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)setWorkflow:(id)arg1 ;
-(id)_serviceWorkflowMetaData;
-(id)_typeMenuForApplicationWithBundleID:(id)arg1 ;
-(id)_applicationPathsToShow;
-(void)_setupTypeMenu;
-(void)_setupControls;
-(void)updateReplaceSelectedCheckbox:(id)arg1 ;
-(void)setStateOfOutputCheckboxWhenLastEnabled:(char)arg1 ;
-(char)_shouldEnableReplaceSelectedCheckbox;
-(char)stateOfOutputCheckboxWhenLastEnabled;
-(id)_serviceReceivesLabelText;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
@end
