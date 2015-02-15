/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABCardCollectionRowView;
@class NSPanel, NSTextField, NSButton, NSView;

@interface ABCustomLabelController : NSObject {

	NSPanel* mEditPanel;
	NSTextField* mLabelField;
	NSButton* mOkayButton;
	NSView*<ABCardCollectionRowView> mDatumView;

}
+(void)addCustomLabelToDatumView:(id)arg1 ;
-(void)help:(id)arg1 ;
-(id)initWithDatumView:(id)arg1 ;
-(void)runLabelSheet;
-(void)commit:(id)arg1 ;
-(void)dealloc;
-(void)cancel:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
@end
