/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CNScheduler : NSObject
+(id)mainThreadScheduler;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1 ;
+(id)globalAsyncScheduler;
+(id)immediateScheduler;
@end
