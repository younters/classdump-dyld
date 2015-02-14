/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSString, NSArray;

@interface CalAgentLinkUserNotificationOperation : CalAgentLinkOneWayOperation {

	NSString* _action;
	NSArray* _objectIDs;
	char _updatedPreferenceValue;

}

@property (nonatomic,retain) NSString * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSArray * objectIDs;                      //@synthesize objectIDs=_objectIDs - In the implementation block
@property (assign,nonatomic) char updatedPreferenceValue;              //@synthesize updatedPreferenceValue=_updatedPreferenceValue - In the implementation block
-(id)inputPayload;
-(NSArray *)objectIDs;
-(char)updatedPreferenceValue;
-(void)setUpdatedPreferenceValue:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)action;
-(id)initWithAction:(id)arg1 ;
-(void)setObjectIDs:(NSArray *)arg1 ;
@end
