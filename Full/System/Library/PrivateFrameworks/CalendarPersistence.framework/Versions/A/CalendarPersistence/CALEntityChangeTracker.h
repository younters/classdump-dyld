/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALChangeTracker.h>

@interface CALEntityChangeTracker : CALChangeTracker {

	char _internal;

}
+(id)changeWithType:(int)arg1 withEntity:(id)arg2 ;
+(id)externalChangeWithType:(int)arg1 withEntity:(id)arg2 ;
-(id)initWithTarget:(id)arg1 withAction:(int)arg2 ;
-(void)setInternal:(char)arg1 ;
-(char)isInternal;
@end
