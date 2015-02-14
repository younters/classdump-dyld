/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsItem.h>

@class NSDictionary, _AMSystemEventsSpacesShortcut;

@interface _AMSystemEventsSpacesPreferencesObject : _AMSystemEventsItem

@property (copy) NSDictionary * applicationBindings; 
@property (copy,readonly) _AMSystemEventsSpacesShortcut * arrowKeyModifiers; 
@property (copy,readonly) _AMSystemEventsSpacesShortcut * numbersKeyModifiers; 
@property (assign) long long spacesColumns; 
@property (assign) char spacesEnabled; 
@property (assign) long long spacesRows; 
-(NSDictionary *)applicationBindings;
-(void)setApplicationBindings:(NSDictionary *)arg1 ;
-(_AMSystemEventsSpacesShortcut *)arrowKeyModifiers;
-(_AMSystemEventsSpacesShortcut *)numbersKeyModifiers;
-(long long)spacesColumns;
-(void)setSpacesColumns:(long long)arg1 ;
-(char)spacesEnabled;
-(void)setSpacesEnabled:(char)arg1 ;
-(long long)spacesRows;
-(void)setSpacesRows:(long long)arg1 ;
@end
