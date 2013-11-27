/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class AXTimer;

@interface AXPostConnectionTask : NSObject {

	BOOL _didTimeout;
	/*^block*/ id _postConnectionBlock;
	AXTimer* _timeoutTimer;

}

@property (nonatomic,copy) id postConnectionBlock;                //@synthesize postConnectionBlock=_postConnectionBlock - In the implementation block
@property (nonatomic,retain) AXTimer * timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL didTimeout;                     //@synthesize didTimeout=_didTimeout - In the implementation block
-(void)dealloc;
-(void)setPostConnectionBlock:(/*^block*/ id)arg1 ;
-(void)setTimeoutTimer:(id)arg1 ;
-(id)timeoutTimer;
-(void)setDidTimeout:(BOOL)arg1 ;
-(void)_performTask;
-(/*^block*/ id)postConnectionBlock;
-(BOOL)didTimeout;
-(id)initWithConnectBlock:(/*^block*/ id)arg1 timeout:(double)arg2 accessQueue:(id)arg3 ;
-(void)performTask;
@end
