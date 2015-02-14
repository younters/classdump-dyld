/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCActivityTarget.h>

@protocol MCActivityTarget;
@class NSMutableSet, NSString;

@interface _MCActivityMonitorMultiTarget : NSObject <MCActivityTarget> {

	id<MCActivityTarget> _primaryTarget;
	NSMutableSet* _allTargets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)primaryTarget;
-(id)allTargets;
-(char)addActivityTarget:(id)arg1 ;
-(char)removeActivityTarget:(id)arg1 ;
-(void)setPrimaryTarget:(id)arg1 ;
-(id)displayName;
@end
