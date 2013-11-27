/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@class NSDate, EKPersistentCalendarItem;

@interface EKPersistentExceptionDate : EKPersistentObject {

	NSDate* _date;

}

@property (nonatomic,readonly) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
+(id)relations;
+(id)exceptionDateWithDate:(id)arg1 ;
-(id)initWithExceptionDate:(id)arg1 ;
-(int)entityType;
-(unsigned)hash;
-(id)description;
-(id)date;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end
