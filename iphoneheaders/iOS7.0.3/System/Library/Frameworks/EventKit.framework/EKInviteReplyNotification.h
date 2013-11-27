/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EKObject.h>

@class EKCalendar, NSString, NSDate;

@interface EKInviteReplyNotification : EKObject

@property (nonatomic,readonly) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,readonly) NSString * shareeDisplayName; 
@property (nonatomic,readonly) NSString * shareeAddress; 
@property (nonatomic,readonly) NSString * shareeFirstName; 
@property (nonatomic,readonly) NSString * shareeLastName; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) BOOL alerted; 
-(BOOL)alerted;
-(void)clearAlertedStatus;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(id)calendarName;
-(id)shareeDisplayName;
-(id)shareeAddress;
-(id)shareeFirstName;
-(id)shareeLastName;
-(id)_persistentInviteReplyNotification;
-(id)calendar;
-(int)status;
-(id)creationDate;
@end
