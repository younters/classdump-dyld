/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <Reminders/CardViewController.h>

@class CardContentViewController, NSArray;

@interface RemindersListCardViewController : CardViewController {

	CardContentViewController* _cardContentViewController;
	NSArray* _displayedLists;

}

@property (retain) CardContentViewController * cardContentViewController;              //@synthesize cardContentViewController=_cardContentViewController - In the implementation block
@property (retain) NSArray * displayedLists;                                           //@synthesize displayedLists=_displayedLists - In the implementation block
-(char)isSortable;
-(void)inspectActiveReminderView;
-(void)reloadRemindersTable;
-(void)showReminder:(id)arg1 ;
-(id)selectedReminders;
-(void)newReminderView:(id)arg1 ;
-(char)canCreateNewReminder;
-(void)hideInfoButton;
-(id)visibleListIdentifiers;
-(char)hasCompletedReminders;
-(void)displayNewVisibleLists;
-(void)updateRemindersTableForChangedReminderIDs:(id)arg1 ;
-(void)resetScrollPosition;
-(id)contentTableView;
-(void)setVisibleLists:(id)arg1 forceRefresh:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 windowController:(id)arg2 type:(id)arg3 showsBackground:(char)arg4 ;
-(id)activeCardContentViewController;
-(char)activeReminderViewExists;
-(NSArray *)displayedLists;
-(void)setDisplayedLists:(NSArray *)arg1 ;
-(void)setCardContentViewController:(CardContentViewController *)arg1 ;
-(CardContentViewController *)cardContentViewController;
-(char)validateMenuItem:(id)arg1 ;
-(id)visibleLists;
@end
