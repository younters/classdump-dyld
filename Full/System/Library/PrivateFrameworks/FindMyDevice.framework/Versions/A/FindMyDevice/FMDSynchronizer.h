/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FindMyDevice/FindMyDevice-Structs.h>
@class NSString;

@interface FMDSynchronizer : NSObject {

	char _timeoutOccurred;
	double _timeout;
	dispatch_semaphore_sRef _sem;
	NSString* _info;

}

@property (assign,nonatomic) char timeoutOccurred;                     //@synthesize timeoutOccurred=_timeoutOccurred - In the implementation block
@property (assign,nonatomic) double timeout;                           //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * info;                          //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) dispatch_semaphore_sRef sem;              //@synthesize sem=_sem - In the implementation block
-(id)initWithDescription:(id)arg1 andTimeout:(double)arg2 ;
-(dispatch_semaphore_sRef)sem;
-(id)loggingID;
-(char)timeoutOccurred;
-(void)setTimeoutOccurred:(char)arg1 ;
-(void)setSem:(dispatch_semaphore_sRef)arg1 ;
-(NSString *)info;
-(void)setInfo:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)dealloc;
-(void)signal;
-(void)wait;
@end
