/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError;

@interface CalSingleSynchronousTask : NSObject {

	char _completed;
	NSError* _error;

}

@property (assign) char completed;               //@synthesize completed=_completed - In the implementation block
@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)executeTask:(id)arg1 usingTaskManager:(id)arg2 ;
-(char)completed;
-(void)setCompleted:(char)arg1 ;
-(void)_setCompletionBlockOnTask:(id)arg1 ;
@end
