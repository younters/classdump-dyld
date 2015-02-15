/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/ColorSync Utility.app/Contents/Resources/Devices.csutil/Contents/MacOS/Devices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Devices/Devices-Structs.h>
@class NSView, ovObject, NSSplitView, NSMenuItem, NSTableColumn, NSTextField, NSOutlineView, NSString, NSImage;

@interface Devices : NSObject {

	NSView* _initialFirstResponder;
	NSView* _view;
	ovObject* root;
	float splitDiff;
	NSSplitView* splitView;
	NSMenuItem* changeToFactory;
	NSMenuItem* changeToOther;
	NSTableColumn* columnB;
	NSTextField* currentProfName;
	NSTextField* currentProfPath;
	NSTextField* factoryProfName;
	NSTextField* factoryProfPath;
	NSOutlineView* outlineView;
	NSTextField* stringA;
	NSString* stringAorig;
	NSTextField* stringC;
	NSString* stringCorig;
	NSTextField* stringScope;
	NSTextField* stringID;
	NSImage* bluedot;

}
-(CGSize)viewMinSize;
-(void)buildDataSource:(char)arg1 ;
-(void)notification:(id)arg1 ;
-(void)changeToOther:(id)arg1 ;
-(void)changeToFactory:(id)arg1 ;
-(void)openFactProf:(id)arg1 ;
-(void)openCustProf:(id)arg1 ;
-(void)help:(id)arg1 ;
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)awakeFromNib;
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2 ;
-(double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(void)splitView:(id)arg1 resizeSubviewsWithOldSize:(CGSize)arg2 ;
-(char)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4 ;
-(id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2 ;
-(id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2 ;
-(void)updateViews;
@end
