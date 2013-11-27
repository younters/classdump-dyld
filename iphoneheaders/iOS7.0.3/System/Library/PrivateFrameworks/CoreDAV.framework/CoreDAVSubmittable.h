/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CoreDAVSubmittable <NSObject>
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) <CoreDAVTaskManager> * taskManager; 
@property (assign,nonatomic) <CoreDAVAccountInfoProvider> * accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign) double timeoutInterval; 
@required
-(/*^block*/ id)completionBlock;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1;
-(void)setCompletionBlock:(/*^block*/ id)arg1;
-(void)setAccountInfoProvider:(id)arg1;
-(id)accountInfoProvider;
-(void)submitWithTaskManager:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(id)taskManager;
-(void)setTaskManager:(id)arg1;
-(id)error;
@end
