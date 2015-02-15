/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PubSub/PubSub-Structs.h>
#import <PubSub/PSInternal.h>

@class NSMutableSet, PSFeedSettings;

@interface PSFeedInternal : PSInternal {

	FeedCore* feedCore;
	FunctionReceiver<Foundation::Notification, PSFeed *>* feedListener;
	char refreshing;
	char publishing;
	int unreadCount;
	NSMutableSet* addedEntries;
	NSMutableSet* deletedEntries;
	NSMutableSet* updatedEntries;
	NSMutableSet* flaggedEntries;
	PSFeedSettings* temporarySettings;

}
-(void)_clearFeedListener;
-(void)setFeedCore:(FeedCore*)arg1 ;
-(void)finalize;
@end
