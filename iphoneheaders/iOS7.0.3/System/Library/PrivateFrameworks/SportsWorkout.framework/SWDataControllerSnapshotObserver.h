/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsWorkout/SWRunWorkoutObserver.h>

@interface SWDataControllerSnapshotObserver : NSObject <SWRunWorkoutObserver> {

	unsigned _elapsedTimeOfPreviousSnapshot;
	unsigned _snapshotIntervalInSeconds;

}
-(void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6 ;
-(void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3 ;
-(void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2 ;
-(id)init;
@end
