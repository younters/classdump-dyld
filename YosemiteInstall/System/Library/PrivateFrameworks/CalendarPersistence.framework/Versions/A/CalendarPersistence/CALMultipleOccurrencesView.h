/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALAbstractView.h>

@class NSMutableArray;

@interface CALMultipleOccurrencesView : CALAbstractView {

	NSMutableArray* _targetOccIDs;

}
-(void)dealloc;
-(id)initWithOccurrences:(id)arg1 ;
-(id)occurrenceIDs;
-(char)updateOccurrenceIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end
