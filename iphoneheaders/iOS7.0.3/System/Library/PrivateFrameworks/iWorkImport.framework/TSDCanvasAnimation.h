/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDate, CAMediaTimingFunction, TSUNoCopyDictionary;

@interface TSDCanvasAnimation : NSObject {

	NSString* _animationID;
	void* _context;
	id _delegate;
	SEL _willStartSelector;
	SEL _didStopSelector;
	double _duration;
	double _delay;
	NSDate* _startDate;
	CAMediaTimingFunction* _timingFunction;
	float _repeatCount;
	BOOL _repeatAutoreverses;
	TSUNoCopyDictionary* _animationDictionariesForLayers;
	/*^block*/ id _completionBlock;
	unsigned _outstandingAnimationCount;
	BOOL _firstAnimationDidStart;
	BOOL _allAnimationsFinishedBeforeStopping;

}

@property (nonatomic,readonly) NSString * animationID;                            //@synthesize animationID=_animationID - In the implementation block
@property (nonatomic,readonly) void* context;                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SEL willStartSelector;                               //@synthesize willStartSelector=_willStartSelector - In the implementation block
@property (assign,nonatomic) SEL didStopSelector;                                 //@synthesize didStopSelector=_didStopSelector - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) float repeatCount;                                   //@synthesize repeatCount=_repeatCount - In the implementation block
@property (assign,nonatomic) BOOL repeatAutoreverses;                             //@synthesize repeatAutoreverses=_repeatAutoreverses - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)initWithAnimationID:(id)arg1 context:(void*)arg2 ;
-(void)setWillStartSelector:(SEL)arg1 ;
-(void)setDidStopSelector:(SEL)arg1 ;
-(void)setRepeatAutoreverses:(BOOL)arg1 ;
-(void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3 ;
-(SEL)willStartSelector;
-(SEL)didStopSelector;
-(BOOL)repeatAutoreverses;
-(/*^block*/ id)completionBlock;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void*)context;
-(void)setTimingFunction:(id)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)timingFunction;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)delay;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(id)animationID;
-(id)startDate;
-(void)setStartDate:(id)arg1 ;
-(float)repeatCount;
@end
