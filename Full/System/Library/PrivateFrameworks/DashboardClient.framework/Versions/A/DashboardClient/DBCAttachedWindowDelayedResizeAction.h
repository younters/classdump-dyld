/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:51:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DashboardClient.framework/Versions/A/DashboardClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DashboardClient/DashboardClient-Structs.h>
#import <DashboardClient/DBCAttachedWindowDelayedAction.h>

@class NSWindow;

@interface DBCAttachedWindowDelayedResizeAction : DBCAttachedWindowDelayedAction {

	CGRect _frame;
	NSWindow* _window;

}
+(id)DelayedResizeActionWithWindow:(id)arg1 frame:(CGRect)arg2 ;
-(id)initWithWindow:(id)arg1 frame:(CGRect)arg2 ;
-(void)performAction:(unsigned)arg1 ;
@end
