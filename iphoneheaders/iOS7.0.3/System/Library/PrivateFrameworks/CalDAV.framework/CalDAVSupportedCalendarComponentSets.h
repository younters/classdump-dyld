/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {

	NSMutableSet* _componentSets;

}
+(BOOL)allowedCalendars:(id)arg1 contains:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)addCompSet:(id)arg1 ;
-(id)copyParseRules;
-(id)childrenToWrite;
-(id)componentsAsString;
@end
