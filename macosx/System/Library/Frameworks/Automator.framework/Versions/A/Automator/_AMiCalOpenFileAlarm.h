/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiCalItem.h>

@class NSString, NSDate;

@interface _AMiCalOpenFileAlarm : _AMiCalItem

@property (assign) long long triggerInterval; 
@property (copy) NSString * filepath; 
@property (copy) NSDate * triggerDate; 
-(long long)triggerInterval;
-(void)setTriggerInterval:(long long)arg1 ;
-(NSDate *)triggerDate;
-(void)setTriggerDate:(NSDate *)arg1 ;
-(void)setFilepath:(NSString *)arg1 ;
-(NSString *)filepath;
@end
