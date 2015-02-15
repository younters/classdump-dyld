/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Library/Automator/Apply System Configuration Settings.action/Contents/MacOS/Apply System Configuration Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Apply System Configuration Settings/Apply System Configuration Settings-Structs.h>
#import <AppKit/NSArrayController.h>
#import <Apply System Configuration Settings/NSTableViewDataSource.h>

@class BetterTableView, NSButton, NSString;

@interface BindingsArrayController : NSArrayController <NSTableViewDataSource> {

	BetterTableView* _bindingsTable;
	NSButton* _removeButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setServersFromArray:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)newObject;
-(void)remove:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)awakeFromNib;
@end
