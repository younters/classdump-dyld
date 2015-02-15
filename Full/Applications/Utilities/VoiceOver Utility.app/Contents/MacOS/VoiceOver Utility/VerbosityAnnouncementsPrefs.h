/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:31:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/VoiceOver Utility.app/Contents/MacOS/VoiceOver Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceOver Utility/PrefsBase.h>

@class NSButton, NSSlider, NSPopUpButton, NSArray;

@interface VerbosityAnnouncementsPrefs : PrefsBase {

	NSButton* _speakTableHeaderCheckbox;
	NSSlider* _speakTextUnderMouseSlider;
	NSPopUpButton* _statusTextChangedFeedbackPopupButton;
	NSPopUpButton* _progressIndicatorChangedFeedbackPopupButton;
	char _observersAdded;
	NSArray* _configurationKeys;

}
-(id)configurationKeys;
-(id)accessibilityAttributeValue:(id)arg1 sliderCell:(id)arg2 ;
-(void)_initializeMenus;
-(void)selectSpeakTableHeader:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)helpAnchor;
-(void)awakeFromNib;
@end
