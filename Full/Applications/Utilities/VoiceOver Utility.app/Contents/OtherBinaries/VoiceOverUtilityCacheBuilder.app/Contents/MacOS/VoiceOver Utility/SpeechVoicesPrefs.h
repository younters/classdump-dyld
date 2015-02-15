/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:31:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/VoiceOver Utility.app/Contents/OtherBinaries/VoiceOverUtilityCacheBuilder.app/Contents/MacOS/VoiceOver Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceOver Utility/PrefsBase.h>

@class NSButton, SOVoicePopUpButton, NSDictionary, SCRCIndexMap;

@interface SpeechVoicesPrefs : PrefsBase {

	NSButton* _showHideCategoriesButton;
	SOVoicePopUpButton* _defaultVoicePopUp;
	SOVoicePopUpButton* _contentVoicePopUp;
	SOVoicePopUpButton* _statusVoicePopUp;
	SOVoicePopUpButton* _typeVoicePopUp;
	SOVoicePopUpButton* _attributesVoicePopUp;
	SOVoicePopUpButton* _guideVoicePopUp;
	char _categoriesHidden;
	NSDictionary* _popUpLookUpDictionary;
	char _addedObservers;
	SCRCIndexMap* _categoriesWithElementTagIndices;
	SCRCIndexMap* _propertiesWithElementTagIndices;
	long long _lastTextFieldToChangeTag;

}
+(void)backgroundWorkAtStartup;
-(id)_keysToObserve;
-(void)beginFitting;
-(void)endFitting;
-(void)_initializeMenus;
-(void)setCategoriesHidden:(char)arg1 ;
-(void)_removeDisabledItemsFromButton:(id)arg1 ;
-(void)_buildVoiceMenuForPopUp:(id)arg1 ;
-(char)categoriesHidden;
-(void)_setVoiceInPreferences:(id)arg1 forCategory:(id)arg2 ;
-(void)_changePopUpSelectionToDefault:(id)arg1 ;
-(void)_changePopUpSelection:(id)arg1 toVoiceIdentifier:(id)arg2 ;
-(void)_speakValueOfElement:(id)arg1 ;
-(void)setShowHideCategoriesDescription;
-(void)chooseVoice:(id)arg1 ;
-(void)showCategories:(id)arg1 ;
-(void)modifyStepper:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)helpAnchor;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
@end
