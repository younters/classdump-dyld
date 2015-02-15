/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Network.prefPane/Contents/MacOS/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network/ANPSimpleView.h>

@class NSPopUpButton, NSTextField;

@interface ANPSimpleView6to4 : ANPSimpleView {

	NSPopUpButton* o_configurePopup;
	NSTextField* o_relayAddressTextField;
	NSTextField* o_currentAddressTextField;
	long long mCurrentPopupTag;

}
-(void)p_reportError:(id)arg1 ;
-(char)apply;
-(id)p_validateIPv6Address:(id)arg1 ;
-(char)p_saveRelayAddress;
-(void)p_updateRelayAddress;
-(void)p_updateStatusFields;
-(void)p_updateConfiguration;
-(void)p_updateCurrentAddress;
-(void)a_configSelected:(id)arg1 ;
-(void)updateView;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(id)helpAnchor;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(void)updateStatus;
@end
