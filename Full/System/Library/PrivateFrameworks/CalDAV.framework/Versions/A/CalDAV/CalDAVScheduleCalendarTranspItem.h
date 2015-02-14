/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _transparent;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * transparent;              //@synthesize transparent=_transparent - In the implementation block
@property (nonatomic,readonly) char isScheduleTransparent; 
-(void)dealloc;
-(void)setTransparent:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)transparent;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(char)isScheduleTransparent;
-(id)copyParseRules;
@end
