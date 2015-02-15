/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Keyboard.prefPane/Contents/MacOS/Keyboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow, NSButton, NSPopUpButton, NSTextField, ConfigKeyEditor, NSNumber, NSString, NSMutableDictionary;

@interface AddItemController : NSObject {

	NSWindow* mWindow;
	NSButton* mOKButton;
	NSPopUpButton* mApplicationPopup;
	NSTextField* mCommandName;
	NSTextField* mCommand;
	char mInited;
	char mKeyDidChange;
	ConfigKeyEditor* mConfigKeyEditor;
	NSNumber* mVKeyCode;
	NSString* mCharCode;
	NSNumber* mModifier;
	NSMutableDictionary* mBundle2URLMap;

}
+(id)appLocalizableNameForURL:(id)arg1 ;
-(void)applicationPopup:(id)arg1 ;
-(id)appURLForBundleID:(id)arg1 ;
-(id)vKeyCode;
-(id)addApplicationWithURL:(id)arg1 ;
-(void)windowWillBeginSheetForApplication:(id)arg1 ;
-(void)_populateApplicationsThread:(id)arg1 ;
-(id)commandTitle;
-(id)applicationBundleID;
-(id)charCode;
-(void)dealloc;
-(id)window;
-(void)_close:(long long)arg1 ;
-(void)add:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2 ;
-(id)applicationName;
-(id)modifier;
-(void)lazyInit;
@end
