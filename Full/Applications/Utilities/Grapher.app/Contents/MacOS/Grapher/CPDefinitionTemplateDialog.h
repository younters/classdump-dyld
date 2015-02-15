/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:39:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Grapher.app/Contents/MacOS/Grapher
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Grapher/CPModalDialog.h>

@class NSTabView, CPTableView, NSObject, NSWindow, NSArray, NSMutableArray;

@interface CPDefinitionTemplateDialog : CPModalDialog {

	NSTabView* mTabView;
	CPTableView* mTableView;
	NSObject* mObject;
	SEL mSelector;
	NSWindow* mParentWindow;
	NSArray* mGroupArray;
	NSMutableArray* mTemplateArray;

}
+(id)sharedDialog;
+(id)sharedDictionary;
+(id)sharedDialogWithDimension:(unsigned long long)arg1 ;
-(void)askTemplateStringWithObject:(id)arg1 selector:(SEL)arg2 modalInWindow:(id)arg3 ;
-(void)dialogDidOK;
-(char)dialogShouldOK;
-(double)findHeightForColumn:(long long)arg1 row:(long long)arg2 withValue:(id)arg3 ;
-(id)equationForRow:(long long)arg1 ;
-(void)setTemplateGroup:(id)arg1 ;
-(id)parentWindow;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)awakeFromNib;
-(void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2 ;
@end
