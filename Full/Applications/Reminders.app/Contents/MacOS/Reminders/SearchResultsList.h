/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/RemindersList.h>

@class NSString;

@interface SearchResultsList : RemindersList {

	NSString* _query;

}

@property (retain) NSString * query;              //@synthesize query=_query - In the implementation block
-(id)swipeType;
-(char)isReorderable;
-(void)updateWithQuery:(id)arg1 ;
-(char)isVisibleInSidebar;
-(id)fetchReminders;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)init;
-(id)identifier;
-(id)title;
@end
