/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/CNWrappedDictionary.h>

@class NSSplitView, NSView, NSScrollView, ABCleanPersonListBackgroundView;

@interface ABCleanSplitViewLayoutViews : CNWrappedDictionary

@property (nonatomic,readonly) NSSplitView * splitView; 
@property (nonatomic,readonly) NSView * superview; 
@property (nonatomic,readonly) NSView * groupsPane; 
@property (nonatomic,readonly) NSView * innerGroupsPane; 
@property (nonatomic,readonly) NSScrollView * groupListScrollView; 
@property (nonatomic,readonly) ABCleanPersonListBackgroundView * contactsPane; 
-(id)initWithSplitView:(id)arg1 ;
-(NSView *)groupsPane;
-(ABCleanPersonListBackgroundView *)contactsPane;
-(NSView *)innerGroupsPane;
-(NSScrollView *)groupListScrollView;
-(NSView *)superview;
-(NSSplitView *)splitView;
@end
