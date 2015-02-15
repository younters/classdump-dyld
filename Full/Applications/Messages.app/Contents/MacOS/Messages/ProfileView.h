/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <AppKit/NSView.h>
#import <Messages/NSTextViewDelegate.h>

@class BuddyInfo, IMHandle, NSBox, NSImageView, SOBuddyPictureView, NSTextField, NSView, NSTextView, NSString;

@interface ProfileView : NSView <NSTextViewDelegate> {

	BuddyInfo* _owner;
	IMHandle* _imHandle;
	NSBox* _separator;
	NSImageView* _statusGemView;
	SOBuddyPictureView* _buddyIconView;
	NSTextField* _accountNameField;
	NSImageView* _accountTypeView;
	NSTextField* _serviceNameField;
	NSImageView* _mobileIconView;
	NSView* _textContainer;
	NSTextField* _idleField;
	NSTextField* _profileLabel;
	NSTextView* _profileText;
	NSTextField* _messageLabel;
	NSTextView* _messageText;
	NSTextField* _capsLabel;
	NSTextView* _capsText;
	NSTextField* _notesLabel;
	NSTextField* _notesText;
	NSView* _contentView;

}

@property (nonatomic,retain) NSView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_accountStatusChanged:(id)arg1 ;
-(void)toggleBuddy:(id)arg1 ;
-(void)setShowsSeparator:(char)arg1 ;
-(id)initWithIMHandle:(id)arg1 owner:(id)arg2 saveNib:(char)arg3 ;
-(float)_adjustTextView:(id)arg1 dy:(float)arg2 ;
-(void)_adjustLabel:(id)arg1 toTextView:(id)arg2 ;
-(void)_updateLayout:(char)arg1 ;
-(void)_hideMessage:(char)arg1 ;
-(id)_capabilitiesText;
-(void)_hideNotes:(char)arg1 ;
-(void)_updateServiceName;
-(void)_updateNotesAndSetText:(char)arg1 ;
-(void)_updateCapabilities:(id)arg1 ;
-(void)_removeProfile;
-(void)_removeNotes;
-(void)_updateStatus:(id)arg1 ;
-(void)_updatePicture:(id)arg1 ;
-(void)_updateMobile:(id)arg1 ;
-(void)_extraPropsChanged:(id)arg1 ;
-(void)_infoChanged:(id)arg1 ;
-(void)_updateBot:(id)arg1 ;
-(void)_feedUpdatedDateChanged:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(char)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)awakeFromNib;
-(void)setOwner:(id)arg1 ;
-(void)setNotes:(id)arg1 ;
-(id)imHandle;
@end
