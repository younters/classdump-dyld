/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKParticipant.h>

@interface EKOrganizer : EKParticipant {

	char _isCurrentUserForSharing;

}
+(id)organizerWithName:(id)arg1 url:(id)arg2 email:(id)arg3 isCurrentUserForScheduling:(char)arg4 isCurrentUserForSharing:(char)arg5 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(char)arg4 ;
-(id)initWithName:(id)arg1 url:(id)arg2 email:(id)arg3 isCurrentUserForScheduling:(char)arg4 isCurrentUserForSharing:(char)arg5 ;
-(char)isCurrentUserForSharing;
@end
