/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CADisplayLink, NSMutableArray;

@interface BKDigitizerRouter : NSObject {

	CADisplayLink* _hidDisplayLink;
	BOOL _dispatchingTouchesOnDisplayLink;
	NSMutableArray* _blocks;

}
+(id)sharedRouter;
-(void)startRunLoop;
-(void)_dispatchEventsFromQueue:(id)arg1 ;
-(void)_routeEventWithBlock:(/*^block*/ id)arg1 terminalEvent:(BOOL)arg2 ;
-(BOOL)_shouldDispatchUsingDisplayLinkAtTime:(double)arg1 ;
-(void)routeEventWithBlock:(/*^block*/ id)arg1 ;
-(void)routeTerminalEventWithBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
@end
